#include "Vgshare_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

#include <cstdint>

namespace {

constexpr int kNumSets = 16;

void set_meta(Vgshare_test_top* dut, uint8_t lane0, uint8_t lane1) {
    dut->update_meta[0] = uint32_t(lane0 & 3U) |
                          (uint32_t(lane1 & 3U) << 2);
    dut->update_meta[1] = 0;
    dut->update_meta[2] = 0;
    dut->update_meta[3] = 0;
}

uint8_t meta_counter(const Vgshare_test_top* dut, int lane) {
    return uint8_t((dut->f2_meta[0] >> (lane * 2)) & 3U);
}

void clear_inputs(Vgshare_test_top* dut) {
    dut->f0_valid = 0;
    dut->f0_pc = 0;
    dut->f0_ghist = 0;
    dut->update_valid = 0;
    dut->update_is_mispredict_update = 0;
    dut->update_is_repair_update = 0;
    dut->update_btb_mispredicts = 0;
    dut->update_pc = 0;
    dut->update_br_mask = 0;
    dut->update_cfi_valid = 0;
    dut->update_cfi_idx = 0;
    dut->update_cfi_taken = 0;
    dut->update_cfi_mispredicted = 0;
    dut->update_cfi_is_br = 0;
    dut->update_cfi_is_b_bl = 0;
    dut->update_cfi_is_jirl = 0;
    dut->update_ghist = 0;
    set_meta(dut, 0, 0);
}

void reset_gshare(Vgshare_test_top* dut) {
    clear_inputs(dut);
    reset_dut(dut);
    expect_eq("ready low after reset", dut->ready, 0);

    for(int cycle = 0; cycle < kNumSets - 1; cycle++) {
        eval_cycle(dut);
        expect_eq("ready low during table initialization", dut->ready, 0);
    }
    eval_cycle(dut);
    expect_eq("ready high after table initialization", dut->ready, 1);
}

void lookup(Vgshare_test_top* dut, uint32_t pc, uint64_t ghist) {
    dut->f0_valid = 1;
    dut->f0_pc = pc;
    dut->f0_ghist = ghist;
    eval_cycle(dut);
    dut->f0_valid = 0;
    eval_cycle(dut);
}

void drive_update(Vgshare_test_top* dut, uint32_t pc, uint64_t ghist,
                  uint8_t br_mask, bool cfi_valid, int cfi_idx,
                  bool cfi_taken, bool cfi_is_br,
                  uint8_t lane0_meta, uint8_t lane1_meta,
                  bool is_mispredict_update = false,
                  bool is_repair_update = false,
                  uint8_t btb_mispredicts = 0,
                  bool cfi_is_b_bl = false,
                  bool cfi_is_jirl = false) {
    dut->update_valid = 1;
    dut->update_is_mispredict_update = is_mispredict_update;
    dut->update_is_repair_update = is_repair_update;
    dut->update_btb_mispredicts = btb_mispredicts;
    dut->update_pc = pc;
    dut->update_br_mask = br_mask;
    dut->update_cfi_valid = cfi_valid;
    dut->update_cfi_idx = cfi_idx;
    dut->update_cfi_taken = cfi_taken;
    dut->update_cfi_is_br = cfi_is_br;
    dut->update_cfi_is_b_bl = cfi_is_b_bl;
    dut->update_cfi_is_jirl = cfi_is_jirl;
    dut->update_ghist = ghist;
    set_meta(dut, lane0_meta, lane1_meta);
}

void finish_update(Vgshare_test_top* dut) {
    dut->update_valid = 0;
    eval_cycle(dut);
}

void train(Vgshare_test_top* dut, uint32_t pc, uint64_t ghist,
           uint8_t br_mask, bool cfi_valid, int cfi_idx,
           bool cfi_taken, bool cfi_is_br,
           uint8_t lane0_meta, uint8_t lane1_meta,
           bool is_mispredict_update = false,
           bool is_repair_update = false,
           uint8_t btb_mispredicts = 0,
           bool cfi_is_b_bl = false,
           bool cfi_is_jirl = false) {
    drive_update(dut, pc, ghist, br_mask, cfi_valid, cfi_idx,
                 cfi_taken, cfi_is_br, lane0_meta, lane1_meta,
                 is_mispredict_update, is_repair_update,
                 btb_mispredicts, cfi_is_b_bl, cfi_is_jirl);
    eval_cycle(dut);
    finish_update(dut);
}

void expect_lookup(Vgshare_test_top* dut, const char* name,
                   uint32_t pc, uint64_t ghist,
                   uint8_t providers, uint8_t taken,
                   uint8_t lane0_counter, uint8_t lane1_counter) {
    lookup(dut, pc, ghist);
    expect_eq(name, dut->f2_provider_valid, providers);
    expect_eq("lookup taken", dut->f2_taken, taken);
    expect_eq("lookup lane0 metadata", meta_counter(dut, 0), lane0_counter);
    expect_eq("lookup lane1 metadata", meta_counter(dut, 1), lane1_counter);
}

void test_reset_and_cold_lookup(Vgshare_test_top* dut) {
    reset_gshare(dut);
    expect_lookup(dut, "cold provider invalid", 0x1c001000, 0,
                  0b00, 0b11, 2, 2);
}

void test_two_cycle_alignment(Vgshare_test_top* dut) {
    reset_gshare(dut);
    train(dut, 0x1c001100, 0, 0b01, true, 0, false, true, 2, 2);

    dut->f0_valid = 1;
    dut->f0_pc = 0x1c001100;
    dut->f0_ghist = 0;
    eval_cycle(dut);
    expect_eq("F1 must not expose F0 provider", dut->f2_provider_valid, 0);

    dut->f0_valid = 0;
    eval_cycle(dut);
    expect_eq("F2 provider aligned", dut->f2_provider_valid, 0b01);
    expect_eq("F2 direction aligned", dut->f2_taken, 0b10);
    expect_eq("F2 metadata aligned", meta_counter(dut, 0), 1);

    eval_cycle(dut);
    expect_eq("F2 provider drains with valid", dut->f2_provider_valid, 0);
    expect_eq("F2 direction drains with valid", dut->f2_taken, 0);
    expect_eq("F2 metadata drains with valid", dut->f2_meta[0], 0);
}

void test_same_pc_different_histories(Vgshare_test_top* dut) {
    constexpr uint32_t pc = 0x1c001200;
    reset_gshare(dut);
    train(dut, pc, 0, 0b10, true, 1, false, true, 2, 2);
    train(dut, pc, 1, 0b10, true, 1, true, true, 2, 2);

    expect_lookup(dut, "history zero provider", pc, 0,
                  0b10, 0b01, 2, 1);
    expect_lookup(dut, "history one provider", pc, 1,
                  0b10, 0b11, 2, 3);
}

void test_alternating_branch_uses_history(Vgshare_test_top* dut) {
    constexpr uint32_t pc = 0x1c000770;
    int misses = 0;
    bool previous_outcome = false;
    reset_gshare(dut);

    for(int iteration = 0; iteration < 16; iteration++) {
        const bool actual_taken = (iteration & 1) != 0;
        const uint64_t history = previous_outcome ? 1 : 0;
        lookup(dut, pc, history);

        const bool provider = (dut->f2_provider_valid & 0b10) != 0;
        const bool gshare_taken = (dut->f2_taken & 0b10) != 0;
        const bool effective_taken = provider ? gshare_taken : true;
        if(effective_taken != actual_taken)
            misses++;

        const uint8_t lane1_meta = meta_counter(dut, 1);
        train(dut, pc, history, 0b10, true, 1, actual_taken, true,
              2, lane1_meta);
        previous_outcome = actual_taken;
    }

    expect_eq("N,T alternation warm-up misses", misses, 3);
}

void test_two_lanes_train_independently(Vgshare_test_top* dut) {
    constexpr uint32_t pc = 0x1c001300;
    reset_gshare(dut);
    train(dut, pc, 3, 0b11, true, 1, true, true, 2, 2);
    expect_lookup(dut, "both lanes provide", pc, 3,
                  0b11, 0b10, 1, 3);
}

void test_prediction_metadata_is_update_source(Vgshare_test_top* dut) {
    constexpr uint32_t pc = 0x1c001400;
    reset_gshare(dut);
    train(dut, pc, 0, 0b01, true, 0, true, true, 0, 2);
    expect_lookup(dut, "metadata source provider", pc, 0,
                  0b01, 0b10, 1, 2);
}

void test_stale_metadata_write_bypass(Vgshare_test_top* dut) {
    constexpr uint32_t pc = 0x1c001500;
    const bool outcomes[] = {false, true, false, true};
    reset_gshare(dut);

    for(bool outcome : outcomes) {
        drive_update(dut, pc, 0, 0b10, true, 1, outcome, true, 2, 2);
        eval_cycle(dut);
    }
    finish_update(dut);

    expect_lookup(dut, "stale metadata bypass provider", pc, 0,
                  0b10, 0b11, 2, 2);
}

void test_lookup_write_collision(Vgshare_test_top* dut) {
    constexpr uint32_t pc = 0x1c001580;
    reset_gshare(dut);

    drive_update(dut, pc, 0, 0b01, true, 0, false, true, 2, 2);
    eval_cycle(dut);

    dut->update_valid = 0;
    dut->f0_valid = 1;
    dut->f0_pc = pc;
    dut->f0_ghist = 0;
    eval_cycle(dut);

    dut->f0_valid = 0;
    eval_cycle(dut);
    expect_eq("read/write collision provider", dut->f2_provider_valid, 0b01);
    expect_eq("read/write collision direction", dut->f2_taken, 0b10);
    expect_eq("read/write collision metadata", meta_counter(dut, 0), 1);
}

void test_provider_bits_survive_bypass_eviction(Vgshare_test_top* dut) {
    constexpr uint32_t pc = 0x1c001a00;
    reset_gshare(dut);

    train(dut, pc, 0, 0b01, true, 0, false, true, 2, 2);
    train(dut, pc + 0x10, 0, 0b01, true, 0, false, true, 2, 2);
    train(dut, pc + 0x20, 0, 0b01, true, 0, false, true, 2, 2);

    train(dut, pc, 0, 0b10, true, 1, true, true, 1, 2);
    expect_lookup(dut, "provider lanes survive bypass eviction", pc, 0,
                  0b11, 0b10, 1, 3);
}

void test_noncommit_updates_are_ignored(Vgshare_test_top* dut) {
    reset_gshare(dut);

    train(dut, 0x1c001600, 0, 0b01, true, 0, false, true, 2, 2,
          true, false, 0);
    expect_lookup(dut, "mispredict update ignored", 0x1c001600, 0,
                  0, 3, 2, 2);

    train(dut, 0x1c001610, 0, 0b01, true, 0, false, true, 2, 2,
          false, true, 0);
    expect_lookup(dut, "repair update ignored", 0x1c001610, 0,
                  0, 3, 2, 2);

    train(dut, 0x1c001620, 0, 0b01, true, 0, false, true, 2, 2,
          false, false, 0b01);
    expect_lookup(dut, "BTB repair update ignored", 0x1c001620, 0,
                  0, 3, 2, 2);
}

void test_unconditional_cfi_does_not_train(Vgshare_test_top* dut) {
    reset_gshare(dut);

    train(dut, 0x1c001700, 0, 0, true, 0, true, false, 2, 2,
          false, false, 0, true, false);
    expect_lookup(dut, "B/BL does not train", 0x1c001700, 0,
                  0, 3, 2, 2);

    train(dut, 0x1c001710, 0, 0, true, 0, true, false, 2, 2,
          false, false, 0, false, true);
    expect_lookup(dut, "JIRL does not train", 0x1c001710, 0,
                  0, 3, 2, 2);
}

void test_counter_saturation(Vgshare_test_top* dut) {
    constexpr uint32_t pc = 0x1c001800;
    reset_gshare(dut);

    for(int count = 0; count < 10; count++) {
        drive_update(dut, pc, 0, 0b01, true, 0, true, true, 2, 2);
        eval_cycle(dut);
    }
    finish_update(dut);
    expect_lookup(dut, "taken saturation", pc, 0, 0b01, 0b11, 3, 2);

    for(int count = 0; count < 10; count++) {
        drive_update(dut, pc, 0, 0b01, true, 0, false, true, 2, 2);
        eval_cycle(dut);
    }
    finish_update(dut);
    expect_lookup(dut, "not-taken saturation", pc, 0,
                  0b01, 0b10, 0, 2);
}

void test_fetch_row_pc_index(Vgshare_test_top* dut) {
    constexpr uint32_t pc_a = 0x1c001900;
    constexpr uint32_t pc_b = pc_a + 0x10;
    reset_gshare(dut);
    train(dut, pc_a, 0, 0b01, true, 0, false, true, 2, 2);

    expect_lookup(dut, "trained fetch row", pc_a, 0,
                  0b01, 0b10, 1, 2);
    expect_lookup(dut, "adjacent fetch row independent", pc_b, 0,
                  0, 3, 2, 2);
    expect_lookup(dut, "PC/history XOR aliases as specified", pc_b, 1,
                  0b01, 0b10, 1, 2);
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vgshare_test_top;

    test_reset_and_cold_lookup(dut);
    test_two_cycle_alignment(dut);
    test_same_pc_different_histories(dut);
    test_alternating_branch_uses_history(dut);
    test_two_lanes_train_independently(dut);
    test_prediction_metadata_is_update_source(dut);
    test_stale_metadata_write_bypass(dut);
    test_lookup_write_collision(dut);
    test_provider_bits_survive_bypass_eviction(dut);
    test_noncommit_updates_are_ignored(dut);
    test_unconditional_cfi_does_not_train(dut);
    test_counter_saturation(dut);
    test_fetch_row_pc_index(dut);

    dut->final();
    delete dut;
    pass("gshare");
    return 0;
}
