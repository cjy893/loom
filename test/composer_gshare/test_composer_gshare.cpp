#include "Vcomposer_gshare_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

#include <cstdint>
#include <cstdio>

namespace {

constexpr int kGshareResetCycles = 16;
constexpr uint32_t kPc = 0x1c001000;
constexpr uint32_t kTarget = 0x1c008000;
int failures = 0;

struct PredInfo {
    bool taken;
    bool is_br;
    bool is_b_bl;
    bool is_jirl;
    uint32_t target;
};

PredInfo read_pred(uint32_t word0, uint32_t word1,
                   uint32_t word2, int lane) {
    const uint64_t raw = (lane == 0)
        ? uint64_t(word0) | (uint64_t(word1 & 0xFU) << 32)
        : (uint64_t(word1) >> 4) |
          (uint64_t(word2 & 0xFFU) << 28);
    return {
        bool((raw >> 35) & 1),
        bool((raw >> 34) & 1),
        bool((raw >> 33) & 1),
        bool((raw >> 32) & 1),
        uint32_t(raw)
    };
}

PredInfo read_f1(Vcomposer_gshare_test_top* dut, int lane) {
    return read_pred(dut->f1_preds[0], dut->f1_preds[1],
                     dut->f1_preds[2], lane);
}

PredInfo read_f2(Vcomposer_gshare_test_top* dut, int lane) {
    return read_pred(dut->f2_preds[0], dut->f2_preds[1],
                     dut->f2_preds[2], lane);
}

PredInfo read_f3(Vcomposer_gshare_test_top* dut, int lane) {
    return read_pred(dut->f3_preds[0], dut->f3_preds[1],
                     dut->f3_preds[2], lane);
}

void expect_pred(const char* name, const PredInfo& actual,
                 bool taken, bool is_br, bool is_b_bl,
                 bool is_jirl, uint32_t target) {
    if(actual.taken == taken && actual.is_br == is_br &&
       actual.is_b_bl == is_b_bl && actual.is_jirl == is_jirl &&
       actual.target == target)
        return;

    std::fprintf(stderr,
        "FAIL: %s: got{t=%u br=%u b_bl=%u jirl=%u target=0x%08x} "
        "expected{t=%u br=%u b_bl=%u jirl=%u target=0x%08x}\n",
        name, actual.taken, actual.is_br, actual.is_b_bl,
        actual.is_jirl, actual.target, taken, is_br, is_b_bl,
        is_jirl, target);
    failures++;
}

void expect_bits(const char* name, uint32_t actual,
                 uint32_t mask, uint32_t expected) {
    if((actual & mask) == expected)
        return;
    std::fprintf(stderr,
        "FAIL: %s: got 0x%x (mask 0x%x), expected 0x%x\n",
        name, actual, mask, expected);
    failures++;
}

void clear_update(Vcomposer_gshare_test_top* dut) {
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
    dut->update_target = 0;
    for(int word = 0; word < 4; word++)
        dut->update_meta[word] = 0;
}

void clear_inputs(Vcomposer_gshare_test_top* dut) {
    dut->f0_valid = 0;
    dut->f0_pc = 0;
    dut->f0_ghist = 0;
    clear_update(dut);
}

void idle_cycle(Vcomposer_gshare_test_top* dut) {
    dut->f0_valid = 0;
    eval_cycle(dut);
}

void reset_predictor(Vcomposer_gshare_test_top* dut) {
    clear_inputs(dut);
    reset_dut(dut);
    expect_eq("Composer ready low after reset", dut->ready, 0);

    for(int cycle = 0; cycle < kGshareResetCycles - 1; cycle++) {
        idle_cycle(dut);
        expect_eq("Composer waits for both direction tables", dut->ready, 0);
    }
    idle_cycle(dut);
    expect_eq("Composer ready after both direction tables", dut->ready, 1);
    idle_cycle(dut);
    idle_cycle(dut);
}

void request_cycle(Vcomposer_gshare_test_top* dut,
                   uint32_t pc, uint64_t ghist) {
    dut->f0_valid = 1;
    dut->f0_pc = pc;
    dut->f0_ghist = ghist;
    eval_cycle(dut);
}

void request_to_f2(Vcomposer_gshare_test_top* dut,
                   uint32_t pc, uint64_t ghist) {
    request_cycle(dut, pc, ghist);
    idle_cycle(dut);
}

void capture_f3_meta(Vcomposer_gshare_test_top* dut,
                     uint32_t pc, uint64_t ghist,
                     uint32_t* meta) {
    request_cycle(dut, pc, ghist);
    idle_cycle(dut);
    idle_cycle(dut);
    for(int word = 0; word < 4; word++)
        meta[word] = dut->f3_meta[word];
}

void train(Vcomposer_gshare_test_top* dut,
           uint32_t pc, uint64_t ghist, int cfi_idx,
           bool taken, bool is_br, bool is_b_bl = false,
           bool is_jirl = false, uint32_t target = kTarget) {
    uint32_t prediction_meta[4];
    capture_f3_meta(dut, pc, ghist, prediction_meta);

    dut->update_valid = 1;
    dut->update_pc = pc;
    dut->update_br_mask = is_br ? (1U << cfi_idx) : 0;
    dut->update_cfi_valid = 1;
    dut->update_cfi_idx = cfi_idx;
    dut->update_cfi_taken = taken;
    dut->update_cfi_is_br = is_br;
    dut->update_cfi_is_b_bl = is_b_bl;
    dut->update_cfi_is_jirl = is_jirl;
    dut->update_ghist = ghist;
    dut->update_target = target;
    for(int word = 0; word < 4; word++)
        dut->update_meta[word] = prediction_meta[word];
    eval_cycle(dut);
    clear_update(dut);
    idle_cycle(dut);
}

void train_bim_not_taken_and_gshare_history_zero(
    Vcomposer_gshare_test_top* dut) {
    train(dut, kPc, 0, 0, true, true);
    for(int count = 0; count < 4; count++)
        train(dut, kPc, 0, 0, false, true);
}

void train_divergent_histories(Vcomposer_gshare_test_top* dut) {
    train_bim_not_taken_and_gshare_history_zero(dut);
    train(dut, kPc, 1, 0, true, true);
}

void test_ready_waits_for_gshare(Vcomposer_gshare_test_top* dut) {
    reset_predictor(dut);
}

void test_cold_gshare_falls_back_to_bim(Vcomposer_gshare_test_top* dut) {
    reset_predictor(dut);
    train_bim_not_taken_and_gshare_history_zero(dut);

    request_to_f2(dut, kPc, 1);
    expect_pred("cold GShare falls back to BIM", read_f2(dut, 0),
                false, true, false, false, kTarget);
    expect_bits("cold F2 meta keeps BIM then GShare", dut->f2_meta[0],
                0xFF, 0xA8);
}

void test_valid_gshare_overrides_bim(Vcomposer_gshare_test_top* dut) {
    reset_predictor(dut);
    train_divergent_histories(dut);

    request_to_f2(dut, kPc, 1);
    expect_pred("valid GShare overrides not-taken BIM", read_f2(dut, 0),
                true, true, false, false, kTarget);

    request_to_f2(dut, kPc, 0);
    expect_pred("history-zero context remains not-taken", read_f2(dut, 0),
                false, true, false, false, kTarget);
}

void test_metadata_layout_and_update_slices(
    Vcomposer_gshare_test_top* dut) {
    reset_predictor(dut);
    train_divergent_histories(dut);

    request_cycle(dut, kPc, 1);
    idle_cycle(dut);
    expect_bits("F2 meta is BIM|GShare", dut->f2_meta[0],
                0xFF, 0xB9);

    idle_cycle(dut);
    expect_pred("F3 keeps GShare direction", read_f3(dut, 0),
                true, true, false, false, kTarget);
    expect_bits("F3 meta is BTB|BIM|GShare", dut->f3_meta[0],
                0xFFF, 0xB91);
}

void test_gshare_never_overrides_unconditional(
    Vcomposer_gshare_test_top* dut) {
    reset_predictor(dut);
    train_bim_not_taken_and_gshare_history_zero(dut);
    train(dut, kPc, 0, 0, true, false, true, false,
          0x1c009000);

    request_to_f2(dut, kPc, 0);
    expect_pred("GShare does not override B/BL", read_f2(dut, 0),
                true, false, true, false, 0x1c009000);
}

void test_back_to_back_history_alignment(
    Vcomposer_gshare_test_top* dut) {
    reset_predictor(dut);
    train_divergent_histories(dut);

    request_cycle(dut, kPc, 0);
    request_cycle(dut, kPc, 1);
    expect_pred("back-to-back F2 uses first history", read_f2(dut, 0),
                false, true, false, false, kTarget);

    idle_cycle(dut);
    expect_pred("back-to-back F2 uses second history", read_f2(dut, 0),
                true, true, false, false, kTarget);
    expect_pred("back-to-back F3 keeps first direction", read_f3(dut, 0),
                false, true, false, false, kTarget);
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vcomposer_gshare_test_top;

    test_ready_waits_for_gshare(dut);
    test_cold_gshare_falls_back_to_bim(dut);
    test_valid_gshare_overrides_bim(dut);
    test_metadata_layout_and_update_slices(dut);
    test_gshare_never_overrides_unconditional(dut);
    test_back_to_back_history_alignment(dut);

    dut->final();
    delete dut;
    if(failures != 0) {
        std::fprintf(stderr,
                     "FAIL: composer_gshare (%d checks failed)\n",
                     failures);
        return 1;
    }
    pass("composer_gshare");
    return 0;
}
