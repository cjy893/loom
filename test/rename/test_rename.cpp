#include "Vrename_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

static void clear_inputs(Vrename_test_top* dut) {
    dut->in_valid = 0;
    dut->in_lrs1_0 = dut->in_lrs2_0 = dut->in_ldst_0 = 0;
    dut->in_lrs1_1 = dut->in_lrs2_1 = dut->in_ldst_1 = 0;
    dut->in_br_mask_0 = 0;
    dut->in_br_mask_1 = 0;
    dut->in_allocate_brtag_0 = 0;
    dut->in_br_tag_0 = 0;
    dut->in_allocate_brtag_1 = 0;
    dut->in_br_tag_1 = 0;
    dut->wakeup_valid = 0;
    dut->wakeup_pdst = 0;
    dut->commit_valid = 0;
    dut->commit_ldst = 0;
    dut->commit_pdst = 0;
    dut->commit_stale_pdst = 0;
    dut->rollback = 0;
    dut->kill = 0;
    dut->br_mispredict = 0;
    dut->br_mispredict_tag = 0;
    dut->dis_ready = 1;
    dut->dis_fire = 3;
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
    eval_cycle(dut);
    expect_eq("first pdst", dut->out_pdst_0, 32);
    expect_eq("first prs1", dut->out_prs1_0, 13);
    expect_eq("first stale", dut->out_stale_0, 13);
    expect_eq("first source ready", dut->out_prs1_busy_0, 0);
    // The next writer consumes p32 and allocates p33.
    eval_cycle(dut);
    expect_eq("RAW pdst", dut->out_pdst_0, 33);
    expect_eq("RAW prs1", dut->out_prs1_0, 32);
    expect_eq("RAW stale", dut->out_stale_0, 32);
    expect_eq("RAW source busy", dut->out_prs1_busy_0, 1);
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
    eval_cycle(dut);
    expect_eq("lane0 pdst", dut->out_pdst_0, 32);
    expect_eq("lane1 sees lane0 mapping", dut->out_prs1_1, 32);
    expect_eq("lane1 pdst", dut->out_pdst_1, 33);
    expect_eq("lane1 source busy", dut->out_prs1_busy_1, 1);
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
    eval_cycle(dut);
    expect_eq("committed stale register reused", dut->out_pdst_0, 13);

    // Exhaust all but one free register. A two-destination packet must stall
    // instead of assigning p0 to its second lane.
    clear_inputs(dut);
    dut->rst_n = 0;
    eval_cycle(dut);
    dut->rst_n = 1;
    for (int pair = 0; pair < 7; pair++) {
        dut->in_valid = 3;
        dut->in_ldst_0 = 1;
        dut->in_ldst_1 = 2;
        dut->eval();
        expect_eq("free-list pair does not stall", dut->stalls, 0);
        eval_cycle(dut);
        expect_eq("free-list lane0 allocation", dut->out_pdst_0, 32 + 2 * pair);
        expect_eq("free-list lane1 allocation", dut->out_pdst_1, 33 + 2 * pair);
    }

    dut->in_valid = 1;
    dut->eval();
    expect_eq("fifteenth allocation does not stall", dut->stalls, 0);
    eval_cycle(dut);
    expect_eq("fifteenth allocation", dut->out_pdst_0, 46);

    // The current one-destination packet dispatches and a new two-destination
    // packet may enter Rename2. With one register left, that packet then stalls
    // in Rename2 until commit returns another physical register.
    dut->in_valid = 3;
    eval_cycle(dut);
    expect_eq("resource-blocked packet remains in Rename2", dut->out_valid, 3);
    expect_eq("two allocations with one free register stall", dut->stalls, 3);

    dut->in_valid = 0;
    dut->dis_ready = 0;
    dut->dis_fire = 0;
    dut->commit_valid = 1;
    dut->commit_ldst = 20;
    dut->commit_pdst = 20;
    dut->commit_stale_pdst = 13;
    eval_cycle(dut);
    expect_eq("commit makes blocked packet dispatchable", dut->stalls, 0);
    expect_eq("unblocked packet is still pending", dut->out_valid, 3);

    dut->commit_valid = 0;
    dut->dis_ready = 1;
    dut->dis_fire = 3;
    dut->eval();
    expect_true("firing lanes receive distinct destinations",
                dut->out_pdst_0 != dut->out_pdst_1);
    eval_cycle(dut);
    expect_eq("unblocked packet dispatches", dut->out_valid, 0);

    // Killing an undispatched Rename2 uop must not modify the speculative map
    // or consume its candidate physical destination.
    clear_inputs(dut);
    dut->rst_n = 0;
    eval_cycle(dut);
    dut->rst_n = 1;
    dut->in_valid = 1;
    dut->in_ldst_0 = 5;
    dut->dis_fire = 0;
    eval_cycle(dut);
    expect_eq("undispatched candidate", dut->out_pdst_0, 32);

    dut->in_valid = 0;
    dut->dis_ready = 0;
    dut->kill = 1;
    eval_cycle(dut);
    expect_eq("kill clears Rename2", dut->out_valid, 0);

    clear_inputs(dut);
    dut->in_valid = 1;
    dut->in_lrs1_0 = 5;
    eval_cycle(dut);
    expect_eq("killed writer does not change map", dut->out_prs1_0, 5);
    expect_eq("killed writer does not consume candidate", dut->out_pdst_0, 0);

    // Rename2 must clear only fired lanes while the packet is partially
    // blocked, and the remaining uop must retain its allocated destination.
    clear_inputs(dut);
    dut->rst_n = 0;
    eval_cycle(dut);
    dut->rst_n = 1;
    dut->in_valid = 3;
    dut->in_ldst_0 = 5;
    dut->in_ldst_1 = 6;
    eval_cycle(dut);
    expect_eq("pending packet starts full", dut->out_valid, 3);
    expect_eq("pending lane0 pdst", dut->out_pdst_0, 32);
    expect_eq("pending lane1 pdst", dut->out_pdst_1, 33);

    dut->in_valid = 0;
    dut->dis_ready = 0;
    dut->dis_fire = 1;
    eval_cycle(dut);
    expect_eq("partial dispatch keeps younger lane", dut->out_valid, 2);
    expect_eq("held lane keeps pdst", dut->out_pdst_1, 33);

    dut->dis_fire = 0;
    eval_cycle(dut);
    expect_eq("blocked lane remains pending", dut->out_valid, 2);
    expect_eq("blocked lane data remains stable", dut->out_pdst_1, 33);

    dut->dis_ready = 1;
    dut->dis_fire = 2;
    eval_cycle(dut);
    expect_eq("packet clears after final fire", dut->out_valid, 0);

    // A mispredicted branch restores both the speculative map and all physical
    // registers allocated by younger instructions.
    clear_inputs(dut);
    dut->rst_n = 0;
    eval_cycle(dut);
    dut->rst_n = 1;

    // Establish r5 -> p32 before the branch.
    dut->in_valid = 1;
    dut->in_ldst_0 = 5;
    eval_cycle(dut);
    clear_inputs(dut);
    eval_cycle(dut);

    // Dispatch branch tag 0 and create its rename snapshot.
    dut->in_valid = 1;
    dut->in_allocate_brtag_0 = 1;
    dut->in_br_tag_0 = 0;
    eval_cycle(dut);
    clear_inputs(dut);
    eval_cycle(dut);

    // Wrong-path writes change r5 to p33 and r6 to p34.
    dut->in_valid = 1;
    dut->in_ldst_0 = 5;
    eval_cycle(dut);
    clear_inputs(dut);
    eval_cycle(dut);
    dut->in_valid = 1;
    dut->in_ldst_0 = 6;
    eval_cycle(dut);
    clear_inputs(dut);
    eval_cycle(dut);

    dut->br_mispredict = 1;
    dut->br_mispredict_tag = 0;
    eval_cycle(dut);

    // The restored map must see r5 -> p32 and architectural r6 -> p6.
    // Recovered p33 and p34 must be immediately available for allocation.
    clear_inputs(dut);
    dut->in_valid = 3;
    dut->in_lrs1_0 = 5;
    dut->in_lrs2_0 = 6;
    dut->in_ldst_0 = 7;
    dut->in_ldst_1 = 8;
    eval_cycle(dut);
    expect_eq("branch recovery restores older mapping", dut->out_prs1_0, 32);
    expect_eq("branch recovery removes wrong-path mapping", dut->out_prs2_0, 6);
    expect_eq("branch recovery frees first wrong-path pdst", dut->out_pdst_0, 33);
    expect_eq("branch recovery frees second wrong-path pdst", dut->out_pdst_1, 34);

    // Nested snapshots must restore only allocations younger than the selected
    // branch: recovering tag 1 keeps p32, then recovering tag 0 frees it.
    clear_inputs(dut);
    dut->rst_n = 0;
    eval_cycle(dut);
    dut->rst_n = 1;

    dut->in_valid = 1;
    dut->in_allocate_brtag_0 = 1;
    dut->in_br_tag_0 = 0;
    eval_cycle(dut);
    clear_inputs(dut);
    eval_cycle(dut);

    dut->in_valid = 1;
    dut->in_ldst_0 = 5;
    eval_cycle(dut);
    clear_inputs(dut);
    eval_cycle(dut);

    dut->in_valid = 1;
    dut->in_allocate_brtag_0 = 1;
    dut->in_br_tag_0 = 1;
    eval_cycle(dut);
    clear_inputs(dut);
    eval_cycle(dut);

    dut->in_valid = 1;
    dut->in_ldst_0 = 6;
    eval_cycle(dut);
    clear_inputs(dut);
    eval_cycle(dut);

    dut->br_mispredict = 1;
    dut->br_mispredict_tag = 1;
    eval_cycle(dut);
    clear_inputs(dut);
    dut->in_valid = 1;
    dut->in_lrs1_0 = 5;
    dut->in_lrs2_0 = 6;
    dut->in_ldst_0 = 7;
    dut->in_br_mask_0 = 1;
    eval_cycle(dut);
    expect_eq("inner recovery keeps outer allocation", dut->out_prs1_0, 32);
    expect_eq("inner recovery restores r6", dut->out_prs2_0, 6);
    expect_eq("inner recovery reuses younger pdst", dut->out_pdst_0, 33);

    // Do not dispatch the probe; recover the still-unresolved outer branch.
    dut->dis_fire = 0;
    dut->br_mispredict = 1;
    dut->br_mispredict_tag = 0;
    eval_cycle(dut);
    clear_inputs(dut);
    dut->in_valid = 3;
    dut->in_lrs1_0 = 5;
    dut->in_ldst_0 = 7;
    dut->in_ldst_1 = 8;
    eval_cycle(dut);
    expect_eq("outer recovery restores architectural map", dut->out_prs1_0, 5);
    expect_eq("outer recovery frees outer pdst", dut->out_pdst_0, 32);
    expect_eq("outer recovery also frees inner pdst", dut->out_pdst_1, 33);

    // A branch in lane 0 must exclude its own state but include allocations
    // made by the younger lane 1 in the same dispatch group.
    clear_inputs(dut);
    dut->rst_n = 0;
    eval_cycle(dut);
    dut->rst_n = 1;
    dut->in_valid = 3;
    dut->in_allocate_brtag_0 = 1;
    dut->in_br_tag_0 = 0;
    dut->in_ldst_1 = 6;
    eval_cycle(dut);
    expect_eq("same-bundle younger allocation", dut->out_pdst_1, 32);
    clear_inputs(dut);
    eval_cycle(dut);

    dut->br_mispredict = 1;
    dut->br_mispredict_tag = 0;
    eval_cycle(dut);
    clear_inputs(dut);
    dut->in_valid = 1;
    dut->in_lrs1_0 = 6;
    dut->in_ldst_0 = 7;
    eval_cycle(dut);
    expect_eq("same-bundle recovery removes younger mapping",
              dut->out_prs1_0, 6);
    expect_eq("same-bundle recovery frees younger pdst",
              dut->out_pdst_0, 32);

    pass("rename");
    delete dut;
    return 0;
}
