#include "Vifu_fetch_buffer_test_top.h"
#include "verilated.h"

#include <algorithm>
#include <array>
#include <cstdint>
#include <cstdio>
#include <string>
#include <vector>

namespace {

constexpr uint32_t kResetPc = 0x1c000000U;
constexpr int kFetchWidth = 4;
constexpr int kCoreWidth = 2;

struct Entry {
    uint32_t pc = 0;
    uint32_t inst = 0;

    bool operator==(const Entry& rhs) const {
        return pc == rhs.pc && inst == rhs.inst;
    }
};

struct Output {
    unsigned valid = 0;
    std::array<Entry, kCoreWidth> lanes{};
};

bool check(const std::string& name, bool condition) {
    if (!condition)
        std::fprintf(stderr, "FAIL: %s\n", name.c_str());
    return condition;
}

uint32_t instruction_at(uint32_t pc) {
    return 0x80000000U ^ ((pc - kResetPc) >> 2);
}

void tick(Vifu_fetch_buffer_test_top* dut) {
    dut->clk = 0;
    dut->eval();
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
}

void reset(Vifu_fetch_buffer_test_top* dut) {
    dut->clk = 0;
    dut->rst_n = 0;
    dut->redirect_valid = 0;
    dut->redirect_pc = 0;
    dut->imem_req_ready = 0;
    dut->imem_resp_valid = 0;
    dut->fetch_ready = 0;
    for (int lane = 0; lane < kFetchWidth; ++lane)
        dut->imem_resp_insts[lane] = 0;

    for (int cycle = 0; cycle < 4; ++cycle)
        tick(dut);

    dut->rst_n = 1;
    dut->eval();
}

Output output_of(Vifu_fetch_buffer_test_top* dut) {
    dut->eval();
    Output output;
    output.valid = dut->fetch_valid;
    output.lanes[0] = {dut->fetch_pc0, dut->fetch_inst0};
    output.lanes[1] = {dut->fetch_pc1, dut->fetch_inst1};
    return output;
}

class ImemModel {
public:
    void set_special_delay(uint32_t address, int delay) {
        special_address_ = address;
        special_delay_ = delay;
    }

    void drive(Vifu_fetch_buffer_test_top* dut, int cycle) {
        dut->imem_req_ready =
            (cycle % 7) != 1 && (cycle % 7) != 2;

        if (pending_ && !response_active_ && delay_ == 0) {
            response_active_ = true;
            for (int lane = 0; lane < kFetchWidth; ++lane) {
                const uint32_t pc =
                    pending_address_ + lane * 4U;
                response_[lane] = instruction_at(pc);
            }
        }

        dut->imem_resp_valid = response_active_;
        for (int lane = 0; lane < kFetchWidth; ++lane)
            dut->imem_resp_insts[lane] = response_[lane];
    }

    void advance(bool request_fire, uint32_t request_address,
                 bool response_fire) {
        if (response_fire) {
            responses.push_back(pending_address_);
            response_active_ = false;
            pending_ = false;
        }

        bool accepted_request = false;
        if (request_fire) {
            accepted_request = true;
            requests.push_back(request_address);
            pending_ = true;
            pending_address_ = request_address;
            delay_ = request_address == special_address_
                         ? special_delay_
                         : 1;
        }

        if (!accepted_request && pending_ &&
            !response_active_ && delay_ > 0) {
            --delay_;
        }
    }

    bool pending_at(uint32_t address) const {
        return pending_ && pending_address_ == address;
    }

    bool requested(uint32_t address) const {
        return std::find(requests.begin(), requests.end(),
                         address) != requests.end();
    }

    bool responded(uint32_t address) const {
        return std::find(responses.begin(), responses.end(),
                         address) != responses.end();
    }

