#include "Vmem_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"
#include <cstdint>

static void clear_inputs(Vmem_test_top* dut) {
    dut->iss_valid = 0;
    dut->use_agen = 0;
    dut->use_dgen = 0;
    dut->rob_idx = 0;
    dut->rs1_data = 0;
    dut->rs2_data = 0;
    dut->imm_data = 0;
    dut->kill = 0;
}

static void issue(Vmem_test_top* dut, bool agen, bool dgen,
                  unsigned rob_idx, uint32_t rs1, uint32_t rs2,
                  uint32_t imm) {
    dut->iss_valid = 1;
    dut->use_agen = agen;
    dut->use_dgen = dgen;
    dut->rob_idx = rob_idx;
    dut->rs1_data = rs1;
    dut->rs2_data = rs2;
    dut->imm_data = imm;
    eval_cycle(dut);
    dut->iss_valid = 0;
    dut->eval();
    expect_eq("MEM does not respond in read stage", dut->agen_valid | dut->dgen_valid, 0);
    eval_cycle(dut);
}

static void drain(Vmem_test_top* dut) {
    eval_cycle(dut);
    expect_eq("MEM response is one cycle pulse", dut->agen_valid | dut->dgen_valid, 0);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vmem_test_top;
    clear_inputs(dut);
    reset_dut(dut);

    issue(dut, true, false, 5, 0x1000, 0, 0x24);
    expect_eq("AGEN valid", dut->agen_valid, 1);
    expect_eq("DGEN disabled for load", dut->dgen_valid, 0);
    expect_eq("effective address", dut->agen_addr, 0x1024);
    expect_eq("AGEN preserves ROB identity", dut->agen_rob_idx, 5);
    drain(dut);

    issue(dut, true, true, 6, 0x2000, 0xdeadbeef, uint32_t(-16));
    expect_eq("store AGEN valid", dut->agen_valid, 1);
    expect_eq("store DGEN valid", dut->dgen_valid, 1);
    expect_eq("store address", dut->agen_addr, 0x1ff0);
    expect_eq("store data", dut->dgen_data, 0xdeadbeef);
    expect_eq("store AGEN identity", dut->agen_rob_idx, 6);
    expect_eq("store DGEN identity", dut->dgen_rob_idx, 6);
    drain(dut);

    issue(dut, false, true, 7, 0, 0x12345678, 0);
    expect_eq("DGEN-only suppresses AGEN", dut->agen_valid, 0);
    expect_eq("DGEN-only valid", dut->dgen_valid, 1);
    expect_eq("DGEN-only data", dut->dgen_data, 0x12345678);
    drain(dut);

    issue(dut, true, false, 8, 0xfffffff0, 0, 0x30);
    expect_eq("address wraps at XLEN", dut->agen_addr, 0x20);
    drain(dut);

    dut->iss_valid = 1;
    dut->use_agen = 1;
    dut->rob_idx = 9;
    dut->rs1_data = 0x4000;
    dut->imm_data = 4;
    eval_cycle(dut);
    dut->iss_valid = 0;
    dut->kill = 1;
    eval_cycle(dut);
    expect_eq("kill cancels pending AGEN", dut->agen_valid, 0);
    expect_eq("kill cancels pending DGEN", dut->dgen_valid, 0);
    dut->kill = 0;
    eval_cycle(dut);
    expect_eq("killed operation stays cancelled", dut->agen_valid | dut->dgen_valid, 0);

    pass("mem");
    delete dut;
    return 0;
}
