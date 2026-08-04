#include "Vbr_mask_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

static void clear_inputs(Vbr_mask_test_top* dut) {
    dut->is_branch = 0;
    dut->will_fire = 0;
    dut->resolve_mask = 0;
    dut->mispredict_mask = 0;
    dut->mispredict = 0;
    dut->mispredict_uop_mask = 0;
    dut->flush_pipeline = 0;
}

static void allocate(Vbr_mask_test_top* dut, unsigned lanes) {
    dut->is_branch = lanes;
    dut->will_fire = lanes;
    eval_cycle(dut);
    dut->is_branch = 0;
    dut->will_fire = 0;
    dut->eval();
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vbr_mask_test_top;
    clear_inputs(dut);
    reset_dut(dut);

    dut->is_branch = 3;
    dut->will_fire = 3;
    dut->eval();
    expect_eq("first lane gets highest free tag", dut->br_tag_0, 3);
    expect_eq("second lane gets next tag", dut->br_tag_1, 2);
    expect_eq("first branch has no older branches", dut->br_mask_0, 0);
    expect_eq("second branch depends on first", dut->br_mask_1, 0x8);
    eval_cycle(dut);
    clear_inputs(dut);
    dut->eval();
    expect_eq("two allocated branches visible", dut->br_mask_0, 0xc);

    dut->resolve_mask = 0x8;
    dut->eval();
    expect_eq("resolved branch removed combinationally", dut->br_mask_0, 0x4);
    eval_cycle(dut);
    dut->resolve_mask = 0;
    dut->eval();
    expect_eq("resolved branch remains released", dut->br_mask_0, 0x4);

    dut->flush_pipeline = 1;
    eval_cycle(dut);
    dut->flush_pipeline = 0;
    dut->eval();
    expect_eq("flush clears all branch tags", dut->br_mask_0, 0);

    allocate(dut, 3);
    allocate(dut, 3);
    dut->is_branch = 1;
    dut->eval();
    expect_eq("full mask blocks another branch", dut->is_full & 1, 1);

    // A mispredicted branch still needs its snapshot for recovery. Do not let
    // a wrong-path branch reuse that tag before the b2 recovery flush.
    dut->resolve_mask = 0x8;
    dut->mispredict_mask = 0x8;
    dut->is_branch = 1;
    dut->will_fire = 1;
    dut->eval();
    expect_eq("mispredict resolve does not recycle recovery tag",
              dut->is_full & 1, 1);
    clear_inputs(dut);
    dut->eval();

    // A correctly resolved tag no longer protects any live younger uop. The
    // allocator should be able to recycle it in the same cycle instead of
    // inserting a one-cycle bubble while br_mask_q catches up.
    dut->resolve_mask = 0x8;
    dut->is_branch = 1;
    dut->will_fire = 1;
    dut->eval();
    expect_eq("correct resolve unblocks same-cycle allocation",
              dut->is_full & 1, 0);
    expect_eq("same-cycle allocation reuses resolved tag", dut->br_tag_0, 3);
    expect_eq("recycled branch excludes the resolved predecessor",
              dut->br_mask_0, 0x7);
    eval_cycle(dut);
    clear_inputs(dut);
    dut->eval();
    expect_eq("recycled tag remains allocated", dut->br_mask_0, 0xf);

    dut->flush_pipeline = 1;
    eval_cycle(dut);
    clear_inputs(dut);
    dut->eval();

    // Allocate an older branch (tag 3) and a younger branch (tag 2). A
    // misprediction by the younger branch restores its parent mask (tag 3).
    allocate(dut, 1);
    expect_eq("older branch allocated", dut->br_mask_0, 0x8);
    allocate(dut, 1);
    expect_eq("nested branches allocated", dut->br_mask_0, 0xc);
    dut->resolve_mask = 0x4;
    dut->mispredict_mask = 0x4;
    dut->mispredict = 1;
    dut->mispredict_uop_mask = 0x8;
    eval_cycle(dut);
    clear_inputs(dut);
    dut->eval();
    expect_eq("mispredict restores parent mask", dut->br_mask_0, 0x8);

    pass("br_mask");
    delete dut;
    return 0;
}
