#include "Vubtb_bim_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

#include <cstdint>
#include <cstdio>
#include <cstdlib>

namespace {

constexpr int kBankWidth    = 2;
constexpr int kPredWidth    = 36;
constexpr int kBimNumCols   = 8;
constexpr int kBimSetsPerCol = 256;
constexpr int kBimResetCycles = 2048;

// ============================================================
// prediction encode/decode + VlWide helpers
// ============================================================
struct PredInfo {
    bool     taken;
    bool     is_br;
    bool     is_b_bl;
    bool     is_jirl;
    uint32_t target;
};

uint64_t pred_to_u64(const PredInfo& p) {
    uint64_t v = 0;
    v |= uint64_t(p.target);
    v |= uint64_t(p.is_jirl) << 32;
    v |= uint64_t(p.is_b_bl) << 33;
    v |= uint64_t(p.is_br)   << 34;
    v |= uint64_t(p.taken)   << 35;
    return v;
}

PredInfo u64_to_pred(uint64_t raw) {
    PredInfo p;
    p.target  = raw & 0xFFFFFFFFULL;
    p.is_jirl = (raw >> 32) & 1;
    p.is_b_bl = (raw >> 33) & 1;
    p.is_br   = (raw >> 34) & 1;
    p.taken   = (raw >> 35) & 1;
    return p;
}

PredInfo read_pred_from_vlwide(uint32_t w0, uint32_t w1, uint32_t w2, int lane) {
    uint64_t raw;
    if (lane == 0)
        raw = uint64_t(w0) | (uint64_t(w1 & 0xF) << 32);
    else
        raw = (uint64_t(w1) >> 4) | (uint64_t(w2 & 0xFF) << 28);
    return u64_to_pred(raw);
}

// ============================================================
// 参考模型 (UBTB + BIM 组合行为)
// ============================================================
struct UbtbEntry {
    bool     valid;
    uint32_t tag;
    uint32_t target;
    bool     is_br;
    bool     is_b_bl;
    bool     is_jirl;
};
UbtbEntry ref_ubtb[16];
int        ref_ubtb_repl;

uint8_t ref_bim_ctrs[kBimSetsPerCol][kBimNumCols][kBankWidth];

void ref_init() {
    for (int i = 0; i < 16; ++i)
        ref_ubtb[i] = {false, 0, 0, false, false, false};
    ref_ubtb_repl = 0;
    for (int s = 0; s < kBimSetsPerCol; ++s)
        for (int c = 0; c < kBimNumCols; ++c)
            for (int w = 0; w < kBankWidth; ++w)
                ref_bim_ctrs[s][c][w] = 2;
}

void ref_train(uint32_t pc, int cfi_idx, uint32_t target,
               bool is_br, bool is_b_bl, bool is_jirl, bool cfi_taken) {
    // UBTB train: only taken CFIs
    if (is_b_bl || is_jirl || (is_br && cfi_taken)) {
        uint32_t lane_pc = pc + cfi_idx * 4;
        uint32_t lane_tag = lane_pc >> 2;
        bool hit = false;
        for (int i = 0; i < 16; ++i) {
            if (ref_ubtb[i].valid && ref_ubtb[i].tag == lane_tag) {
                ref_ubtb[i].target  = target;
                ref_ubtb[i].is_br   = is_br;
                ref_ubtb[i].is_b_bl = is_b_bl;
                ref_ubtb[i].is_jirl = is_jirl;
                hit = true;
                break;
            }
        }
        if (!hit) {
            int alloc = -1;
            for (int i = 0; i < 16; ++i) {
                if (!ref_ubtb[i].valid) { alloc = i; break; }
            }
            if (alloc < 0) {
                alloc = ref_ubtb_repl;
                ref_ubtb_repl = (ref_ubtb_repl + 1) % 16;
            }
            ref_ubtb[alloc] = {true, lane_tag, target, is_br, is_b_bl, is_jirl};
        }
    }

    // BIM train: the selected CFI lane is always written. Conditional
    // branches use their actual outcome, B/BL is taken, and JIRL is not.
    if (is_br || is_b_bl || is_jirl) {
        const int fetch_row = int(pc >> 4);
        int col = fetch_row % kBimNumCols;
        int set = (fetch_row / kBimNumCols) % kBimSetsPerCol;
        uint8_t& ctr = ref_bim_ctrs[set][col][cfi_idx];
        const bool was_taken = is_b_bl || (is_br && cfi_taken);
        if (was_taken) ctr = (ctr < 3) ? ctr + 1 : 3;
        else           ctr = (ctr > 0) ? ctr - 1 : 0;
    }
}

PredInfo ref_predict(uint32_t pc, int lane) {
    PredInfo p = {false, false, false, false, 0};
    uint32_t lane_pc = pc + lane * 4;
    uint32_t lane_tag = lane_pc >> 2;

    // UBTB lookup
    for (int i = 0; i < 16; ++i) {
        if (ref_ubtb[i].valid && ref_ubtb[i].tag == lane_tag) {
            p.taken        = true;
            p.is_br        = ref_ubtb[i].is_br;
            p.is_b_bl      = ref_ubtb[i].is_b_bl;
            p.is_jirl      = ref_ubtb[i].is_jirl;
            p.target       = ref_ubtb[i].target;
            break;
        }
    }

    // BIM overrides taken for BR
    if (p.is_br) {
        const int fetch_row = int(pc >> 4);
        int col = fetch_row % kBimNumCols;
        int set = (fetch_row / kBimNumCols) % kBimSetsPerCol;
        p.taken = (ref_bim_ctrs[set][col][lane] >> 1) & 1;
    }

    return p;
}

// ============================================================
// 驱动
// ============================================================
void clear_inputs(Vubtb_bim_test_top* dut) {
    dut->f0_valid                  = 0;
    dut->f0_pc                     = 0;
    dut->update_valid              = 0;
    dut->update_is_mispredict_update = 0;
    dut->update_is_repair_update   = 0;
    dut->update_btb_mispredicts    = 0;
    dut->update_pc                 = 0;
    dut->update_br_mask            = 0;
    dut->update_cfi_valid          = 0;
    dut->update_cfi_idx            = 0;
    dut->update_cfi_taken          = 0;
    dut->update_cfi_mispredicted   = 0;
    dut->update_cfi_is_br          = 0;
    dut->update_cfi_is_b_bl        = 0;
    dut->update_cfi_is_jirl        = 0;
    dut->update_target             = 0;
    for (int i = 0; i < 4; ++i) dut->update_meta[i] = 0;
}

// UBTB→BIM 流水: F0→F1→F2
//   step1: F0→F1, UBTB.f1_preds 有效 (随后被 step2 清零)
//   step2: F1→F2, BIM.f2_preds 有效
void lookup_step1(Vubtb_bim_test_top* dut, uint32_t pc) {
    dut->f0_valid = 1;
    dut->f0_pc    = pc;
    eval_cycle(dut);
    dut->f0_valid = 0;
}
void lookup_step2(Vubtb_bim_test_top* dut) {
    eval_cycle(dut);
}
void do_lookup(Vubtb_bim_test_top* dut, uint32_t pc) {
    lookup_step1(dut, pc);
    lookup_step2(dut);
}

void do_train(Vubtb_bim_test_top* dut, uint32_t pc, int cfi_idx,
              uint32_t target, bool is_br, bool is_b_bl, bool is_jirl,
              bool cfi_taken) {
    const int fetch_row = int(pc >> 4);
    const int col = fetch_row % kBimNumCols;
    const int set = (fetch_row / kBimNumCols) % kBimSetsPerCol;
    dut->update_meta[0] = ref_bim_ctrs[set][col][0]
                        | (ref_bim_ctrs[set][col][1] << 2);
    for (int i = 1; i < 4; ++i) dut->update_meta[i] = 0;

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
    ref_train(pc, cfi_idx, target, is_br, is_b_bl, is_jirl, cfi_taken);
}

PredInfo read_ubtb(Vubtb_bim_test_top* dut, int lane) {
    return read_pred_from_vlwide(
        dut->ubtb_f1_preds[0], dut->ubtb_f1_preds[1],
        dut->ubtb_f1_preds[2], lane);
}

PredInfo read_bim(Vubtb_bim_test_top* dut, int lane) {
    return read_pred_from_vlwide(
        dut->f2_preds[0], dut->f2_preds[1], dut->f2_preds[2], lane);
}

void expect_pred_eq(const char* name, const PredInfo& actual,
                    bool taken, bool is_br, bool is_b_bl, bool is_jirl,
                    uint32_t target) {
    if (actual.taken   != (unsigned long long)taken   ||
        actual.is_br   != (unsigned long long)is_br   ||
        actual.is_b_bl != (unsigned long long)is_b_bl ||
        actual.is_jirl != (unsigned long long)is_jirl ||
        actual.target  != (unsigned long long)target) {
        std::fprintf(stderr,
            "FAIL: %s: got {t=%u br=%u b_bl=%u jirl=%u target=0x%08x} "
            "expected {t=%u br=%u b_bl=%u jirl=%u target=0x%08x}\n",
            name, actual.taken, actual.is_br, actual.is_b_bl, actual.is_jirl,
            actual.target, taken, is_br, is_b_bl, is_jirl, target);
        std::exit(1);
    }
}

// ============================================================
// 测试用例
// ============================================================

void test_ubtb_b_bl_through_bim(Vubtb_bim_test_top* dut) {
    do_train(dut, 0x1c001000, 0, 0x1c008000, false, true, false, true);

    lookup_step1(dut, 0x1c001000);
    PredInfo u = read_ubtb(dut, 0);   // 必须在 step2 前读 UBTB
    expect_pred_eq("b_bl_pass: ubtb f1", u,
                   true, false, true, false, 0x1c008000);

    lookup_step2(dut);
    PredInfo b = read_bim(dut, 0);
    expect_pred_eq("b_bl_pass: bim f2", b,
                   true, false, true, false, 0x1c008000);
}

void test_ubtb_br_bim_override_taken(Vubtb_bim_test_top* dut) {
    do_train(dut, 0x1c002000, 0, 0x1c009000, true, false, false, true);
    for (int i = 0; i < 3; ++i)
        do_train(dut, 0x1c002000, 0, 0x1c009000, true, false, false, true);

    lookup_step1(dut, 0x1c002000);
    PredInfo u = read_ubtb(dut, 0);
    expect_pred_eq("br_taken: ubtb", u,
                   true, true, false, false, 0x1c009000);

    lookup_step2(dut);
    PredInfo b = read_bim(dut, 0);
    expect_pred_eq("br_taken: bim", b,
                   true, true, false, false, 0x1c009000);
}

void test_ubtb_br_bim_override_not_taken(Vubtb_bim_test_top* dut) {
    do_train(dut, 0x1c003000, 0, 0x1c00a000, true, false, false, true);
    for (int i = 0; i < 4; ++i)
        do_train(dut, 0x1c003000, 0, 0x1c00a000, true, false, false, false);

    lookup_step1(dut, 0x1c003000);
    PredInfo u = read_ubtb(dut, 0);
    expect_pred_eq("br_nt: ubtb still says taken", u,
                   true, true, false, false, 0x1c00a000);

    lookup_step2(dut);
    PredInfo b = read_bim(dut, 0);
    expect_pred_eq("br_nt: bim overrides to not-taken", b,
                   false, true, false, false, 0x1c00a000);
}

void test_ubtb_miss_passes_zero(Vubtb_bim_test_top* dut) {
    lookup_step1(dut, 0x1c004000);
    PredInfo u = read_ubtb(dut, 0);
    expect_pred_eq("miss: ubtb zero", u,
                   false, false, false, false, 0);

    lookup_step2(dut);
    PredInfo b = read_bim(dut, 0);
    expect_pred_eq("miss: bim zero", b,
                   false, false, false, false, 0);
}

void test_jirl_through_ubtb_bim(Vubtb_bim_test_top* dut) {
    do_train(dut, 0x1c005000, 0, 0x1c00b000, false, false, true, true);

    lookup_step1(dut, 0x1c005000);
    PredInfo u = read_ubtb(dut, 0);
    expect_pred_eq("jirl: ubtb", u,
                   true, false, false, true, 0x1c00b000);

    lookup_step2(dut);
    PredInfo b = read_bim(dut, 0);
    expect_pred_eq("jirl: bim pass-through", b,
                   true, false, false, true, 0x1c00b000);
}

void test_two_lanes_mixed(Vubtb_bim_test_top* dut) {
    do_train(dut, 0x1c006000, 0, 0x1c00c000, false, true, false, true);
    do_train(dut, 0x1c006000, 1, 0x1c00d000, true, false, false, true);
    for (int i = 0; i < 3; ++i)
        do_train(dut, 0x1c006000, 1, 0x1c00d000, true, false, false, true);

    lookup_step1(dut, 0x1c006000);
    PredInfo u0 = read_ubtb(dut, 0);
    PredInfo u1 = read_ubtb(dut, 1);
    expect_pred_eq("mixed: ubtb lane0", u0,
                   true, false, true, false, 0x1c00c000);
    expect_pred_eq("mixed: ubtb lane1", u1,
                   true, true, false, false, 0x1c00d000);

    lookup_step2(dut);
    PredInfo b0 = read_bim(dut, 0);
    PredInfo b1 = read_bim(dut, 1);
    expect_pred_eq("mixed: bim lane0 pass", b0,
                   true, false, true, false, 0x1c00c000);
    expect_pred_eq("mixed: bim lane1 taken", b1,
                   true, true, false, false, 0x1c00d000);
}

void test_ubtb_update_target_bim_unchanged(Vubtb_bim_test_top* dut) {
    do_train(dut, 0x1c007000, 0, 0x1c00e000, false, true, false, true);
    do_train(dut, 0x1c007000, 0, 0x1c00f000, false, true, false, true);

    do_lookup(dut, 0x1c007000);
    PredInfo b = read_bim(dut, 0);
    expect_pred_eq("ubtb_update: new target through bim", b,
                   true, false, true, false, 0x1c00f000);
}

void test_pipeline_timing(Vubtb_bim_test_top* dut) {
    do_train(dut, 0x1c008000, 0, 0xaaaaaaaa, false, true, false, true);
    do_train(dut, 0x1c009000, 0, 0xbbbbbbbb, true, false, false, true);
    for (int i = 0; i < 3; ++i)
        do_train(dut, 0x1c009000, 0, 0xbbbbbbbb, true, false, false, true);

    // 背靠背查询
    dut->f0_valid = 1;
    dut->f0_pc    = 0x1c008000;
    eval_cycle(dut);  // query A: F0→F1, UBTB A valid

    dut->f0_valid = 1;
    dut->f0_pc    = 0x1c009000;
    eval_cycle(dut);  // query A: F1→F2 (BIM A valid), query B: F0→F1

    // 读 BIM A
    PredInfo a = read_bim(dut, 0);
    expect_pred_eq("pipe: result A", a,
                   true, false, true, false, 0xaaaaaaaa);

    dut->f0_valid = 0;
    eval_cycle(dut);  // query B: F1→F2 (BIM B valid)

    PredInfo b = read_bim(dut, 0);
    expect_pred_eq("pipe: result B", b,
                   true, true, false, false, 0xbbbbbbbb);
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vubtb_bim_test_top;
    clear_inputs(dut);
    ref_init();
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

    test_ubtb_b_bl_through_bim(dut);
    test_ubtb_br_bim_override_taken(dut);
    test_ubtb_br_bim_override_not_taken(dut);
    test_ubtb_miss_passes_zero(dut);
    test_jirl_through_ubtb_bim(dut);
    test_two_lanes_mixed(dut);
    test_ubtb_update_target_bim_unchanged(dut);
    test_pipeline_timing(dut);

    pass("ubtb_bim_integration");
    delete dut;
    return 0;
}
