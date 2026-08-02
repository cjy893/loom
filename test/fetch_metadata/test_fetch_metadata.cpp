#include "Vfetch_metadata_test_top.h"
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
    uint8_t ftq_idx = 0;
    bool taken = false;
    uint32_t predicted_npc = 0;

    bool operator==(const Entry& rhs) const {
        return pc == rhs.pc &&
               inst == rhs.inst &&
               ftq_idx == rhs.ftq_idx &&
               taken == rhs.taken &&
               predicted_npc == rhs.predicted_npc;
    }
};

struct Packet {
    unsigned valid = 0;
    std::array<Entry, kFetchWidth> lanes{};
};

struct Output {
    unsigned valid = 0;
    std::array<Entry, kCoreWidth> lanes{};

    bool operator==(const Output& rhs) const {
        return valid == rhs.valid && lanes == rhs.lanes;
    }
};

bool check(const std::string& name, bool condition) {
    if (!condition)
        std::fprintf(stderr, "FAIL: %s\n", name.c_str());
    return condition;
}

void tick(Vfetch_metadata_test_top* dut) {
    dut->clk = 0;
    dut->eval();
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
}

void clear_enqueue(Vfetch_metadata_test_top* dut) {
    dut->enq_valid = 0;
    dut->enq_pc0 = 0;
    dut->enq_pc1 = 0;
    dut->enq_pc2 = 0;
    dut->enq_pc3 = 0;
    dut->enq_inst0 = 0;
    dut->enq_inst1 = 0;
    dut->enq_inst2 = 0;
    dut->enq_inst3 = 0;
    dut->enq_ftq_idx0 = 0;
    dut->enq_ftq_idx1 = 0;
    dut->enq_ftq_idx2 = 0;
    dut->enq_ftq_idx3 = 0;
    dut->enq_taken = 0;
    dut->enq_npc0 = 0;
    dut->enq_npc1 = 0;
    dut->enq_npc2 = 0;
    dut->enq_npc3 = 0;
}

