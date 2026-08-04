#include "Vbim_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>

namespace {

constexpr int kBankWidth    = 2;
constexpr int kPredWidth    = 36;
constexpr int kNumCols      = 8;
constexpr int kSetsPerCol   = 256;   // 2048 / 8
constexpr int kBimResetCycles = kNumCols * kSetsPerCol;

// ============================================================
// prediction bit-level encode/decode (same layout as UBTB test)
// branch_prediction_t packed: {taken, is_br, is_b_bl, is_jirl, target[31:0]}
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

// Drive f1_preds_in (72-bit VlWide<3>, same layout as f1_preds)
// 72-bit = {lane1[35:0], lane0[35:0]}, 不能直接用 uint64_t 会截断
void set_f1_preds_in(Vbim_test_top* dut, uint64_t lane0, uint64_t lane1) {
    uint32_t w0 = uint32_t(lane0 & 0xFFFFFFFFULL);
    uint32_t w1 = uint32_t((lane0 >> 32) & 0xFULL)
                | uint32_t((lane1 & 0x0FFFFFFFULL) << 4);
    uint32_t w2 = uint32_t((lane1 >> 28) & 0xFFULL);
    dut->f1_preds_in[0] = w0;
    dut->f1_preds_in[1] = w1;
    dut->f1_preds_in[2] = w2;
}

// Read f2_preds (same VlWide<3> layout)
PredInfo read_f2_pred(Vbim_test_top* dut, int lane) {
    uint32_t w0 = dut->f2_preds[0];
    uint32_t w1 = dut->f2_preds[1];
    uint32_t w2 = dut->f2_preds[2];
    uint64_t raw;
    if (lane == 0) {
        raw = uint64_t(w0) | (uint64_t(w1 & 0xF) << 32);
    } else {
        raw = (uint64_t(w1) >> 4) | (uint64_t(w2 & 0xFF) << 28);
    }
    return u64_to_pred(raw);
}

// ============================================================
// BIM reference model: 2-bit saturating counter per (set, col, lane)
//   initialized to 2 (weakly-taken), ctr[1]=1 → predict taken
// ============================================================
uint8_t ref_ctrs[kSetsPerCol][kNumCols][kBankWidth];

void ref_init() {
    for (int s = 0; s < kSetsPerCol; ++s)
        for (int c = 0; c < kNumCols; ++c)
            for (int w = 0; w < kBankWidth; ++w)
                ref_ctrs[s][c][w] = 2;       // weak taken
}

void ref_index(uint32_t pc, int* set, int* col) {
    const int fetch_row = int(pc >> 4);
    *col = fetch_row % kNumCols;
    *set = (fetch_row / kNumCols) % kSetsPerCol;
}

void ref_train(uint32_t pc, int cfi_idx, bool cfi_taken, bool is_br) {
    if (!is_br) return;          // BIM only tracks conditional branches
    int set, col;
    ref_index(pc, &set, &col);
    uint8_t& ctr = ref_ctrs[set][col][cfi_idx];
    if (cfi_taken)
        ctr = (ctr < 3) ? ctr + 1 : 3;
    else
        ctr = (ctr > 0) ? ctr - 1 : 0;
}

bool ref_predict_taken(uint32_t pc, int lane) {
    int set, col;
    ref_index(pc, &set, &col);
    return (ref_ctrs[set][col][lane] >> 1) & 1;   // ctr[1]: MSB
}

void set_update_meta(Vbim_test_top* dut, uint8_t lane0, uint8_t lane1) {
    dut->update_meta[0] = uint32_t(lane0 & 3U) |
                          (uint32_t(lane1 & 3U) << 2);
    dut->update_meta[1] = 0;
    dut->update_meta[2] = 0;
    dut->update_meta[3] = 0;
}

void set_update_meta_from_ref(Vbim_test_top* dut, uint32_t pc) {
    int set, col;
    ref_index(pc, &set, &col);
    set_update_meta(dut, ref_ctrs[set][col][0],
                    ref_ctrs[set][col][1]);
}

// ============================================================
// 驱动函数
// ============================================================
void clear_inputs(Vbim_test_top* dut) {
    dut->f0_valid                  = 0;
    dut->f0_pc                     = 0;
    dut->f1_preds_in[0]            = 0;
    dut->f1_preds_in[1]            = 0;
    dut->f1_preds_in[2]            = 0;
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
    set_update_meta(dut, 0, 0);
}

void reset_bim(Vbim_test_top* dut) {
    reset_dut(dut);
    expect_eq("ready low after reset", dut->ready, 0);

    for (int i = 0; i < kBimResetCycles - 1; ++i) {
        eval_cycle(dut);
        expect_eq("ready low during RAM initialization", dut->ready, 0);
    }

    eval_cycle(dut);
    expect_eq("ready high after RAM initialization", dut->ready, 1);
}

// BIM 流水: F0 → (F1) → F2, 需 2 个 eval_cycle
void do_bim_lookup(Vbim_test_top* dut, uint32_t pc,
                   uint64_t lane0_in, uint64_t lane1_in) {
    // Cycle 0: F0 request + UBTB 输出
    dut->f0_valid = 1;
    dut->f0_pc    = pc;
    set_f1_preds_in(dut, lane0_in, lane1_in);
    eval_cycle(dut);

    // Cycle 1: F1→F2
    dut->f0_valid = 0;
    // f1_preds_in 保持不变（模块内部已寄存）
    eval_cycle(dut);
}

// 发送一条训练更新
void do_train(Vbim_test_top* dut, uint32_t pc, int cfi_idx, bool cfi_taken,
              bool is_br, bool is_b_bl, bool is_jirl) {
    dut->update_valid        = 1;
    dut->update_is_mispredict_update = 0;
    dut->update_pc           = pc;
    dut->update_cfi_idx      = cfi_idx;
    dut->update_cfi_valid    = 1;
    dut->update_cfi_taken    = cfi_taken;
    dut->update_br_mask      = is_br ? (1u << cfi_idx) : 0;
    dut->update_cfi_is_br    = is_br;
    dut->update_cfi_is_b_bl  = is_b_bl;
    dut->update_cfi_is_jirl  = is_jirl;
    set_update_meta_from_ref(dut, pc);
    eval_cycle(dut);
    dut->update_valid = 0;

    ref_train(pc, cfi_idx, cfi_taken, is_br);
}

void do_train_packet(Vbim_test_top* dut, uint32_t pc, uint32_t br_mask,
                     bool cfi_valid, int cfi_idx, bool cfi_taken,
                     bool cfi_is_br, bool cfi_is_b_bl,
                     bool cfi_is_jirl) {
    dut->update_valid = 1;
    dut->update_is_mispredict_update = 0;
    dut->update_is_repair_update = 0;
    dut->update_pc = pc;
    dut->update_br_mask = br_mask;
    dut->update_cfi_valid = cfi_valid;
    dut->update_cfi_idx = cfi_idx;
    dut->update_cfi_taken = cfi_taken;
    dut->update_cfi_mispredicted = 0;
    dut->update_cfi_is_br = cfi_is_br;
    dut->update_cfi_is_b_bl = cfi_is_b_bl;
    dut->update_cfi_is_jirl = cfi_is_jirl;
    set_update_meta_from_ref(dut, pc);
    eval_cycle(dut);
    dut->update_valid = 0;

    for (int lane = 0; lane < kBankWidth; ++lane) {
        if ((br_mask & (1U << lane)) == 0)
            continue;

        const bool lane_taken =
            cfi_valid && cfi_is_br && cfi_idx == lane && cfi_taken;
        ref_train(pc, lane, lane_taken, true);
    }
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

uint8_t read_bim_meta(Vbim_test_top* dut, int lane);

// ============================================================
// 测试用例
// ============================================================

void test_br_taken_training(Vbim_test_top* dut) {
    // 训练: PC=0x1c001000 处的 BR, lane0, 连续 taken × 3
    // 初始 ctr=2 → 1次 taken → ctr=3
    for (int i = 0; i < 3; ++i)
        do_train(dut, 0x1c001000, 0, true, true, false, false);

    // 构造 f1_preds_in: lane0 = BR, target=0xaaa; lane1 = no branch
    uint64_t lane0_in = pred_to_u64({false, true, false, false, 0xaaa});
    uint64_t lane1_in = 0;
    do_bim_lookup(dut, 0x1c001000, lane0_in, lane1_in);

    PredInfo p0 = read_f2_pred(dut, 0);
    bool ref_taken = ref_predict_taken(0x1c001000, 0);
    expect_pred_eq("taken: lane0 BR predicted taken", p0,
                   ref_taken, true, false, false, 0xaaa);

    // lane1 should pass through unchanged
    PredInfo p1 = read_f2_pred(dut, 1);
    expect_pred_eq("taken: lane1 pass through", p1,
                   false, false, false, false, 0);
}

void test_br_not_taken_training(Vbim_test_top* dut) {
    // 训练: PC=0x1c002000, lane0 BR not-taken × 4
    // ctr=2 → nt → ctr=1 → nt → ctr=0
    for (int i = 0; i < 4; ++i)
        do_train(dut, 0x1c002000, 0, false, true, false, false);

    uint64_t lane0_in = pred_to_u64({false, true, false, false, 0xbbb});
    do_bim_lookup(dut, 0x1c002000, lane0_in, 0);

    PredInfo p0 = read_f2_pred(dut, 0);
    bool ref_taken = ref_predict_taken(0x1c002000, 0);
    expect_pred_eq("nt: lane0 BR predicted not-taken", p0,
                   ref_taken, true, false, false, 0xbbb);
}

void test_b_bl_passes_through(Vbim_test_top* dut) {
    // BIM 不修改 B_BL 的 taken (总是 taken, 方向不归 BIM 管)
    uint64_t lane0_in = pred_to_u64({true, false, true, false, 0x1c008000});
    do_bim_lookup(dut, 0x1c003000, lane0_in, 0);

    PredInfo p0 = read_f2_pred(dut, 0);
    expect_pred_eq("b_bl: pass through unchanged", p0,
                   true, false, true, false, 0x1c008000);
}

void test_jirl_passes_through(Vbim_test_top* dut) {
    uint64_t lane0_in = pred_to_u64({true, false, false, true, 0x1c009000});
    do_bim_lookup(dut, 0x1c004000, lane0_in, 0);

    PredInfo p0 = read_f2_pred(dut, 0);
    expect_pred_eq("jirl: pass through unchanged", p0,
                   true, false, false, true, 0x1c009000);
}

void test_two_lanes_independent(Vbim_test_top* dut) {
    // lane0: train taken, lane1: train not-taken at same PC
    for (int i = 0; i < 3; ++i) {
        do_train(dut, 0x1c005000, 0, true,  true,  false, false);
        do_train(dut, 0x1c005000, 1, false, true,  false, false);
    }

    uint64_t lane0_in = pred_to_u64({false, true, false, false, 0xccc});
    uint64_t lane1_in = pred_to_u64({false, true, false, false, 0xddd});
    do_bim_lookup(dut, 0x1c005000, lane0_in, lane1_in);

    PredInfo p0 = read_f2_pred(dut, 0);
    bool ref0 = ref_predict_taken(0x1c005000, 0);
    expect_pred_eq("two_lanes: lane0 BR", p0, ref0, true, false, false, 0xccc);

    PredInfo p1 = read_f2_pred(dut, 1);
    bool ref1 = ref_predict_taken(0x1c005000, 1);
    expect_pred_eq("two_lanes: lane1 BR", p1, ref1, true, false, false, 0xddd);
}

void test_counter_saturation(Vbim_test_top* dut) {
    // ctr 不溢出 [0,3]
    // 训练 taken × 10 → ctr 应停在 3
    for (int i = 0; i < 10; ++i)
        do_train(dut, 0x1c006000, 0, true, true, false, false);

    uint64_t lane0_in = pred_to_u64({false, true, false, false, 0xeee});
    do_bim_lookup(dut, 0x1c006000, lane0_in, 0);
    expect_pred_eq("sat: ctr maxed at 3 → taken", read_f2_pred(dut, 0),
                   true, true, false, false, 0xeee);

    // 训练 not-taken × 10 → ctr 应停在 0
    for (int i = 0; i < 10; ++i)
        do_train(dut, 0x1c006000, 0, false, true, false, false);

    do_bim_lookup(dut, 0x1c006000, lane0_in, 0);
    expect_pred_eq("sat: ctr min at 0 → not-taken", read_f2_pred(dut, 0),
                   false, true, false, false, 0xeee);
}

void test_different_pc_different_ctrs(Vbim_test_top* dut) {
    // 两个不同 PC 的计数器独立
    // PC A: train taken
    for (int i = 0; i < 3; ++i)
        do_train(dut, 0x1c007000, 0, true, true, false, false);
    // PC B: train not-taken
    for (int i = 0; i < 4; ++i)
        do_train(dut, 0x1c008000, 0, false, true, false, false);

    uint64_t br_in = pred_to_u64({false, true, false, false, 0});

    do_bim_lookup(dut, 0x1c007000, br_in, 0);
    expect_pred_eq("diff_pc: A taken", read_f2_pred(dut, 0),
                   true, true, false, false, 0);

    do_bim_lookup(dut, 0x1c008000, br_in, 0);
    expect_pred_eq("diff_pc: B not-taken", read_f2_pred(dut, 0),
                   false, true, false, false, 0);
}

void test_fetch_row_addressing(Vbim_test_top* dut) {
    clear_inputs(dut);
    ref_init();
    reset_bim(dut);

    constexpr uint32_t pc_a = 0x1c010000U;
    constexpr uint32_t pc_b = pc_a + 0x2000U;
    const uint64_t br_in =
        pred_to_u64({false, true, false, false, 0});

    // A word-indexed BIM aliases these PCs because their word indices differ
    // by 2048. Fetch-packet indexing keeps them in separate rows.
    for (int i = 0; i < 3; ++i)
        do_train(dut, pc_a, 0, false, true, false, false);

    do_bim_lookup(dut, pc_a, br_in, 0);
    expect_pred_eq("row_addr: trained PC is not-taken",
                   read_f2_pred(dut, 0),
                   false, true, false, false, 0);

    do_bim_lookup(dut, pc_b, br_in, 0);
    expect_pred_eq("row_addr: non-aliasing PC remains taken",
                   read_f2_pred(dut, 0),
                   true, true, false, false, 0);
}

void test_non_branch_lane_passes_through(Vbim_test_top* dut) {
    // non-branch lane 原样通过
    uint64_t lane0_in = 0;   // not a branch
    do_bim_lookup(dut, 0x1c009000, lane0_in, 0);

    PredInfo p0 = read_f2_pred(dut, 0);
    expect_pred_eq("non_br: all zero", p0, false, false, false, false, 0);
}

void test_mispredict_update_is_ignored(Vbim_test_top* dut) {
    // v4 BIM only consumes commit updates.
    do_train(dut, 0x1c00a000, 0, true, true, false, false);

    dut->update_valid                = 1;
    dut->update_is_mispredict_update = 1;
    dut->update_pc                   = 0x1c00a000;
    dut->update_cfi_idx              = 0;
    dut->update_cfi_valid            = 1;
    dut->update_cfi_taken            = false;
    dut->update_cfi_mispredicted     = 1;
    dut->update_br_mask              = 1;
    dut->update_cfi_is_br            = true;
    set_update_meta_from_ref(dut, 0x1c00a000);
    eval_cycle(dut);
    dut->update_valid = 0;

    uint64_t br_in = pred_to_u64({false, true, false, false, 0});
    do_bim_lookup(dut, 0x1c00a000, br_in, 0);
    expect_pred_eq("mispredict: direction unchanged", read_f2_pred(dut, 0),
                   true, true, false, false, 0);
    expect_eq("mispredict: counter unchanged", read_bim_meta(dut, 0), 3);
}

void test_packet_branch_outcomes(Vbim_test_top* dut) {
    clear_inputs(dut);
    ref_init();
    reset_bim(dut);

    constexpr uint32_t pc = 0x1c00'c000U;

    // Both conditional branches executed. Lane 0 fell through, while lane 1
    // is the taken CFI that ended the fetch packet.
    do_train_packet(dut, pc, 0b11, true, 1, true,
                    true, false, false);

    const uint64_t br0 =
        pred_to_u64({false, true, false, false, 0x1111'0000U});
    const uint64_t br1 =
        pred_to_u64({false, true, false, false, 0x2222'0000U});
    do_bim_lookup(dut, pc, br0, br1);

    expect_pred_eq("packet: earlier lane trains not-taken",
                   read_f2_pred(dut, 0),
                   false, true, false, false, 0x1111'0000U);
    expect_pred_eq("packet: CFI lane trains taken",
                   read_f2_pred(dut, 1),
                   true, true, false, false, 0x2222'0000U);
}

// ============================================================
// Meta 测试 — f2_meta 存预测时的 counter 值
// 格式: {padding[119:4], s2_ctrs[1][1:0], s2_ctrs[0][1:0]}
// ============================================================
uint8_t read_bim_meta(Vbim_test_top* dut, int lane) {
    return uint8_t((dut->f2_meta[0] >> (lane * 2)) & 3);
}

void drive_raw_update(Vbim_test_top* dut, uint32_t pc, uint32_t br_mask,
                      bool cfi_valid, int cfi_idx, bool cfi_taken,
                      bool cfi_is_br, bool cfi_is_b_bl, bool cfi_is_jirl,
                      uint8_t meta0, uint8_t meta1,
                      bool mispredict = false, bool repair = false,
                      uint32_t btb_mispredicts = 0) {
    dut->update_valid = 1;
    dut->update_is_mispredict_update = mispredict;
    dut->update_is_repair_update = repair;
    dut->update_btb_mispredicts = btb_mispredicts;
    dut->update_pc = pc;
    dut->update_br_mask = br_mask;
    dut->update_cfi_valid = cfi_valid;
    dut->update_cfi_idx = cfi_idx;
    dut->update_cfi_taken = cfi_taken;
    dut->update_cfi_is_br = cfi_is_br;
    dut->update_cfi_is_b_bl = cfi_is_b_bl;
    dut->update_cfi_is_jirl = cfi_is_jirl;
    set_update_meta(dut, meta0, meta1);
    eval_cycle(dut);
    dut->update_valid = 0;
}

void lookup_meta(Vbim_test_top* dut, uint32_t pc) {
    do_bim_lookup(dut, pc, 0, 0);
}

void test_update_uses_prediction_meta(Vbim_test_top* dut) {
    clear_inputs(dut);
    reset_bim(dut);
    constexpr uint32_t pc = 0x1c011000U;

    // RAM starts at 2, but the prediction-time counter was 0. A taken commit
    // must produce 1 from meta, rather than 3 from the current RAM contents.
    drive_raw_update(dut, pc, 0b01, true, 0, true,
                     true, false, false, 0, 2);
    lookup_meta(dut, pc);
    expect_eq("meta source: update starts from prediction meta",
              read_bim_meta(dut, 0), 1);
}

void test_two_entry_write_bypass(Vbim_test_top* dut) {
    clear_inputs(dut);
    reset_bim(dut);
    constexpr uint32_t pc_a = 0x1c012000U;
    constexpr uint32_t pc_b = 0x1c013000U;

    drive_raw_update(dut, pc_a, 0b01, true, 0, true,
                     true, false, false, 0, 2);
    drive_raw_update(dut, pc_b, 0b01, true, 0, true,
                     true, false, false, 0, 2);
    drive_raw_update(dut, pc_a, 0b01, true, 0, true,
                     true, false, false, 0, 2);

    lookup_meta(dut, pc_a);
    expect_eq("bypass: A uses its previous committed value",
              read_bim_meta(dut, 0), 2);
    lookup_meta(dut, pc_b);
    expect_eq("bypass: B remains independently tracked",
              read_bim_meta(dut, 0), 1);
}

void test_lane1_nt_alternation(Vbim_test_top* dut) {
    clear_inputs(dut);
    reset_bim(dut);

    // This is the bank-local address for a branch at ...077c: physical bank 1,
    // local lane 1. A phase of N,T drives a weak-taken BIM counter between
    // 2'b10 and 2'b01, so its direction prediction is wrong every time.
    constexpr uint32_t pc = 0x1c00'0778U;
    constexpr int iterations = 16;
    const uint64_t lane1_branch =
        pred_to_u64({false, true, false, false, 0x1c00'0700U});
    uint8_t expected_ctr = 2;
    int mispredicts = 0;
    uint8_t history_ctrs[2] = {2, 2};
    bool previous_taken = false;
    int history_mispredicts = 0;

    for (int iteration = 0; iteration < iterations; ++iteration) {
        do_bim_lookup(dut, pc, 0, lane1_branch);

        const uint8_t lane0_meta = read_bim_meta(dut, 0);
        const uint8_t lane1_meta = read_bim_meta(dut, 1);
        const bool predicted_taken = read_f2_pred(dut, 1).taken;
        const bool actual_taken = (iteration & 1) != 0;

        expect_eq("alternating lane1: lane0 remains weak taken",
                  lane0_meta, 2);
        expect_eq("alternating lane1: metadata follows 10/01 state",
                  lane1_meta, expected_ctr);
        expect_eq("alternating lane1: prediction uses counter MSB",
                  predicted_taken, (expected_ctr >> 1) & 1U);
        mispredicts += predicted_taken != actual_taken;

        // A one-bit-history reference separates the two contexts addressed
        // by the same PC. This is the minimum behavior expected from a future
        // GShare implementation; it is deliberately not DUT behavior here.
        uint8_t& history_ctr = history_ctrs[previous_taken ? 1 : 0];
        const bool history_prediction = (history_ctr >> 1) & 1U;
        history_mispredicts += history_prediction != actual_taken;
        if (actual_taken)
            history_ctr = history_ctr == 3 ? 3 : history_ctr + 1;
        else
            history_ctr = history_ctr == 0 ? 0 : history_ctr - 1;
        previous_taken = actual_taken;

        drive_raw_update(dut, pc, 0b10, true, 1, actual_taken,
                         true, false, false, lane0_meta, lane1_meta);
        if (actual_taken)
            expected_ctr = expected_ctr == 3 ? 3 : expected_ctr + 1;
        else
            expected_ctr = expected_ctr == 0 ? 0 : expected_ctr - 1;
    }

    lookup_meta(dut, pc);
    expect_eq("alternating lane1: even-length sequence returns to 10",
              read_bim_meta(dut, 1), 2);
    expect_eq("alternating lane1: N/T phase defeats one BIM counter",
              mispredicts, iterations);
    expect_eq("alternating lane1: one-bit history only pays cold misses",
              history_mispredicts, 3);
}

void test_lane1_stale_meta_write_bypass(Vbim_test_top* dut) {
    clear_inputs(dut);
    reset_bim(dut);

    constexpr uint32_t pc = 0x1c00'1778U;

    // Model four already-in-flight predictions, all of which observed the
    // same old 2'b10 metadata. The write-bypass chain must serialize their
    // N,T,N,T commits as 10->01->10->01->10 instead of restarting from 10.
    for (int update = 0; update < 4; ++update) {
        const bool actual_taken = (update & 1) != 0;
        drive_raw_update(dut, pc, 0b10, true, 1, actual_taken,
                         true, false, false, 2, 2);
    }

    lookup_meta(dut, pc);
    expect_eq("alternating bypass: lane0 metadata remains unchanged",
              read_bim_meta(dut, 0), 2);
    expect_eq("alternating bypass: stale metadata commits form one chain",
              read_bim_meta(dut, 1), 2);
}

void test_noncommit_updates_are_ignored(Vbim_test_top* dut) {
    clear_inputs(dut);
    reset_bim(dut);
    constexpr uint32_t pc = 0x1c014000U;

    drive_raw_update(dut, pc, 0b01, true, 0, false,
                     true, false, false, 2, 2, true, false, 0);
    drive_raw_update(dut, pc, 0b01, true, 0, false,
                     true, false, false, 2, 2, false, true, 0);
    drive_raw_update(dut, pc, 0b01, true, 0, false,
                     true, false, false, 2, 2, false, false, 1);

    lookup_meta(dut, pc);
    expect_eq("update modes: noncommit updates leave BIM unchanged",
              read_bim_meta(dut, 0), 2);
}

void test_unconditional_cfi_training(Vbim_test_top* dut) {
    clear_inputs(dut);
    reset_bim(dut);
    constexpr uint32_t b_bl_pc = 0x1c015000U;
    constexpr uint32_t jirl_pc = 0x1c016000U;

    drive_raw_update(dut, b_bl_pc, 0, true, 0, true,
                     false, true, false, 2, 2);
    lookup_meta(dut, b_bl_pc);
    expect_eq("B/BL: selected lane trains taken",
              read_bim_meta(dut, 0), 3);

    drive_raw_update(dut, jirl_pc, 0, true, 0, true,
                     false, false, true, 2, 2);
    lookup_meta(dut, jirl_pc);
    expect_eq("JIRL: selected lane trains not-taken like v4 JALR",
              read_bim_meta(dut, 0), 1);
}

void test_direct_cfi_after_earlier_branch(Vbim_test_top* dut) {
    clear_inputs(dut);
    reset_bim(dut);
    constexpr uint32_t pc = 0x1c017000U;

    // Lane 0 is an earlier conditional branch that fell through. Lane 1 is
    // the selected direct B/BL CFI and must be the only taken lane.
    drive_raw_update(dut, pc, 0b01, true, 1, true,
                     false, true, false, 2, 2);
    lookup_meta(dut, pc);
    expect_eq("mixed CFI: earlier branch trains not-taken",
              read_bim_meta(dut, 0), 1);
    expect_eq("mixed CFI: selected B/BL trains taken",
              read_bim_meta(dut, 1), 3);
}

void test_conditional_taken_requires_br_mask(Vbim_test_top* dut) {
    clear_inputs(dut);
    reset_bim(dut);
    constexpr uint32_t pc = 0x1c018000U;

    // A selected CFI marked as a conditional branch is taken only when the
    // corresponding branch-mask bit is also present.
    drive_raw_update(dut, pc, 0, true, 0, true,
                     true, false, false, 2, 2);
    lookup_meta(dut, pc);
    expect_eq("BR mask: absent bit trains selected conditional CFI not-taken",
              read_bim_meta(dut, 0), 1);
}

void test_meta_ctr_values(Vbim_test_top* dut) {
    clear_inputs(dut); ref_init(); reset_bim(dut);

    // BR taken ×3 → ctr=3 → meta lane0=3
    for (int i = 0; i < 3; ++i)
        do_train(dut, 0x1c00d000, 0, true, true, false, false);
    uint64_t br_in = pred_to_u64({false, true, false, false, 0});
    do_bim_lookup(dut, 0x1c00d000, br_in, 0);
    expect_eq("meta: ctr=3", read_bim_meta(dut, 0), 3);

    // BR nt ×4 → ctr=0 → meta lane0=0
    for (int i = 0; i < 4; ++i)
        do_train(dut, 0x1c00d000, 0, false, true, false, false);
    do_bim_lookup(dut, 0x1c00d000, br_in, 0);
    expect_eq("meta: ctr=0", read_bim_meta(dut, 0), 0);
}

void test_meta_two_lanes(Vbim_test_top* dut) {
    clear_inputs(dut); ref_init(); reset_bim(dut);

    do_train(dut, 0x1c00e000, 0, true,  true,  false, false);
    do_train(dut, 0x1c00e000, 1, false, true,  false, false);
    do_train(dut, 0x1c00e000, 1, false, true,  false, false);

    uint64_t br0 = pred_to_u64({false, true, false, false, 0});
    uint64_t br1 = pred_to_u64({false, true, false, false, 0});
    do_bim_lookup(dut, 0x1c00e000, br0, br1);

    expect_eq("meta2: lane0 ctr=3", read_bim_meta(dut, 0), 3);
    expect_eq("meta2: lane1 ctr=0", read_bim_meta(dut, 1), 0);
}

void test_target_preserved(Vbim_test_top* dut) {
    // BIM 只改 direction, 不改 target
    for (int i = 0; i < 3; ++i)
        do_train(dut, 0x1c00b000, 0, true, true, false, false);

    uint64_t lane0_in = pred_to_u64({false, true, false, false, 0xdeadbeef});
    do_bim_lookup(dut, 0x1c00b000, lane0_in, 0);
    expect_pred_eq("target: preserved", read_f2_pred(dut, 0),
                   true, true, false, false, 0xdeadbeef);
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vbim_test_top;
    clear_inputs(dut);
    ref_init();
    reset_bim(dut);

    test_br_taken_training(dut);
    test_br_not_taken_training(dut);
    test_b_bl_passes_through(dut);
    test_jirl_passes_through(dut);
    test_two_lanes_independent(dut);
    test_counter_saturation(dut);
    test_different_pc_different_ctrs(dut);
    test_fetch_row_addressing(dut);
    test_non_branch_lane_passes_through(dut);
    test_mispredict_update_is_ignored(dut);
    test_packet_branch_outcomes(dut);
    test_target_preserved(dut);
    test_meta_ctr_values(dut);
    test_meta_two_lanes(dut);
    test_update_uses_prediction_meta(dut);
    test_two_entry_write_bypass(dut);
    test_lane1_nt_alternation(dut);
    test_lane1_stale_meta_write_bypass(dut);
    test_noncommit_updates_are_ignored(dut);
    test_unconditional_cfi_training(dut);
    test_direct_cfi_after_earlier_branch(dut);
    test_conditional_taken_requires_br_mask(dut);

    pass("bim");
    delete dut;
    return 0;
}
