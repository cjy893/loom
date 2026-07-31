#include "Vbpd_full_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

#include <cstdint>
#include <cstdio>
#include <cstdlib>

namespace {

constexpr int kBankWidth   = 2;
constexpr int kRasEntries  = 32;
constexpr int kGhistLen    = 64;
constexpr int kBimResetCycles = 2048;

// ============================================================
// prediction helpers
// ============================================================
struct PredInfo { bool taken, is_br, is_b_bl, is_jirl; uint32_t target; };

PredInfo read_from_vlwide(uint32_t w0, uint32_t w1, uint32_t w2, int lane) {
    uint64_t raw = (lane == 0)
        ? (uint64_t(w0) | (uint64_t(w1 & 0xF) << 32))
        : ((uint64_t(w1) >> 4) | (uint64_t(w2 & 0xFF) << 28));
    PredInfo p;
    p.target  = raw & 0xFFFFFFFFULL;
    p.is_jirl = (raw >> 32) & 1;
    p.is_b_bl = (raw >> 33) & 1;
    p.is_br   = (raw >> 34) & 1;
    p.taken   = (raw >> 35) & 1;
    return p;
}

PredInfo read_ubtb(Vbpd_full_test_top* dut, int l) {
    return read_from_vlwide(dut->ubtb_f1_preds[0], dut->ubtb_f1_preds[1], dut->ubtb_f1_preds[2], l);
}
PredInfo read_bim(Vbpd_full_test_top* dut, int l) {
    return read_from_vlwide(dut->bim_f2_preds[0], dut->bim_f2_preds[1], dut->bim_f2_preds[2], l);
}
PredInfo read_btb(Vbpd_full_test_top* dut, int l) {
    return read_from_vlwide(dut->btb_f3_preds[0], dut->btb_f3_preds[1], dut->btb_f3_preds[2], l);
}

uint64_t read_ghist_hist(Vbpd_full_test_top* dut) {
    uint32_t w0 = dut->current_ghist[0], w1 = dut->current_ghist[1], w2 = dut->current_ghist[2];
    return (uint64_t(w0) >> 8) | (uint64_t(w1) << 24) | (uint64_t(w2 & 0xFF) << 56);
}

void expect_pred(const char* n, const PredInfo& p, bool t, bool br, bool bb, bool ji, uint32_t tg) {
    if (p.taken!=(unsigned long long)t||p.is_br!=(unsigned long long)br||
        p.is_b_bl!=(unsigned long long)bb||p.is_jirl!=(unsigned long long)ji||p.target!=(unsigned long long)tg) {
        std::fprintf(stderr,"FAIL: %s: got{t=%u br=%u b_bl=%u jirl=%u t=0x%08x} exp{t=%u br=%u b_bl=%u jirl=%u t=0x%08x}\n",
            n,p.taken,p.is_br,p.is_b_bl,p.is_jirl,p.target,t,br,bb,ji,tg);
        std::exit(1);
    }
}

// ============================================================
// 驱动
// ============================================================
void clear_inputs(Vbpd_full_test_top* dut) {
    dut->f0_valid = 0; dut->f0_pc = 0;
    dut->f1_update_valid = 0; dut->f1_is_br = 0; dut->f1_taken = 0;
    dut->f1_is_call = 0; dut->f1_is_ret = 0;
    dut->ras_read_idx = 0;
    dut->ghist_restore_valid = 0;
    dut->restore_old_history = 0; dut->restore_saw_nt = 0; dut->restore_ras_idx = 0;
    dut->update_valid = 0; dut->update_is_mispredict_update = 0;
    dut->update_is_repair_update = 0; dut->update_btb_mispredicts = 0;
    dut->update_pc = 0; dut->update_br_mask = 0; dut->update_cfi_valid = 0;
    dut->update_cfi_idx = 0; dut->update_cfi_taken = 0;
    dut->update_cfi_mispredicted = 0; dut->update_cfi_is_br = 0;
    dut->update_cfi_is_b_bl = 0; dut->update_cfi_is_jirl = 0; dut->update_target = 0;
    for (int i = 0; i < 4; ++i) dut->update_meta[i] = 0;
}

void do_train(Vbpd_full_test_top* dut, uint32_t pc, int cfi_idx,
              uint32_t target, bool is_br, bool is_b_bl, bool is_jirl, bool cfi_taken) {
    dut->f0_valid = 1;
    dut->f0_pc = pc;
    eval_cycle(dut);
    dut->f0_valid = 0;
    eval_cycle(dut);

    uint32_t prediction_meta[4];
    for (int i = 0; i < 4; ++i) prediction_meta[i] = dut->bim_f2_meta[i];
    eval_cycle(dut);

    for (int i = 0; i < 4; ++i) dut->update_meta[i] = prediction_meta[i];
    dut->update_valid = 1; dut->update_pc = pc; dut->update_cfi_idx = cfi_idx;
    dut->update_target = target; dut->update_cfi_valid = 1;
    dut->update_cfi_taken = cfi_taken; dut->update_br_mask = is_br ? (1u<<cfi_idx) : 0;
    dut->update_cfi_is_br = is_br; dut->update_cfi_is_b_bl = is_b_bl;
    dut->update_cfi_is_jirl = is_jirl;
    eval_cycle(dut);
    dut->update_valid = 0;
    eval_cycle(dut);
}

// A lookup is accepted for one cycle, then advances through two bubbles.
void step1(Vbpd_full_test_top* dut, uint32_t pc) {
    dut->f0_valid = 1;
    dut->f0_pc = pc;
    eval_cycle(dut);
}
void step2(Vbpd_full_test_top* dut) {
    dut->f0_valid = 0;
    eval_cycle(dut);
}
void step3(Vbpd_full_test_top* dut) {
    eval_cycle(dut);
}

// ============================================================
// 测试
// ============================================================

void test_full_cold_miss(Vbpd_full_test_top* dut) {
    step1(dut, 0x1c001000);
    expect_pred("cold: ubtb", read_ubtb(dut,0), false,false,false,false,0);
    step2(dut);
    expect_pred("cold: bim",  read_bim(dut,0),  false,false,false,false,0);
    step3(dut);
    expect_pred("cold: btb",  read_btb(dut,0),  false,false,false,false,0);
}

void test_full_b_bl(Vbpd_full_test_top* dut) {
    do_train(dut, 0x1c002000, 0, 0x1c008000, false, true, false, true);

    step1(dut, 0x1c002000);
    expect_pred("b_bl: ubtb", read_ubtb(dut,0), true,false,true,false,0x1c008000);
    step2(dut);
    expect_pred("b_bl: bim",  read_bim(dut,0),  true,false,true,false,0x1c008000);
    step3(dut);
    expect_pred("b_bl: btb",  read_btb(dut,0),  true,false,true,false,0x1c008000);
}

void test_full_br_bim_override(Vbpd_full_test_top* dut) {
    do_train(dut, 0x1c003000, 0, 0x1c009000, true, false, false, true);
    for (int i = 0; i < 4; ++i)
        do_train(dut, 0x1c003000, 0, 0x1c009000, true, false, false, false);

    step1(dut, 0x1c003000);
    expect_pred("br: ubtb taken", read_ubtb(dut,0), true,true,false,false,0x1c009000);
    step2(dut);
    expect_pred("br: bim nt",     read_bim(dut,0),  false,true,false,false,0x1c009000);
    step3(dut);
    expect_pred("br: btb nt",     read_btb(dut,0),  false,true,false,false,0x1c009000);
}

void test_ghist_updates_on_br(Vbpd_full_test_top* dut) {
    // reset ghist
    dut->ghist_restore_valid = 1;
    dut->restore_old_history = 0; dut->restore_ras_idx = 0;
    eval_cycle(dut);
    dut->ghist_restore_valid = 0;

    // 预测 BR taken → ghist 应左移插入 1
    dut->f1_update_valid = 1;
    dut->f1_is_br = 1; dut->f1_taken = 1;
    eval_cycle(dut);
    dut->f1_update_valid = 0;
    dut->f1_is_br = 0; dut->f1_taken = 0;
    expect_eq("ghist: shift 1", read_ghist_hist(dut), 1ULL);

    // 再来一个 not-taken
    dut->f1_update_valid = 1;
    dut->f1_is_br = 1; dut->f1_taken = 0;
    eval_cycle(dut);
    dut->f1_update_valid = 0;
    dut->f1_is_br = 0;
    expect_eq("ghist: shift 0 → 10", read_ghist_hist(dut), 2ULL);
}

void test_ras_push_pop(Vbpd_full_test_top* dut) {
    dut->ghist_restore_valid = 1;
    dut->restore_old_history = 0; dut->restore_ras_idx = 0;
    eval_cycle(dut);
    dut->ghist_restore_valid = 0;

    // call: push return address
    dut->f1_update_valid = 1;
    dut->f1_is_br = 0;
    dut->f1_taken = 0;
    dut->f1_is_call = 1;
    dut->f1_is_ret = 0;
    dut->f0_pc = 0x1c004000;  // return addr = 0x1c004004
    eval_cycle(dut);
    dut->f1_update_valid = 0;
    dut->f1_is_call = 0;

    // ras_idx 0 被写入
    dut->ras_read_idx = 0;
    dut->eval();
    expect_eq("ras: push idx0", dut->ras_read_addr, 0x1c004004U);

    // ret: read from ras
    dut->ras_read_idx = 0;
    dut->eval();
    expect_eq("ras: ret reads idx0", dut->ras_read_addr, 0x1c004004U);
}

void test_ghist_restore(Vbpd_full_test_top* dut) {
    dut->ghist_restore_valid = 1;
    dut->restore_old_history = 0;
    dut->restore_saw_nt = 0;
    dut->restore_ras_idx = 0;
    eval_cycle(dut);
    dut->ghist_restore_valid = 0;

    dut->f1_update_valid = 1;
    dut->f1_is_br = 1; dut->f1_taken = 1;
    dut->f1_is_call = 0; dut->f1_is_ret = 0;
    eval_cycle(dut);
    dut->f1_update_valid = 0;
    dut->f1_is_br = 0; dut->f1_taken = 0;
    expect_eq("restore: before", read_ghist_hist(dut), 1ULL);

    // mispredict → restore
    dut->ghist_restore_valid = 1;
    dut->restore_old_history = 0xABCD0000;
    dut->restore_ras_idx = 5;
    eval_cycle(dut);
    dut->ghist_restore_valid = 0;

    expect_eq("restore: hist", read_ghist_hist(dut), 0xABCD0000ULL);
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vbpd_full_test_top;
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

    test_full_cold_miss(dut);
    test_full_b_bl(dut);
    test_full_br_bim_override(dut);
    test_ghist_updates_on_br(dut);
    test_ras_push_pop(dut);
    test_ghist_restore(dut);

    pass("bpd_full_integration");
    delete dut;
    return 0;
}
