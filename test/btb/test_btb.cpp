#include "Vbtb_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

#include <cstdint>
#include <cstdio>
#include <cstdlib>

namespace {

constexpr int kBankWidth    = 2;
constexpr int kPredWidth    = 36;
constexpr int kNumSets      = 32;
constexpr int kNumWays      = 2;
constexpr int kTagSz        = 22;

// ============================================================
// prediction bit-level encode/decode
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

// Drive f2_preds_in (72-bit VlWide<3>)
void set_f2_preds_in(Vbtb_test_top* dut, uint64_t lane0, uint64_t lane1) {
    uint32_t w0 = uint32_t(lane0 & 0xFFFFFFFFULL);
    uint32_t w1 = uint32_t((lane0 >> 32) & 0xFULL)
                | uint32_t((lane1 & 0x0FFFFFFFULL) << 4);
    uint32_t w2 = uint32_t((lane1 >> 28) & 0xFFULL);
    dut->f2_preds_in[0] = w0;
    dut->f2_preds_in[1] = w1;
    dut->f2_preds_in[2] = w2;
}

// Read f3_preds (same VlWide<3> layout)
PredInfo read_f3_pred(Vbtb_test_top* dut, int lane) {
    uint32_t w0 = dut->f3_preds[0];
    uint32_t w1 = dut->f3_preds[1];
    uint32_t w2 = dut->f3_preds[2];
    uint64_t raw;
    if (lane == 0) {
        raw = uint64_t(w0) | (uint64_t(w1 & 0xF) << 32);
    } else {
        raw = (uint64_t(w1) >> 4) | (uint64_t(w2 & 0xFF) << 28);
    }
    return u64_to_pred(raw);
}

// ============================================================
// BTB reference model
// ============================================================
struct BtbEntry {
    bool     valid;
    uint32_t tag;       // PC[31:10]
    uint32_t target;
    bool     is_br;
    bool     is_b_bl;
    bool     is_jirl;
};

BtbEntry ref_btb[kNumSets][kNumWays];
int       ref_repl[kNumSets];   // next way to replace

void ref_init() {
    for (int s = 0; s < kNumSets; ++s) {
        for (int w = 0; w < kNumWays; ++w)
            ref_btb[s][w] = {false, 0, 0, false, false, false};
        ref_repl[s] = 0;
    }
}

int ref_set(uint32_t pc, int lane) {
    return int(((pc >> 2) + lane) % kNumSets);
}

uint32_t ref_tag(uint32_t pc, int lane) {
    return (pc + uint32_t(lane) * 4) >> 10;   // PC[31:10], 与 SV 一致
}

BtbEntry* ref_lookup(uint32_t pc, int lane) {
    int s = ref_set(pc, lane);
    uint32_t t = ref_tag(pc, lane);
    for (int w = 0; w < kNumWays; ++w) {
        if (ref_btb[s][w].valid && ref_btb[s][w].tag == t)
            return &ref_btb[s][w];
    }
    return nullptr;
}

void ref_train(uint32_t pc, int cfi_idx, uint32_t target,
               bool is_br, bool is_b_bl, bool is_jirl) {
    int s = ref_set(pc, cfi_idx);
    uint32_t t = ref_tag(pc, cfi_idx);

    // 先找匹配 way
    for (int w = 0; w < kNumWays; ++w) {
        if (ref_btb[s][w].valid && ref_btb[s][w].tag == t) {
            ref_btb[s][w].target  = target;
            ref_btb[s][w].is_br   = is_br;
            ref_btb[s][w].is_b_bl = is_b_bl;
            ref_btb[s][w].is_jirl = is_jirl;
            return;
        }
    }

    // 分配新 way
    int w = ref_repl[s];
    ref_btb[s][w] = {true, t, target, is_br, is_b_bl, is_jirl};
    ref_repl[s] = (ref_repl[s] + 1) % kNumWays;
}

// ============================================================
// 驱动函数
// ============================================================
void clear_inputs(Vbtb_test_top* dut) {
    dut->f0_valid                  = 0;
    dut->f0_pc                     = 0;
    dut->f2_preds_in[0]            = 0;
    dut->f2_preds_in[1]            = 0;
    dut->f2_preds_in[2]            = 0;
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
    for (int word = 0; word < 4; ++word)
        dut->update_meta[word] = 0;
}

// BTB pipeline: F0 request, S2 lookup result, then align it with the
// corresponding BIM prediction at F3.
void do_btb_lookup(Vbtb_test_top* dut, uint32_t pc,
                   uint64_t lane0_in, uint64_t lane1_in) {
    dut->f0_valid = 1;
    dut->f0_pc    = pc;
    set_f2_preds_in(dut, 0, 0);
    eval_cycle(dut);   // F0 -> F1

    dut->f0_valid = 0;
    eval_cycle(dut);   // F1 -> S2

    set_f2_preds_in(dut, lane0_in, lane1_in);
    eval_cycle(dut);   // S2 BTB result + matching BIM result -> F3
}

void do_train(Vbtb_test_top* dut, uint32_t pc, int cfi_idx, uint32_t target,
              bool is_br, bool is_b_bl, bool is_jirl) {
    dut->update_valid        = 1;
    dut->update_is_mispredict_update = 0;
    dut->update_pc           = pc;
    dut->update_cfi_idx      = cfi_idx;
    dut->update_target       = target;
    dut->update_cfi_valid    = 1;
    dut->update_cfi_taken    = true;
    dut->update_br_mask      = (1u << cfi_idx);
    dut->update_cfi_is_br    = is_br;
    dut->update_cfi_is_b_bl  = is_b_bl;
    dut->update_cfi_is_jirl  = is_jirl;
    eval_cycle(dut);
    dut->update_valid = 0;

    ref_train(pc, cfi_idx, target, is_br, is_b_bl, is_jirl);
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

void test_cold_miss(Vbtb_test_top* dut) {
    // 未训练 → BTB miss，f3_preds 穿透 f2_preds_in
    uint64_t lane0_in = pred_to_u64({true, false, true, false, 0xaaa});
    do_btb_lookup(dut, 0x1c001000, lane0_in, 0);

    PredInfo p0 = read_f3_pred(dut, 0);
    expect_pred_eq("cold: lane0 pass-through", p0,
                   true, false, true, false, 0xaaa);
}

void test_train_and_hit(Vbtb_test_top* dut) {
    // 训练 B_BL at lane0 → target 0x1c008000
    do_train(dut, 0x1c002000, 0, 0x1c008000, false, true, false);

    // f2_preds_in 给一个错误的 target → BTB 应修正
    uint64_t lane0_in = pred_to_u64({true, false, true, false, 0xbad});
    do_btb_lookup(dut, 0x1c002000, lane0_in, 0);

    PredInfo p0 = read_f3_pred(dut, 0);
    // BTB 修正 target，其他穿透
    expect_pred_eq("hit: b_bl target fixed", p0,
                   true, false, true, false, 0x1c008000);
}

void test_jirl_target(Vbtb_test_top* dut) {
    do_train(dut, 0x1c003000, 0, 0x1c009000, false, false, true);

    uint64_t lane0_in = pred_to_u64({true, false, false, true, 0xbad});
    do_btb_lookup(dut, 0x1c003000, lane0_in, 0);
    expect_pred_eq("jirl: target fixed", read_f3_pred(dut, 0),
                   true, false, false, true, 0x1c009000);
}

void test_two_way_associativity(Vbtb_test_top* dut) {
    // 同 set (bits[6:2]相同) 不同 tag (bits[31:10]不同) → 两 way 都命中
    uint32_t pc_a = 0x1c004000;   // set=0, tag=0x70010
    uint32_t pc_b = 0x1c104000;   // set=0, tag=0x70410

    do_train(dut, pc_a, 0, 0xdead0001, false, true, false);
    do_train(dut, pc_b, 0, 0xdead0002, true, false, false);

    // 查 pc_a
    do_btb_lookup(dut, pc_a, pred_to_u64({true, false, true, false, 0}), 0);
    expect_pred_eq("2way: pc_a", read_f3_pred(dut, 0),
                   true, false, true, false, 0xdead0001);

    // 查 pc_b
    do_btb_lookup(dut, pc_b, pred_to_u64({true, true, false, false, 0}), 0);
    expect_pred_eq("2way: pc_b", read_f3_pred(dut, 0),
                   true, true, false, false, 0xdead0002);
}

void test_set_conflict_eviction(Vbtb_test_top* dut) {
    // 同 set 插入 3 个不同 tag → 第 3 个驱逐第 1 个
    uint32_t base = 0x1c005000;

    // 训两个 → 两路各占一个
    do_train(dut, base,              0, 0xcafe1000, false, true, false);
    do_train(dut, base + 0x100000,   0, 0xcafe2000, true, false, false);

    // 前两个都命中
    do_btb_lookup(dut, base,             pred_to_u64({true,false,true,false,0}), 0);
    expect_pred_eq("conflict: 1 in way 0", read_f3_pred(dut, 0),
                   true, false, true, false, 0xcafe1000);
    do_btb_lookup(dut, base + 0x100000,  pred_to_u64({true,true,false,false,0}), 0);
    expect_pred_eq("conflict: 2 in way 1", read_f3_pred(dut, 0),
                   true, true, false, false, 0xcafe2000);

    // 第 3 个: 驱逐 way 0 (第1个)
    do_train(dut, base + 0x200000,   0, 0xcafe3000, false, false, true);
    do_btb_lookup(dut, base + 0x200000,  pred_to_u64({true,false,false,true,0}), 0);
    expect_pred_eq("conflict: 3 evicted 1", read_f3_pred(dut, 0),
                   true, false, false, true, 0xcafe3000);

    // 第 1 个被驱逐后 miss
    do_btb_lookup(dut, base, pred_to_u64({true, false, true, false, 0xbad}), 0);
    expect_pred_eq("conflict: 1 now miss", read_f3_pred(dut, 0),
                   true, false, true, false, 0xbad);
}

void test_update_existing(Vbtb_test_top* dut) {
    // 同 tag 更新 target
    do_train(dut, 0x1c006000, 0, 0xaaa00001, false, true, false);
    do_train(dut, 0x1c006000, 0, 0xbbb00002, false, true, false);

    do_btb_lookup(dut, 0x1c006000, pred_to_u64({true,false,true,false,0}), 0);
    expect_pred_eq("update: latest target", read_f3_pred(dut, 0),
                   true, false, true, false, 0xbbb00002);
}

void test_two_lanes_independent(Vbtb_test_top* dut) {
    do_train(dut, 0x1c007000, 0, 0x11110000, false, true, false);
    do_train(dut, 0x1c007000, 1, 0x22220000, true, false, false);

    uint64_t l0 = pred_to_u64({true, false, true, false, 0});
    uint64_t l1 = pred_to_u64({true, true, false, false, 0});
    do_btb_lookup(dut, 0x1c007000, l0, l1);

    expect_pred_eq("two_lanes: lane0", read_f3_pred(dut, 0),
                   true, false, true, false, 0x11110000);
    expect_pred_eq("two_lanes: lane1", read_f3_pred(dut, 1),
                   true, true, false, false, 0x22220000);
}

void test_non_branch_passes(Vbtb_test_top* dut) {
    // BTB miss → 穿透 f2_preds_in
    uint64_t lane0_in = 0;  // not a branch
    do_btb_lookup(dut, 0x1c008000, lane0_in, 0);
    expect_pred_eq("non_br: pass", read_f3_pred(dut, 0),
                   false, false, false, false, 0);
}

void test_direction_preserved(Vbtb_test_top* dut) {
    // BTB 提供 target 但不改 BIM 的 taken 方向
    do_train(dut, 0x1c009000, 0, 0x1c00a000, true, false, false);

    // BIM 预测 not-taken，BTB hit → taken 应保持 0
    uint64_t lane0_in = pred_to_u64({false, true, false, false, 0xbad});
    do_btb_lookup(dut, 0x1c009000, lane0_in, 0);
    expect_pred_eq("direction: taken preserved from bim", read_f3_pred(dut, 0),
                   false, true, false, false, 0x1c00a000);
}

void test_pipeline_sequential(Vbtb_test_top* dut) {
    do_train(dut, 0x1c00b000, 0, 0xaaa, false, true, false);
    do_train(dut, 0x1c00c000, 0, 0xbbb, true, false, false);

    uint64_t br_a = pred_to_u64({true, false, true, false, 0});
    uint64_t br_b = pred_to_u64({true, true, false, false, 0});

    // Cycle 1: A enters F0. No matching BIM result is available yet.
    dut->f0_valid = 1;
    dut->f0_pc    = 0x1c00b000;
    set_f2_preds_in(dut, 0, 0);
    eval_cycle(dut);

    // Cycle 2: A enters S2 while B enters F0.
    dut->f0_valid = 1;
    dut->f0_pc    = 0x1c00c000;
    set_f2_preds_in(dut, 0, 0);
    eval_cycle(dut);

    // Cycle 3: A's S2 result and BIM result enter F3; B enters S2.
    dut->f0_valid = 0;
    set_f2_preds_in(dut, br_a, 0);
    eval_cycle(dut);

    PredInfo p_a = read_f3_pred(dut, 0);
    expect_pred_eq("pipeline: result A", p_a,
                   true, false, true, false, 0xaaa);

    // Cycle 4: B's S2 result and BIM result enter F3.
    set_f2_preds_in(dut, br_b, 0);
    eval_cycle(dut);

    PredInfo p_b = read_f3_pred(dut, 0);
    expect_pred_eq("pipeline: result B", p_b,
                   true, true, false, false, 0xbbb);
}

// ============================================================
// Meta 测试 — f3_meta 存命中信息
// 格式: {padding[119:4], way[1], way[0], hit[1], hit[0]}
// ============================================================
uint8_t read_btb_meta(Vbtb_test_top* dut) {
    return uint8_t(dut->f3_meta[0] & 0xF);  // 低 4 bit: {way1,way0,hit1,hit0}
}

void do_btb_mispredict_update(Vbtb_test_top* dut, uint32_t pc,
                              uint8_t btb_mispredicts, uint8_t meta) {
    dut->update_valid = 1;
    dut->update_btb_mispredicts = btb_mispredicts;
    dut->update_pc = pc;
    dut->update_meta[0] = meta;
    eval_cycle(dut);

    dut->update_valid = 0;
    dut->update_btb_mispredicts = 0;
    dut->update_meta[0] = 0;
}

void test_meta_hit(Vbtb_test_top* dut) {
    clear_inputs(dut); ref_init(); reset_dut(dut);

    // 训练 B_BL → BTB hit, way 0
    do_train(dut, 0x1c00d000, 0, 0xaaaa, false, true, false);

    uint64_t in = pred_to_u64({true, false, true, false, 0});
    do_btb_lookup(dut, 0x1c00d000, in, 0);

    uint8_t m = read_btb_meta(dut);
    // lane0: hit=1, way=repl_ptr(初始0)=0
    expect_eq("btb_meta: lane0 hit",  (m >> 0) & 1, 1);
    expect_eq("btb_meta: lane0 way",  (m >> 2) & 1, 0);
    // lane1: no branch → miss
    expect_eq("btb_meta: lane1 hit",  (m >> 1) & 1, 0);
}

void test_meta_miss(Vbtb_test_top* dut) {
    clear_inputs(dut); ref_init(); reset_dut(dut);

    do_btb_lookup(dut, 0x1c00e000, pred_to_u64({true,false,true,false,0}), 0);
    uint8_t m = read_btb_meta(dut);
    expect_eq("btb_meta: miss lane0 hit", (m >> 0) & 1, 0);
}

void test_meta_two_way(Vbtb_test_top* dut) {
    clear_inputs(dut); ref_init(); reset_dut(dut);

    // way0: pc at set 0, way1: different tag same set
    do_train(dut, 0x1c00f000, 0, 0x1111, false, true, false);      // way 0
    do_train(dut, 0x1c00f000 + 0x100000, 0, 0x2222, true, false, false); // way 1

    do_btb_lookup(dut, 0x1c00f000, pred_to_u64({true,false,true,false,0}), 0);
    uint8_t m = read_btb_meta(dut);
    expect_eq("btb_meta2: hit way0", (m >> 0) & 1, 1);
    expect_eq("btb_meta2: way idx",  (m >> 2) & 1, 0);
}

void test_btb_mispredict_invalidates_recorded_way(Vbtb_test_top* dut) {
    clear_inputs(dut); ref_init(); reset_dut(dut);

    constexpr uint32_t pc_way0 = 0x1c010000;
    constexpr uint32_t pc_way1 = pc_way0 + 0x100000;
    do_train(dut, pc_way0, 0, 0xaaaa0000, false, true, false);
    do_train(dut, pc_way1, 0, 0xbbbb0000, false, true, false);

    uint64_t pred_in = pred_to_u64({true, false, true, false, 0xbad00000});
    do_btb_lookup(dut, pc_way1, pred_in, 0);
    uint8_t meta = read_btb_meta(dut);
    expect_eq("btb_invalidate: recorded hit", (meta >> 0) & 1, 1);
    expect_eq("btb_invalidate: recorded way1", (meta >> 2) & 1, 1);

    do_btb_mispredict_update(dut, pc_way1, 0x1, meta);

    do_btb_lookup(dut, pc_way1, pred_in, 0);
    expect_pred_eq("btb_invalidate: way1 removed", read_f3_pred(dut, 0),
                   true, false, true, false, 0xbad00000);
    expect_eq("btb_invalidate: way1 now misses", read_btb_meta(dut) & 1, 0);

    do_btb_lookup(dut, pc_way0, pred_in, 0);
    expect_pred_eq("btb_invalidate: way0 preserved", read_f3_pred(dut, 0),
                   true, false, true, false, 0xaaaa0000);
    expect_eq("btb_invalidate: way0 still hits", read_btb_meta(dut) & 1, 1);
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vbtb_test_top;
    clear_inputs(dut);
    ref_init();
    reset_dut(dut);

    test_cold_miss(dut);
    test_train_and_hit(dut);
    test_jirl_target(dut);
    test_two_way_associativity(dut);
    test_set_conflict_eviction(dut);
    test_update_existing(dut);
    test_two_lanes_independent(dut);
    test_non_branch_passes(dut);
    test_direction_preserved(dut);
    test_pipeline_sequential(dut);
    test_meta_hit(dut);
    test_meta_miss(dut);
    test_meta_two_way(dut);
    test_btb_mispredict_invalidates_recorded_way(dut);

    pass("btb");
    delete dut;
    return 0;
}
