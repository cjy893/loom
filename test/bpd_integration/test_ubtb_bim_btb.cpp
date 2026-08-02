#include "Vubtb_bim_btb_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

#include <cstdint>
#include <cstdio>
#include <cstdlib>

namespace {

constexpr int kBankWidth    = 2;
constexpr int kPredWidth    = 36;
constexpr int kBimResetCycles = 2048;

// ============================================================
// prediction encode/decode
// ============================================================
struct PredInfo {
    bool     taken;
    bool     is_br;
    bool     is_b_bl;
    bool     is_jirl;
    uint32_t target;
};

uint64_t pred_to_u64(const PredInfo& p) {
    uint64_t v  = uint64_t(p.target);
    v |= uint64_t(p.is_jirl) << 32;
    v |= uint64_t(p.is_b_bl) << 33;
    v |= uint64_t(p.is_br)   << 34;
    v |= uint64_t(p.taken)   << 35;
    return v;
}

PredInfo read_pred_from_vlwide(uint32_t w0, uint32_t w1, uint32_t w2, int lane) {
    uint64_t raw;
    if (lane == 0)
        raw = uint64_t(w0) | (uint64_t(w1 & 0xF) << 32);
    else
        raw = (uint64_t(w1) >> 4) | (uint64_t(w2 & 0xFF) << 28);
    PredInfo p;
    p.target  = raw & 0xFFFFFFFFULL;
    p.is_jirl = (raw >> 32) & 1;
    p.is_b_bl = (raw >> 33) & 1;
    p.is_br   = (raw >> 34) & 1;
    p.taken   = (raw >> 35) & 1;
    return p;
}

PredInfo read_ubtb(Vubtb_bim_btb_test_top* dut, int lane) {
    return read_pred_from_vlwide(
        dut->ubtb_f1_preds[0], dut->ubtb_f1_preds[1],
        dut->ubtb_f1_preds[2], lane);
}
PredInfo read_bim(Vubtb_bim_btb_test_top* dut, int lane) {
    return read_pred_from_vlwide(
        dut->bim_f2_preds[0], dut->bim_f2_preds[1],
        dut->bim_f2_preds[2], lane);
}
PredInfo read_btb(Vubtb_bim_btb_test_top* dut, int lane) {
    return read_pred_from_vlwide(
        dut->f3_preds[0], dut->f3_preds[1], dut->f3_preds[2], lane);
}

void expect_pred_eq(const char* name, const PredInfo& actual,
                    bool t, bool br, bool bb, bool ji, uint32_t target) {
    if (actual.taken   != (unsigned long long)t  ||
        actual.is_br   != (unsigned long long)br ||
        actual.is_b_bl != (unsigned long long)bb ||
        actual.is_jirl != (unsigned long long)ji ||
        actual.target  != (unsigned long long)target) {
        std::fprintf(stderr,
            "FAIL: %s: got {t=%u br=%u b_bl=%u jirl=%u target=0x%08x} "
            "expected {t=%u br=%u b_bl=%u jirl=%u target=0x%08x}\n",
            name, actual.taken, actual.is_br, actual.is_b_bl, actual.is_jirl,
            actual.target, t, br, bb, ji, target);
        std::exit(1);
    }
}

// ============================================================
// 驱动
// ============================================================
void clear_inputs(Vubtb_bim_btb_test_top* dut) {
    dut->f0_valid                   = 0;
    dut->f0_pc                      = 0;
    dut->update_valid               = 0;
    dut->update_is_mispredict_update = 0;
    dut->update_is_repair_update    = 0;
    dut->update_btb_mispredicts     = 0;
    dut->update_pc                  = 0;
    dut->update_br_mask             = 0;
    dut->update_cfi_valid           = 0;
    dut->update_cfi_idx             = 0;
    dut->update_cfi_taken           = 0;
    dut->update_cfi_mispredicted    = 0;
    dut->update_cfi_is_br           = 0;
    dut->update_cfi_is_b_bl         = 0;
    dut->update_cfi_is_jirl         = 0;
    dut->update_target              = 0;
    for (int i = 0; i < 4; ++i) dut->update_meta[i] = 0;
}

// A lookup is accepted for exactly one F0 cycle. The following two cycles
// carry a bubble while A advances through F2 and F3.
void lookup_step1(Vubtb_bim_btb_test_top* dut, uint32_t pc) {
    dut->f0_valid = 1;
    dut->f0_pc    = pc;
    eval_cycle(dut);
}
void lookup_step2(Vubtb_bim_btb_test_top* dut) {
    dut->f0_valid = 0;
    eval_cycle(dut);
}
void lookup_step3(Vubtb_bim_btb_test_top* dut) {
    eval_cycle(dut);
}
void do_lookup(Vubtb_bim_btb_test_top* dut, uint32_t pc) {
    lookup_step1(dut, pc);
    lookup_step2(dut);
    lookup_step3(dut);
}

void do_train(Vubtb_bim_btb_test_top* dut, uint32_t pc, int cfi_idx,
              uint32_t target, bool is_br, bool is_b_bl, bool is_jirl,
              bool cfi_taken) {
    dut->f0_valid = 1;
    dut->f0_pc = pc;
    eval_cycle(dut);
    dut->f0_valid = 0;
    eval_cycle(dut);

    uint32_t prediction_meta[4];
    for (int i = 0; i < 4; ++i) prediction_meta[i] = dut->bim_f2_meta[i];
    eval_cycle(dut);

    for (int i = 0; i < 4; ++i) dut->update_meta[i] = prediction_meta[i];
    dut->update_valid        = 1;
    dut->update_is_mispredict_update = 0;
    dut->update_pc           = pc;
    dut->update_cfi_idx      = cfi_idx;
    dut->update_target       = target;
    dut->update_cfi_valid    = 1;
    dut->update_cfi_taken    = cfi_taken;
    dut->update_br_mask      = is_br ? (1u << cfi_idx) : 0;
    dut->update_cfi_is_br    = is_br;
    dut->update_cfi_is_b_bl  = is_b_bl;
    dut->update_cfi_is_jirl  = is_jirl;
    eval_cycle(dut);
    dut->update_valid = 0;
    eval_cycle(dut);
}

// ============================================================
// 测试用例
// ============================================================

void test_b_bl_full_pipeline(Vubtb_bim_btb_test_top* dut) {
    do_train(dut, 0x1c001000, 0, 0x1c008000, false, true, false, true);

    lookup_step1(dut, 0x1c001000);
    PredInfo u = read_ubtb(dut, 0);   // step1 后 UBTB 有效
    expect_pred_eq("b_bl: ubtb", u, true, false, true, false, 0x1c008000);

    lookup_step2(dut);
    PredInfo m = read_bim(dut, 0);    // step2 后 BIM 有效, UBTB 已失效
    expect_pred_eq("b_bl: bim", m, true, false, true, false, 0x1c008000);

    lookup_step3(dut);
    PredInfo b = read_btb(dut, 0);    // step3 后 BTB 有效
    expect_pred_eq("b_bl: btb", b, true, false, true, false, 0x1c008000);
}

void test_br_bim_override_btb_target(Vubtb_bim_btb_test_top* dut) {
    do_train(dut, 0x1c002000, 0, 0x1c009000, true, false, false, true);
    for (int i = 0; i < 4; ++i)
        do_train(dut, 0x1c002000, 0, 0x1c009000, true, false, false, false);

    lookup_step1(dut, 0x1c002000);
    PredInfo u = read_ubtb(dut, 0);
    expect_pred_eq("br: ubtb", u, true, true, false, false, 0x1c009000);

    lookup_step2(dut);
    PredInfo m = read_bim(dut, 0);
    expect_pred_eq("br: bim", m, false, true, false, false, 0x1c009000);

    lookup_step3(dut);
    PredInfo b = read_btb(dut, 0);
    expect_pred_eq("br: btb", b, false, true, false, false, 0x1c009000);
}

void test_target_update_propagates(Vubtb_bim_btb_test_top* dut) {
    do_train(dut, 0x1c003000, 0, 0xdead0001, false, true, false, true);
    do_train(dut, 0x1c003000, 0, 0xcafe0002, false, true, false, true);

    do_lookup(dut, 0x1c003000);
    PredInfo b = read_btb(dut, 0);
    expect_pred_eq("update: latest target at f3", b,
                   true, false, true, false, 0xcafe0002);
}

void test_cold_miss_all_zero(Vubtb_bim_btb_test_top* dut) {
    lookup_step1(dut, 0x1c004000);
    PredInfo u = read_ubtb(dut, 0);
    expect_pred_eq("cold: ubtb", u, false, false, false, false, 0);

    lookup_step2(dut);
    PredInfo m = read_bim(dut, 0);
    expect_pred_eq("cold: bim",  m, false, false, false, false, 0);

    lookup_step3(dut);
    PredInfo b = read_btb(dut, 0);
    expect_pred_eq("cold: btb",  b, false, false, false, false, 0);
}

void test_two_lanes_mixed(Vubtb_bim_btb_test_top* dut) {
    do_train(dut, 0x1c005000, 0, 0x11110000, false, true, false, true);
    do_train(dut, 0x1c005000, 1, 0x22220000, true, false, false, true);
    for (int i = 0; i < 3; ++i)
        do_train(dut, 0x1c005000, 1, 0x22220000, true, false, false, true);

    do_lookup(dut, 0x1c005000);
    PredInfo b0 = read_btb(dut, 0);
    PredInfo b1 = read_btb(dut, 1);
    expect_pred_eq("mixed: lane0 b_bl", b0,
                   true, false, true, false, 0x11110000);
    expect_pred_eq("mixed: lane1 br taken", b1,
                   true, true, false, false, 0x22220000);
}

void test_jirl_pipeline(Vubtb_bim_btb_test_top* dut) {
    do_train(dut, 0x1c006000, 0, 0x1c00b000, false, false, true, true);

    do_lookup(dut, 0x1c006000);
    PredInfo b = read_btb(dut, 0);
    expect_pred_eq("jirl: full pipeline", b,
                   true, false, false, true, 0x1c00b000);
}

void test_back_to_back_requests(Vubtb_bim_btb_test_top* dut) {
    constexpr uint32_t pc_a = 0x1c100000;
    constexpr uint32_t pc_b = pc_a + 8;
    constexpr uint32_t pc_c = pc_a + 16;

    do_train(dut, pc_a, 0, 0xa0000000, false, true, false, true);
    do_train(dut, pc_b, 0, 0xb0000000, true, false, false, true);
    do_train(dut, pc_c, 0, 0xc0000000, false, false, true, true);

    dut->f0_valid = 1;
    dut->f0_pc = pc_a;
    eval_cycle(dut);
    expect_pred_eq("back-to-back cycle1 F1=A", read_ubtb(dut, 0),
                   true, false, true, false, 0xa0000000);

    dut->f0_pc = pc_b;
    eval_cycle(dut);
    expect_pred_eq("back-to-back cycle2 F1=B", read_ubtb(dut, 0),
                   true, true, false, false, 0xb0000000);
    expect_pred_eq("back-to-back cycle2 F2=A", read_bim(dut, 0),
                   true, false, true, false, 0xa0000000);

    dut->f0_pc = pc_c;
    eval_cycle(dut);
    expect_pred_eq("back-to-back cycle3 F1=C", read_ubtb(dut, 0),
                   true, false, false, true, 0xc0000000);
    expect_pred_eq("back-to-back cycle3 F2=B", read_bim(dut, 0),
                   true, true, false, false, 0xb0000000);
    expect_pred_eq("back-to-back cycle3 F3=A", read_btb(dut, 0),
                   true, false, true, false, 0xa0000000);

    dut->f0_valid = 0;
    eval_cycle(dut);
    expect_pred_eq("back-to-back cycle4 F2=C", read_bim(dut, 0),
                   true, false, false, true, 0xc0000000);
    expect_pred_eq("back-to-back cycle4 F3=B", read_btb(dut, 0),
                   true, true, false, false, 0xb0000000);

    eval_cycle(dut);
    expect_pred_eq("back-to-back cycle5 F3=C", read_btb(dut, 0),
                   true, false, false, true, 0xc0000000);
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vubtb_bim_btb_test_top;
    clear_inputs(dut);
    reset_dut(dut);
    expect_eq("BIM ready low after reset", dut->bim_ready, 0);
    for (int i = 0; i < kBimResetCycles - 1; ++i) {
        eval_cycle(dut);
        expect_eq("BIM ready low during initialization", dut->bim_ready, 0);
    }
    eval_cycle(dut);
    expect_eq("BIM ready high after initialization", dut->bim_ready, 1);
    eval_cycle(dut);
    eval_cycle(dut);

    test_b_bl_full_pipeline(dut);
    test_br_bim_override_btb_target(dut);
    test_target_update_propagates(dut);
    test_cold_miss_all_zero(dut);
    test_two_lanes_mixed(dut);
    test_jirl_pipeline(dut);
    test_back_to_back_requests(dut);

    pass("ubtb_bim_btb_integration");
    delete dut;
    return 0;
}
