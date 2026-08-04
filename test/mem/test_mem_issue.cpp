#include "Vmem_issue_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"
#include <cstdint>

namespace {

void clear_inputs(Vmem_issue_test_top* dut) {
    dut->rob_head_idx = 0;
    dut->dis_valid = 0;
    dut->dis_rob_idx = 0;
    dut->dis_psrc1 = 0;
    dut->dis_psrc2 = 0;
    dut->dis_psrc1_busy = 0;
    dut->dis_psrc2_busy = 0;
    dut->dis_use_agen = 0;
    dut->dis_use_dgen = 0;
    dut->dis_br_mask = 0;
    dut->dis_valid_1 = 0;
    dut->dis_rob_idx_1 = 0;
    dut->dis_psrc1_1 = 0;
    dut->dis_psrc2_1 = 0;
    dut->dis_psrc1_busy_1 = 0;
    dut->dis_psrc2_busy_1 = 0;
    dut->dis_use_agen_1 = 0;
    dut->dis_use_dgen_1 = 0;
    dut->dis_br_mask_1 = 0;
    dut->wakeup_valid_0 = 0;
    dut->wakeup_pdst_0 = 0;
    dut->wakeup_valid_1 = 0;
    dut->wakeup_pdst_1 = 0;
    dut->src1_data = 0;
    dut->src2_data = 0;
    dut->imm_data = 0;
    dut->resolve_mask = 0;
    dut->mispredict_mask = 0;
    dut->br_mispredict = 0;
    dut->flush_pipeline = 0;
}

void reset_case(Vmem_issue_test_top* dut) {
    clear_inputs(dut);
    reset_dut(dut);
}

void enqueue(Vmem_issue_test_top* dut, unsigned rob_idx,
             unsigned psrc1, bool psrc1_busy,
             unsigned psrc2, bool psrc2_busy,
             bool use_agen, bool use_dgen,
             unsigned br_mask = 0) {
    dut->dis_valid = 1;
    dut->dis_rob_idx = rob_idx;
    dut->dis_psrc1 = psrc1;
    dut->dis_psrc2 = psrc2;
    dut->dis_psrc1_busy = psrc1_busy;
    dut->dis_psrc2_busy = psrc2_busy;
    dut->dis_use_agen = use_agen;
    dut->dis_use_dgen = use_dgen;
    dut->dis_br_mask = br_mask;
    dut->eval();
    expect_eq("MEM IQ accepts dispatch", dut->dis_ready, 1);
    eval_cycle(dut);
    dut->dis_valid = 0;
    dut->eval();
}

void wake(Vmem_issue_test_top* dut, unsigned pdst0,
          unsigned pdst1 = 0) {
    dut->wakeup_valid_0 = pdst0 != 0;
    dut->wakeup_pdst_0 = pdst0;
    dut->wakeup_valid_1 = pdst1 != 0;
    dut->wakeup_pdst_1 = pdst1;
    eval_cycle(dut);
    dut->wakeup_valid_0 = 0;
    dut->wakeup_pdst_0 = 0;
    dut->wakeup_valid_1 = 0;
    dut->wakeup_pdst_1 = 0;
    dut->eval();
}

void expect_issue(Vmem_issue_test_top* dut, unsigned rob_idx,
                  bool use_agen, bool use_dgen) {
    dut->eval();
    expect_eq("MEM issue valid", dut->iss_valid, 1);
    expect_eq("MEM issue identity", dut->iss_rob_idx, rob_idx);
    expect_eq("MEM issue AGEN selection",
              dut->iss_use_agen, use_agen ? 1 : 0);
    expect_eq("MEM issue DGEN selection",
              dut->iss_use_dgen, use_dgen ? 1 : 0);
}

void test_dual_dispatch_preserves_lane_age(Vmem_issue_test_top* dut) {
    reset_case(dut);

    dut->dis_valid = 1;
    dut->dis_rob_idx = 60;
    dut->dis_psrc1 = 40;
    dut->dis_use_agen = 1;

    dut->dis_valid_1 = 1;
    dut->dis_rob_idx_1 = 61;
    dut->dis_psrc1_1 = 41;
    dut->dis_use_agen_1 = 1;

    dut->eval();
    expect_eq("first MEM dispatch lane is ready", dut->dis_ready, 1);
    expect_eq("second MEM dispatch lane is ready", dut->dis_ready_1, 1);
    eval_cycle(dut);
    dut->dis_valid = 0;
    dut->dis_valid_1 = 0;
    dut->eval();

    expect_issue(dut, 60, true, false);
    eval_cycle(dut);
    expect_issue(dut, 61, true, false);
}

void test_single_port_contention(Vmem_issue_test_top* dut) {
    reset_case(dut);
    dut->src1_data = 0x1000;
    dut->imm_data = 4;

    enqueue(dut, 10, 40, true, 0, false, true, false);
    enqueue(dut, 11, 41, true, 0, false, true, false);
    expect_eq("blocked loads do not issue", dut->iss_valid, 0);

    wake(dut, 40, 41);
    expect_issue(dut, 10, true, false);

    // The first load is granted on this edge; the second must remain queued.
    eval_cycle(dut);
    expect_issue(dut, 11, true, false);

    // The MEM pipeline receives load 11 while load 10 reaches EXE.
    eval_cycle(dut);
    expect_eq("both contenders issue exactly once", dut->iss_valid, 0);
    expect_eq("first contender reaches AGEN", dut->agen_valid, 1);
    expect_eq("first contender keeps identity", dut->agen_rob_idx, 10);

    eval_cycle(dut);
    expect_eq("second contender reaches AGEN", dut->agen_valid, 1);
    expect_eq("second contender keeps identity", dut->agen_rob_idx, 11);

    eval_cycle(dut);
    expect_eq("no duplicate load issue", dut->agen_valid, 0);
}

void test_store_agen_then_dgen(Vmem_issue_test_top* dut) {
    reset_case(dut);
    dut->src1_data = 0x2000;
    dut->src2_data = 0xdeadbeef;
    dut->imm_data = 8;

    enqueue(dut, 20, 42, false, 43, true, true, true);
    expect_issue(dut, 20, true, false);

    eval_cycle(dut);
    expect_eq("AGEN half is not reissued while DGEN is blocked",
              dut->iss_valid, 0);

    eval_cycle(dut);
    expect_eq("partial store produces AGEN", dut->agen_valid, 1);
    expect_eq("partial store suppresses DGEN", dut->dgen_valid, 0);
    expect_eq("partial store address", dut->agen_addr, 0x2008);
    expect_eq("partial store AGEN identity", dut->agen_rob_idx, 20);

    wake(dut, 43);
    expect_issue(dut, 20, false, true);

    eval_cycle(dut);
    expect_eq("completed store leaves the issue queue", dut->iss_valid, 0);

    eval_cycle(dut);
    expect_eq("remaining half suppresses duplicate AGEN", dut->agen_valid, 0);
    expect_eq("remaining half produces DGEN", dut->dgen_valid, 1);
    expect_eq("partial store data", dut->dgen_data, 0xdeadbeef);
    expect_eq("partial store DGEN identity", dut->dgen_rob_idx, 20);

    eval_cycle(dut);
    expect_eq("partial store finishes exactly once",
              dut->agen_valid | dut->dgen_valid, 0);
}

void test_store_dgen_then_agen(Vmem_issue_test_top* dut) {
    reset_case(dut);
    dut->src1_data = 0x3000;
    dut->src2_data = 0x12345678;
    dut->imm_data = 12;

    enqueue(dut, 21, 44, true, 45, false, true, true);
    expect_issue(dut, 21, false, true);

    eval_cycle(dut);
    expect_eq("DGEN half is not reissued while AGEN is blocked",
              dut->iss_valid, 0);

    eval_cycle(dut);
    expect_eq("data-first store suppresses AGEN", dut->agen_valid, 0);
    expect_eq("data-first store produces DGEN", dut->dgen_valid, 1);
    expect_eq("data-first store data", dut->dgen_data, 0x12345678);

    wake(dut, 44);
    expect_issue(dut, 21, true, false);

    eval_cycle(dut);
    expect_eq("data-first store leaves the issue queue", dut->iss_valid, 0);

    eval_cycle(dut);
    expect_eq("remaining half produces AGEN", dut->agen_valid, 1);
    expect_eq("remaining half suppresses duplicate DGEN", dut->dgen_valid, 0);
    expect_eq("data-first store address", dut->agen_addr, 0x300c);
    expect_eq("data-first store AGEN identity", dut->agen_rob_idx, 21);
}

void test_store_both_halves_ready(Vmem_issue_test_top* dut) {
    reset_case(dut);
    dut->src1_data = 0x4000;
    dut->src2_data = 0xa5a5a5a5;
    dut->imm_data = 4;

    enqueue(dut, 22, 46, false, 47, false, true, true);
    expect_issue(dut, 22, true, true);
    eval_cycle(dut);
    expect_eq("complete store is removed after one issue", dut->iss_valid, 0);
    eval_cycle(dut);
    expect_eq("complete store produces AGEN", dut->agen_valid, 1);
    expect_eq("complete store produces DGEN", dut->dgen_valid, 1);
    expect_eq("complete store address", dut->agen_addr, 0x4004);
    expect_eq("complete store data", dut->dgen_data, 0xa5a5a5a5);
}

void test_partial_store_killed_between_halves(Vmem_issue_test_top* dut) {
    reset_case(dut);

    enqueue(dut, 23, 48, false, 49, true, true, true, 0x1);
    expect_issue(dut, 23, true, false);
    eval_cycle(dut);

    dut->mispredict_mask = 0x1;
    dut->eval();
    expect_eq("mispredict kills partially issued store", dut->iss_valid, 0);
    eval_cycle(dut);
    dut->mispredict_mask = 0;

    wake(dut, 49);
    expect_eq("killed store never issues its remaining half",
              dut->iss_valid, 0);
}

void test_partial_issue_does_not_free_full_queue(Vmem_issue_test_top* dut) {
    reset_case(dut);

    for (unsigned i = 0; i < 4; ++i)
        enqueue(dut, 30 + i, 50 + i, false, 54 + i, true, true, true);

    dut->dis_valid = 1;
    dut->dis_rob_idx = 40;
    dut->dis_psrc1 = 58;
    dut->dis_psrc2 = 59;
    dut->dis_psrc1_busy = 1;
    dut->dis_psrc2_busy = 1;
    dut->dis_use_agen = 1;
    dut->dis_use_dgen = 1;
    dut->eval();
    expect_eq("partial AGEN issues do not free full IQ slots",
              dut->dis_ready, 0);

    wake(dut, 54);
    expect_issue(dut, 30, false, true);
    dut->eval();
    expect_eq("final store half does not create a MEM refill path",
              dut->dis_ready, 0);
    eval_cycle(dut);
    expect_eq("completed store slot refills on the next cycle",
              dut->dis_ready, 1);
    eval_cycle(dut);
    dut->dis_valid = 0;
    dut->eval();
}

void test_full_queue_issue_wakeup_and_refill(Vmem_issue_test_top* dut) {
    reset_case(dut);

    enqueue(dut, 30, 50, true, 0, false, true, false);
    enqueue(dut, 31, 51, true, 0, false, true, false);
    enqueue(dut, 32, 52, true, 0, false, true, false);
    enqueue(dut, 33, 53, true, 0, false, true, false);

    dut->dis_valid = 1;
    dut->dis_rob_idx = 99;
    dut->dis_psrc1 = 55;
    dut->dis_psrc1_busy = 1;
    dut->dis_use_agen = 1;
    dut->eval();
    expect_eq("full MEM IQ backpressures dispatch", dut->dis_ready, 0);
    dut->dis_valid = 0;

    wake(dut, 50);
    expect_issue(dut, 30, true, false);

    // rob30 issues and rob31 wakes up. The completed slot is deliberately not
    // visible to dispatch until the following cycle.
    dut->dis_valid = 1;
    dut->dis_rob_idx = 40;
    dut->dis_psrc1 = 54;
    dut->dis_psrc2 = 0;
    dut->dis_psrc1_busy = 1;
    dut->dis_psrc2_busy = 0;
    dut->dis_use_agen = 1;
    dut->dis_use_dgen = 0;
    dut->wakeup_valid_0 = 1;
    dut->wakeup_pdst_0 = 51;
    dut->eval();
    expect_eq("MEM slot does not accept same-cycle refill", dut->dis_ready, 0);
    expect_issue(dut, 30, true, false);
    eval_cycle(dut);
    dut->wakeup_valid_0 = 0;
    dut->wakeup_pdst_0 = 0;
    dut->eval();

    expect_eq("completed MEM slot is ready on the next cycle",
              dut->dis_ready, 1);
    expect_issue(dut, 31, true, false);
    eval_cycle(dut);
    dut->dis_valid = 0;
    dut->eval();
    expect_eq("remaining blocked entries stay queued", dut->iss_valid, 0);

    wake(dut, 54);
    expect_issue(dut, 40, true, false);
    eval_cycle(dut);
    expect_eq("replacement issues only once", dut->iss_valid, 0);
}

void test_oldest_ready_survives_slot_reuse(Vmem_issue_test_top* dut) {
    reset_case(dut);
    dut->rob_head_idx = 20;

    enqueue(dut, 20, 50, true, 0, false, true, false);
    enqueue(dut, 30, 51, true, 0, false, true, false);

    wake(dut, 50);
    expect_issue(dut, 20, true, false);
    eval_cycle(dut);

    // rob40 reuses slot 0 while the older rob30 remains in slot 1.
    enqueue(dut, 40, 52, true, 0, false, true, false);
    wake(dut, 51, 52);
    expect_issue(dut, 30, true, false);
    eval_cycle(dut);
    expect_issue(dut, 40, true, false);
}

void test_oldest_ready_across_rob_wrap(Vmem_issue_test_top* dut) {
    reset_case(dut);
    dut->rob_head_idx = 60;

    enqueue(dut, 62, 50, true, 0, false, true, false);
    enqueue(dut, 2, 51, true, 0, false, true, false);

    wake(dut, 50);
    expect_issue(dut, 62, true, false);
    eval_cycle(dut);

    // rob10 reuses slot 0. Across wrap, rob2 is still older than rob10.
    enqueue(dut, 10, 52, true, 0, false, true, false);
    wake(dut, 51, 52);
    expect_issue(dut, 2, true, false);
    eval_cycle(dut);
    expect_issue(dut, 10, true, false);
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vmem_issue_test_top;
    clear_inputs(dut);
    reset_dut(dut);

    test_single_port_contention(dut);
    test_dual_dispatch_preserves_lane_age(dut);
    test_store_agen_then_dgen(dut);
    test_store_dgen_then_agen(dut);
    test_store_both_halves_ready(dut);
    test_partial_store_killed_between_halves(dut);
    test_partial_issue_does_not_free_full_queue(dut);
    test_full_queue_issue_wakeup_and_refill(dut);
    test_oldest_ready_survives_slot_reuse(dut);
    test_oldest_ready_across_rob_wrap(dut);

    pass("mem_issue");
    delete dut;
    return 0;
}
