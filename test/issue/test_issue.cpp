#include "Vissue_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

static void clear_inputs(Vissue_test_top* dut) {
    dut->dis_valid = 0;
    dut->dis_rob_idx = 0;
    dut->dis_prs1 = 0;
    dut->dis_prs1_busy = 0;
    dut->dis_br_mask = 0;
    dut->wakeup_valid = 0;
    dut->wakeup_pdst = 0;
    dut->resolve_mask = 0;
    dut->mispredict_mask = 0;
    dut->flush_pipeline = 0;
    dut->squash_grant = 0;
}

static void enqueue(Vissue_test_top* dut, unsigned rob_idx,
                    unsigned prs1 = 0, bool busy = false,
                    unsigned br_mask = 0) {
    dut->dis_valid = 1;
    dut->dis_rob_idx = rob_idx;
    dut->dis_prs1 = prs1;
    dut->dis_prs1_busy = busy;
    dut->dis_br_mask = br_mask;
    dut->eval();
    expect_true("issue queue accepts dispatch", dut->dis_ready);
    eval_cycle(dut);
    dut->dis_valid = 0;
    dut->eval();
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vissue_test_top;
    clear_inputs(dut);
    reset_dut(dut);

    enqueue(dut, 1);
    expect_eq("ready uop issues", dut->iss_valid & 1, 1);
    expect_eq("issued identity", dut->iss_rob_idx_0, 1);
    eval_cycle(dut);
    expect_eq("uop issues only once", dut->iss_valid, 0);

    enqueue(dut, 2, 32, true);
    expect_eq("busy uop waits", dut->iss_valid, 0);
    dut->wakeup_valid = 1;
    dut->wakeup_pdst = 32;
    eval_cycle(dut);
    dut->wakeup_valid = 0;
    dut->eval();
    expect_eq("woken uop issues", dut->iss_valid & 1, 1);
    expect_eq("woken identity", dut->iss_rob_idx_0, 2);
    eval_cycle(dut);

    // Fill all four slots with blocked uops.
    for (unsigned i = 0; i < 4; ++i)
        enqueue(dut, 10 + i, 40 + i, true);
    dut->eval();
    expect_eq("full queue backpressures", dut->dis_ready, 0);
    dut->flush_pipeline = 1;
    eval_cycle(dut);
    dut->flush_pipeline = 0;
    dut->eval();
    expect_eq("flush frees queue", dut->dis_ready, 1);

    enqueue(dut, 20, 45, true, 0x2);
    dut->mispredict_mask = 0x2;
    eval_cycle(dut);
    dut->mispredict_mask = 0;
    dut->eval();
    expect_eq("mispredict kills uop", dut->iss_valid, 0);

    enqueue(dut, 30);
    dut->squash_grant = 1;
    dut->eval();
    expect_eq("squash suppresses issue", dut->iss_valid, 0);
    eval_cycle(dut);
    dut->squash_grant = 0;
    dut->eval();
    expect_eq("squashed grant retries", dut->iss_valid & 1, 1);
    expect_eq("retried identity", dut->iss_rob_idx_0, 30);
    eval_cycle(dut);

    // A correctly resolved tag may be reused by a younger branch. An older
    // blocked uop must have the resolved bit removed before that reuse, or the
    // younger misprediction will incorrectly kill it.
    clear_inputs(dut);
    dut->flush_pipeline = 1;
    eval_cycle(dut);
    dut->flush_pipeline = 0;
    enqueue(dut, 40, 50, true, 0x2);

    dut->resolve_mask = 0x2;
    eval_cycle(dut);
    dut->resolve_mask = 0;

    dut->mispredict_mask = 0x2;
    eval_cycle(dut);
    dut->mispredict_mask = 0;

    dut->wakeup_valid = 1;
    dut->wakeup_pdst = 50;
    eval_cycle(dut);
    dut->wakeup_valid = 0;
    dut->eval();
    expect_eq("resolved-tag uop survives tag reuse", dut->iss_valid & 1, 1);
    expect_eq("resolved-tag uop identity", dut->iss_rob_idx_0, 40);
    eval_cycle(dut);

    // Force a ready uop into slot 2, then resolve its branch in the cycle in
    // which it issues on port 0. This catches accidental use of the slot index
    // when updating the issue-port output.
    clear_inputs(dut);
    dut->flush_pipeline = 1;
    eval_cycle(dut);
    dut->flush_pipeline = 0;
    enqueue(dut, 50, 60, true);
    enqueue(dut, 51, 61, true);

    dut->dis_valid = 1;
    dut->dis_rob_idx = 52;
    dut->dis_prs1 = 0;
    dut->dis_prs1_busy = 0;
    dut->dis_br_mask = 0x4;
    eval_cycle(dut);
    dut->dis_valid = 0;
    dut->resolve_mask = 0x4;
    dut->eval();
    expect_eq("slot-2 uop issues on port 0", dut->iss_valid & 1, 1);
    expect_eq("issuing uop clears same-cycle resolve",
              dut->iss_br_mask_0, 0);

    pass("issue");
    delete dut;
    return 0;
}
