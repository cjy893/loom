#include "Vftq_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <vector>

#ifndef FTQ_TEST_NUM_ENTRIES
#define FTQ_TEST_NUM_ENTRIES 16
#endif

namespace {

constexpr int kNumEntries = FTQ_TEST_NUM_ENTRIES;
constexpr int kMetaWords = 8;
constexpr int kFetchWidth = 4;
constexpr int kBankWidth = 2;
constexpr int kInstBytes = 4;
constexpr int kBankBytes = kBankWidth * kInstBytes;
constexpr int kIcacheBlockBytes = 64;
constexpr int kExecQueryWidth = 3;
constexpr uint8_t kCfiNone = 0;
constexpr uint8_t kCfiBr = 1;
constexpr uint8_t kCfiBBl = 2;
constexpr uint8_t kCfiJirl = 3;

using Meta = std::array<uint32_t, kMetaWords>;

struct GHist {
    uint64_t old_history = 0;
    bool current_saw_nt = false;
    bool new_saw_nt = false;
    bool new_saw_taken = false;
    uint8_t ras_idx = 0;
};

struct Entry {
    uint32_t pc = 0;
    uint32_t next_pc = 0;
    uint8_t br_mask = 0;
    bool cfi_valid = false;
    uint8_t cfi_idx = 0;
    uint8_t cfi_type = kCfiNone;
    bool cfi_is_call = false;
    bool cfi_is_ret = false;
    bool cfi_npc_plus4 = true;
    bool cfi_taken = false;
    uint32_t ras_top = 0;
    uint8_t ras_idx = 0;
    bool start_bank = false;
    GHist ghist{};
    Meta meta{};
};

struct BpdUpdate {
    bool is_mispredict_update = false;
    bool is_repair_update = false;
    uint32_t pc = 0;
    uint8_t br_mask = 0;
    bool cfi_valid = false;
    uint8_t cfi_idx = 0;
    bool cfi_taken = false;
    bool cfi_mispredicted = false;
    bool cfi_is_br = false;
    bool cfi_is_b_bl = false;
    bool cfi_is_jirl = false;
    uint32_t target = 0;
    GHist ghist{};
    Meta meta{};
};

struct RasRepair {
    uint8_t idx = 0;
    uint32_t addr = 0;
};

struct QueryResult {
    bool valid = false;
    uint32_t pc = 0;
    uint32_t next_pc = 0;
    uint8_t br_mask = 0;
    bool cfi_valid = false;
    uint8_t cfi_idx = 0;
    uint8_t cfi_type = 0;
    bool cfi_is_call = false;
    bool cfi_is_ret = false;
    bool cfi_npc_plus4 = false;
    bool cfi_taken = false;
    uint32_t ras_top = 0;
    uint8_t ras_idx = 0;
    bool start_bank = false;
    GHist ghist{};
};

struct Observations {
    std::vector<BpdUpdate> updates;
    std::vector<GHist> ghist_restores;
    std::vector<RasRepair> ras_repairs;
};

[[noreturn]] void fail(const char* message) {
    std::fprintf(stderr, "FAIL: %s\n", message);
    std::exit(1);
}

template <std::size_t N>
void write_ghist(VlWide<N>& words, const GHist& value) {
    static_assert(N >= 3);
    const uint32_t flags =
        (uint32_t(value.current_saw_nt) << 7) |
        (uint32_t(value.new_saw_nt) << 6) |
        (uint32_t(value.new_saw_taken) << 5) |
        (value.ras_idx & 0x1f);

    words[0] = uint32_t(value.old_history << 8) | flags;
    words[1] = uint32_t(value.old_history >> 24);
    words[2] = uint32_t(value.old_history >> 56);
}

template <std::size_t N>
GHist read_ghist(const VlWide<N>& words) {
    static_assert(N >= 3);
    GHist value{};
    value.old_history =
        (uint64_t(words[0]) >> 8) |
        (uint64_t(words[1]) << 24) |
        (uint64_t(words[2] & 0xff) << 56);
    value.current_saw_nt = (words[0] >> 7) & 1;
    value.new_saw_nt = (words[0] >> 6) & 1;
    value.new_saw_taken = (words[0] >> 5) & 1;
    value.ras_idx = words[0] & 0x1f;
    return value;
}

template <std::size_t N>
void write_meta(VlWide<N>& words, const Meta& value) {
    static_assert(N >= kMetaWords);
    for (int word = 0; word < kMetaWords; ++word)
        words[word] = value[word];
}

template <std::size_t N>
Meta read_meta(const VlWide<N>& words) {
    static_assert(N >= kMetaWords);
    Meta value{};
    for (int word = 0; word < kMetaWords; ++word)
        value[word] = words[word];
    value[kMetaWords - 1] &= 0x0000'ffff;
    return value;
}

void expect_ghist(const char* prefix, const GHist& actual,
                  const GHist& expected) {
    char name[128];

    std::snprintf(name, sizeof(name), "%s old_history", prefix);
    expect_eq(name, actual.old_history, expected.old_history);
    std::snprintf(name, sizeof(name), "%s current_saw_nt", prefix);
    expect_eq(name, actual.current_saw_nt, expected.current_saw_nt);
    std::snprintf(name, sizeof(name), "%s new_saw_nt", prefix);
    expect_eq(name, actual.new_saw_nt, expected.new_saw_nt);
    std::snprintf(name, sizeof(name), "%s new_saw_taken", prefix);
    expect_eq(name, actual.new_saw_taken, expected.new_saw_taken);
    std::snprintf(name, sizeof(name), "%s ras_idx", prefix);
    expect_eq(name, actual.ras_idx, expected.ras_idx);
}

void expect_meta(const char* prefix, const Meta& actual,
                 const Meta& expected) {
    char name[128];
    for (int word = 0; word < kMetaWords; ++word) {
        std::snprintf(name, sizeof(name), "%s word %d", prefix, word);
        const uint32_t mask =
            word == kMetaWords - 1 ? 0x0000'ffff : 0xffff'ffff;
        expect_eq(name, actual[word] & mask, expected[word] & mask);
    }
}

Entry make_entry(int id) {
    Entry entry{};
    entry.pc = 0x1c10'0000u + uint32_t(id * 0x40);
    entry.next_pc = entry.pc + 0x40;
    entry.ras_top = 0x1d00'0000u + uint32_t(id * 4);
    entry.ras_idx = uint8_t((id * 3 + 1) % 32);
    entry.start_bank = id & 1;
    entry.ghist = GHist{
        0x8000'0000'0000'0000ULL | uint64_t(id + 1),
        bool(id & 1),
        bool(id & 2),
        bool(id & 4),
        entry.ras_idx
    };
    entry.meta = Meta{
        0x1111'0000u + uint32_t(id),
        0x2222'0000u + uint32_t(id),
        0x3333'0000u + uint32_t(id),
        0x0044'0000u + uint32_t(id),
        0x5555'0000u + uint32_t(id),
        0x6666'0000u + uint32_t(id),
        0x7777'0000u + uint32_t(id),
        0x0000'8000u + uint32_t(id)
    };
    return entry;
}

uint8_t logical_lane_to_pc_lob(const Entry& entry, uint8_t lane) {
    return uint8_t((entry.pc + lane * kInstBytes) &
                   (kIcacheBlockBytes - 1));
}

uint8_t resolved_br_mask(const Entry& entry, uint8_t lane,
                         uint8_t cfi_type) {
    const uint8_t through_lane = uint8_t((1u << (lane + 1)) - 1u);
    uint8_t mask = entry.br_mask & through_lane;
    if (cfi_type == kCfiBr)
        mask |= uint8_t(1u << lane);
    return mask;
}

bool resolved_is_call(const Entry& entry, uint8_t lane,
                      uint8_t cfi_type) {
    return entry.cfi_valid && entry.cfi_idx == lane &&
           entry.cfi_is_call &&
           (cfi_type == kCfiBBl || cfi_type == kCfiJirl);
}

bool resolved_is_ret(const Entry& entry, uint8_t lane,
                     uint8_t cfi_type) {
    return entry.cfi_valid && entry.cfi_idx == lane &&
           entry.cfi_is_ret && cfi_type == kCfiJirl;
}

GHist apply_resolved_control(const Entry& entry, uint8_t lane,
                             bool taken, uint8_t cfi_type) {
    const GHist& snapshot = entry.ghist;
    uint64_t base_history = snapshot.old_history;
    if (snapshot.new_saw_taken)
        base_history = (base_history << 1) | 1u;
    else if (snapshot.new_saw_nt)
        base_history <<= 1;

    const uint8_t br_mask = resolved_br_mask(entry, lane, cfi_type);
    uint8_t not_taken_mask = 0;
    for (int slot = 0; slot < kFetchWidth; ++slot) {
        const bool resolved_taken_branch =
            slot == lane && cfi_type == kCfiBr && taken;
        if ((br_mask & (1u << slot)) && slot <= lane &&
            !resolved_taken_branch)
            not_taken_mask |= uint8_t(1u << slot);
    }

    const bool first_bank_saw_nt =
        snapshot.current_saw_nt ||
        (not_taken_mask & ((1u << kBankWidth) - 1u));
    const bool second_bank_saw_nt = not_taken_mask >> kBankWidth;
    const bool cfi_in_first_bank = taken && lane < kBankWidth;
    const bool last_bank_in_block =
        ((entry.pc / kBankBytes) %
         (kIcacheBlockBytes / kBankBytes)) ==
        (kIcacheBlockBytes / kBankBytes - 1);

    GHist corrected = snapshot;
    corrected.current_saw_nt = false;
    corrected.new_saw_nt = false;
    corrected.new_saw_taken = false;
    if (cfi_in_first_bank || last_bank_in_block) {
        corrected.old_history = base_history;
        corrected.new_saw_nt = first_bank_saw_nt;
        corrected.new_saw_taken =
            cfi_type == kCfiBr && cfi_in_first_bank;
    } else {
        corrected.old_history = first_bank_saw_nt
            ? base_history << 1 : base_history;
        corrected.new_saw_nt = second_bank_saw_nt;
        corrected.new_saw_taken =
            cfi_type == kCfiBr && taken && lane >= kBankWidth;
    }

    if (resolved_is_call(entry, lane, cfi_type))
        corrected.ras_idx = uint8_t((snapshot.ras_idx + 1) % 32);
    else if (resolved_is_ret(entry, lane, cfi_type))
        corrected.ras_idx =
            snapshot.ras_idx == 0 ? 31 : snapshot.ras_idx - 1;
    return corrected;
}

Entry corrected_entry(const Entry& entry, uint8_t lane, bool taken,
                      uint8_t cfi_type, uint32_t target) {
    Entry corrected = entry;
    corrected.next_pc = target;
    corrected.br_mask = resolved_br_mask(entry, lane, cfi_type);
    corrected.cfi_valid = true;
    corrected.cfi_idx = lane;
    corrected.cfi_type = cfi_type;
    corrected.cfi_is_call = resolved_is_call(entry, lane, cfi_type);
    corrected.cfi_is_ret = resolved_is_ret(entry, lane, cfi_type);
    corrected.cfi_npc_plus4 = true;
    corrected.cfi_taken = taken;
    return corrected;
}

void clear_inputs(Vftq_test_top* dut) {
    dut->enq_valid = 0;
    dut->enq_pc = 0;
    dut->enq_next_pc = 0;
    dut->enq_br_mask = 0;
    dut->enq_cfi_valid = 0;
    dut->enq_cfi_idx = 0;
    dut->enq_cfi_type = 0;
    dut->enq_cfi_is_call = 0;
    dut->enq_cfi_is_ret = 0;
    dut->enq_cfi_npc_plus4 = 0;
    dut->enq_cfi_taken = 0;
    dut->enq_ras_top = 0;
    dut->enq_ras_idx = 0;
    dut->enq_start_bank = 0;
    write_ghist(dut->enq_ghist, GHist{});
    write_meta(dut->enq_meta, Meta{});

    dut->commit_valid = 0;
    dut->commit_ftq_idx = 0;
    dut->redirect_valid = 0;
    dut->redirect_ftq_idx = 0;

    dut->brupdate_b2_mispredict = 0;
    dut->brupdate_b2_ftq_idx = 0;
    dut->brupdate_b2_taken = 0;
    dut->brupdate_b2_target = 0;
    dut->brupdate_b2_pc_lob = 0;
    dut->brupdate_b2_cfi_type = kCfiNone;

    dut->query_valid = 0;
    dut->query_idx = 0;
    dut->exec_query_valid = 0;
    dut->exec_query_idx = 0;
    for (int port = 0; port < kExecQueryWidth; ++port)
        dut->exec_query_pc[port] = 0;
    dut->flush_valid = 0;
}

void set_exec_query(Vftq_test_top* dut, int port, bool valid,
                    uint32_t idx, uint32_t pc) {
    const int idx_bits = kNumEntries <= 1
        ? 1 : 32 - __builtin_clz(kNumEntries - 1);
    const uint32_t idx_mask = (uint32_t(1) << idx_bits) - 1;
    const uint32_t packed_mask = idx_mask << (port * idx_bits);

    if (valid)
        dut->exec_query_valid |= uint32_t(1) << port;
    else
        dut->exec_query_valid &= ~(uint32_t(1) << port);
    dut->exec_query_idx =
        (dut->exec_query_idx & ~packed_mask) |
        ((idx & idx_mask) << (port * idx_bits));
    dut->exec_query_pc[port] = pc;
}

void drive_entry(Vftq_test_top* dut, const Entry& entry) {
    dut->enq_pc = entry.pc;
    dut->enq_next_pc = entry.next_pc;
    dut->enq_br_mask = entry.br_mask;
    dut->enq_cfi_valid = entry.cfi_valid;
    dut->enq_cfi_idx = entry.cfi_idx;
    dut->enq_cfi_type = entry.cfi_type;
    dut->enq_cfi_is_call = entry.cfi_is_call;
    dut->enq_cfi_is_ret = entry.cfi_is_ret;
    dut->enq_cfi_npc_plus4 = entry.cfi_npc_plus4;
    dut->enq_cfi_taken = entry.cfi_taken;
    dut->enq_ras_top = entry.ras_top;
    dut->enq_ras_idx = entry.ras_idx;
    dut->enq_start_bank = entry.start_bank;
    write_ghist(dut->enq_ghist, entry.ghist);
    write_meta(dut->enq_meta, entry.meta);
}

uint32_t enqueue(Vftq_test_top* dut, const Entry& entry) {
    drive_entry(dut, entry);
    dut->enq_valid = 1;
    dut->eval();

    expect_eq("enqueue is accepted", dut->enq_ready, 1);
    const uint32_t allocated_idx = dut->enq_idx;

    eval_cycle(dut);
    dut->enq_valid = 0;
    dut->eval();
    return allocated_idx;
}

QueryResult query(Vftq_test_top* dut, uint32_t idx) {
    dut->query_valid = 1;
    dut->query_idx = idx;
    eval_cycle(dut);
    dut->query_valid = 0;
    dut->eval();

    QueryResult result{};
    result.valid = dut->query_resp_valid;
    result.pc = dut->query_pc;
    result.next_pc = dut->query_next_pc;
    result.br_mask = dut->query_br_mask;
    result.cfi_valid = dut->query_cfi_valid;
    result.cfi_idx = dut->query_cfi_idx;
    result.cfi_type = dut->query_cfi_type;
    result.cfi_is_call = dut->query_cfi_is_call;
    result.cfi_is_ret = dut->query_cfi_is_ret;
    result.cfi_npc_plus4 = dut->query_cfi_npc_plus4;
    result.cfi_taken = dut->query_cfi_taken;
    result.ras_top = dut->query_ras_top;
    result.ras_idx = dut->query_ras_idx;
    result.start_bank = dut->query_start_bank;
    result.ghist = read_ghist(dut->query_ghist);
    return result;
}

void expect_query_matches(const char* prefix, const QueryResult& actual,
                          const Entry& expected) {
    char name[128];

    std::snprintf(name, sizeof(name), "%s valid", prefix);
    expect_eq(name, actual.valid, 1);
    std::snprintf(name, sizeof(name), "%s pc", prefix);
    expect_eq(name, actual.pc, expected.pc);
    std::snprintf(name, sizeof(name), "%s next PC", prefix);
    expect_eq(name, actual.next_pc, expected.next_pc);
    std::snprintf(name, sizeof(name), "%s branch mask", prefix);
    expect_eq(name, actual.br_mask, expected.br_mask);
    std::snprintf(name, sizeof(name), "%s CFI valid", prefix);
    expect_eq(name, actual.cfi_valid, expected.cfi_valid);
    std::snprintf(name, sizeof(name), "%s CFI index", prefix);
    expect_eq(name, actual.cfi_idx, expected.cfi_idx);
    std::snprintf(name, sizeof(name), "%s CFI type", prefix);
    expect_eq(name, actual.cfi_type, expected.cfi_type);
    std::snprintf(name, sizeof(name), "%s call flag", prefix);
    expect_eq(name, actual.cfi_is_call, expected.cfi_is_call);
    std::snprintf(name, sizeof(name), "%s return flag", prefix);
    expect_eq(name, actual.cfi_is_ret, expected.cfi_is_ret);
    std::snprintf(name, sizeof(name), "%s npc_plus4", prefix);
    expect_eq(name, actual.cfi_npc_plus4, expected.cfi_npc_plus4);
    std::snprintf(name, sizeof(name), "%s taken", prefix);
    expect_eq(name, actual.cfi_taken, expected.cfi_taken);
    std::snprintf(name, sizeof(name), "%s RAS top", prefix);
    expect_eq(name, actual.ras_top, expected.ras_top);
    std::snprintf(name, sizeof(name), "%s RAS index", prefix);
    expect_eq(name, actual.ras_idx, expected.ras_idx);
    std::snprintf(name, sizeof(name), "%s start bank", prefix);
    expect_eq(name, actual.start_bank, expected.start_bank);
    expect_ghist(prefix, actual.ghist, expected.ghist);
}

void pulse_commit(Vftq_test_top* dut, uint32_t idx) {
    dut->commit_valid = 1;
    dut->commit_ftq_idx = idx;
    eval_cycle(dut);
    dut->commit_valid = 0;
    dut->eval();
}

void pulse_redirect(Vftq_test_top* dut, uint32_t idx) {
    dut->redirect_valid = 1;
    dut->redirect_ftq_idx = idx;
    eval_cycle(dut);
    dut->redirect_valid = 0;
    dut->eval();
}

void pulse_flush(Vftq_test_top* dut) {
    dut->flush_valid = 1;
    eval_cycle(dut);
    dut->flush_valid = 0;
    dut->eval();
}

BpdUpdate sample_update(Vftq_test_top* dut) {
    BpdUpdate update{};
    update.is_mispredict_update =
        dut->bpd_update_is_mispredict_update;
    update.is_repair_update = dut->bpd_update_is_repair_update;
    update.pc = dut->bpd_update_pc;
    update.br_mask = dut->bpd_update_br_mask;
    update.cfi_valid = dut->bpd_update_cfi_valid;
    update.cfi_idx = dut->bpd_update_cfi_idx;
    update.cfi_taken = dut->bpd_update_cfi_taken;
    update.cfi_mispredicted =
        dut->bpd_update_cfi_mispredicted;
    update.cfi_is_br = dut->bpd_update_cfi_is_br;
    update.cfi_is_b_bl = dut->bpd_update_cfi_is_b_bl;
    update.cfi_is_jirl = dut->bpd_update_cfi_is_jirl;
    update.target = dut->bpd_update_target;
    update.ghist = read_ghist(dut->bpd_update_ghist);
    update.meta = read_meta(dut->bpd_update_meta);
    return update;
}

void sample_outputs(Vftq_test_top* dut, Observations* observations) {
    if (dut->bpd_update_valid)
        observations->updates.push_back(sample_update(dut));
    if (dut->ghist_restore_valid)
        observations->ghist_restores.push_back(
            read_ghist(dut->ghist_restore));
    if (dut->ras_repair_valid)
        observations->ras_repairs.push_back(
            RasRepair{uint8_t(dut->ras_repair_idx),
                      uint32_t(dut->ras_repair_addr)});
}

Observations observe_cycles(Vftq_test_top* dut, int cycles) {
    Observations observations{};
    for (int cycle = 0; cycle < cycles; ++cycle) {
        dut->eval();
        sample_outputs(dut, &observations);
        eval_cycle(dut);
    }
    return observations;
}

void wait_until_ready(Vftq_test_top* dut, int max_cycles = 16) {
    for (int cycle = 0; cycle <= max_cycles; ++cycle) {
        dut->eval();
        if (dut->enq_ready)
            return;
        eval_cycle(dut);
    }
    fail("FTQ did not become ready within the bounded wait");
}

void drive_mispredict_redirect(Vftq_test_top* dut, uint32_t idx,
                               const Entry& entry, uint8_t lane,
                               bool taken, uint8_t cfi_type,
                               uint32_t target) {
    dut->redirect_valid = 1;
    dut->redirect_ftq_idx = idx;
    dut->brupdate_b2_mispredict = 1;
    dut->brupdate_b2_ftq_idx = idx;
    dut->brupdate_b2_taken = taken;
    dut->brupdate_b2_target = target;
    dut->brupdate_b2_pc_lob = logical_lane_to_pc_lob(entry, lane);
    dut->brupdate_b2_cfi_type = cfi_type;
    eval_cycle(dut);

    dut->redirect_valid = 0;
    dut->brupdate_b2_mispredict = 0;
    dut->eval();
}

void expect_update_matches(const char* prefix, const BpdUpdate& actual,
                           const Entry& expected, bool is_mispredict,
                           bool is_repair, bool cfi_mispredicted,
                           bool taken, uint32_t target) {
    char name[128];

    std::snprintf(name, sizeof(name), "%s mispredict flag", prefix);
    expect_eq(name, actual.is_mispredict_update, is_mispredict);
    std::snprintf(name, sizeof(name), "%s repair flag", prefix);
    expect_eq(name, actual.is_repair_update, is_repair);
    std::snprintf(name, sizeof(name), "%s pc", prefix);
    expect_eq(name, actual.pc, expected.pc);
    std::snprintf(name, sizeof(name), "%s branch mask", prefix);
    expect_eq(name, actual.br_mask, expected.br_mask);
    std::snprintf(name, sizeof(name), "%s CFI valid", prefix);
    expect_eq(name, actual.cfi_valid, expected.cfi_valid);
    std::snprintf(name, sizeof(name), "%s CFI index", prefix);
    expect_eq(name, actual.cfi_idx, expected.cfi_idx);
    std::snprintf(name, sizeof(name), "%s taken", prefix);
    expect_eq(name, actual.cfi_taken, taken);
    std::snprintf(name, sizeof(name), "%s CFI mispredicted", prefix);
    expect_eq(name, actual.cfi_mispredicted, cfi_mispredicted);
    std::snprintf(name, sizeof(name), "%s is_br", prefix);
    expect_eq(name, actual.cfi_is_br,
              expected.cfi_type == kCfiBr);
    std::snprintf(name, sizeof(name), "%s is_b_bl", prefix);
    expect_eq(name, actual.cfi_is_b_bl,
              expected.cfi_type == kCfiBBl);
    std::snprintf(name, sizeof(name), "%s is_jirl", prefix);
    expect_eq(name, actual.cfi_is_jirl,
              expected.cfi_type == kCfiJirl);
    std::snprintf(name, sizeof(name), "%s target", prefix);
    expect_eq(name, actual.target, target);
    expect_ghist(prefix, actual.ghist, expected.ghist);
    expect_meta(prefix, actual.meta, expected.meta);
}

void expect_single_mispredict(Vftq_test_top* dut, const char* prefix,
                              const Entry& entry, uint8_t lane,
                              bool taken, uint8_t cfi_type,
                              uint32_t target) {
    const uint32_t idx = enqueue(dut, entry);
    drive_mispredict_redirect(dut, idx, entry, lane, taken,
                              cfi_type, target);
    const Observations observations = observe_cycles(dut, 8);

    expect_eq("single mispredict emits one update",
              observations.updates.size(), 1);
    expect_eq("single mispredict emits one history restore",
              observations.ghist_restores.size(), 1);
    expect_eq("single mispredict emits one RAS repair",
              observations.ras_repairs.size(), 1);

    const Entry corrected =
        corrected_entry(entry, lane, taken, cfi_type, target);
    expect_update_matches(prefix, observations.updates[0], corrected,
                          true, false, true, taken, target);
    expect_ghist(prefix, observations.ghist_restores[0],
                 apply_resolved_control(entry, lane, taken, cfi_type));
    expect_query_matches(prefix, query(dut, idx), corrected);
}

void test_reset_and_enqueue_query(Vftq_test_top* dut) {
    expect_eq("reset leaves FTQ ready", dut->enq_ready, 1);
    expect_eq("reset suppresses BPD update", dut->bpd_update_valid, 0);
    expect_eq("reset suppresses GHist restore",
              dut->ghist_restore_valid, 0);
    expect_eq("reset suppresses RAS repair", dut->ras_repair_valid, 0);
    expect_eq("empty FTQ rejects query",
              query(dut, 0).valid, 0);

    Entry entry = make_entry(0);
    entry.br_mask = 0b0101;
    entry.cfi_valid = true;
    entry.cfi_idx = 2;
    entry.cfi_type = kCfiBr;
    entry.cfi_taken = false;
    const uint32_t idx = enqueue(dut, entry);

    expect_query_matches("query returns complete entry",
                         query(dut, idx), entry);
    eval_cycle(dut);
    expect_eq("query response valid is a one-cycle pulse",
              dut->query_resp_valid, 0);
}

void test_parallel_execution_queries(Vftq_test_top* dut) {
    std::array<Entry, kExecQueryWidth> entries{};
    std::array<uint32_t, kExecQueryWidth> indices{};

    for (int port = 0; port < kExecQueryWidth; ++port) {
        entries[port] = make_entry(70 + port);
        entries[port].pc += port == 0 ? 4 : 0;
        entries[port].next_pc = 0x1d20'0000u + port * 0x100;
        entries[port].cfi_valid = true;
        entries[port].cfi_idx = uint8_t(port);
        entries[port].cfi_type = kCfiJirl;
        entries[port].cfi_taken = true;
        indices[port] = enqueue(dut, entries[port]);
    }

    set_exec_query(dut, 0, true, indices[0],
                   entries[0].pc + entries[0].cfi_idx * kInstBytes);
    set_exec_query(dut, 1, true, indices[1],
                   entries[1].pc + entries[1].cfi_idx * kInstBytes);
    set_exec_query(dut, 2, true, indices[2],
                   entries[2].pc +
                       (entries[2].cfi_idx + 1) * kInstBytes);
    eval_cycle(dut);

    expect_eq("all live execution queries respond",
              dut->exec_query_resp_valid, 0b111);
    expect_eq("only exact JIRL PCs match",
              dut->exec_query_cfi_match, 0b011);
    for (int port = 0; port < kExecQueryWidth; ++port) {
        char name[96];
        std::snprintf(name, sizeof(name),
                      "execution query port %d next PC", port);
        expect_eq(name, dut->exec_query_next_pc[port],
                  entries[port].next_pc);
    }

    dut->exec_query_valid = 0;
    eval_cycle(dut);
    expect_eq("execution query response is a one-cycle pulse",
              dut->exec_query_resp_valid, 0);
    expect_eq("execution CFI match clears without a response",
              dut->exec_query_cfi_match, 0);
}

void test_full_backpressure_and_wrap(Vftq_test_top* dut) {
    std::vector<uint32_t> indices;
    std::vector<Entry> entries;
    for (int entry_id = 0; entry_id < kNumEntries; ++entry_id) {
        entries.push_back(make_entry(entry_id));
        indices.push_back(enqueue(dut, entries.back()));
    }

    dut->eval();
    expect_eq("full queue applies backpressure", dut->enq_ready, 0);

    Entry blocked = make_entry(100);
    drive_entry(dut, blocked);
    dut->enq_valid = 1;
    dut->eval();
    const uint32_t blocked_idx = dut->enq_idx;
    for (int cycle = 0; cycle < 3; ++cycle) {
        expect_eq("stalled enqueue remains unaccepted",
                  dut->enq_ready, 0);
        expect_eq("stalled allocation index is stable",
                  dut->enq_idx, blocked_idx);
        eval_cycle(dut);
    }
    dut->enq_valid = 0;
    dut->eval();

    const QueryResult old_entry = query(dut, indices.front());
    expect_eq("live query response is valid", old_entry.valid, 1);
    expect_eq("stalled enqueue does not overwrite live entry",
              old_entry.pc, entries.front().pc);

    // The commit index is an exclusive boundary. Advancing it to the second
    // packet releases the first packet while retaining the boundary packet.
    pulse_commit(dut, indices[1]);
    const Observations idle_commit = observe_cycles(dut, 8);
    expect_eq("non-control commit has no BPD update",
              idle_commit.updates.size(), 0);
    expect_eq("commit releases the packet before the boundary",
              query(dut, indices.front()).valid, 0);
    expect_eq("commit retains the boundary packet",
              query(dut, indices[1]).valid, 1);
    wait_until_ready(dut);

    Entry replacement = make_entry(101);
    const uint32_t replacement_idx = enqueue(dut, replacement);
    expect_eq("allocation pointer wraps to released entry",
              replacement_idx, indices.front());

    const QueryResult replacement_result =
        query(dut, replacement_idx);
    expect_eq("replacement query response is valid",
              replacement_result.valid, 1);
    expect_eq("wrapped entry contains replacement packet",
              replacement_result.pc, replacement.pc);
    dut->eval();
    expect_eq("queue is full again after replacement",
              dut->enq_ready, 0);
}

void test_commit_update_payload_and_order(Vftq_test_top* dut) {
    Entry branch = make_entry(10);
    branch.br_mask = 0b0101;
    branch.cfi_valid = true;
    branch.cfi_idx = 2;
    branch.cfi_type = kCfiBr;
    branch.cfi_taken = false;

    Entry call = make_entry(11);
    call.cfi_valid = true;
    call.cfi_idx = 1;
    call.cfi_type = kCfiBBl;
    call.cfi_is_call = true;
    call.cfi_taken = true;

    Entry ret = make_entry(12);
    ret.cfi_valid = true;
    ret.cfi_idx = 3;
    ret.cfi_type = kCfiJirl;
    ret.cfi_is_ret = true;
    ret.cfi_taken = true;

    const uint32_t branch_idx = enqueue(dut, branch);
    const uint32_t call_idx = enqueue(dut, call);
    const uint32_t youngest_idx = enqueue(dut, ret);

    const Observations before_commit = observe_cycles(dut, 4);
    expect_eq("uncommitted entries do not train predictors",
              before_commit.updates.size(), 0);

    pulse_commit(dut, youngest_idx);
    const Observations committed = observe_cycles(dut, 24);
    expect_eq("commit trains packets before the boundary",
              committed.updates.size(), 2);

    expect_update_matches("committed branch", committed.updates[0],
                          branch, false, false, false,
                          branch.cfi_taken, branch.next_pc);
    expect_update_matches("committed call", committed.updates[1],
                          call, false, false, false,
                          call.cfi_taken, call.next_pc);
    expect_eq("commit releases the oldest packet",
              query(dut, branch_idx).valid, 0);
    expect_eq("commit releases the middle packet",
              query(dut, call_idx).valid, 0);
    expect_query_matches("commit retains the youngest boundary packet",
                         query(dut, youngest_idx), ret);

    Entry next_packet = make_entry(13);
    const uint32_t next_idx = enqueue(dut, next_packet);
    pulse_commit(dut, next_idx);
    const Observations advanced = observe_cycles(dut, 16);
    expect_eq("advancing the boundary trains the retained packet",
              advanced.updates.size(), 1);
    expect_update_matches("committed return", advanced.updates[0],
                          ret, false, false, false,
                          ret.cfi_taken, ret.next_pc);
    expect_eq("advanced commit releases the old boundary packet",
              query(dut, youngest_idx).valid, 0);
    expect_query_matches("advanced commit retains the new boundary packet",
                         query(dut, next_idx), next_packet);
}

void test_commit_endpoint_extends_while_busy(Vftq_test_top* dut) {
    std::array<Entry, 4> entries{};
    std::array<uint32_t, 4> indices{};

    for (int entry_id = 0; entry_id < 4; ++entry_id) {
        entries[entry_id] = make_entry(70 + entry_id);
        entries[entry_id].cfi_valid = true;
        entries[entry_id].cfi_idx = uint8_t(entry_id);
        entries[entry_id].cfi_type = kCfiBr;
        entries[entry_id].cfi_taken = entry_id & 1;
        indices[entry_id] = enqueue(dut, entries[entry_id]);
    }

    // Start walking toward the second packet as an exclusive boundary, then
    // advance the boundary before the multi-cycle FTQ walk has completed.
    pulse_commit(dut, indices[1]);
    dut->commit_valid = 1;
    dut->commit_ftq_idx = indices[3];
    eval_cycle(dut);
    dut->commit_valid = 0;
    dut->eval();

    const Observations observations = observe_cycles(dut, 24);
    expect_eq("extended commit emits each pre-boundary update exactly once",
              observations.updates.size(), entries.size() - 1);
    for (std::size_t entry_id = 0; entry_id + 1 < entries.size(); ++entry_id) {
        char name[96];
        std::snprintf(name, sizeof(name),
                      "extended commit update %zu", entry_id);
        expect_update_matches(name, observations.updates[entry_id],
                              entries[entry_id], false, false, false,
                              entries[entry_id].cfi_taken,
                              entries[entry_id].next_pc);

        std::snprintf(name, sizeof(name),
                      "extended commit frees entry %zu", entry_id);
        expect_eq(name, query(dut, indices[entry_id]).valid, 0);
    }
    expect_query_matches("extended commit retains its final boundary",
                         query(dut, indices.back()), entries.back());
}

void test_non_control_commit_is_silent(Vftq_test_top* dut) {
    Entry entry = make_entry(20);
    const uint32_t idx = enqueue(dut, entry);

    pulse_commit(dut, idx);
    const Observations observations = observe_cycles(dut, 12);
    expect_eq("non-control packet produces no predictor pulse",
              observations.updates.size(), 0);
    expect_eq("non-control packet produces no GHist restore",
              observations.ghist_restores.size(), 0);
    expect_eq("non-control packet produces no RAS repair",
              observations.ras_repairs.size(), 0);
    expect_query_matches("non-control commit retains its boundary packet",
                         query(dut, idx), entry);
}

void test_redirect_discards_younger_entries(Vftq_test_top* dut) {
    Entry oldest = make_entry(30);
    Entry redirect_entry = make_entry(31);
    Entry wrong_path = make_entry(32);

    const uint32_t oldest_idx = enqueue(dut, oldest);
    const uint32_t redirect_idx = enqueue(dut, redirect_entry);
    const uint32_t wrong_path_idx = enqueue(dut, wrong_path);

    pulse_redirect(dut, redirect_idx);
    const Observations redirect_events = observe_cycles(dut, 4);
    expect_eq("redirect emits one raw GHist restore",
              redirect_events.ghist_restores.size(), 1);
    expect_ghist("redirect restores raw GHist snapshot",
                 redirect_events.ghist_restores[0],
                 redirect_entry.ghist);
    expect_eq("redirect emits one RAS repair pulse",
              redirect_events.ras_repairs.size(), 1);
    expect_eq("redirect repairs saved RAS index",
              redirect_events.ras_repairs[0].idx,
              redirect_entry.ras_idx);
    expect_eq("redirect repairs saved RAS top",
              redirect_events.ras_repairs[0].addr,
              redirect_entry.ras_top);
    expect_eq("redirect invalidates first younger entry",
              query(dut, wrong_path_idx).valid, 0);

    Entry replacement = make_entry(33);
    const uint32_t replacement_idx = enqueue(dut, replacement);
    expect_eq("redirect rewinds enqueue pointer after redirect entry",
              replacement_idx,
              uint32_t((redirect_idx + 1) % kNumEntries));

    QueryResult result = query(dut, oldest_idx);
    expect_eq("redirect preserves older entry", result.pc, oldest.pc);
    result = query(dut, redirect_idx);
    expect_eq("redirect preserves redirect entry",
              result.pc, redirect_entry.pc);
    result = query(dut, replacement_idx);
    expect_eq("redirected slot accepts correct-path replacement",
              result.pc, replacement.pc);
}

void test_mispredict_and_repair_walk(Vftq_test_top* dut) {
    Entry offender = make_entry(40);
    offender.br_mask = 0b0001;
    offender.cfi_valid = true;
    offender.cfi_idx = 0;
    offender.cfi_type = kCfiBr;
    offender.cfi_taken = true;

    Entry younger0 = make_entry(41);
    younger0.br_mask = 0b0010;
    younger0.cfi_valid = true;
    younger0.cfi_idx = 1;
    younger0.cfi_type = kCfiBr;
    younger0.cfi_taken = true;

    Entry younger1 = make_entry(42);
    younger1.cfi_valid = true;
    younger1.cfi_idx = 2;
    younger1.cfi_type = kCfiBBl;
    younger1.cfi_taken = true;

    const uint32_t offender_idx = enqueue(dut, offender);
    enqueue(dut, younger0);
    enqueue(dut, younger1);

    constexpr uint32_t kActualTarget = 0x1c20'4000;
    drive_mispredict_redirect(dut, offender_idx, offender, 0,
                              false, kCfiBr, kActualTarget);
    const Observations observations = observe_cycles(dut, 40);

    expect_eq("mispredict emits one GHist restore",
              observations.ghist_restores.size(), 1);
    const GHist corrected_ghist =
        apply_resolved_control(offender, 0, false, kCfiBr);
    expect_ghist("mispredict restores corrected history",
                 observations.ghist_restores[0], corrected_ghist);

    expect_eq("mispredict emits one RAS repair",
              observations.ras_repairs.size(), 1);
    expect_eq("mispredict repairs offender RAS index",
              observations.ras_repairs[0].idx, offender.ras_idx);
    expect_eq("mispredict repairs offender RAS top",
              observations.ras_repairs[0].addr, offender.ras_top);

    expect_eq("mispredict plus two younger packets produces "
              "one correction and two repair updates",
              observations.updates.size(), 3);
    const Entry corrected =
        corrected_entry(offender, 0, false, kCfiBr, kActualTarget);
    expect_update_matches("mispredict correction",
                          observations.updates[0], corrected,
                          true, false, true, false, kActualTarget);
    expect_update_matches("first wrong-path repair",
                          observations.updates[1], younger0,
                          false, true, false,
                          younger0.cfi_taken, younger0.next_pc);
    expect_update_matches("second wrong-path repair",
                          observations.updates[2], younger1,
                          false, true, false,
                          younger1.cfi_taken, younger1.next_pc);
}

void test_second_bank_history_with_start_bank(Vftq_test_top* dut) {
    Entry entry = make_entry(90);
    entry.start_bank = true;
    entry.br_mask = 0b1111;
    entry.cfi_valid = true;
    entry.cfi_idx = 2;
    entry.cfi_type = kCfiBr;
    entry.cfi_taken = false;
    entry.ghist = GHist{0x15, true, true, false, 7};

    expect_single_mispredict(dut, "second-bank correction", entry,
                             2, true, kCfiBr, 0x1c40'1000);
}

void test_call_restore_wraps_ras(Vftq_test_top* dut) {
    Entry entry = make_entry(91);
    entry.br_mask = 0b0011;
    entry.cfi_valid = true;
    entry.cfi_idx = 3;
    entry.cfi_type = kCfiBBl;
    entry.cfi_is_call = true;
    entry.cfi_taken = true;
    entry.ghist.ras_idx = 31;

    expect_single_mispredict(dut, "call correction", entry,
                             3, true, kCfiBBl, 0x1c40'2000);
}

void test_unaligned_packet_call_uses_logical_lane_zero(
    Vftq_test_top* dut) {
    Entry entry = make_entry(94);
    entry.pc = 0x1c01'0054;
    entry.cfi_valid = true;
    entry.cfi_idx = 0;
    entry.cfi_type = kCfiBBl;
    entry.cfi_is_call = true;
    entry.cfi_taken = true;
    entry.ghist.ras_idx = 7;

    expect_single_mispredict(
        dut, "unaligned lane-zero call correction", entry,
        0, true, kCfiBBl, 0x1c01'0290);
}

void test_moved_ret_clears_ret_semantics(Vftq_test_top* dut) {
    Entry entry = make_entry(92);
    entry.cfi_valid = true;
    entry.cfi_idx = 1;
    entry.cfi_type = kCfiJirl;
    entry.cfi_is_ret = true;
    entry.cfi_taken = true;
    entry.ghist.ras_idx = 0;

    expect_single_mispredict(dut, "moved return correction", entry,
                             2, true, kCfiJirl, 0x1c40'3000);
}

void test_last_bank_history_boundary(Vftq_test_top* dut) {
    Entry entry = make_entry(93);
    entry.pc = (entry.pc & ~uint32_t(kIcacheBlockBytes - 1)) |
               uint32_t(kIcacheBlockBytes - kBankBytes);
    entry.br_mask = 0b0001;
    entry.cfi_valid = true;
    entry.cfi_idx = 0;
    entry.cfi_type = kCfiBr;
    entry.cfi_taken = true;
    entry.ghist = GHist{0x2a, false, false, false, 5};

    expect_single_mispredict(dut, "last-bank correction", entry,
                             0, false, kCfiBr, 0x1c40'4000);
}

void test_commit_and_mispredict_same_cycle(Vftq_test_top* dut) {
    Entry older = make_entry(79);
    older.cfi_valid = true;
    older.cfi_idx = 0;
    older.cfi_type = kCfiBr;
    older.cfi_taken = true;

    Entry commit_boundary = make_entry(80);
    commit_boundary.cfi_valid = true;
    commit_boundary.cfi_idx = 0;
    commit_boundary.cfi_type = kCfiBr;
    commit_boundary.cfi_taken = false;

    Entry offender = make_entry(81);
    offender.br_mask = 0b0010;
    offender.cfi_valid = true;
    offender.cfi_idx = 1;
    offender.cfi_type = kCfiBr;
    offender.cfi_taken = true;

    Entry wrong_path = make_entry(82);
    wrong_path.cfi_valid = true;
    wrong_path.cfi_idx = 2;
    wrong_path.cfi_type = kCfiBBl;
    wrong_path.cfi_is_call = true;
    wrong_path.cfi_taken = true;

    const uint32_t older_idx = enqueue(dut, older);
    const uint32_t boundary_idx = enqueue(dut, commit_boundary);
    const uint32_t offender_idx = enqueue(dut, offender);
    const uint32_t wrong_path_idx = enqueue(dut, wrong_path);

    constexpr uint32_t kActualTarget = 0x1c30'5000;
    dut->commit_valid = 1;
    dut->commit_ftq_idx = boundary_idx;
    dut->redirect_valid = 1;
    dut->redirect_ftq_idx = offender_idx;
    dut->brupdate_b2_mispredict = 1;
    dut->brupdate_b2_ftq_idx = offender_idx;
    dut->brupdate_b2_taken = false;
    dut->brupdate_b2_target = kActualTarget;
    dut->brupdate_b2_pc_lob =
        logical_lane_to_pc_lob(offender, offender.cfi_idx);
    dut->brupdate_b2_cfi_type = kCfiBr;
    eval_cycle(dut);

    dut->commit_valid = 0;
    dut->redirect_valid = 0;
    dut->brupdate_b2_mispredict = 0;
    dut->eval();

    const Observations observations = observe_cycles(dut, 32);
    expect_eq("same-cycle commit and redirect preserve all updates",
              observations.updates.size(), 3);
    const Entry corrected = corrected_entry(
        offender, offender.cfi_idx, false, kCfiBr, kActualTarget);
    expect_update_matches("same-cycle mispredict correction",
                          observations.updates[0], corrected,
                          true, false, true, false, kActualTarget);
    expect_update_matches("same-cycle wrong-path repair",
                          observations.updates[1], wrong_path,
                          false, true, false,
                          wrong_path.cfi_taken, wrong_path.next_pc);
    expect_update_matches("same-cycle older commit",
                          observations.updates[2], older,
                          false, false, false,
                          older.cfi_taken, older.next_pc);

    expect_eq("same-cycle redirect emits one history restore",
              observations.ghist_restores.size(), 1);
    expect_eq("same-cycle redirect emits one RAS repair",
              observations.ras_repairs.size(), 1);
    expect_eq("same-cycle commit frees the pre-boundary entry",
              query(dut, older_idx).valid, 0);
    expect_query_matches("same-cycle commit retains its boundary entry",
                         query(dut, boundary_idx), commit_boundary);
    expect_eq("same-cycle redirect preserves offending entry",
              query(dut, offender_idx).valid, 1);
    expect_eq("same-cycle redirect kills wrong-path entry",
              query(dut, wrong_path_idx).valid, 0);
}

void test_redirect_priority_over_enqueue(Vftq_test_top* dut) {
    Entry oldest = make_entry(50);
    Entry redirect_entry = make_entry(51);
    const uint32_t oldest_idx = enqueue(dut, oldest);
    const uint32_t redirect_idx = enqueue(dut, redirect_entry);

    Entry squashed_same_cycle = make_entry(52);
    drive_entry(dut, squashed_same_cycle);
    dut->enq_valid = 1;
    dut->redirect_valid = 1;
    dut->redirect_ftq_idx = oldest_idx;
    eval_cycle(dut);
    dut->enq_valid = 0;
    dut->redirect_valid = 0;
    dut->eval();

    Entry accepted_after_redirect = make_entry(53);
    const uint32_t accepted_idx =
        enqueue(dut, accepted_after_redirect);
    expect_eq("redirect wins over same-cycle enqueue",
              accepted_idx,
              uint32_t((oldest_idx + 1) % kNumEntries));

    const QueryResult accepted_result = query(dut, accepted_idx);
    expect_eq("post-redirect slot contains later accepted packet",
              accepted_result.pc, accepted_after_redirect.pc);
    expect_true("redirect test allocated distinct initial entries",
                oldest_idx != redirect_idx);
}

void test_full_flush_clears_all_entries(Vftq_test_top* dut) {
    Entry first = make_entry(110);
    Entry second = make_entry(111);
    Entry third = make_entry(112);

    const uint32_t first_idx = enqueue(dut, first);
    const uint32_t second_idx = enqueue(dut, second);
    const uint32_t third_idx = enqueue(dut, third);

    pulse_flush(dut);

    expect_eq("flush removes first entry",
              query(dut, first_idx).valid, 0);
    expect_eq("flush removes second entry",
              query(dut, second_idx).valid, 0);
    expect_eq("flush removes third entry",
              query(dut, third_idx).valid, 0);
    expect_eq("flush restores enqueue readiness", dut->enq_ready, 1);
    expect_eq("flush resets allocation index", dut->enq_idx, 0);
    expect_eq("flush suppresses BPD update", dut->bpd_update_valid, 0);
    expect_eq("flush suppresses history restore",
              dut->ghist_restore_valid, 0);
    expect_eq("flush suppresses RAS repair", dut->ras_repair_valid, 0);
    expect_eq("flush suppresses query response",
              dut->query_resp_valid, 0);

    Entry replacement = make_entry(113);
    const uint32_t replacement_idx = enqueue(dut, replacement);
    expect_eq("post-flush allocation starts at zero",
              replacement_idx, 0);
    expect_query_matches("post-flush entry is usable",
                         query(dut, replacement_idx), replacement);
}

void test_full_flush_priority_over_same_cycle_work(Vftq_test_top* dut) {
    Entry live = make_entry(120);
    live.cfi_valid = true;
    live.cfi_idx = 1;
    live.cfi_type = kCfiBr;
    const uint32_t live_idx = enqueue(dut, live);

    Entry blocked = make_entry(121);
    drive_entry(dut, blocked);
    dut->enq_valid = 1;
    dut->commit_valid = 1;
    dut->commit_ftq_idx = live_idx;
    dut->redirect_valid = 1;
    dut->redirect_ftq_idx = live_idx;
    dut->brupdate_b2_mispredict = 1;
    dut->brupdate_b2_ftq_idx = live_idx;
    dut->brupdate_b2_pc_lob =
        logical_lane_to_pc_lob(live, live.cfi_idx);
    dut->brupdate_b2_cfi_type = kCfiBr;
    dut->query_valid = 1;
    dut->query_idx = live_idx;
    dut->flush_valid = 1;

    dut->eval();
    expect_eq("flush blocks same-cycle enqueue", dut->enq_ready, 0);
    eval_cycle(dut);

    clear_inputs(dut);
    dut->eval();

    expect_eq("flush wins over same-cycle query",
              dut->query_resp_valid, 0);
    expect_eq("flush wins over same-cycle branch update",
              dut->bpd_update_valid, 0);
    expect_eq("flush wins over same-cycle history restore",
              dut->ghist_restore_valid, 0);
    expect_eq("flush wins over same-cycle RAS repair",
              dut->ras_repair_valid, 0);
    expect_eq("flush clears the simultaneous redirect entry",
              query(dut, live_idx).valid, 0);
    expect_eq("flush leaves queue ready", dut->enq_ready, 1);
    expect_eq("flush leaves allocation index at zero", dut->enq_idx, 0);
}

void test_full_flush_cancels_commit_walk(Vftq_test_top* dut) {
    std::array<uint32_t, 4> indices{};
    for (int entry_id = 0; entry_id < 4; ++entry_id) {
        Entry entry = make_entry(130 + entry_id);
        entry.cfi_valid = true;
        entry.cfi_idx = uint8_t(entry_id);
        entry.cfi_type = kCfiBr;
        indices[entry_id] = enqueue(dut, entry);
    }

    pulse_commit(dut, indices.back());
    pulse_flush(dut);
    const Observations observations = observe_cycles(dut, 12);

    expect_eq("flush cancels pending commit updates",
              observations.updates.size(), 0);
    for (std::size_t entry_id = 0; entry_id < indices.size(); ++entry_id) {
        char name[96];
        std::snprintf(name, sizeof(name),
                      "flush removes commit-walk entry %zu", entry_id);
        expect_eq(name, query(dut, indices[entry_id]).valid, 0);
    }
}

void test_full_flush_cancels_repair_walk(Vftq_test_top* dut) {
    Entry offender = make_entry(140);
    offender.br_mask = 0b0010;
    offender.cfi_valid = true;
    offender.cfi_idx = 1;
    offender.cfi_type = kCfiBr;

    Entry younger0 = make_entry(141);
    younger0.cfi_valid = true;
    younger0.cfi_idx = 2;
    younger0.cfi_type = kCfiBBl;

    Entry younger1 = make_entry(142);
    younger1.cfi_valid = true;
    younger1.cfi_idx = 3;
    younger1.cfi_type = kCfiJirl;

    const uint32_t offender_idx = enqueue(dut, offender);
    const uint32_t younger0_idx = enqueue(dut, younger0);
    const uint32_t younger1_idx = enqueue(dut, younger1);

    drive_mispredict_redirect(dut, offender_idx, offender,
                              offender.cfi_idx, false, kCfiBr,
                              0x1c50'0000);
    pulse_flush(dut);
    const Observations observations = observe_cycles(dut, 12);

    expect_eq("flush cancels late repair updates",
              observations.updates.size(), 0);
    expect_eq("flush cancels late history restores",
              observations.ghist_restores.size(), 0);
    expect_eq("flush cancels late RAS repairs",
              observations.ras_repairs.size(), 0);
    expect_eq("flush removes repair offender",
              query(dut, offender_idx).valid, 0);
    expect_eq("flush removes first repair entry",
              query(dut, younger0_idx).valid, 0);
    expect_eq("flush removes second repair entry",
              query(dut, younger1_idx).valid, 0);
}

void test_reset_blocks_all_side_effects(Vftq_test_top* dut) {
    Entry entry = make_entry(60);
    drive_entry(dut, entry);
    dut->enq_valid = 1;
    dut->commit_valid = 1;
    dut->commit_ftq_idx = 0;
    dut->redirect_valid = 1;
    dut->redirect_ftq_idx = 0;
    dut->brupdate_b2_mispredict = 1;
    dut->brupdate_b2_ftq_idx = 0;

    dut->rst_n = 0;
    for (int cycle = 0; cycle < 2; ++cycle) {
        eval_cycle(dut);
        expect_eq("reset suppresses BPD update pulse",
                  dut->bpd_update_valid, 0);
        expect_eq("reset suppresses GHist restore pulse",
                  dut->ghist_restore_valid, 0);
        expect_eq("reset suppresses RAS repair pulse",
                  dut->ras_repair_valid, 0);
    }

    clear_inputs(dut);
    dut->rst_n = 1;
    dut->eval();
    expect_eq("FTQ becomes ready after reset release",
              dut->enq_ready, 1);

    Entry accepted = make_entry(61);
    const uint32_t idx = enqueue(dut, accepted);
    const QueryResult accepted_result = query(dut, idx);
    expect_eq("reset discarded simultaneous requests",
              accepted_result.pc, accepted.pc);
}

using TestFunction = void (*)(Vftq_test_top*);

void run_isolated(TestFunction test) {
    auto* dut = new Vftq_test_top;
    clear_inputs(dut);
    reset_dut(dut);
    test(dut);
    delete dut;
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    run_isolated(test_reset_and_enqueue_query);
    run_isolated(test_parallel_execution_queries);
    run_isolated(test_full_backpressure_and_wrap);
    run_isolated(test_commit_update_payload_and_order);
    run_isolated(test_commit_endpoint_extends_while_busy);
    run_isolated(test_non_control_commit_is_silent);
    run_isolated(test_redirect_discards_younger_entries);
    run_isolated(test_mispredict_and_repair_walk);
    run_isolated(test_second_bank_history_with_start_bank);
    run_isolated(test_call_restore_wraps_ras);
    run_isolated(test_unaligned_packet_call_uses_logical_lane_zero);
    run_isolated(test_moved_ret_clears_ret_semantics);
    run_isolated(test_last_bank_history_boundary);
    run_isolated(test_commit_and_mispredict_same_cycle);
    run_isolated(test_redirect_priority_over_enqueue);
    run_isolated(test_full_flush_clears_all_entries);
    run_isolated(test_full_flush_priority_over_same_cycle_work);
    run_isolated(test_full_flush_cancels_commit_walk);
    run_isolated(test_full_flush_cancels_repair_walk);
    run_isolated(test_reset_blocks_all_side_effects);

    pass("ftq");
    return 0;
}
