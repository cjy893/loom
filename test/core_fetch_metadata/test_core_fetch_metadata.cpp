#include "Vcore_fetch_metadata_test_top.h"
#include "verilated.h"

#include <array>
#include <cstdint>
#include <cstdio>
#include <string>
#include <vector>

namespace {

constexpr int kFetchWidth = 4;
constexpr int kCoreWidth = 2;
constexpr uint32_t kBasePc = 0x1c071004U;
constexpr uint32_t kPcLobMask = 0x3fU;

constexpr uint32_t addi_w(unsigned rd, int imm12) {
    return 0x02800000U |
           ((static_cast<unsigned>(imm12) & 0xfffU) << 10) |
           (rd & 0x1fU);
}

struct Entry {
    uint32_t pc = 0;
    uint32_t inst = 0;
    uint8_t ftq_idx = 0;
    bool taken = false;

    bool operator==(const Entry& rhs) const {
        return pc == rhs.pc && inst == rhs.inst &&
               ftq_idx == rhs.ftq_idx && taken == rhs.taken;
    }
};

struct Packet {
    unsigned valid = 0;
    std::array<Entry, kFetchWidth> lanes{};
};

struct Dequeue {
    unsigned valid = 0;
    std::array<Entry, kCoreWidth> lanes{};

    bool operator==(const Dequeue& rhs) const {
        return valid == rhs.valid && lanes == rhs.lanes;
    }
};

bool check(const std::string& name, bool condition) {
    if (!condition)
        std::fprintf(stderr, "FAIL: %s\n", name.c_str());
    return condition;
}

void tick(Vcore_fetch_metadata_test_top* dut) {
    dut->clk = 0;
    dut->eval();
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
}

void clear_enqueue(Vcore_fetch_metadata_test_top* dut) {
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
}

void reset(Vcore_fetch_metadata_test_top* dut) {
    dut->clk = 0;
    dut->rst_n = 0;
    dut->frontend_enable = 0;
    dut->flush = 0;
    clear_enqueue(dut);
    for (int cycle = 0; cycle < 8; ++cycle)
        tick(dut);
    dut->rst_n = 1;
    dut->eval();
}

Packet make_packet(unsigned valid, uint32_t pc_base,
                   unsigned sequence, unsigned ftq_base,
                   unsigned taken_mask) {
    Packet packet;
    packet.valid = valid;
    for (int lane = 0; lane < kFetchWidth; ++lane) {
        const unsigned item = sequence + lane;
        packet.lanes[lane].pc = pc_base + lane * 4U;
        packet.lanes[lane].inst =
            addi_w(1U + (item % 30U), 1 + static_cast<int>(item));
        packet.lanes[lane].ftq_idx =
            static_cast<uint8_t>((ftq_base + lane * 3U) & 0xfU);
        packet.lanes[lane].taken =
            (taken_mask & (1U << lane)) != 0;
    }
    return packet;
}

void append_packet(std::vector<Entry>& expected,
                   const Packet& packet) {
    for (int lane = 0; lane < kFetchWidth; ++lane) {
        if (packet.valid & (1U << lane))
            expected.push_back(packet.lanes[lane]);
    }
}

void drive_packet(Vcore_fetch_metadata_test_top* dut,
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
}

Dequeue dequeue_of(Vcore_fetch_metadata_test_top* dut) {
    dut->eval();
    Dequeue output;
    output.valid = dut->deq_valid_dbg;
    output.lanes[0] = {
        dut->deq_pc0_dbg, dut->deq_inst0_dbg,
        static_cast<uint8_t>(dut->deq_ftq_idx0_dbg),
        (dut->deq_taken_dbg & 0x1U) != 0,
    };
    output.lanes[1] = {
        dut->deq_pc1_dbg, dut->deq_inst1_dbg,
        static_cast<uint8_t>(dut->deq_ftq_idx1_dbg),
        (dut->deq_taken_dbg & 0x2U) != 0,
    };
    return output;
}

bool enqueue(Vcore_fetch_metadata_test_top* dut,
             const Packet& packet, const std::string& name) {
    drive_packet(dut, packet);
    for (int cycle = 0; cycle < 100; ++cycle) {
        dut->eval();
        if (dut->enq_ready) {
            tick(dut);
            clear_enqueue(dut);
            dut->eval();
            return true;
        }
        tick(dut);
    }
    clear_enqueue(dut);
    return check(name + " enqueue timeout", false);
}

bool check_commit_lane(Vcore_fetch_metadata_test_top* dut,
                       int lane, const Entry& expected,
                       const std::string& name) {
    const uint32_t pc = lane == 0 ? dut->commit_pc0 : dut->commit_pc1;
    const uint32_t inst =
        lane == 0 ? dut->commit_inst0 : dut->commit_inst1;
    const uint8_t ftq_idx = static_cast<uint8_t>(
        lane == 0 ? dut->commit_ftq_idx0 : dut->commit_ftq_idx1);
    const bool taken = (dut->commit_taken & (1U << lane)) != 0;
    const uint32_t pc_lob =
        lane == 0 ? dut->commit_pc_lob0 : dut->commit_pc_lob1;

    const bool matched = pc == expected.pc &&
                         inst == expected.inst &&
                         ftq_idx == expected.ftq_idx &&
                         taken == expected.taken &&
                         pc_lob == (expected.pc & kPcLobMask);
    if (!matched) {
        std::fprintf(
            stderr,
            "FAIL: %s got pc=%08x inst=%08x ftq=%u taken=%u "
            "pc_lob=%u expected pc=%08x inst=%08x ftq=%u "
            "taken=%u pc_lob=%u\n",
            name.c_str(), pc, inst, ftq_idx, taken, pc_lob,
            expected.pc, expected.inst, expected.ftq_idx,
            expected.taken, expected.pc & kPcLobMask);
    }
    return matched;
}

bool collect_commits(Vcore_fetch_metadata_test_top* dut,
                     const std::vector<Entry>& expected,
                     std::size_t& offset,
                     const std::string& name) {
    bool passed = true;
    for (int lane = 0; lane < kCoreWidth; ++lane) {
        if ((dut->commit_valid & (1U << lane)) == 0)
            continue;
        if (offset >= expected.size()) {
            passed &= check(name + " unexpected extra commit", false);
            continue;
        }
        passed &= check_commit_lane(
            dut, lane, expected[offset],
            name + " commit " + std::to_string(offset));
        ++offset;
    }
    return passed;
}

bool drain_expected(Vcore_fetch_metadata_test_top* dut,
                    const std::vector<Entry>& expected,
                    const std::string& name,
                    int max_cycles = 3000) {
    std::size_t offset = 0;
    bool passed = true;
    for (int cycle = 0; cycle < max_cycles &&
                        offset < expected.size(); ++cycle) {
        dut->frontend_enable =
            (cycle % 7) != 1 && (cycle % 7) != 4;
        dut->eval();
        passed &= collect_commits(dut, expected, offset, name);
        tick(dut);
    }
    passed &= check(name + " reaches all commits",
                    offset == expected.size());

    clear_enqueue(dut);
    dut->frontend_enable = 1;
    for (int cycle = 0; cycle < 30; ++cycle) {
        dut->eval();
        passed &= collect_commits(dut, expected, offset, name);
        tick(dut);
    }
    return passed;
}

bool test_sparse_cross_packet(Vcore_fetch_metadata_test_top* dut) {
    reset(dut);
    const Packet first =
        make_packet(0xdU, kBasePc, 0, 2, 0x9U);
    const Packet second =
        make_packet(0xbU, kBasePc + 16U, 4, 9, 0x2U);
    std::vector<Entry> expected;
    append_packet(expected, first);
    append_packet(expected, second);

    bool passed = enqueue(dut, first, "first sparse packet");
    passed &= enqueue(dut, second, "second sparse packet");

    const Dequeue stalled = dequeue_of(dut);
    passed &= check("prefilled dequeue is present", stalled.valid != 0);
    for (int cycle = 0; cycle < 5; ++cycle) {
        tick(dut);
        passed &= check(
            "full metadata tuple stable under core backpressure",
            dequeue_of(dut) == stalled);
    }

    passed &= drain_expected(
        dut, expected, "sparse cross-packet metadata");
    if (passed)
        std::printf("PASS: core sparse/cross-packet metadata\n");
    return passed;
}

bool test_flush_drops_wrong_path(Vcore_fetch_metadata_test_top* dut) {
    reset(dut);
    const Packet wrong =
        make_packet(0xfU, kBasePc + 0x100U, 8, 15, 0xfU);
    const Packet correct =
        make_packet(0x7U, kBasePc + 0x200U, 12, 4, 0x2U);
    std::vector<Entry> expected;
    append_packet(expected, correct);

    bool passed = enqueue(dut, wrong, "wrong-path packet");
    dut->flush = 1;
    dut->eval();
    passed &= check("flush leaves buffered metadata visible until edge",
                    dut->deq_valid_dbg == 0x3U);
    passed &= check("flush rejects a simultaneous enqueue",
                    !dut->enq_ready);
    tick(dut);
    dut->flush = 0;
    dut->eval();
    passed &= check("flush removes wrong-path metadata",
                    dut->deq_valid_dbg == 0);

    passed &= enqueue(dut, correct, "correct-path packet");
    passed &= drain_expected(
        dut, expected, "post-flush metadata");
    if (passed)
        std::printf("PASS: core metadata flush recovery\n");
    return passed;
}

uint32_t next_random(uint32_t& state) {
    state ^= state << 13;
    state ^= state >> 17;
    state ^= state << 5;
    return state;
}

bool test_random_backpressure(Vcore_fetch_metadata_test_top* dut) {
    reset(dut);
    std::vector<Packet> packets;
    std::vector<Entry> expected;
    uint32_t random = 0x8d31a7c5U;
    unsigned sequence = 20;
    for (int index = 0; index < 18; ++index) {
        const uint32_t value = next_random(random);
        unsigned valid = (value >> 4) & 0xfU;
        if (valid == 0)
            valid = 1U << (value & 0x3U);
        Packet packet = make_packet(
            valid, kBasePc + 0x400U + index * 16U,
            sequence, value >> 24, value >> 12);
        sequence += 4;
        append_packet(expected, packet);
        packets.push_back(packet);
    }

    std::size_t packet_index = 0;
    std::size_t commit_index = 0;
    bool passed = true;
    for (int cycle = 0; cycle < 5000 &&
                        commit_index < expected.size(); ++cycle) {
        if (packet_index < packets.size())
            drive_packet(dut, packets[packet_index]);
        else
            clear_enqueue(dut);
        dut->frontend_enable =
            (cycle % 11) != 2 && (cycle % 11) != 3 &&
            (cycle % 11) != 7;
        dut->eval();

        const bool enqueue_fire =
            packet_index < packets.size() && dut->enq_ready;
        passed &= collect_commits(
            dut, expected, commit_index,
            "random core metadata");
        tick(dut);
        if (enqueue_fire)
            ++packet_index;
    }

    passed &= check("random stream accepts every packet",
                    packet_index == packets.size());
    passed &= check("random stream commits every instruction",
                    commit_index == expected.size());

    clear_enqueue(dut);
    dut->frontend_enable = 1;
    for (int cycle = 0; cycle < 30; ++cycle) {
        dut->eval();
        passed &= collect_commits(
            dut, expected, commit_index,
            "random core metadata");
        tick(dut);
    }

    if (passed)
        std::printf("PASS: core metadata random backpressure\n");
    return passed;
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vcore_fetch_metadata_test_top;

    bool passed = true;
    passed &= test_sparse_cross_packet(dut);
    passed &= test_flush_drops_wrong_path(dut);
    passed &= test_random_backpressure(dut);

    dut->final();
    delete dut;

    if (!passed)
        return 1;

    std::printf("PASS: core_fetch_metadata\n");
    return 0;
}
