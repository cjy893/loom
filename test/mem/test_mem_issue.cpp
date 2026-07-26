#include "Vmem_issue_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"
#include <cstdint>

namespace {

void clear_inputs(Vmem_issue_test_top* dut) {
    dut->dis_valid = 0;
    dut->dis_rob_idx = 0;
    dut->dis_psrc1 = 0;
    dut->dis_psrc2 = 0;
    dut->dis_psrc1_busy = 0;
    dut->dis_psrc2_busy = 0;
    dut->dis_use_agen = 0;
    dut->dis_use_dgen = 0;
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
             bool use_agen, bool use_dgen) {
    dut->dis_valid = 1;
    dut->dis_rob_idx = rob_idx;
    dut->dis_psrc1 = psrc1;
    dut->dis_psrc2 = psrc2;
    dut->dis_psrc1_busy = psrc1_busy;
    dut->dis_psrc2_busy = psrc2_busy;
    dut->dis_use_agen = use_agen;
    dut->dis_use_dgen = use_dgen;
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

void test_store_waits_for_all_operands(Vmem_issue_test_top* dut) {
    reset_case(dut);
    dut->src1_data = 0x2000;
    dut->src2_data = 0xdeadbeef;
    dut->imm_data = 8;

    enqueue(dut, 20, 42, false, 43, true, true, true);
    expect_eq("store waits while data operand is busy", dut->iss_valid, 0);

    wake(dut, 43);
    expect_issue(dut, 20, true, true);

    eval_cycle(dut);
    expect_eq("store does not bypass MEM read stage",
              dut->agen_valid | dut->dgen_valid, 0);

    eval_cycle(dut);
    expect_eq("store AGEN and DGEN fire together", dut->agen_valid, 1);
    expect_eq("store DGEN accompanies AGEN", dut->dgen_valid, 1);
    expect_eq("store address", dut->agen_addr, 0x2008);
    expect_eq("store data", dut->dgen_data, 0xdeadbeef);
    expect_eq("store AGEN identity", dut->agen_rob_idx, 20);
    expect_eq("store DGEN identity", dut->dgen_rob_idx, 20);

    eval_cycle(dut);
    expect_eq("store issues only once", dut->agen_valid | dut->dgen_valid, 0);
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

    // On one edge: rob30 issues, rob40 replaces it, and rob31 wakes up.
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
    expect_eq("issuing slot accepts same-cycle refill", dut->dis_ready, 1);
    expect_issue(dut, 30, true, false);
    eval_cycle(dut);
    dut->dis_valid = 0;
    dut->wakeup_valid_0 = 0;
    dut->wakeup_pdst_0 = 0;
    dut->eval();

    expect_issue(dut, 31, true, false);
    eval_cycle(dut);
    expect_eq("remaining blocked entries stay queued", dut->iss_valid, 0);

    wake(dut, 54);
    expect_issue(dut, 40, true, false);
    eval_cycle(dut);
    expect_eq("replacement issues only once", dut->iss_valid, 0);
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vmem_issue_test_top;
    clear_inputs(dut);
    reset_dut(dut);

    test_single_port_contention(dut);
    test_store_waits_for_all_operands(dut);
    test_full_queue_issue_wakeup_and_refill(dut);

    pass("mem_issue");
    delete dut;
    return 0;
}