void reset(Vfetch_metadata_test_top* dut) {
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

Packet make_packet(unsigned valid,
                   uint32_t pc_base,
                   uint32_t inst_base,
                   uint8_t ftq_idx,
                   unsigned taken_mask) {
    Packet packet;
    packet.valid = valid;
    for (int lane = 0; lane < kFetchWidth; ++lane) {
        packet.lanes[lane].pc = pc_base + lane * 4U;
        packet.lanes[lane].inst = inst_base + lane;
        packet.lanes[lane].ftq_idx = ftq_idx;
        packet.lanes[lane].taken =
            (taken_mask & (1U << lane)) != 0;
        packet.lanes[lane].predicted_npc =
            pc_base + 0x100U + lane * 0x24U;
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

void append_packet(std::vector<Entry>& entries,
                   const Packet& packet) {
    const std::vector<Entry> packed = packed_entries(packet);
    entries.insert(entries.end(), packed.begin(), packed.end());
}

void drive_packet(Vfetch_metadata_test_top* dut,
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
    dut->enq_ftq_idx0 = packet.lanes[0].ftq_idx;
    dut->enq_ftq_idx1 = packet.lanes[1].ftq_idx;
    dut->enq_ftq_idx2 = packet.lanes[2].ftq_idx;
    dut->enq_ftq_idx3 = packet.lanes[3].ftq_idx;
    dut->enq_taken =
        (packet.lanes[0].taken ? 0x1U : 0U) |
        (packet.lanes[1].taken ? 0x2U : 0U) |
        (packet.lanes[2].taken ? 0x4U : 0U) |
        (packet.lanes[3].taken ? 0x8U : 0U);
    dut->enq_npc0 = packet.lanes[0].predicted_npc;
    dut->enq_npc1 = packet.lanes[1].predicted_npc;
    dut->enq_npc2 = packet.lanes[2].predicted_npc;
    dut->enq_npc3 = packet.lanes[3].predicted_npc;
}

Output output_of(Vfetch_metadata_test_top* dut) {
    dut->eval();
    Output output;
    output.valid = dut->deq_valid;
    output.lanes[0] = {
        dut->deq_pc0,
        dut->deq_inst0,
        static_cast<uint8_t>(dut->deq_ftq_idx0),
        (dut->deq_taken & 0x1U) != 0,
        dut->deq_npc0
    };
    output.lanes[1] = {
        dut->deq_pc1,
        dut->deq_inst1,
        static_cast<uint8_t>(dut->deq_ftq_idx1),
        (dut->deq_taken & 0x2U) != 0,
        dut->deq_npc1
    };
    return output;
}

bool expect_output(Vfetch_metadata_test_top* dut,
                   const std::vector<Entry>& expected,
                   std::size_t offset,
                   const std::string& name) {
    const Output output = output_of(dut);
    const std::size_t remaining = expected.size() - offset;
    const unsigned expected_valid =
        remaining >= 2 ? 0x3U :
        (remaining == 1 ? 0x1U : 0x0U);
    bool passed =
        check(name + " valid", output.valid == expected_valid);
    for (int lane = 0; lane < kCoreWidth; ++lane) {
        if ((expected_valid & (1U << lane)) == 0)
            continue;
        passed &= check(
            name + " lane " + std::to_string(lane),
            output.lanes[lane] == expected[offset + lane]);
    }
    return passed;
}

bool enqueue(Vfetch_metadata_test_top* dut,
             const Packet& packet,
             const std::string& name) {
    drive_packet(dut, packet);
    dut->eval();
    const bool passed = check(name + " ready", dut->enq_ready);
    tick(dut);
    clear_enqueue(dut);
    dut->eval();
    return passed;
}

bool drain(Vfetch_metadata_test_top* dut,
           const std::vector<Entry>& expected,
           const std::string& name) {
    bool passed = true;
    std::size_t offset = 0;
    while (offset < expected.size()) {
        passed &= expect_output(dut, expected, offset, name);
        const std::size_t consumed =
            expected.size() - offset < kCoreWidth
                ? expected.size() - offset : kCoreWidth;
        dut->deq_ready = 1;
        dut->eval();
        passed &= expect_output(
            dut, expected, offset, name + " at handshake");
        tick(dut);
        dut->deq_ready = 0;
        dut->eval();
        offset += consumed;
    }
    passed &= check(name + " drains to empty",
                    dut->deq_valid == 0);
    return passed;
}

bool test_packet_metadata(Vfetch_metadata_test_top* dut) {
    reset(dut);
    const Packet packet = make_packet(
        0xfU, 0x1c000000U, 0x10000000U, 0x5U, 0x4U);

    bool passed = enqueue(dut, packet, "one FTQ packet");
    passed &= drain(
        dut, packed_entries(packet), "one FTQ packet metadata");

    if (passed)
        std::printf("PASS: per-instruction prediction metadata\n");
    return passed;
}

bool test_sparse_lane_identity(Vfetch_metadata_test_top* dut) {
    reset(dut);
    Packet packet = make_packet(
        0xdU, 0x1c001000U, 0x20000000U, 0, 0x9U);
    for (int lane = 0; lane < kFetchWidth; ++lane)
        packet.lanes[lane].ftq_idx =
            static_cast<uint8_t>(lane + 8);

    bool passed = enqueue(dut, packet, "sparse metadata packet");
    passed &= drain(
        dut, packed_entries(packet), "sparse lane identity");

    if (passed)
        std::printf("PASS: sparse lane metadata compaction\n");
    return passed;
}

bool test_adjacent_ftq_merge(Vfetch_metadata_test_top* dut) {
    reset(dut);
    const Packet tail = make_packet(
        0x1U, 0x1c002000U, 0x30000000U, 0x7U, 0x1U);
    const Packet next = make_packet(
        0xfU, 0x1c002010U, 0x40000000U, 0x8U, 0x2U);

    bool passed = enqueue(dut, tail, "short FTQ packet");
    passed &= enqueue(dut, next, "following FTQ packet");
    std::vector<Entry> expected;
    append_packet(expected, tail);
    append_packet(expected, next);
    passed &= drain(
        dut, expected, "adjacent FTQ packet boundary");

    if (passed)
        std::printf("PASS: adjacent FTQ entries share dequeue\n");
    return passed;
}

bool test_stall_wrap_flush(Vfetch_metadata_test_top* dut) {
    reset(dut);
    const Packet first = make_packet(
        0xfU, 0x1c003000U, 0x50000000U, 0xeU, 0x5U);
    const Packet second = make_packet(
        0xfU, 0x1c003010U, 0x60000000U, 0xfU, 0xaU);
    const Packet wrapped = make_packet(
        0x3U, 0x1c003020U, 0x70000000U, 0x0U, 0x1U);

    bool passed = enqueue(dut, first, "fill metadata first");
    const Output stalled = output_of(dut);
    passed &= enqueue(dut, second, "fill metadata second");
    for (int cycle = 0; cycle < 4; ++cycle) {
        tick(dut);
        passed &= check(
            "stalled metadata stable cycle " +
                std::to_string(cycle),
            output_of(dut) == stalled);
    }

    drive_packet(dut, wrapped);
    dut->deq_ready = 1;
    dut->eval();
    passed &= check(
        "metadata wrap does not borrow dequeue capacity",
        !dut->enq_ready);
    tick(dut);
    dut->deq_ready = 0;
    dut->eval();
    passed &= check(
        "metadata wrap accepts on the next cycle",
        dut->enq_ready);
    tick(dut);
    clear_enqueue(dut);
    dut->eval();

    std::vector<Entry> expected = packed_entries(first);
    expected.erase(expected.begin(), expected.begin() + 2);
    append_packet(expected, second);
    append_packet(expected, wrapped);
    passed &= drain(dut, expected, "metadata wrap order");

    const Packet wrong_path = make_packet(
        0xfU, 0x1c004000U, 0x80000000U, 0x4U, 0xfU);
    passed &= enqueue(dut, wrong_path, "wrong-path metadata");
    dut->flush = 1;
    dut->deq_ready = 1;
    dut->eval();
    passed &= check(
        "flush leaves registered metadata visible until edge",
        dut->deq_valid == 0x3U);
    passed &= check(
        "flush rejects metadata enqueue",
        !dut->enq_ready);
    tick(dut);
    dut->flush = 0;
    dut->deq_ready = 0;
    dut->eval();
    passed &= check(
        "flush removes all prediction metadata",
        dut->deq_valid == 0);

    if (passed)
        std::printf(
            "PASS: metadata stall, wraparound, and flush\n");
    return passed;
}

uint32_t next_random(uint32_t& state) {
    state ^= state << 13;
    state ^= state >> 17;
    state ^= state << 5;
    return state;
}

bool test_random_reference(Vfetch_metadata_test_top* dut) {
    reset(dut);
    std::deque<Entry> model;
    Packet pending;
    bool pending_valid = false;
    uint32_t random_state = 0x5a31c9e7U;
    uint32_t sequence = 0;
    bool passed = true;

    for (int cycle = 0; cycle < 1600 && passed; ++cycle) {
        const uint32_t random = next_random(random_state);
        const bool flush = (random & 0x7fU) == 0;
        const bool deq_ready = (random & 0x100U) != 0;

        if (!pending_valid && (random & 0x3U) != 0) {
            pending.valid = (random >> 12) & 0xfU;
            if (pending.valid == 0)
                pending.valid =
                    1U << ((random >> 20) & 0x3U);
            const uint8_t packet_ftq =
                static_cast<uint8_t>((random >> 24) & 0xfU);
            for (int lane = 0; lane < kFetchWidth; ++lane) {
                pending.lanes[lane].pc =
                    0x1c100000U + sequence * 4U;
                pending.lanes[lane].inst =
                    0xb0000000U ^ sequence;
                pending.lanes[lane].ftq_idx =
                    (random & 0x400U)
                        ? packet_ftq
                        : static_cast<uint8_t>(
                              (packet_ftq + lane) & 0xfU);
                pending.lanes[lane].taken =
                    (random & (1U << (16 + lane))) != 0;
                pending.lanes[lane].predicted_npc =
                    0x1d000000U ^ (sequence * 0x104U) ^
                    (static_cast<uint32_t>(lane) << 2);
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
            (model.size() >= 2 ? 0x3U :
             (model.size() == 1 ? 0x1U : 0U));
        const Output output = output_of(dut);
        passed &= check(
            "random metadata valid cycle " +
                std::to_string(cycle),
            output.valid == expected_valid);
        for (int lane = 0;
             lane < kCoreWidth &&
             (expected_valid & (1U << lane)); ++lane) {
            passed &= check(
                "random metadata cycle " +
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
            static_cast<int>(model.size()) + enq_count <=
                kEntries;
        passed &= check(
            "random metadata ready cycle " +
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
                model.insert(
                    model.end(), accepted.begin(), accepted.end());
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
    passed &= check(
        "random metadata final flush",
        dut->deq_valid == 0);

    if (passed)
        std::printf(
            "PASS: metadata deterministic random reference\n");
    return passed;
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vfetch_metadata_test_top;

    bool passed = true;
    passed &= test_packet_metadata(dut);
    passed &= test_sparse_lane_identity(dut);
    passed &= test_adjacent_ftq_merge(dut);
    passed &= test_stall_wrap_flush(dut);
    passed &= test_random_reference(dut);

    dut->final();
    delete dut;

    if (!passed)
        return 1;

    std::printf("PASS: fetch_metadata\n");
    return 0;
}
