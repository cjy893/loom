#include "Vubtb_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

#include <cstdint>
#include <cstdio>
#include <cstdlib>

namespace {

constexpr int kBankWidth    = 2;
constexpr int kPredWidth    = 36;   // 4 flags + 32 target
constexpr int kNumEntries   = 16;

// ============================================================
// f1_preds 位布局: 72-bit packed struct 数组, Verilator 用 VlWide<3>
//   word[0]=[31:0], word[1]=[63:32], word[2]=[95:64]
//   f1_preds[lane] 在 bit [lane*36 +: 36]
//   branch_prediction_t = {taken, is_br, is_b_bl, is_jirl, predicted_pc[31:0]}
// ============================================================
struct PredInfo {
    bool     taken;
    bool     is_br;
    bool     is_b_bl;
    bool     is_jirl;
    uint32_t target;
};

PredInfo read_pred(Vubtb_test_top* dut, int lane) {
    uint32_t w0 = dut->f1_preds[0];   // bits [31:0]
    uint32_t w1 = dut->f1_preds[1];   // bits [63:32]
    uint32_t w2 = dut->f1_preds[2];   // bits [95:64]

    uint64_t raw;
    if (lane == 0) {
        raw = uint64_t(w0) | (uint64_t(w1 & 0xF) << 32);
    } else {
        raw = (uint64_t(w1) >> 4) | (uint64_t(w2 & 0xFF) << 28);
    }

    PredInfo p;
    // struct packed: {taken, is_br, is_b_bl, is_jirl, predicted_pc[31:0]}
    //   first field = MSB → taken is raw[35], target is raw[31:0]
    p.target  = raw & 0xFFFFFFFFULL;
    p.is_jirl = (raw >> 32) & 1;
    p.is_b_bl = (raw >> 33) & 1;
    p.is_br   = (raw >> 34) & 1;
    p.taken   = (raw >> 35) & 1;
    return p;
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

void expect_miss(const char* name, const PredInfo& p) {
    expect_pred_eq(name, p, false, false, false, false, 0);
}

// ============================================================
// 驱动函数
// ============================================================
void clear_inputs(Vubtb_test_top* dut) {
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
}

void do_lookup(Vubtb_test_top* dut, uint32_t pc) {
    dut->f0_valid = 1;
    dut->f0_pc    = pc;
    eval_cycle(dut);    // f0 → f1
    dut->f0_valid = 0;
}

void do_update(Vubtb_test_top* dut, uint32_t pc, int cfi_idx, uint32_t target,
               bool is_br, bool is_b_bl, bool is_jirl, bool cfi_taken,
               bool is_mispredict = false) {
    dut->update_valid                = 1;
    dut->update_is_mispredict_update = is_mispredict;
    dut->update_is_repair_update     = 0;
    dut->update_pc                   = pc;
    dut->update_cfi_idx              = cfi_idx;
    dut->update_target               = target;
    dut->update_cfi_valid            = 1;
    dut->update_cfi_taken            = cfi_taken;
    dut->update_cfi_is_br            = is_br;
    dut->update_cfi_is_b_bl          = is_b_bl;
    dut->update_cfi_is_jirl          = is_jirl;
    eval_cycle(dut);
    dut->update_valid = 0;
}

// ============================================================
// 测试用例
// ============================================================

void test_reset_cold_miss(Vubtb_test_top* dut) {
    do_lookup(dut, 0x1c001000);
    for (int lane = 0; lane < kBankWidth; ++lane)
        expect_miss("reset: cold miss", read_pred(dut, lane));
}

void test_train_b_bl(Vubtb_test_top* dut) {
    // B_BL at lane 0 of bank 0x1c0010c0
    do_update(dut, 0x1c0010c0, 0, 0x1c008100, false, true, false, true);
    do_lookup(dut, 0x1c0010c0);

    PredInfo p0 = read_pred(dut, 0);
    expect_pred_eq("b_bl: lane0", p0, true, false, true, false, 0x1c008100);

    PredInfo p1 = read_pred(dut, 1);
    expect_miss("b_bl: lane1 miss", p1);
}

void test_train_br_taken(Vubtb_test_top* dut) {
    // BR taken at lane 1, bank PC 0x1c002000
    // lane1 pc = 0x1c002000 + 4 = 0x1c002004
    do_update(dut, 0x1c002000, 1, 0x1c003000, true, false, false, true);
    do_lookup(dut, 0x1c002000);

    PredInfo p0 = read_pred(dut, 0);
    expect_miss("br_taken: lane0 miss", p0);

    PredInfo p1 = read_pred(dut, 1);
    expect_pred_eq("br_taken: lane1", p1, true, true, false, false, 0x1c003000);
}

void test_train_jirl(Vubtb_test_top* dut) {
    do_update(dut, 0x1c004000, 0, 0x1c005000, false, false, true, true);
    do_lookup(dut, 0x1c004000);

    PredInfo p0 = read_pred(dut, 0);
    expect_pred_eq("jirl: lane0", p0, true, false, false, true, 0x1c005000);
}

void test_br_not_taken_skips_alloc(Vubtb_test_top* dut) {
    // BR, cfi_taken=0 → 不应分配
    do_update(dut, 0x1c006000, 0, 0xdeadbeef, true, false, false, false);
    do_lookup(dut, 0x1c006000);
    expect_miss("br_nt: not allocated", read_pred(dut, 0));
}

void test_update_target(Vubtb_test_top* dut) {
    do_update(dut, 0x1c007000, 0, 0x1c008000, false, true, false, true);
    do_lookup(dut, 0x1c007000);
    expect_pred_eq("update_target: old", read_pred(dut, 0),
                   true, false, true, false, 0x1c008000);

    // 同 tag，换 target
    do_update(dut, 0x1c007000, 0, 0x1c009000, false, true, false, true);
    do_lookup(dut, 0x1c007000);
    expect_pred_eq("update_target: new", read_pred(dut, 0),
                   true, false, true, false, 0x1c009000);
}

void test_type_change(Vubtb_test_top* dut) {
    // 先 BR
    do_update(dut, 0x1c00a000, 0, 0x1c00b000, true, false, false, true);
    do_lookup(dut, 0x1c00a000);
    expect_pred_eq("type_change: was br", read_pred(dut, 0),
                   true, true, false, false, 0x1c00b000);

    // 改成 B_BL
    do_update(dut, 0x1c00a000, 0, 0x1c00c000, false, true, false, true);
    do_lookup(dut, 0x1c00a000);
    expect_pred_eq("type_change: now b_bl", read_pred(dut, 0),
                   true, false, true, false, 0x1c00c000);
}

void test_fill_and_evict(Vubtb_test_top* dut) {
    // 填满 16 entry
    for (int i = 0; i < kNumEntries; ++i) {
        do_update(dut, 0x1c010000u + uint32_t(i * 16), 0,
                  0x1c020000u + uint32_t(i), false, true, false, true);
    }

    // 验证 16 个都命中
    for (int i = 0; i < kNumEntries; ++i) {
        do_lookup(dut, 0x1c010000u + uint32_t(i * 16));
        PredInfo p = read_pred(dut, 0);
        if (!p.taken) {
            std::fprintf(stderr, "FAIL: fill_and_evict: entry %d missing\n", i);
            std::exit(1);
        }
    }

    // 第 17 个 → 驱逐轮转指针指向的 entry[0]
    do_update(dut, 0x1c020000, 0, 0xbadf00d, false, true, false, true);
    do_lookup(dut, 0x1c020000);
    expect_pred_eq("evict: new entry", read_pred(dut, 0),
                   true, false, true, false, 0xbadf00d);

    // entry[0] 被驱逐
    do_lookup(dut, 0x1c010000);
    expect_miss("evict: old entry0 gone", read_pred(dut, 0));
}

void test_pipeline_simultaneous(Vubtb_test_top* dut) {
    // 先训好一个 entry
    do_update(dut, 0x1c030000, 0, 0x1c040000, false, true, false, true);

    // 同一拍：f0 查 0x1c030000，同时 update 改 target → 0xcafe0000
    // f1 流水寄存器和 entry 在同一个 posedge 更新，f1 组合逻辑立刻看到新值
    dut->f0_valid                   = 1;
    dut->f0_pc                      = 0x1c030000;
    dut->update_valid               = 1;
    dut->update_is_mispredict_update = 0;
    dut->update_pc                  = 0x1c030000;
    dut->update_cfi_idx             = 0;
    dut->update_target              = 0xcafe0000;
    dut->update_cfi_valid           = 1;
    dut->update_cfi_taken           = 1;
    dut->update_cfi_is_b_bl         = 1;
    eval_cycle(dut);
    dut->f0_valid      = 0;
    dut->update_valid  = 0;

    // 同拍写入可见：target 已经是新值
    PredInfo p0 = read_pred(dut, 0);
    expect_pred_eq("pipeline: new target visible same cycle", p0,
                   true, false, true, false, 0xcafe0000);

    // 下一拍确认稳定
    do_lookup(dut, 0x1c030000);
    p0 = read_pred(dut, 0);
    expect_pred_eq("pipeline: target stable next cycle", p0,
                   true, false, true, false, 0xcafe0000);
}

void test_mispredict_update_does_not_allocate(Vubtb_test_top* dut) {
    // v4 contract: only commit updates train the target predictor.
    do_update(dut, 0x1c050000, 0, 0x1c060000, false, true, false, true, true);
    do_lookup(dut, 0x1c050000);
    expect_miss("mispredict: no allocation", read_pred(dut, 0));
}

void test_multiple_banks_independent(Vubtb_test_top* dut) {
    // 同一 bank PC 下 lane0 和 lane1 不同分支
    do_update(dut, 0x1c070000, 0, 0x1c080000, false, true, false, true);
    do_update(dut, 0x1c070000, 1, 0x1c090000, true, false, false, true);

    do_lookup(dut, 0x1c070000);
    expect_pred_eq("two_lanes: lane0", read_pred(dut, 0),
                   true, false, true, false, 0x1c080000);
    expect_pred_eq("two_lanes: lane1", read_pred(dut, 1),
                   true, true, false, false, 0x1c090000);
}

void test_tag_4byte_granularity(Vubtb_test_top* dut) {
    // PC[1:0] 会被忽略，只有 PC[31:2] 参与 tag 比较
    // 在 lane_pc = f1_pc + lane*4 的计算中，+lane*4 不改变 tag
    // 所以 lane0 和 lane1 对应不同的 PC[31:2]，不会冲突
    // 这里验证 tag 正确匹配 4-byte 边界
    do_update(dut, 0x1c0a0004, 0, 0x1c0b0000, false, true, false, true);

    // 查 0x1c0a0004 → lane0_pc = 0x1c0a0004，tag = PC[31:2] = 0x1c0a0004[31:2]
    do_lookup(dut, 0x1c0a0004);
    expect_pred_eq("tag_4b: hit at trained pc", read_pred(dut, 0),
                   true, false, true, false, 0x1c0b0000);

    // 查 0x1c0a0000 → lane0_pc = 0x1c0a0000，tag 不同，不应命中
    do_lookup(dut, 0x1c0a0000);
    expect_miss("tag_4b: miss at different tag", read_pred(dut, 0));
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vubtb_test_top;
    clear_inputs(dut);
    reset_dut(dut);

    // 复位后立即查一次确认全 0
    do_lookup(dut, 0x1c000000);
    for (int lane = 0; lane < kBankWidth; ++lane)
        expect_miss("post-reset", read_pred(dut, lane));

    test_reset_cold_miss(dut);
    test_train_b_bl(dut);
    test_train_br_taken(dut);
    test_train_jirl(dut);
    test_br_not_taken_skips_alloc(dut);
    test_update_target(dut);
    test_type_change(dut);
    test_fill_and_evict(dut);
    test_pipeline_simultaneous(dut);
    test_mispredict_update_does_not_allocate(dut);
    test_multiple_banks_independent(dut);
    test_tag_4byte_granularity(dut);

    pass("ubtb");
    delete dut;
    return 0;
}