    std::vector<uint32_t> requests;
    std::vector<uint32_t> responses;

private:
    bool pending_ = false;
    bool response_active_ = false;
    uint32_t pending_address_ = 0;
    int delay_ = 0;
    uint32_t special_address_ = 0xffffffffU;
    int special_delay_ = 1;
    std::array<uint32_t, kFetchWidth> response_{};
};

struct CycleResult {
    bool request_fire = false;
    uint32_t request_address = 0;
    bool response_fire = false;
    bool output_fire = false;
    Output output;
    unsigned ifu_packet_valid = 0;
    bool buffer_enq_ready = false;
};

CycleResult step(Vifu_fetch_buffer_test_top* dut,
                 ImemModel& memory, int cycle) {
    memory.drive(dut, cycle);
    dut->eval();

    CycleResult result;
    result.request_fire =
        dut->imem_req_valid && dut->imem_req_ready;
    result.request_address = dut->imem_req_addr;
    result.response_fire =
        dut->imem_resp_valid && dut->imem_resp_ready;
    result.output = output_of(dut);
    result.output_fire =
        dut->fetch_ready && result.output.valid != 0;
    result.ifu_packet_valid = dut->ifu_packet_valid_dbg;
    result.buffer_enq_ready = dut->buffer_enq_ready_dbg;

    tick(dut);
    memory.advance(result.request_fire, result.request_address,
                   result.response_fire);
    return result;
}

void append_output(const CycleResult& cycle,
                   std::vector<Entry>& entries) {
    if (!cycle.output_fire)
        return;

    for (int lane = 0; lane < kCoreWidth; ++lane) {
        if (cycle.output.valid & (1U << lane))
            entries.push_back(cycle.output.lanes[lane]);
    }
}

bool expect_sequence(const std::string& name,
                     const std::vector<Entry>& actual,
                     uint32_t first_pc,
                     std::size_t count) {
    bool passed = check(name + " count", actual.size() == count);
    const std::size_t compared =
        actual.size() < count ? actual.size() : count;
    for (std::size_t index = 0; index < compared; ++index) {
        const uint32_t expected_pc =
            first_pc + static_cast<uint32_t>(index * 4U);
        const Entry expected = {
            expected_pc,
            instruction_at(expected_pc),
        };
        if (!(actual[index] == expected)) {
            std::fprintf(
                stderr,
                "FAIL: %s entry%zu got pc=0x%08x inst=0x%08x "
                "expected pc=0x%08x inst=0x%08x\n",
                name.c_str(), index, actual[index].pc,
                actual[index].inst, expected.pc, expected.inst);
            passed = false;
        }
    }
    return passed;
}

bool test_buffered_width_conversion(
    Vifu_fetch_buffer_test_top* dut) {
    reset(dut);
    ImemModel memory;
    std::vector<Entry> received;
    bool saw_full_backpressure = false;
    bool draining = false;
    bool tracking_stalled_output = false;
    Output stalled_output;
    bool output_stable = true;

    for (int cycle = 0;
         cycle < 1000 && received.size() < 40; ++cycle) {
        if (draining)
            dut->fetch_ready = (cycle % 4) != 1;
        else
            dut->fetch_ready = 0;

        const CycleResult result = step(dut, memory, cycle);

        if (result.ifu_packet_valid != 0 &&
            !result.buffer_enq_ready) {
            saw_full_backpressure = true;
            draining = true;
        }

        if (!dut->fetch_ready && result.output.valid != 0) {
            if (tracking_stalled_output) {
                output_stable &=
                    result.output.valid == stalled_output.valid &&
                    result.output.lanes == stalled_output.lanes;
            }
            stalled_output = result.output;
            tracking_stalled_output = true;
        } else {
            tracking_stalled_output = false;
        }

        append_output(result, received);
    }

    bool passed = true;
    passed &= check("IFU fills buffer before backend drains",
                    saw_full_backpressure);
    passed &= check("IFU issues at least three requests before drain",
                    memory.requests.size() >= 3);
    passed &= check("buffer output stable under backend stall",
                    output_stable);
    passed &= expect_sequence(
        "IFU fetch-buffer sequential stream",
        received, kResetPc, 40);

    if (passed)
        std::printf(
            "PASS: IFU fetch buffer decoupling and width conversion\n");
    return passed;
}

bool test_redirect_with_pending_stale_response(
    Vifu_fetch_buffer_test_top* dut) {
    constexpr uint32_t stale_address = kResetPc + 16U;
    constexpr uint32_t target_pc = kResetPc + 0x88U;
    constexpr uint32_t target_base = kResetPc + 0x80U;

    reset(dut);
    ImemModel memory;
    memory.set_special_delay(stale_address, 24);
    bool reached_redirect_point = false;
    int cycle = 0;

    for (; cycle < 200 && !reached_redirect_point; ++cycle) {
        dut->fetch_ready = 0;
        const CycleResult result = step(dut, memory, cycle);
        reached_redirect_point =
            result.output.valid != 0 &&
            memory.pending_at(stale_address);
    }

    bool passed = check(
        "redirect test has buffered data and pending response",
        reached_redirect_point);

    dut->redirect_valid = 1;
    dut->redirect_pc = target_pc;
    dut->fetch_ready = 0;
    memory.drive(dut, cycle);
    dut->eval();
    passed &= check("redirect immediately masks buffered path",
                    dut->fetch_valid == 0);
    passed &= check("redirect prevents buffer enqueue",
                    !dut->buffer_enq_ready_dbg);

    const bool request_fire =
        dut->imem_req_valid && dut->imem_req_ready;
    const uint32_t request_address = dut->imem_req_addr;
    const bool response_fire =
        dut->imem_resp_valid && dut->imem_resp_ready;
    tick(dut);
    memory.advance(request_fire, request_address,
                   response_fire);
    dut->redirect_valid = 0;
    ++cycle;

    std::vector<Entry> received;
    for (; cycle < 600 && received.size() < 2; ++cycle) {
        dut->fetch_ready = 1;
        const CycleResult result = step(dut, memory, cycle);
        append_output(result, received);
    }

    passed &= check("stale response is eventually returned",
                    memory.responded(stale_address));
    passed &= check("IFU requests aligned redirect target",
                    memory.requested(target_base));
    passed &= expect_sequence(
        "unaligned redirect compacted stream",
        received, target_pc, 2);

    if (passed)
        std::printf(
            "PASS: IFU fetch buffer stale response redirect\n");
    return passed;
}

bool test_redirect_clears_held_packet(
    Vifu_fetch_buffer_test_top* dut) {
    constexpr uint32_t target_pc = kResetPc + 0x140U;

    reset(dut);
    ImemModel memory;
    bool held_packet = false;
    int cycle = 0;

    for (; cycle < 300 && !held_packet; ++cycle) {
        dut->fetch_ready = 0;
        const CycleResult result = step(dut, memory, cycle);
        held_packet =
            result.ifu_packet_valid != 0 &&
            !result.buffer_enq_ready;
    }

    bool passed = check(
        "full buffer holds an additional IFU packet",
        held_packet);
    passed &= check("held-packet case fetched three bundles",
                    memory.requests.size() >= 3);

    dut->redirect_valid = 1;
    dut->redirect_pc = target_pc;
    dut->fetch_ready = 1;
    memory.drive(dut, cycle);
    dut->eval();
    passed &= check("redirect masks full buffer output",
                    dut->fetch_valid == 0);
    passed &= check("redirect rejects held IFU packet",
                    !dut->buffer_enq_ready_dbg);

    const bool request_fire =
        dut->imem_req_valid && dut->imem_req_ready;
    const uint32_t request_address = dut->imem_req_addr;
    const bool response_fire =
        dut->imem_resp_valid && dut->imem_resp_ready;
    tick(dut);
    memory.advance(request_fire, request_address,
                   response_fire);
    dut->redirect_valid = 0;
    ++cycle;

    std::vector<Entry> received;
    for (; cycle < 700 && received.size() < 4; ++cycle) {
        dut->fetch_ready = 1;
        const CycleResult result = step(dut, memory, cycle);
        append_output(result, received);
    }

    passed &= check("IFU requests held-packet redirect target",
                    memory.requested(target_pc));
    passed &= expect_sequence(
        "held packet redirect stream",
        received, target_pc, 4);

    if (passed)
        std::printf(
            "PASS: IFU fetch buffer clears held wrong path\n");
    return passed;
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vifu_fetch_buffer_test_top;

    bool passed = true;
    passed &= test_buffered_width_conversion(dut);
    passed &= test_redirect_with_pending_stale_response(dut);
    passed &= test_redirect_clears_held_packet(dut);

    dut->final();
    delete dut;

    if (!passed)
        return 1;

    std::printf("PASS: ifu_fetch_buffer\n");
    return 0;
}
