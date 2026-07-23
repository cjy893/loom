#include "Vrename_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

static void clear_inputs(Vrename_test_top* dut) {
    dut->in_valid = 0;
    dut->in_lrs1_0 = dut->in_lrs2_0 = dut->in_ldst_0 = 0;
    dut->in_lrs1_1 = dut->in_lrs2_1 = dut->in_ldst_1 = 0;
    dut->wakeup_valid = 0;
    dut->wakeup_pdst = 0;
    dut->commit_valid = 0;
    dut->commit_ldst = 0;
    dut->commit_pdst = 0;
    dut->commit_stale_pdst = 0;
    dut->rollback = 0;
    dut->dis_ready = 1;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vrename_test_top;
    clear_inputs(dut);
    reset_dut(dut);

    // A read-modify-write must read the old mapping and allocate from p32.
    dut->in_valid = 1;
    dut->in_lrs1_0 = 13;
    dut->in_ldst_0 = 13;
    dut->eval();
    expect_eq("first pdst", dut->out_pdst_0, 32);
    expect_eq("first prs1", dut->out_prs1_0, 13);
    expect_eq("first stale", dut->out_stale_0, 13);
    expect_eq("first source ready", dut->out_prs1_busy_0, 0);
    eval_cycle(dut);

    // The next writer consumes p32 and allocates p33.
    dut->eval();
    expect_eq("RAW pdst", dut->out_pdst_0, 33);
    expect_eq("RAW prs1", dut->out_prs1_0, 32);
    expect_eq("RAW stale", dut->out_stale_0, 32);
    expect_eq("RAW source busy", dut->out_prs1_busy_0, 1);
    eval_cycle(dut);

    // A wakeup must make the physical source ready.
    clear_inputs(dut);
    dut->wakeup_valid = 1;
    dut->wakeup_pdst = 32;
    eval_cycle(dut);

    // Reset and verify same-bundle lane-0 to lane-1 map bypass.
    clear_inputs(dut);
    dut->rst_n = 0;
    eval_cycle(dut);
    dut->rst_n = 1;
    dut->in_valid = 3;
    dut->in_lrs1_0 = 0;
    dut->in_ldst_0 = 5;
    dut->in_lrs1_1 = 5;
    dut->in_ldst_1 = 6;
    dut->eval();
    expect_eq("lane0 pdst", dut->out_pdst_0, 32);
    expect_eq("lane1 sees lane0 mapping", dut->out_prs1_1, 32);
    expect_eq("lane1 pdst", dut->out_pdst_1, 33);
    expect_eq("lane1 source busy", dut->out_prs1_busy_1, 1);
    eval_cycle(dut);

    // Reset, rename once, commit it, and ensure stale p13 becomes reusable.
    clear_inputs(dut);
    dut->rst_n = 0;
    eval_cycle(dut);
    dut->rst_n = 1;
    dut->in_valid = 1;
    dut->in_lrs1_0 = 13;
    dut->in_ldst_0 = 13;
    eval_cycle(dut);
    clear_inputs(dut);
    dut->commit_valid = 1;
    dut->commit_ldst = 13;
    dut->commit_pdst = 32;
    dut->commit_stale_pdst = 13;
    eval_cycle(dut);
    clear_inputs(dut);
    dut->in_valid = 1;
    dut->in_ldst_0 = 14;
    dut->eval();
    expect_eq("committed stale register reused", dut->out_pdst_0, 13);

    pass("rename");
    delete dut;
    return 0;
}
