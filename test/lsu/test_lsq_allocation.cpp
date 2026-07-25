#include "Vlsq_allocation_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

namespace {

void clear_inputs(Vlsq_allocation_test_top* dut) {
    dut->ld_enq_valid = 0;
    dut->ld_enq_fire = 0;
    dut->st_enq_valid = 0;
    dut->st_enq_fire = 0;
    dut->flush_pipeline = 0;
}

void test_load_preview(Vlsq_allocation_test_top* dut) {
    clear_inputs(dut);
    reset_dut(dut);

    dut->ld_enq_valid = 3;
    dut->eval();
    expect_eq("load preview has two ready lanes", dut->ld_enq_ready, 3);
    expect_true("load preview tags are distinct",
                dut->ld_enq_idx0 != dut->ld_enq_idx1);
    const unsigned tag0 = dut->ld_enq_idx0;
    const unsigned tag1 = dut->ld_enq_idx1;

    for(int cycle = 0; cycle < 3; ++cycle) {
        eval_cycle(dut);
        expect_eq("load preview does not allocate", dut->ldq_empty, 1);
        expect_eq("load lane 0 preview tag is stable",
                  dut->ld_enq_idx0, tag0);
        expect_eq("load lane 1 preview tag is stable",
                  dut->ld_enq_idx1, tag1);
    }

    dut->ld_enq_fire = 3;
    eval_cycle(dut);
    dut->ld_enq_valid = 0;
    dut->ld_enq_fire = 0;
    dut->eval();
    expect_eq("load fire allocates entries", dut->ldq_empty, 0);
}

void test_store_preview(Vlsq_allocation_test_top* dut) {
    clear_inputs(dut);
    reset_dut(dut);

    dut->st_enq_valid = 3;
    dut->eval();
    expect_eq("store preview has two ready lanes", dut->st_enq_ready, 3);
    expect_true("store preview tags are distinct",
                dut->st_enq_idx0 != dut->st_enq_idx1);
    const unsigned tag0 = dut->st_enq_idx0;
    const unsigned tag1 = dut->st_enq_idx1;

    for(int cycle = 0; cycle < 3; ++cycle) {
        eval_cycle(dut);
        expect_eq("store preview does not allocate", dut->stq_empty, 1);
        expect_eq("store lane 0 preview tag is stable",
                  dut->st_enq_idx0, tag0);
        expect_eq("store lane 1 preview tag is stable",
                  dut->st_enq_idx1, tag1);
    }

    dut->st_enq_fire = 3;
    eval_cycle(dut);
    dut->st_enq_valid = 0;
    dut->st_enq_fire = 0;
    dut->eval();
    expect_eq("store fire allocates entries", dut->stq_empty, 0);
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vlsq_allocation_test_top;

    test_load_preview(dut);
    test_store_preview(dut);

    pass("lsq_allocation");
    delete dut;
    return 0;
}
