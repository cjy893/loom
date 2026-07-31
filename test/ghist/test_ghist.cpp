#include "Vghist_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

#include <cstdint>
#include <cstdio>

namespace {

constexpr int kRasEntries = 32;

// global_history_t packs ras_idx in bits [4:0], the two "new" flags in
// bits [6:5], current_saw_branch_not_taken in bit 7, and history above it.
uint64_t read_hist(Vghist_test_top* dut) {
    const uint32_t w0 = dut->current_ghist[0];
    const uint32_t w1 = dut->current_ghist[1];
    const uint32_t w2 = dut->current_ghist[2];
    return (uint64_t(w0) >> 8)
         | (uint64_t(w1) << 24)
         | (uint64_t(w2 & 0xFF) << 56);
}

uint8_t read_ras_idx(Vghist_test_top* dut) {
    return uint8_t(dut->current_ghist[0] & 0x1F);
}

bool read_saw_nt(Vghist_test_top* dut) {
    return (dut->current_ghist[0] >> 7) & 1;
}

uint8_t read_new_flags(Vghist_test_top* dut) {
    return uint8_t((dut->current_ghist[0] >> 5) & 0x3);
}

void set_restore(Vghist_test_top* dut, uint64_t hist, uint8_t ras,
                 bool saw_nt = false) {
    dut->restore_old_history = hist;
    dut->restore_saw_nt = saw_nt;
    dut->restore_ras_idx = ras;
}

void clear_event(Vghist_test_top* dut) {
    dut->f1_update_valid = 0;
    dut->f1_is_br = 0;
    dut->f1_taken = 0;
    dut->f1_is_call = 0;
    dut->f1_is_ret = 0;
}

void clear_inputs(Vghist_test_top* dut) {
    clear_event(dut);
    dut->restore_valid = 0;
    set_restore(dut, 0, 0);
}

void restore_state(Vghist_test_top* dut, uint64_t hist, uint8_t ras,
                   bool saw_nt = false) {
    clear_event(dut);
    dut->restore_valid = 1;
    set_restore(dut, hist, ras, saw_nt);
    eval_cycle(dut);
    dut->restore_valid = 0;
}

void update(Vghist_test_top* dut, bool is_br, bool taken,
            bool is_call, bool is_ret) {
    dut->f1_update_valid = 1;
    dut->f1_is_br = is_br;
    dut->f1_taken = taken;
    dut->f1_is_call = is_call;
    dut->f1_is_ret = is_ret;
    eval_cycle(dut);
    clear_event(dut);
}

void expect_state(const char* prefix, Vghist_test_top* dut,
                  uint64_t hist, uint8_t ras, bool saw_nt) {
    char name[96];

    std::snprintf(name, sizeof(name), "%s history", prefix);
    expect_eq(name, read_hist(dut), hist);
    std::snprintf(name, sizeof(name), "%s RAS index", prefix);
    expect_eq(name, read_ras_idx(dut), ras);
    std::snprintf(name, sizeof(name), "%s saw_nt", prefix);
    expect_eq(name, read_saw_nt(dut), saw_nt);
    std::snprintf(name, sizeof(name), "%s new flags", prefix);
    expect_eq(name, read_new_flags(dut), 0);
}

void test_reset(Vghist_test_top* dut) {
    expect_state("reset", dut, 0, 0, false);
}

void test_branch_updates(Vghist_test_top* dut) {
    restore_state(dut, 0, 0);

    update(dut, true, true, false, false);
    expect_state("taken branch", dut, 1, 0, false);

    update(dut, true, false, false, false);
    expect_state("not-taken branch", dut, 2, 0, true);

    update(dut, true, true, false, false);
    update(dut, true, true, false, false);
    expect_state("branch pattern 1011", dut, 0xB, 0, false);
}

void test_full_history_width(Vghist_test_top* dut) {
    restore_state(dut, 0, 0);
    for (int i = 0; i < 65; ++i) {
        update(dut, true, true, false, false);
    }
    expect_state("64-bit history saturation", dut, ~0ULL, 0, false);
}

void test_invalid_update_holds_all_state(Vghist_test_top* dut) {
    constexpr uint64_t history = 0x123456789ABCDEF0ULL;
    restore_state(dut, history, 9, true);

    dut->f1_update_valid = 0;
    dut->f1_is_br = 1;
    dut->f1_taken = 1;
    dut->f1_is_call = 1;
    dut->f1_is_ret = 0;
    eval_cycle(dut);
    clear_event(dut);

    expect_state("invalid update holds", dut, history, 9, true);
}

void test_non_control_update_holds_all_state(Vghist_test_top* dut) {
    constexpr uint64_t history = 0xA5A55A5AF0F00F0FULL;
    restore_state(dut, history, 11, true);
    update(dut, false, false, false, false);
    expect_state("valid non-control holds", dut, history, 11, true);
}

void test_restore_all_fields(Vghist_test_top* dut) {
    update(dut, true, true, false, false);
    update(dut, false, false, true, false);

    restore_state(dut, 0xDEADBEEFCAFE1234ULL, 7, true);
    expect_state("restore all fields", dut,
                 0xDEADBEEFCAFE1234ULL, 7, true);
}

void test_restore_priority(Vghist_test_top* dut) {
    constexpr uint64_t restored = 0x0F0E0D0C0B0A0908ULL;

    dut->restore_valid = 1;
    set_restore(dut, restored, 13, true);
    dut->f1_update_valid = 1;
    dut->f1_is_br = 1;
    dut->f1_taken = 1;
    dut->f1_is_call = 1;
    dut->f1_is_ret = 0;
    eval_cycle(dut);
    dut->restore_valid = 0;
    clear_event(dut);

    expect_state("restore wins over update", dut, restored, 13, true);
}

void test_ras_wrap(Vghist_test_top* dut) {
    restore_state(dut, 0x55, kRasEntries - 1, true);
    update(dut, false, false, true, false);
    expect_state("CALL wraps RAS", dut, 0x55, 0, true);

    update(dut, false, false, false, true);
    expect_state("RET wraps RAS", dut, 0x55, kRasEntries - 1, true);
}

void test_branch_and_call_same_cycle(Vghist_test_top* dut) {
    restore_state(dut, 1, 3, false);
    update(dut, true, false, true, false);
    expect_state("branch plus CALL", dut, 2, 4, true);
}

void test_branch_and_ret_same_cycle(Vghist_test_top* dut) {
    restore_state(dut, 2, 0, true);
    update(dut, true, true, false, true);
    expect_state("branch plus RET", dut, 5, kRasEntries - 1, false);
}

void test_consecutive_updates_without_bubbles(Vghist_test_top* dut) {
    restore_state(dut, 0, 0, false);

    dut->f1_update_valid = 1;

    dut->f1_is_br = 1;
    dut->f1_taken = 1;
    dut->f1_is_call = 1;
    dut->f1_is_ret = 0;
    eval_cycle(dut);

    dut->f1_is_br = 1;
    dut->f1_taken = 0;
    dut->f1_is_call = 0;
    dut->f1_is_ret = 0;
    eval_cycle(dut);

    dut->f1_is_br = 1;
    dut->f1_taken = 1;
    dut->f1_is_call = 0;
    dut->f1_is_ret = 1;
    eval_cycle(dut);

    clear_event(dut);
    expect_state("three consecutive updates", dut, 5, 0, false);
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vghist_test_top;
    clear_inputs(dut);
    reset_dut(dut);

    test_reset(dut);
    test_branch_updates(dut);
    test_full_history_width(dut);
    test_invalid_update_holds_all_state(dut);
    test_non_control_update_holds_all_state(dut);
    test_restore_all_fields(dut);
    test_restore_priority(dut);
    test_ras_wrap(dut);
    test_branch_and_call_same_cycle(dut);
    test_branch_and_ret_same_cycle(dut);
    test_consecutive_updates_without_bubbles(dut);

    pass("ghist");
    delete dut;
    return 0;
}
