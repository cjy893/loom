#include "Vfetcher_buffer_test_top.h"
#include "verilated.h"

#include <array>
#include <cstdint>
#include <cstdio>
#include <deque>
#include <string>
#include <vector>

namespace {

constexpr int kFetchWidth = 4;
constexpr int kCoreWidth = 2;
constexpr int kEntries = 8;

struct Entry {
    uint32_t pc = 0;
    uint32_t inst = 0;
    bool xcpt_valid = false;
    uint8_t xcpt_code = 0;

    bool operator==(const Entry& rhs) const {
        return pc == rhs.pc && inst == rhs.inst &&
               xcpt_valid == rhs.xcpt_valid &&
               xcpt_code == rhs.xcpt_code;
    }
};

struct Packet {
    unsigned valid = 0;
    std::array<Entry, kFetchWidth> lanes{};
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

void tick(Vfetcher_buffer_test_top* dut) {
    dut->clk = 0;
    dut->eval();
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
}

void clear_enqueue(Vfetcher_buffer_test_top* dut) {
    dut->enq_valid = 0;
    dut->enq_pc0 = 0;
    dut->enq_pc1 = 0;
    dut->enq_pc2 = 0;
    dut->enq_pc3 = 0;
    dut->enq_inst0 = 0;
    dut->enq_inst1 = 0;
    dut->enq_inst2 = 0;
    dut->enq_inst3 = 0;
    dut->enq_xcpt_valid = 0;
    dut->enq_xcpt_code = 0;
}

void reset(Vfetcher_buffer_test_top* dut) {
    dut->clk = 0;
    dut->rst_n = 0;
    dut->flush = 0;
    dut->deq_ready = 0;
    clear_enqueue(dut);
    for (int cycle = 0; cycle < 4; ++cycle)
        tick(dut);
    dut->rst_n = 1;
    dut->eval();
}

Packet make_packet(unsigned valid, uint32_t pc_base,
                   uint32_t inst_base, unsigned xcpt_mask = 0,
                   uint8_t xcpt_code_base = 0) {
    Packet packet;
    packet.valid = valid;
    for (int lane = 0; lane < kFetchWidth; ++lane) {
        packet.lanes[lane].pc = pc_base + lane * 4U;
        packet.lanes[lane].inst = inst_base + lane;
        packet.lanes[lane].xcpt_valid =
            (xcpt_mask & (1U << lane)) != 0;
        packet.lanes[lane].xcpt_code =
            packet.lanes[lane].xcpt_valid
                ? static_cast<uint8_t>(xcpt_code_base + lane)
                : 0;
    }
    return packet;
}

std::vector<Entry> packed_entries(const Packet& packet) {
    std::vector<Entry> entries;
    for (int lane = 0; lane < kFetchWidth; ++lane) {
        if (packet.valid & (1U << lane))
            entries.push_back(packet.lanes[lane]);
    }
    return entries;
}

void drive_packet(Vfetcher_buffer_test_top* dut,
                  const Packet& packet) {
    dut->enq_valid = packet.valid;
    dut->enq_pc0 = packet.lanes[0].pc;
    dut->enq_pc1 = packet.lanes[1].pc;
    dut->enq_pc2 = packet.lanes[2].pc;
    dut->enq_pc3 = packet.lanes[3].pc;
    dut->enq_inst0 = packet.lanes[0].inst;
    dut->enq_inst1 = packet.lanes[1].inst;
    dut->enq_inst2 = packet.lanes[2].inst;
    dut->enq_inst3 = packet.lanes[3].inst;
    dut->enq_xcpt_valid = 0;
    dut->enq_xcpt_code = 0;
    for (int lane = 0; lane < kFetchWidth; ++lane) {
        if (packet.lanes[lane].xcpt_valid)
            dut->enq_xcpt_valid |= 1U << lane;
        dut->enq_xcpt_code |=
            static_cast<uint32_t>(packet.lanes[lane].xcpt_code)
            << (lane * 6);
    }
}

Output output_of(Vfetcher_buffer_test_top* dut) {
    dut->eval();
    Output output;
    output.valid = dut->deq_valid;
    output.lanes[0] = {
        dut->deq_pc0, dut->deq_inst0,
        static_cast<bool>(dut->deq_xcpt_valid & 0x1U),
        static_cast<uint8_t>(dut->deq_xcpt_code & 0x3fU),
    };
    output.lanes[1] = {
        dut->deq_pc1, dut->deq_inst1,
        static_cast<bool>(dut->deq_xcpt_valid & 0x2U),
        static_cast<uint8_t>((dut->deq_xcpt_code >> 6) & 0x3fU),
    };
    return output;
}

bool expect_output(Vfetcher_buffer_test_top* dut,
                   const std::vector<Entry>& expected,
                   std::size_t offset,
                   const std::string& name) {
    const Output output = output_of(dut);
    const std::size_t remaining = expected.size() - offset;
    const unsigned expected_valid =
        remaining >= 2 ? 0x3U : (remaining == 1 ? 0x1U : 0x0U);
    bool passed = check(name + " valid",
                        output.valid == expected_valid);
    for (int lane = 0; lane < kCoreWidth; ++lane) {
        if ((expected_valid & (1U << lane)) == 0)
            continue;
        passed &= check(
            name + " lane " + std::to_string(lane),
            output.lanes[lane] == expected[offset + lane]);
    }
    return passed;
}

bool enqueue(Vfetcher_buffer_test_top* dut,
             const Packet& packet,
             const std::string& name) {
    drive_packet(dut, packet);
    dut->eval();
    bool passed = check(name + " ready", dut->enq_ready);
    tick(dut);
    clear_enqueue(dut);
    dut->eval();
    return passed;
}

bool drain(Vfetcher_buffer_test_top* dut,
           const std::vector<Entry>& expected,
           const std::string& name) {
    bool passed = true;
    std::size_t offset = 0;
    while (offset < expected.size()) {
        passed &= expect_output(dut, expected, offset, name);
        const std::size_t remaining = expected.size() - offset;
        const std::size_t consumed =
            remaining < kCoreWidth ? remaining : kCoreWidth;
        dut->deq_ready = 1;
        dut->eval();
        passed &= expect_output(dut, expected, offset,
                                name + " at handshake");
        tick(dut);
        dut->deq_ready = 0;
        dut->eval();
        offset += consumed;
    }
    passed &= check(name + " drains to empty", dut->deq_valid == 0);
    return passed;
}

bool test_width_conversion(Vfetcher_buffer_test_top* dut) {
    reset(dut);
    bool passed = true;
    passed &= check("reset output empty", dut->deq_valid == 0);

    const Packet packet =
        make_packet(0xfU, 0x1c000000U, 0x10000000U);
    passed &= enqueue(dut, packet, "four-wide enqueue");
    passed &= drain(dut, packed_entries(packet),
                    "four-to-two FIFO order");

    if (passed)
        std::printf("PASS: fetch buffer width conversion\n");
    return passed;
}

bool test_hole_compaction(Vfetcher_buffer_test_top* dut) {
    reset(dut);
    const Packet packet =
        make_packet(0xdU, 0x1c001000U, 0x20000000U);
    bool passed = enqueue(dut, packet, "sparse enqueue");
    const std::vector<Entry> expected = packed_entries(packet);
    passed &= check("sparse packet has three entries",
                    expected.size() == 3);
    passed &= drain(dut, expected, "sparse compaction");

    if (passed)
        std::printf("PASS: fetch buffer hole compaction\n");
    return passed;
}

bool test_exception_metadata(Vfetcher_buffer_test_top* dut) {
    reset(dut);
    const Packet packet = make_packet(
        0xdU, 0x1c001800U, 0x28000000U, 0x4U, 1U);
    const std::vector<Entry> expected = packed_entries(packet);

    bool passed = enqueue(dut, packet, "exception sparse enqueue");
    passed &= check("exception sparse packet has three entries",
                    expected.size() == 3);
    passed &= check("exception metadata follows compacted lane",
                    expected[1].xcpt_valid &&
                    expected[1].xcpt_code == 3);
    passed &= drain(dut, expected, "exception metadata FIFO order");

    if (passed)
        std::printf("PASS: fetch buffer exception metadata compaction\n");
    return passed;
}

bool test_backpressure_stability(Vfetcher_buffer_test_top* dut) {
    reset(dut);
    const Packet first =
        make_packet(0xfU, 0x1c002000U, 0x30000000U);
    const Packet second =
        make_packet(0xfU, 0x1c002010U, 0x40000000U);

    bool passed = enqueue(dut, first, "first buffered packet");
    const Output stalled = output_of(dut);
    passed &= enqueue(dut, second, "enqueue behind stalled head");
    passed &= check("enqueue behind head preserves output",
                    output_of(dut).valid == stalled.valid &&
                    output_of(dut).lanes == stalled.lanes);

    for (int cycle = 0; cycle < 5; ++cycle) {
        tick(dut);
        const Output current = output_of(dut);
        passed &= check("stalled output remains stable",
                        current.valid == stalled.valid &&
                        current.lanes == stalled.lanes);
    }

    std::vector<Entry> expected = packed_entries(first);
    const std::vector<Entry> second_entries =
        packed_entries(second);
    expected.insert(expected.end(), second_entries.begin(),
                    second_entries.end());
    passed &= drain(dut, expected, "backpressure FIFO order");

    if (passed)
        std::printf("PASS: fetch buffer backpressure stability\n");
    return passed;
}

bool test_full_simultaneous_wrap(Vfetcher_buffer_test_top* dut) {
    reset(dut);
    const Packet first =
        make_packet(0xfU, 0x1c003000U, 0x50000000U);
    const Packet second =
        make_packet(0xfU, 0x1c003010U, 0x60000000U);
    const Packet wrapped =
        make_packet(0x3U, 0x1c003020U, 0x70000000U);

    bool passed = enqueue(dut, first, "fill first half");
    passed &= enqueue(dut, second, "fill second half");

    drive_packet(dut, wrapped);
    dut->deq_ready = 0;
    dut->eval();
    passed &= check("full queue rejects current packet",
                    !dut->enq_ready);

    dut->deq_ready = 1;
    dut->eval();
    passed &= check("same-cycle dequeue exposes capacity",
                    dut->enq_ready);
    passed &= expect_output(dut, packed_entries(first), 0,
                            "full queue oldest entries");
    tick(dut);
    clear_enqueue(dut);
    dut->deq_ready = 0;
    dut->eval();

    std::vector<Entry> expected = packed_entries(first);
    expected.erase(expected.begin(), expected.begin() + 2);
    const std::vector<Entry> second_entries =
        packed_entries(second);
    const std::vector<Entry> wrapped_entries =
        packed_entries(wrapped);
    expected.insert(expected.end(), second_entries.begin(),
                    second_entries.end());
    expected.insert(expected.end(), wrapped_entries.begin(),
                    wrapped_entries.end());
    passed &= drain(dut, expected,
                    "simultaneous dequeue enqueue wrap");

    if (passed)
        std::printf("PASS: fetch buffer full and wraparound\n");
    return passed;
}

bool test_flush_priority(Vfetcher_buffer_test_top* dut) {
    reset(dut);
    const Packet wrong_path =
        make_packet(0xfU, 0x1c004000U, 0x80000000U);
    const Packet same_cycle =
        make_packet(0xfU, 0x1c004010U, 0x90000000U);
    const Packet target =
        make_packet(0x3U, 0x1c005000U, 0xa0000000U);

    bool passed = enqueue(dut, wrong_path, "wrong-path packet");
    drive_packet(dut, same_cycle);
    dut->deq_ready = 1;
    dut->flush = 1;
    dut->eval();
    passed &= check("flush masks wrong-path output immediately",
                    dut->deq_valid == 0);
    passed &= check("flush rejects same-cycle enqueue",
                    !dut->enq_ready);
    tick(dut);

    dut->flush = 0;
    dut->deq_ready = 0;
    clear_enqueue(dut);
    dut->eval();
    passed &= check("flush leaves buffer empty",
                    dut->deq_valid == 0);

    passed &= enqueue(dut, target, "post-flush target packet");
    passed &= drain(dut, packed_entries(target),
                    "post-flush target order");

    if (passed)
        std::printf("PASS: fetch buffer flush priority\n");
    return passed;
}

uint32_t next_random(uint32_t& state) {
    state ^= state << 13;
    state ^= state >> 17;
    state ^= state << 5;
    return state;
}

bool test_random_reference(Vfetcher_buffer_test_top* dut) {
    reset(dut);
    std::deque<Entry> model;
    Packet pending;
    bool pending_valid = false;
    uint32_t random_state = 0x4f3c2d1bU;
    uint32_t sequence = 0;
    bool passed = true;

    for (int cycle = 0; cycle < 1200 && passed; ++cycle) {
        const uint32_t random = next_random(random_state);
        const bool flush = (random & 0x3fU) == 0;
        const bool deq_ready = (random & 0x100U) != 0;

        if (!pending_valid && (random & 0x3U) != 0) {
            pending.valid = (random >> 12) & 0xfU;
            if (pending.valid == 0)
                pending.valid = 1U << ((random >> 20) & 0x3U);
            for (int lane = 0; lane < kFetchWidth; ++lane) {
                pending.lanes[lane].pc =
                    0x1c100000U + sequence * 4U;
                pending.lanes[lane].inst =
                    0xb0000000U ^ sequence;
                pending.lanes[lane].xcpt_valid =
                    (pending.valid & (1U << lane)) &&
                    ((random >> (4 + lane)) & 1U);
                pending.lanes[lane].xcpt_code =
                    pending.lanes[lane].xcpt_valid
                        ? static_cast<uint8_t>(
                              (random >> (16 + lane * 3)) & 0x3fU)
                        : 0;
                if (pending.valid & (1U << lane))
                    ++sequence;
            }
            pending_valid = true;
        }

        if (pending_valid)
            drive_packet(dut, pending);
        else
            clear_enqueue(dut);
        dut->flush = flush;
        dut->deq_ready = deq_ready;
        dut->eval();

        const unsigned expected_valid =
            flush ? 0U :
            (model.size() >= 2 ? 0x3U :
             (model.size() == 1 ? 0x1U : 0U));
        const Output output = output_of(dut);
        passed &= check("random output valid cycle " +
                            std::to_string(cycle),
                        output.valid == expected_valid);
        for (int lane = 0;
             lane < kCoreWidth &&
             (expected_valid & (1U << lane)); ++lane) {
            passed &= check(
                "random output data cycle " +
                    std::to_string(cycle) + " lane " +
                    std::to_string(lane),
                output.lanes[lane] == model[lane]);
        }

        const int deq_count =
            (!flush && deq_ready)
                ? static_cast<int>(
                      model.size() < kCoreWidth
                          ? model.size() : kCoreWidth)
                : 0;
        const int enq_count =
            pending_valid
                ? __builtin_popcount(pending.valid)
                : 0;
        const bool expected_ready =
            !flush &&
            static_cast<int>(model.size()) -
                    deq_count + enq_count <=
                kEntries;
        passed &= check("random enqueue ready cycle " +
                            std::to_string(cycle),
                        static_cast<bool>(dut->enq_ready) ==
                            expected_ready);

        const bool enq_fire =
            pending_valid && expected_ready;
        tick(dut);

        if (flush) {
            model.clear();
            pending_valid = false;
        } else {
            for (int entry = 0; entry < deq_count; ++entry)
                model.pop_front();
            if (enq_fire) {
                const std::vector<Entry> accepted =
                    packed_entries(pending);
                model.insert(model.end(), accepted.begin(),
                             accepted.end());
                pending_valid = false;
            }
        }
    }

    dut->flush = 1;
    dut->deq_ready = 0;
    clear_enqueue(dut);
    tick(dut);
    dut->flush = 0;
    dut->eval();
    passed &= check("random test final flush empties buffer",
                    dut->deq_valid == 0);

    if (passed)
        std::printf(
            "PASS: fetch buffer deterministic random reference\n");
    return passed;
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vfetcher_buffer_test_top;

    bool passed = true;
    passed &= test_width_conversion(dut);
    passed &= test_hole_compaction(dut);
    passed &= test_exception_metadata(dut);
    passed &= test_backpressure_stability(dut);
    passed &= test_full_simultaneous_wrap(dut);
    passed &= test_flush_priority(dut);
    passed &= test_random_reference(dut);

    dut->final();
    delete dut;

    if (!passed)
        return 1;

    std::printf("PASS: fetch_buffer\n");
    return 0;
}
