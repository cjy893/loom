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

GHist apply_resolved_control(const GHist& snapshot,
                             bool taken, bool is_br,
                             bool is_call, bool is_ret) {
    GHist corrected = snapshot;
    corrected.new_saw_nt = false;
    corrected.new_saw_taken = false;

    if (is_br) {
        corrected.old_history =
            (snapshot.old_history << 1) | uint64_t(taken);
        corrected.current_saw_nt = !taken;
    }

    if (is_call)
        corrected.ras_idx = uint8_t((snapshot.ras_idx + 1) % 32);
    if (is_ret)
        corrected.ras_idx =
            snapshot.ras_idx == 0 ? 31 : snapshot.ras_idx - 1;
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
    dut->brupdate_b2_br_mask = 0;
    dut->brupdate_b2_cfi_is_br = 0;
    dut->brupdate_b2_cfi_is_call = 0;
    dut->brupdate_b2_cfi_is_ret = 0;

    dut->query_valid = 0;
    dut->query_idx = 0;
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
                               bool taken, uint32_t target,
                               uint8_t resolved_br_mask,
                               bool is_br, bool is_call, bool is_ret) {
    dut->redirect_valid = 1;
    dut->redirect_ftq_idx = idx;
    dut->brupdate_b2_mispredict = 1;
    dut->brupdate_b2_ftq_idx = idx;
    dut->brupdate_b2_taken = taken;
    dut->brupdate_b2_target = target;
    dut->brupdate_b2_br_mask = resolved_br_mask;
    dut->brupdate_b2_cfi_is_br = is_br;
    dut->brupdate_b2_cfi_is_call = is_call;
    dut->brupdate_b2_cfi_is_ret = is_ret;
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

    pulse_commit(dut, indices.front());
    const Observations idle_commit = observe_cycles(dut, 8);
    expect_eq("non-control commit has no BPD update",
              idle_commit.updates.size(), 0);
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

    enqueue(dut, branch);
    enqueue(dut, call);
    const uint32_t youngest_idx = enqueue(dut, ret);

    const Observations before_commit = observe_cycles(dut, 4);
    expect_eq("uncommitted entries do not train predictors",
              before_commit.updates.size(), 0);

    pulse_commit(dut, youngest_idx);
    const Observations committed = observe_cycles(dut, 24);
    expect_eq("commit produces one update per control packet",
              committed.updates.size(), 3);

    expect_update_matches("committed branch", committed.updates[0],
                          branch, false, false, false,
                          branch.cfi_taken, branch.next_pc);
    expect_update_matches("committed call", committed.updates[1],
                          call, false, false, false,
                          call.cfi_taken, call.next_pc);
    expect_update_matches("committed return", committed.updates[2],
                          ret, false, false, false,
                          ret.cfi_taken, ret.next_pc);
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
    drive_mispredict_redirect(dut, offender_idx, false,
                              kActualTarget, 0b0001,
                              true, false, false);
    const Observations observations = observe_cycles(dut, 40);

    expect_eq("mispredict emits one GHist restore",
              observations.ghist_restores.size(), 1);
    const GHist corrected_ghist =
        apply_resolved_control(offender.ghist,
                               false, true, false, false);
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
    expect_update_matches("mispredict correction",
                          observations.updates[0], offender,
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
    run_isolated(test_full_backpressure_and_wrap);
    run_isolated(test_commit_update_payload_and_order);
    run_isolated(test_non_control_commit_is_silent);
    run_isolated(test_redirect_discards_younger_entries);
    run_isolated(test_mispredict_and_repair_walk);
    run_isolated(test_redirect_priority_over_enqueue);
    run_isolated(test_reset_blocks_all_side_effects);

    pass("ftq");
    return 0;
}
