#include "Vrob_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

static void clear_inputs(Vrob_test_top* dut) {
    dut->enq_valid = 0;
    dut->enq_rob_idx_0 = 0;
    dut->enq_rob_idx_1 = 0;
    dut->enq_ldst_0 = 0;
    dut->enq_ldst_1 = 0;
    dut->enq_busy_0 = 0;
    dut->enq_busy_1 = 0;
    dut->wb_valid = 0;
    dut->wb_rob_idx_0 = 0;
    dut->wb_rob_idx_1 = 0;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vrob_test_top;
    clear_inputs(dut);
    reset_dut(dut);

    expect_eq("initial tail", dut->tail_idx, 0);
    expect_eq("initial head", dut->head_idx, 0);
    expect_eq("initial empty", dut->empty, 1);

    // Enqueue two instructions in the same row.
    dut->enq_valid = 3;
    dut->enq_rob_idx_0 = 0;
    dut->enq_rob_idx_1 = 1;
    dut->enq_ldst_0 = 10;
    dut->enq_ldst_1 = 11;
    dut->enq_busy_0 = 1;
    dut->enq_busy_1 = 1;
    eval_cycle(dut);
    clear_inputs(dut);
    dut->eval();
    expect_eq("tail advances by one row", dut->tail_idx, 2);
    expect_eq("busy head does not commit", dut->commit_valid, 0);

    // Complete the younger bank first. It must not commit past bank 0.
    dut->wb_valid = 1;
    dut->wb_rob_idx_0 = 1;
    eval_cycle(dut);
    clear_inputs(dut);
    dut->eval();
    expect_eq("younger completion blocked", dut->commit_valid, 0);

    // Complete the older bank; both entries may now commit together.
    dut->wb_valid = 1;
    dut->wb_rob_idx_0 = 0;
    eval_cycle(dut);
    clear_inputs(dut);
    dut->eval();
    expect_eq("both banks commit", dut->commit_valid, 3);
    expect_eq("older commit identity", dut->commit_ldst_0, 10);
    expect_eq("younger commit identity", dut->commit_ldst_1, 11);
    eval_cycle(dut);
    expect_eq("row retired", dut->empty, 1);

    // Exercise pointer wrap with four more rows.
    for (unsigned row = 0; row < 4; ++row) {
        unsigned idx = dut->tail_idx;
        dut->enq_valid = 1;
        dut->enq_rob_idx_0 = idx;
        dut->enq_ldst_0 = 16 + row;
        dut->enq_busy_0 = 1;
        eval_cycle(dut);
        clear_inputs(dut);
        dut->wb_valid = 1;
        dut->wb_rob_idx_0 = idx;
        eval_cycle(dut);
        clear_inputs(dut);
        dut->eval();
        expect_eq("single-bank commit", dut->commit_valid, 1);
        expect_eq("wrapped commit identity", dut->commit_ldst_0, 16 + row);
        eval_cycle(dut);
    }
    expect_eq("tail wrapped", dut->tail_idx, 2);
    expect_eq("ROB empty after wrap", dut->empty, 1);

    pass("rob");
    delete dut;
    return 0;
}
