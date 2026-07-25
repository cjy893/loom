#include "Vcore_fetch_buffer_test_top.h"
#include "verilated.h"

#include <algorithm>
#include <array>
#include <cstdint>
#include <cstdio>
#include <string>
#include <vector>

namespace {

constexpr int kFetchWidth = 4;
constexpr int kCommitWidth = 2;
constexpr uint32_t kProgramBase = 0x1c060000U;
constexpr uint32_t kNop = 0x03400000U;

constexpr uint32_t addi_w(unsigned rd, unsigned rj, int imm12) {
    return 0x02800000U |
           ((static_cast<unsigned>(imm12) & 0xfffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

constexpr uint32_t r_op(uint32_t opcode, unsigned rd,
                        unsigned rj, unsigned rk) {
    return opcode | ((rk & 0x1fU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

constexpr uint32_t mul_w(unsigned rd, unsigned rj, unsigned rk) {
    return r_op(0x001c0000U, rd, rj, rk);
}

constexpr uint32_t branch_i26(uint32_t opcode, int byte_offset) {
    const unsigned imm26 =
        static_cast<unsigned>(byte_offset >> 2) & 0x03ffffffU;
    return opcode | ((imm26 & 0xffffU) << 10) |
           (imm26 >> 16);
}

constexpr uint32_t b(int byte_offset) {
    return branch_i26(0x50000000U, byte_offset);
}

struct Instruction {
    uint32_t inst = 0;
    const char* disasm = "";
};

struct CommitRecord {
    uint32_t pc = 0;
    uint32_t inst = 0;
    unsigned rob_idx = 0;
};

struct FrontendPacket {
    unsigned valid = 0;
    std::array<uint32_t, 2> pc{};
    std::array<uint32_t, 2> inst{};
};

bool check(const std::string& name, bool condition) {
    if (!condition)
        std::fprintf(stderr, "FAIL: %s\n", name.c_str());
    return condition;
}

unsigned packed_field(uint32_t value, int index, int width) {
    return (value >> (index * width)) &
           ((1U << width) - 1U);
}

uint32_t packed_word(uint64_t value, int index) {
    return static_cast<uint32_t>(
        value >> (index * 32));
}

void tick(Vcore_fetch_buffer_test_top* dut) {
    dut->clk = 0;
    dut->eval();
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
}

void reset(Vcore_fetch_buffer_test_top* dut) {
    dut->clk = 0;
    dut->rst_n = 0;
    dut->frontend_enable = 0;
    dut->imem_req_ready = 0;
    dut->imem_resp_valid = 0;
    for (int lane = 0; lane < kFetchWidth; ++lane)
        dut->imem_resp_insts[lane] = 0;

    for (int cycle = 0; cycle < 10; ++cycle)
        tick(dut);

    dut->rst_n = 1;
    dut->eval();
}

class ImemModel {
public:
    explicit ImemModel(
        const std::vector<Instruction>& program)
        : program_(program) {}

    void drive(Vcore_fetch_buffer_test_top* dut, int cycle) {
        dut->imem_req_ready =
            (cycle % 7) != 1 && (cycle % 7) != 2;

        if (pending_ && !response_active_ && delay_ == 0) {
            response_active_ = true;
            for (int lane = 0; lane < kFetchWidth; ++lane) {
                const uint32_t pc =
                    pending_address_ + lane * 4U;
                const int index = static_cast<int>(
                    (pc - kProgramBase) >> 2);
                response_[lane] =
                    index >= 0 &&
                    index < static_cast<int>(program_.size())
                        ? program_[index].inst
                        : kNop;
            }
        }

        dut->imem_resp_valid = response_active_;
        for (int lane = 0; lane < kFetchWidth; ++lane)
            dut->imem_resp_insts[lane] = response_[lane];
    }

    void advance(bool request_fire, uint32_t request_address,
                 bool response_fire) {
        if (response_fire) {
            response_active_ = false;
            pending_ = false;
        }

        bool accepted_request = false;
        if (request_fire) {
            accepted_request = true;
            requests.push_back(request_address);
            pending_ = true;
            pending_address_ = request_address;
            delay_ = 1 + static_cast<int>(
                requests.size() % 3U);
        }

        if (!accepted_request && pending_ &&
            !response_active_ && delay_ > 0) {
            --delay_;
        }
    }

    int request_count(uint32_t address) const {
        return static_cast<int>(
            std::count(requests.begin(), requests.end(),
                       address));
    }

    std::vector<uint32_t> requests;

private:
    const std::vector<Instruction>& program_;
    bool pending_ = false;
    bool response_active_ = false;
    uint32_t pending_address_ = 0;
    int delay_ = 0;
    std::array<uint32_t, kFetchWidth> response_{};
};

struct RunResult {
    bool prefilled = false;
    bool finished = false;
    bool buffer_stable = true;
    int redirects = 0;
    int unique_dispatches = 0;
    bool unique_dispatch_violation = false;
    bool unique_packet_advanced_before_dispatch = false;
    int unique_packet_stall_cycles = 0;
    std::vector<int> frontend_fire_cycles;
    std::vector<CommitRecord> commits;
    std::vector<uint32_t> imem_requests;
};

FrontendPacket frontend_packet(
    Vcore_fetch_buffer_test_top* dut) {
    FrontendPacket packet;
    packet.valid = dut->buffer_deq_valid_dbg;
    packet.pc[0] = dut->buffer_deq_pc0_dbg;
    packet.pc[1] = dut->buffer_deq_pc1_dbg;
    packet.inst[0] = dut->buffer_deq_inst0_dbg;
    packet.inst[1] = dut->buffer_deq_inst1_dbg;
    return packet;
}

RunResult run_program(
    Vcore_fetch_buffer_test_top* dut,
    const std::vector<Instruction>& program,
    std::size_t expected_commits,
    uint32_t unique_pc = 0xffffffffU) {
    reset(dut);
    ImemModel memory(program);
    RunResult result;
    bool tracking_stalled_packet = false;
    FrontendPacket stalled_packet;
    int cycle = 0;

    for (; cycle < 500 && !result.prefilled; ++cycle) {
        memory.drive(dut, cycle);
        dut->eval();

        const bool request_fire =
            dut->imem_req_valid && dut->imem_req_ready;
        const uint32_t request_address = dut->imem_req_addr;
        const bool response_fire =
            dut->imem_resp_valid && dut->imem_resp_ready;

        result.prefilled =
            dut->ifu_packet_valid_dbg != 0 &&
            !dut->buffer_enq_ready_dbg;

        tick(dut);
        memory.advance(request_fire, request_address,
                       response_fire);
    }

    dut->frontend_enable = 1;

    for (; cycle < 2500 &&
           result.commits.size() < expected_commits; ++cycle) {
        memory.drive(dut, cycle);
        dut->eval();

        const bool request_fire =
            dut->imem_req_valid && dut->imem_req_ready;
        const uint32_t request_address = dut->imem_req_addr;
        const bool response_fire =
            dut->imem_resp_valid && dut->imem_resp_ready;

        const FrontendPacket packet = frontend_packet(dut);
        const bool frontend_fire = dut->frontend_fire_dbg;
        if (frontend_fire)
            result.frontend_fire_cycles.push_back(cycle);

        if (packet.valid != 0 && !frontend_fire &&
            !dut->redirect_valid) {
            if (tracking_stalled_packet) {
                result.buffer_stable &=
                    packet.valid == stalled_packet.valid &&
                    packet.pc == stalled_packet.pc &&
                    packet.inst == stalled_packet.inst;
            }
            stalled_packet = packet;
            tracking_stalled_packet = true;
        } else {
            tracking_stalled_packet = false;
        }

        if (packet.valid != 0 &&
            packet.pc[0] == unique_pc &&
            !frontend_fire) {
            ++result.unique_packet_stall_cycles;
        }

        if (packet.valid != 0 &&
            packet.pc[0] == unique_pc &&
            frontend_fire &&
            result.unique_dispatches == 0 &&
            !dut->core_dis_unique) {
            result.unique_packet_advanced_before_dispatch = true;
        }

        if (dut->redirect_valid)
            ++result.redirects;

        if (dut->core_dis_unique) {
            ++result.unique_dispatches;
            if (__builtin_popcount(
                    static_cast<unsigned>(
                        dut->core_dis_fire)) != 1 ||
                !dut->rob_empty) {
                result.unique_dispatch_violation = true;
            }
        }

        for (int lane = 0; lane < kCommitWidth; ++lane) {
            if ((dut->commit_valid & (1U << lane)) == 0)
                continue;
            result.commits.push_back({
                packed_word(dut->commit_pc, lane),
                packed_word(dut->commit_inst, lane),
                packed_field(dut->commit_rob_idx, lane, 6),
            });
        }

        tick(dut);
        memory.advance(request_fire, request_address,
                       response_fire);
    }

    result.finished =
        result.commits.size() >= expected_commits;
    result.imem_requests = memory.requests;
    return result;
}

bool check_commit_prefix(
    const std::string& name,
    const RunResult& result,
    const std::vector<Instruction>& program,
    const std::vector<int>& expected_indices) {
    bool passed = check(name + " reaches expected commits",
                        result.finished);
    const std::size_t compared = std::min(
        result.commits.size(), expected_indices.size());
    for (std::size_t index = 0; index < compared; ++index) {
        const int program_index = expected_indices[index];
        const uint32_t expected_pc =
            kProgramBase + program_index * 4U;
        const uint32_t expected_inst =
            program[program_index].inst;
        const CommitRecord& actual = result.commits[index];
        if (actual.pc != expected_pc ||
            actual.inst != expected_inst) {
            std::fprintf(
                stderr,
                "FAIL: %s commit%zu got pc=0x%08x "
                "inst=0x%08x expected pc=0x%08x "
                "inst=0x%08x\n",
                name.c_str(), index, actual.pc, actual.inst,
                expected_pc, expected_inst);
            passed = false;
        }
    }
    return passed;
}

bool test_continuous_core_acceptance(
    Vcore_fetch_buffer_test_top* dut) {
    std::vector<Instruction> program;
    std::vector<int> expected;
    for (int index = 0; index < 24; ++index) {
        program.push_back({
            addi_w(1 + index, 0, index + 1),
            "independent addi.w",
        });
        expected.push_back(index);
    }

    const RunResult result =
        run_program(dut, program, expected.size());
    bool passed = true;
    passed &= check("core front end is prefilled",
                    result.prefilled);
    passed &= check("core-facing buffer packet is stable",
                    result.buffer_stable);
    passed &= check_commit_prefix(
        "continuous core front end",
        result, program, expected);
    passed &= check("at least four frontend packets fire",
                    result.frontend_fire_cycles.size() >= 4);

    bool consecutive =
        result.frontend_fire_cycles.size() >= 4;
    for (std::size_t index = 1;
         index < result.frontend_fire_cycles.size() &&
         index < 4; ++index) {
        consecutive &=
            result.frontend_fire_cycles[index] ==
            result.frontend_fire_cycles[index - 1] + 1;
    }
    if (!consecutive &&
        result.frontend_fire_cycles.size() >= 4) {
        std::fprintf(
            stderr,
            "core frontend fire cycles: %d %d %d %d\n",
            result.frontend_fire_cycles[0],
            result.frontend_fire_cycles[1],
            result.frontend_fire_cycles[2],
            result.frontend_fire_cycles[3]);
    }
    passed &= check(
        "normal two-wide packets enter Decode every cycle",
        consecutive);

    if (passed)
        std::printf(
            "PASS: core fetch buffer continuous acceptance\n");
    return passed;
}

bool test_unique_packet_boundary(
    Vcore_fetch_buffer_test_top* dut) {
    const std::vector<Instruction> program = {
        {addi_w(1, 0, 6), "addi.w r1, r0, 6"},
        {addi_w(2, 0, 7), "addi.w r2, r0, 7"},
        {mul_w(3, 1, 2), "mul.w r3, r1, r2"},
        {addi_w(4, 3, 1), "addi.w r4, r3, 1"},
        {addi_w(5, 0, 5), "addi.w r5, r0, 5"},
        {addi_w(6, 0, 6), "addi.w r6, r0, 6"},
        {addi_w(7, 0, 7), "addi.w r7, r0, 7"},
        {addi_w(8, 0, 8), "addi.w r8, r0, 8"},
        {addi_w(9, 0, 9), "addi.w r9, r0, 9"},
        {kNop, "nop"},
        {kNop, "nop"},
        {kNop, "nop"},
    };
    std::vector<int> expected;
    for (int index = 0;
         index < static_cast<int>(program.size()); ++index) {
        expected.push_back(index);
    }

    const uint32_t unique_pc = kProgramBase + 8U;
    const RunResult result = run_program(
        dut, program, expected.size(), unique_pc);

    bool passed = true;
    passed &= check_commit_prefix(
        "unique core front end",
        result, program, expected);
    passed &= check("unique dispatches exactly once",
                    result.unique_dispatches == 1);
    passed &= check("unique dispatch remains exclusive",
                    !result.unique_dispatch_violation);
    passed &= check(
        "unique packet remains at Fetch Buffer while partially handled",
        result.unique_packet_stall_cycles > 0);
    passed &= check(
        "unique packet does not advance before unique dispatch",
        !result.unique_packet_advanced_before_dispatch);

    if (passed)
        std::printf(
            "PASS: core fetch buffer unique packet boundary\n");
    return passed;
}

bool test_redirect_flushes_buffered_path(
    Vcore_fetch_buffer_test_top* dut) {
    const std::vector<Instruction> program = {
        {addi_w(1, 0, 1), "addi.w r1, r0, 1"},
        {addi_w(2, 0, 2), "addi.w r2, r0, 2"},
        {b(16), "b +16"},
        {addi_w(20, 0, 20), "wrong-path addi.w"},
        {mul_w(21, 0, 0), "wrong-path mul.w"},
        {addi_w(22, 0, 22), "wrong-path addi.w"},
        {addi_w(10, 0, 10), "target addi.w"},
        {addi_w(11, 10, 1), "target dependent addi.w"},
        {addi_w(12, 0, 12), "target addi.w"},
        {kNop, "nop"},
        {kNop, "nop"},
        {kNop, "nop"},
    };
    const std::vector<int> expected = {
        0, 1, 2, 6, 7, 8, 9, 10, 11,
    };

    const RunResult result =
        run_program(dut, program, expected.size());
    bool passed = true;
    passed &= check_commit_prefix(
        "redirect core front end",
        result, program, expected);
    passed &= check("buffered path redirects exactly once",
                    result.redirects == 1);
    passed &= check(
        "redirect target bundle is re-requested",
        static_cast<int>(std::count(
            result.imem_requests.begin(),
            result.imem_requests.end(),
            kProgramBase + 16U)) >= 2);

    if (passed)
        std::printf(
            "PASS: core fetch buffer redirect recovery\n");
    return passed;
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vcore_fetch_buffer_test_top;

    bool passed = true;
    passed &= test_continuous_core_acceptance(dut);
    passed &= test_unique_packet_boundary(dut);
    passed &= test_redirect_flushes_buffered_path(dut);

    dut->final();
    delete dut;

    if (!passed)
        return 1;

    std::printf("PASS: core_fetch_buffer\n");
    return 0;
}
