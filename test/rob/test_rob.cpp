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
    dut->enq_exception = 0;
    dut->enq_flush_on_commit = 0;
    dut->enq_is_eret = 0;
    dut->enq_exc_cause_0 = 0;
    dut->enq_exc_cause_1 = 0;
    dut->enq_pc_0 = 0;
    dut->enq_pc_1 = 0;
    dut->enq_inst_0 = 0;
    dut->enq_inst_1 = 0;
    dut->wb_valid = 0;
    dut->wb_rob_idx_0 = 0;
    dut->wb_rob_idx_1 = 0;
    dut->lsu_clr_bsy_valid = 0;
    dut->lsu_clr_bsy_addr_0 = 0;
    dut->lsu_clr_bsy_addr_1 = 0;
    dut->interrupt_pending = 0;
    dut->interrupt_next_pc = 0;
    dut->br_mispredict = 0;
    dut->lxcpt_valid = 0;
    dut->lxcpt_rob_idx = 0;
    dut->lxcpt_cause = 0;
    dut->lxcpt_badvaddr = 0;
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

    // Clear a younger row first. It must remain blocked by the busy head row,
    // then become immediately committable after the head row retires.
    clear_inputs(dut);
    dut->rst_n = 0;
    eval_cycle(dut);
    dut->rst_n = 1;

    dut->enq_valid = 3;
    dut->enq_rob_idx_0 = 0;
    dut->enq_rob_idx_1 = 1;
    dut->enq_ldst_0 = 20;
    dut->enq_ldst_1 = 21;
    dut->enq_busy_0 = 1;
    dut->enq_busy_1 = 1;
    eval_cycle(dut);

    dut->enq_rob_idx_0 = 2;
    dut->enq_rob_idx_1 = 3;
    dut->enq_ldst_0 = 22;
    dut->enq_ldst_1 = 23;
    eval_cycle(dut);
    clear_inputs(dut);

    dut->lsu_clr_bsy_valid = 3;
    dut->lsu_clr_bsy_addr_0 = 2;
    dut->lsu_clr_bsy_addr_1 = 3;
    eval_cycle(dut);
    clear_inputs(dut);
    dut->eval();
    expect_eq("cleared younger row remains ordered", dut->commit_valid, 0);

    dut->lsu_clr_bsy_valid = 3;
    dut->lsu_clr_bsy_addr_0 = 0;
    dut->lsu_clr_bsy_addr_1 = 1;
    eval_cycle(dut);
    clear_inputs(dut);
    dut->eval();
    expect_eq("LSU clear releases head row", dut->commit_valid, 3);
    expect_eq("LSU-cleared head lane0 identity", dut->commit_ldst_0, 20);
    expect_eq("LSU-cleared head lane1 identity", dut->commit_ldst_1, 21);

    eval_cycle(dut);
    expect_eq("previously cleared younger row commits", dut->commit_valid, 3);
    expect_eq("LSU-cleared younger lane0 identity", dut->commit_ldst_0, 22);
    expect_eq("LSU-cleared younger lane1 identity", dut->commit_ldst_1, 23);
    eval_cycle(dut);
    expect_eq("ROB empty after LSU clears", dut->empty, 1);

    // An older normal instruction commits first. The younger exception then
    // produces one notification pulse and rolls the speculative ROB back.
    clear_inputs(dut);
    dut->rst_n = 0;
    eval_cycle(dut);
    dut->rst_n = 1;

    dut->enq_valid = 3;
    dut->enq_rob_idx_0 = 0;
    dut->enq_rob_idx_1 = 1;
    dut->enq_ldst_0 = 24;
    dut->enq_ldst_1 = 25;
    dut->enq_exception = 2;
    dut->enq_exc_cause_1 = 13;
    dut->enq_pc_0 = 0x1c000100;
    dut->enq_pc_1 = 0x1c000104;
    dut->enq_inst_0 = 0x0010800c;
    dut->enq_inst_1 = 0xffffffff;
    eval_cycle(dut);
    clear_inputs(dut);
    dut->eval();
    expect_eq("older instruction commits before exception", dut->commit_valid, 1);
    expect_eq("exception waits behind older commit", dut->com_xcpt_valid, 0);

    eval_cycle(dut);
    expect_eq("exception does not commit", dut->commit_valid, 0);
    expect_eq("exception notification", dut->com_xcpt_valid, 1);
    expect_eq("exception PC", dut->com_xcpt_pc, 0x1c000104);
    expect_eq("exception instruction", dut->com_xcpt_inst, 0xffffffff);
    expect_eq("exception cause", dut->com_xcpt_cause, 13);
    expect_eq("exception flush", dut->flush_valid, 1);
    expect_eq("exception flush type", dut->flush_typ, 1);
    expect_eq("frontend flush pulse", dut->flush_frontend, 1);

    eval_cycle(dut);
    expect_eq("exception notification is one cycle", dut->com_xcpt_valid, 0);
    expect_eq("flush notification is one cycle", dut->flush_valid, 0);
    expect_eq("rollback delay cycle 1", dut->rollback, 0);
    eval_cycle(dut);
    expect_eq("rollback delay cycle 2", dut->rollback, 0);
    eval_cycle(dut);
    expect_eq("ROB enters rollback", dut->rollback, 1);
    eval_cycle(dut);
    expect_eq("ROB empty after exception rollback", dut->empty, 1);
    expect_eq("ROB leaves rollback", dut->rollback, 0);

    // A successfully committed serialization instruction requests a frontend
    // refetch; ERTN uses the dedicated return-from-exception flush type.
    dut->enq_valid = 1;
    dut->enq_rob_idx_0 = dut->tail_idx;
    dut->enq_pc_0 = 0x1c000200;
    dut->enq_flush_on_commit = 1;
    eval_cycle(dut);
    clear_inputs(dut);
    dut->eval();
    expect_eq("flush-on-commit instruction commits", dut->commit_valid, 1);
    expect_eq("refetch flush", dut->flush_valid, 1);
    expect_eq("refetch flush type", dut->flush_typ, 2);
    expect_eq("refetch frontend flush", dut->flush_frontend, 1);
    eval_cycle(dut);
    expect_eq("refetch flush is one cycle", dut->flush_valid, 0);

    dut->enq_valid = 1;
    dut->enq_rob_idx_0 = dut->tail_idx;
    dut->enq_pc_0 = 0x1c000204;
    dut->enq_flush_on_commit = 1;
    dut->enq_is_eret = 1;
    eval_cycle(dut);
    clear_inputs(dut);
    dut->eval();
    expect_eq("ERTN instruction commits", dut->commit_valid, 1);
    expect_eq("ERTN flush", dut->flush_valid, 1);
    expect_eq("ERTN flush type", dut->flush_typ, 3);
    expect_eq("ERTN frontend flush", dut->flush_frontend, 1);
    eval_cycle(dut);
    expect_eq("ERTN flush is one cycle", dut->flush_valid, 0);
    expect_eq("ROB empty after commit flush tests", dut->empty, 1);

    // An interrupt is a boundary event before the oldest uncommitted uop.
    // It suppresses all commits, reports the head PC as ERA, and rolls every
    // speculative entry back.
    clear_inputs(dut);
    reset_dut(dut);
    dut->enq_valid = 3;
    dut->enq_rob_idx_0 = 0;
    dut->enq_rob_idx_1 = 1;
    dut->enq_ldst_0 = 26;
    dut->enq_ldst_1 = 27;
    dut->enq_pc_0 = 0x1c000300;
    dut->enq_pc_1 = 0x1c000304;
    eval_cycle(dut);
    clear_inputs(dut);

    dut->interrupt_pending = 1;
    dut->interrupt_next_pc = 0x1c00f000;
    dut->eval();
    expect_eq("nonempty interrupt is taken", dut->interrupt_taken, 1);
    expect_eq("interrupt suppresses commit", dut->commit_valid, 0);
    expect_eq("interrupt exception notification", dut->com_xcpt_valid, 1);
    expect_eq("interrupt ERA uses ROB head", dut->com_xcpt_pc, 0x1c000300);
    expect_eq("interrupt instruction is zero", dut->com_xcpt_inst, 0);
    expect_eq("interrupt ECODE is zero", dut->com_xcpt_cause, 0);
    expect_eq("interrupt flush", dut->flush_valid, 1);
    expect_eq("interrupt flush type", dut->flush_typ, 1);

    eval_cycle(dut);
    clear_inputs(dut);
    dut->eval();
    expect_eq("interrupt enters rollback", dut->rollback, 1);
    expect_eq("interrupt notification is one cycle", dut->com_xcpt_valid, 0);
    eval_cycle(dut);
    expect_eq("interrupt rollback clears ROB", dut->empty, 1);
    expect_eq("interrupt leaves rollback", dut->rollback, 0);

    // With no ROB entry, the frontend-provided architectural next PC is ERA.
    clear_inputs(dut);
    reset_dut(dut);
    dut->interrupt_pending = 1;
    dut->interrupt_next_pc = 0x1c000400;
    dut->eval();
    expect_eq("empty ROB interrupt is taken", dut->interrupt_taken, 1);
    expect_eq("empty ROB interrupt ERA", dut->com_xcpt_pc, 0x1c000400);
    expect_eq("empty ROB interrupt has no commit", dut->commit_valid, 0);
    eval_cycle(dut);
    clear_inputs(dut);
    eval_cycle(dut);
    expect_eq("empty ROB interrupt recovery completes", dut->empty, 1);

    // A synchronous exception at the oldest entry wins over an interrupt.
    clear_inputs(dut);
    reset_dut(dut);
    dut->enq_valid = 1;
    dut->enq_exception = 1;
    dut->enq_exc_cause_0 = 13;
    dut->enq_pc_0 = 0x1c000500;
    dut->enq_inst_0 = 0xffffffff;
    eval_cycle(dut);
    clear_inputs(dut);
    dut->interrupt_pending = 1;
    dut->eval();
    expect_eq("oldest exception blocks interrupt", dut->interrupt_taken, 0);
    expect_eq("oldest exception remains visible", dut->com_xcpt_valid, 1);
    expect_eq("oldest exception cause wins", dut->com_xcpt_cause, 13);
    expect_eq("oldest exception PC wins", dut->com_xcpt_pc, 0x1c000500);

    // A dynamic exception is registered at the clock edge. An interrupt in
    // that same cycle must wait so it cannot bypass the synchronous fault.
    clear_inputs(dut);
    reset_dut(dut);
    dut->enq_valid = 1;
    dut->enq_rob_idx_0 = 0;
    dut->enq_busy_0 = 1;
    dut->enq_pc_0 = 0x1c000700;
    dut->enq_inst_0 = 0x28800401;
    eval_cycle(dut);
    clear_inputs(dut);

    dut->interrupt_pending = 1;
    dut->lxcpt_valid = 1;
    dut->lxcpt_rob_idx = 0;
    dut->lxcpt_cause = 9;
    dut->lxcpt_badvaddr = 0x102;
    dut->eval();
    expect_eq("live dynamic exception blocks interrupt",
              dut->interrupt_taken, 0);
    expect_eq("dynamic exception waits for ROB registration",
              dut->com_xcpt_valid, 0);

    eval_cycle(dut);
    expect_eq("registered dynamic exception still blocks interrupt",
              dut->interrupt_taken, 0);
    expect_eq("dynamic exception becomes visible", dut->com_xcpt_valid, 1);
    expect_eq("dynamic exception cause wins", dut->com_xcpt_cause, 9);
    expect_eq("dynamic exception PC wins", dut->com_xcpt_pc, 0x1c000700);
    expect_eq("dynamic exception BADV", dut->com_xcpt_badvaddr, 0x102);

    // Resolve a branch redirect first, then accept the still-pending interrupt.
    clear_inputs(dut);
    reset_dut(dut);
    dut->interrupt_pending = 1;
    dut->interrupt_next_pc = 0x1c000600;
    dut->br_mispredict = 1;
    dut->eval();
    expect_eq("mispredict blocks interrupt", dut->interrupt_taken, 0);
    dut->br_mispredict = 0;
    dut->eval();
    expect_eq("pending interrupt follows mispredict", dut->interrupt_taken, 1);
    expect_eq("post-mispredict interrupt ERA",
              dut->com_xcpt_pc, 0x1c000600);

    pass("rob");
    delete dut;
    return 0;
}
