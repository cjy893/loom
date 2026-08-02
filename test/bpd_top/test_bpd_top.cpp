#include "Vbpd_top_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

#include <cstdint>
#include <cstdio>
#include <cstdlib>

namespace {

constexpr int kBimResetCycles = 2048;
int failures = 0;

struct PredInfo {
    bool taken;
    bool is_br;
    bool is_b_bl;
    bool is_jirl;
    uint32_t target;
};

PredInfo read_pred(uint32_t w0, uint32_t w1, uint32_t w2, int lane) {
    const uint64_t raw = (lane == 0)
        ? (uint64_t(w0) | (uint64_t(w1 & 0xF) << 32))
        : ((uint64_t(w1) >> 4) | (uint64_t(w2 & 0xFF) << 28));
    return {
        bool((raw >> 35) & 1),
        bool((raw >> 34) & 1),
        bool((raw >> 33) & 1),
        bool((raw >> 32) & 1),
        uint32_t(raw)
    };
}

PredInfo read_f1(Vbpd_top_test_top* dut, int lane) {
    return read_pred(dut->f1_preds[0], dut->f1_preds[1],
                     dut->f1_preds[2], lane);
}

PredInfo read_f2(Vbpd_top_test_top* dut, int lane) {
    return read_pred(dut->f2_preds[0], dut->f2_preds[1],
                     dut->f2_preds[2], lane);
}

PredInfo read_f3(Vbpd_top_test_top* dut, int lane) {
    return read_pred(dut->f3_preds[0], dut->f3_preds[1],
                     dut->f3_preds[2], lane);
}

void expect_pred(const char* name, const PredInfo& actual,
                 bool taken, bool is_br, bool is_b_bl, bool is_jirl,
                 uint32_t target) {
    if (actual.taken == taken && actual.is_br == is_br &&
        actual.is_b_bl == is_b_bl && actual.is_jirl == is_jirl &&
        actual.target == target) {
        return;
    }

    std::fprintf(stderr,
        "FAIL: %s: got{t=%u br=%u b_bl=%u jirl=%u target=0x%08x} "
        "expected{t=%u br=%u b_bl=%u jirl=%u target=0x%08x}\n",
        name, actual.taken, actual.is_br, actual.is_b_bl, actual.is_jirl,
        actual.target, taken, is_br, is_b_bl, is_jirl, target);
    ++failures;
}

void expect_miss(const char* name, const PredInfo& actual) {
    expect_pred(name, actual, false, false, false, false, 0);
}

void expect_low_bits(const char* name, uint32_t actual,
                     uint32_t mask, uint32_t expected) {
    if ((actual & mask) == expected) {
        return;
    }
    std::fprintf(stderr,
        "FAIL: %s: got 0x%x (mask 0x%x), expected 0x%x\n",
        name, actual, mask, expected);
    ++failures;
}

void clear_update(Vbpd_top_test_top* dut) {
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
    dut->update_target = 0;
    dut->update_meta[0] = 0;
    dut->update_meta[1] = 0;
    dut->update_meta[2] = 0;
    dut->update_meta[3] = 0;
}

void clear_inputs(Vbpd_top_test_top* dut) {
    dut->f0_valid = 0;
    dut->f0_pc = 0;
    clear_update(dut);
}

void idle_cycle(Vbpd_top_test_top* dut) {
    dut->f0_valid = 0;
    eval_cycle(dut);
}

void reset_predictor(Vbpd_top_test_top* dut) {
    clear_inputs(dut);
    reset_dut(dut);
    expect_eq("composer ready low after reset", dut->ready, 0);

    for (int i = 0; i < kBimResetCycles - 1; ++i) {
        idle_cycle(dut);
        expect_eq("composer ready low during BIM initialization", dut->ready, 0);
    }

    idle_cycle(dut);
    expect_eq("composer ready high after BIM initialization", dut->ready, 1);

    // Drain the prediction pipeline before starting an independent case.
    idle_cycle(dut);
    idle_cycle(dut);
}

void train(Vbpd_top_test_top* dut, uint32_t pc, int cfi_idx,
           uint32_t target, bool is_br, bool is_b_bl, bool is_jirl,
           bool taken, bool mispredict = false, bool repair = false,
           uint32_t btb_mispredicts = 0) {
    uint32_t prediction_meta[4];

    // Model the FTQ contract: capture the final composed prediction meta,
    // then return that snapshot with the later predictor update.
    dut->f0_valid = 1;
    dut->f0_pc = pc;
    eval_cycle(dut);
    dut->f0_valid = 0;
    eval_cycle(dut);
    eval_cycle(dut);
    for (int word = 0; word < 4; ++word)
        prediction_meta[word] = dut->f3_meta[word];

    dut->f0_valid = 0;
    dut->update_valid = 1;
    dut->update_is_mispredict_update = mispredict;
    dut->update_is_repair_update = repair;
    dut->update_btb_mispredicts = btb_mispredicts;
    dut->update_pc = pc;
    dut->update_br_mask = is_br ? (1u << cfi_idx) : 0;
    dut->update_cfi_valid = 1;
    dut->update_cfi_idx = cfi_idx;
    dut->update_cfi_taken = taken;
    dut->update_cfi_mispredicted = mispredict;
    dut->update_cfi_is_br = is_br;
    dut->update_cfi_is_b_bl = is_b_bl;
    dut->update_cfi_is_jirl = is_jirl;
    dut->update_target = target;
    for (int word = 0; word < 4; ++word)
        dut->update_meta[word] = prediction_meta[word];
    eval_cycle(dut);
    clear_update(dut);
    idle_cycle(dut);
}

void request_cycle(Vbpd_top_test_top* dut, uint32_t pc) {
    dut->f0_valid = 1;
    dut->f0_pc = pc;
    eval_cycle(dut);
}

void test_initialization_blocks_updates(Vbpd_top_test_top* dut) {
    constexpr uint32_t pc = 0x1c000800;

    clear_inputs(dut);
    reset_dut(dut);
    expect_eq("init gate ready low", dut->ready, 0);

    train(dut, pc, 0, 0x1c008000, false, true, false, true);

    int wait_cycles = 1;
    while (!dut->ready && wait_cycles <= kBimResetCycles) {
        idle_cycle(dut);
        ++wait_cycles;
    }
    expect_true("init gate ready eventually high", dut->ready);

    request_cycle(dut, pc);
    expect_miss("init gate F1 update rejected", read_f1(dut, 0));
    idle_cycle(dut);
    expect_miss("init gate F2 update rejected", read_f2(dut, 0));
    idle_cycle(dut);
    expect_miss("init gate F3 update rejected", read_f3(dut, 0));
}

void test_cold_miss(Vbpd_top_test_top* dut) {
    reset_predictor(dut);

    request_cycle(dut, 0x1c001000);
    expect_miss("cold F1 lane0", read_f1(dut, 0));
    expect_miss("cold F1 lane1", read_f1(dut, 1));

    idle_cycle(dut);
    expect_miss("cold F2 lane0", read_f2(dut, 0));

    idle_cycle(dut);
    expect_miss("cold F3 lane0", read_f3(dut, 0));
}

void test_b_bl_pipeline_and_meta(Vbpd_top_test_top* dut) {
    reset_predictor(dut);
    constexpr uint32_t pc = 0x1c002000;
    constexpr uint32_t target = 0x1c008000;
    train(dut, pc, 0, target, false, true, false, true);

    request_cycle(dut, pc);
    expect_pred("B_BL F1", read_f1(dut, 0),
                true, false, true, false, target);

    idle_cycle(dut);
    expect_pred("B_BL F2", read_f2(dut, 0),
                true, false, true, false, target);
    expect_low_bits("B_BL F2 BIM meta", dut->f2_meta[0], 0xF, 0xB);

    idle_cycle(dut);
    expect_pred("B_BL F3", read_f3(dut, 0),
                true, false, true, false, target);
    expect_low_bits("B_BL F3 composed meta", dut->f3_meta[0], 0xFF, 0xB1);
}

void test_bim_direction_override(Vbpd_top_test_top* dut) {
    reset_predictor(dut);
    constexpr uint32_t pc = 0x1c003000;
    constexpr uint32_t target = 0x1c009000;

    train(dut, pc, 0, target, true, false, false, true);
    for (int i = 0; i < 4; ++i) {
        train(dut, pc, 0, target, true, false, false, false);
    }

    request_cycle(dut, pc);
    expect_pred("BR not-taken F1", read_f1(dut, 0),
                true, true, false, false, target);

    idle_cycle(dut);
    expect_pred("BR not-taken F2", read_f2(dut, 0),
                false, true, false, false, target);
    expect_low_bits("BR not-taken counter meta", dut->f2_meta[0], 0x3, 0x0);

    idle_cycle(dut);
    expect_pred("BR not-taken F3", read_f3(dut, 0),
                false, true, false, false, target);
}

void test_two_lanes(Vbpd_top_test_top* dut) {
    reset_predictor(dut);
    constexpr uint32_t pc = 0x1c004000;
    train(dut, pc, 0, 0x11110000, false, true, false, true);
    train(dut, pc, 1, 0x22220000, false, false, true, true);

    request_cycle(dut, pc);
    expect_pred("two lanes F1 lane0", read_f1(dut, 0),
                true, false, true, false, 0x11110000);
    expect_pred("two lanes F1 lane1", read_f1(dut, 1),
                true, false, false, true, 0x22220000);

    idle_cycle(dut);
    expect_pred("two lanes F2 lane0", read_f2(dut, 0),
                true, false, true, false, 0x11110000);
    expect_pred("two lanes F2 lane1", read_f2(dut, 1),
                true, false, false, true, 0x22220000);

    idle_cycle(dut);
    expect_pred("two lanes F3 lane0", read_f3(dut, 0),
                true, false, true, false, 0x11110000);
    expect_pred("two lanes F3 lane1", read_f3(dut, 1),
                true, false, false, true, 0x22220000);
    expect_low_bits("two lanes BTB hit meta", dut->f3_meta[0], 0x3, 0x3);
}

void test_not_taken_does_not_allocate(Vbpd_top_test_top* dut) {
    reset_predictor(dut);
    constexpr uint32_t pc = 0x1c005000;
    for (int i = 0; i < 4; ++i) {
        train(dut, pc, 0, 0x0BADF00D, true, false, false, false);
    }

    request_cycle(dut, pc);
    expect_miss("not-taken no UBTB allocation", read_f1(dut, 0));
    idle_cycle(dut);
    expect_miss("not-taken remains miss at F2", read_f2(dut, 0));
    idle_cycle(dut);
    expect_miss("not-taken remains miss at F3", read_f3(dut, 0));
    expect_low_bits("not-taken no BTB allocation", dut->f3_meta[0], 0x1, 0);
}

void test_no_spurious_update(Vbpd_top_test_top* dut) {
    reset_predictor(dut);
    constexpr uint32_t pc = 0x1c006000;

    dut->update_pc = pc;
    dut->update_cfi_valid = 1;
    dut->update_cfi_idx = 0;
    dut->update_cfi_taken = 1;
    dut->update_cfi_is_b_bl = 1;
    dut->update_target = 0xEEEE0000;
    eval_cycle(dut);
    clear_update(dut);

    request_cycle(dut, pc);
    expect_miss("update_valid=0 F1 miss", read_f1(dut, 0));
    idle_cycle(dut);
    idle_cycle(dut);
    expect_miss("update_valid=0 F3 miss", read_f3(dut, 0));
}

void test_update_modes_follow_v4_contract(Vbpd_top_test_top* dut) {
    reset_predictor(dut);
    constexpr uint32_t pc = 0x1c007000;
    constexpr uint32_t commit_target = 0xAAAA0000;

    train(dut, pc, 0, commit_target, false, true, false, true);

    request_cycle(dut, pc);
    expect_pred("commit update trains UBTB", read_f1(dut, 0),
                true, false, true, false, commit_target);
    idle_cycle(dut);
    idle_cycle(dut);
    expect_pred("commit update trains BTB", read_f3(dut, 0),
                true, false, true, false, commit_target);
    expect_low_bits("commit update creates BTB hit", dut->f3_meta[0],
                    0x1, 0x1);

    train(dut, pc, 0, 0xBBBB0000, false, true, false, true, true);

    request_cycle(dut, pc);
    expect_pred("mispredict update preserves UBTB target", read_f1(dut, 0),
                true, false, true, false, commit_target);
    idle_cycle(dut);
    idle_cycle(dut);
    expect_pred("mispredict update preserves BTB target", read_f3(dut, 0),
                true, false, true, false, commit_target);

    train(dut, pc, 0, 0xCCCC0000, false, true, false, true,
          false, true);

    request_cycle(dut, pc);
    expect_pred("repair update preserves UBTB target", read_f1(dut, 0),
                true, false, true, false, commit_target);
    idle_cycle(dut);
    idle_cycle(dut);
    expect_pred("repair update preserves BTB target", read_f3(dut, 0),
                true, false, true, false, commit_target);

    train(dut, pc, 0, 0xDDDD0000, false, true, false, true,
          false, false, 1);

    request_cycle(dut, pc);
    expect_pred("BTB mispredict preserves UBTB target", read_f1(dut, 0),
                true, false, true, false, commit_target);
    idle_cycle(dut);
    idle_cycle(dut);
    expect_pred("BTB invalidation falls back to UBTB target", read_f3(dut, 0),
                true, false, true, false, commit_target);
    expect_low_bits("BTB mispredict invalidates BTB hit", dut->f3_meta[0],
                    0x1, 0x0);
}

void test_real_ubtb_miss_btb_hit(Vbpd_top_test_top* dut) {
    reset_predictor(dut);
    constexpr uint32_t victim_pc = 0x1c100000;
    constexpr uint32_t victim_target = 0x1c200000;

    train(dut, victim_pc, 0, victim_target, false, true, false, true);

    // UBTB is fully associative with 16 entries. These 16 distinct PCs evict
    // its entry 0. Their BTB set indices are 1..16, so the victim in set 0
    // remains resident in the two-way BTB.
    for (int i = 1; i <= 16; ++i) {
        train(dut, victim_pc + uint32_t(i * 4), 0,
              0x30000000u + uint32_t(i * 4),
              false, true, false, true);
    }

    request_cycle(dut, victim_pc);
    expect_miss("real UBTB miss at F1", read_f1(dut, 0));

    idle_cycle(dut);
    expect_miss("real UBTB miss passes BIM", read_f2(dut, 0));

    idle_cycle(dut);
    expect_pred("real BTB hit supplies target at F3", read_f3(dut, 0),
                true, false, true, false, victim_target);
    expect_low_bits("real BTB hit meta", dut->f3_meta[0], 0x1, 0x1);
}

void test_true_back_to_back(Vbpd_top_test_top* dut) {
    reset_predictor(dut);
    constexpr uint32_t pc_a = 0x1c300000;
    constexpr uint32_t pc_b = pc_a + 8;
    constexpr uint32_t pc_c = pc_a + 16;

    train(dut, pc_a, 0, 0xA0000000, false, true, false, true);
    train(dut, pc_b, 0, 0xB0000000, true, false, false, true);
    train(dut, pc_c, 0, 0xC0000000, false, false, true, true);

    request_cycle(dut, pc_a);
    expect_pred("back-to-back cycle1 F1=A", read_f1(dut, 0),
                true, false, true, false, 0xA0000000);

    request_cycle(dut, pc_b);
    expect_pred("back-to-back cycle2 F1=B", read_f1(dut, 0),
                true, true, false, false, 0xB0000000);
    expect_pred("back-to-back cycle2 F2=A", read_f2(dut, 0),
                true, false, true, false, 0xA0000000);

    request_cycle(dut, pc_c);
    expect_pred("back-to-back cycle3 F1=C", read_f1(dut, 0),
                true, false, false, true, 0xC0000000);
    expect_pred("back-to-back cycle3 F2=B", read_f2(dut, 0),
                true, true, false, false, 0xB0000000);
    expect_pred("back-to-back cycle3 F3=A", read_f3(dut, 0),
                true, false, true, false, 0xA0000000);

    idle_cycle(dut);
    expect_pred("back-to-back cycle4 F2=C", read_f2(dut, 0),
                true, false, false, true, 0xC0000000);
    expect_pred("back-to-back cycle4 F3=B", read_f3(dut, 0),
                true, true, false, false, 0xB0000000);

    idle_cycle(dut);
    expect_pred("back-to-back cycle5 F3=C", read_f3(dut, 0),
                true, false, false, true, 0xC0000000);
}

void test_bubble_alignment(Vbpd_top_test_top* dut) {
    reset_predictor(dut);
    constexpr uint32_t pc_a = 0x1c400000;
    constexpr uint32_t pc_b = pc_a + 8;
    constexpr uint32_t pc_c = pc_a + 16;

    train(dut, pc_a, 0, 0xA1000000, false, true, false, true);
    train(dut, pc_b, 0, 0xB1000000, false, false, true, true);
    train(dut, pc_c, 0, 0xC1000000, true, false, false, true);

    request_cycle(dut, pc_a);
    request_cycle(dut, pc_b);

    idle_cycle(dut);
    expect_miss("bubble cycle3 F1 invalid", read_f1(dut, 0));
    expect_pred("bubble cycle3 F2=B", read_f2(dut, 0),
                true, false, false, true, 0xB1000000);
    expect_pred("bubble cycle3 F3=A", read_f3(dut, 0),
                true, false, true, false, 0xA1000000);

    request_cycle(dut, pc_c);
    expect_pred("bubble cycle4 F1=C", read_f1(dut, 0),
                true, true, false, false, 0xC1000000);
    expect_miss("bubble cycle4 F2 invalid", read_f2(dut, 0));
    expect_pred("bubble cycle4 F3=B", read_f3(dut, 0),
                true, false, false, true, 0xB1000000);

    idle_cycle(dut);
    expect_pred("bubble cycle5 F2=C", read_f2(dut, 0),
                true, true, false, false, 0xC1000000);
    expect_miss("bubble cycle5 F3 invalid", read_f3(dut, 0));

    idle_cycle(dut);
    expect_pred("bubble cycle6 F3=C", read_f3(dut, 0),
                true, true, false, false, 0xC1000000);
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vbpd_top_test_top;

    test_initialization_blocks_updates(dut);
    test_cold_miss(dut);
    test_b_bl_pipeline_and_meta(dut);
    test_bim_direction_override(dut);
    test_two_lanes(dut);
    test_not_taken_does_not_allocate(dut);
    test_no_spurious_update(dut);
    test_update_modes_follow_v4_contract(dut);
    test_real_ubtb_miss_btb_hit(dut);
    test_true_back_to_back(dut);
    test_bubble_alignment(dut);

    delete dut;
    if (failures != 0) {
        std::fprintf(stderr, "FAIL: bpd_top (%d checks failed)\n", failures);
        return 1;
    }
    pass("bpd_top");
    return 0;
}
