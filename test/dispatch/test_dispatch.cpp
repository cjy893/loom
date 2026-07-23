#include "Vdispatch_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

enum { IQ_MEM = 1, IQ_UNQ = 2, IQ_ALU = 4 };

static void clear_inputs(Vdispatch_test_top* dut) {
    dut->rn2_mask = 0;
    dut->iq_type_0 = 0;
    dut->iq_type_1 = 0;
    dut->rob_idx_0 = 0;
    dut->rob_idx_1 = 0;
    dut->iq_mem_ready = 0;
    dut->iq_alu_ready = 0;
    dut->iq_unq_ready = 0;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vdispatch_test_top;
    clear_inputs(dut);

    dut->rn2_mask = 3;
    dut->iq_type_0 = IQ_ALU;
    dut->iq_type_1 = IQ_MEM;
    dut->rob_idx_0 = 10;
    dut->rob_idx_1 = 11;
    dut->iq_alu_ready = 1;
    dut->iq_mem_ready = 1;
    dut->eval();
    expect_eq("different queues both fire", dut->dis_fire, 3);
    expect_eq("different queues packet ready", dut->dis_ready, 1);
    expect_eq("ALU dispatch valid", dut->iq_alu_dis_valid, 1);
    expect_eq("ALU dispatch identity", dut->iq_alu_rob_idx, 10);
    expect_eq("MEM dispatch valid", dut->iq_mem_dis_valid, 1);
    expect_eq("MEM dispatch identity", dut->iq_mem_rob_idx, 11);
    expect_eq("dispatch uop 0 preserved", dut->dis_uop_rob_idx_0, 10);
    expect_eq("dispatch uop 1 preserved", dut->dis_uop_rob_idx_1, 11);

    dut->iq_alu_ready = 0;
    dut->eval();
    expect_eq("blocked oldest prevents younger fire", dut->dis_fire, 0);
    expect_eq("blocked packet not ready", dut->dis_ready, 0);
    expect_eq("blocked ALU output invalid", dut->iq_alu_dis_valid, 0);
    expect_eq("younger MEM output invalid", dut->iq_mem_dis_valid, 0);

    dut->rn2_mask = 2;
    dut->iq_type_1 = IQ_UNQ;
    dut->iq_unq_ready = 1;
    dut->eval();
    expect_eq("invalid lane 0 does not block lane 1", dut->dis_fire, 2);
    expect_eq("UNQ dispatch valid", dut->iq_unq_dis_valid, 1);
    expect_eq("UNQ dispatch identity", dut->iq_unq_rob_idx, 11);

    // A scalar IQ input cannot accept two uops in one cycle. Do not prescribe
    // packet blocking versus partial acceptance here, but both lanes cannot be
    // reported consumed while only one uop is observable on the IQ output.
    dut->rn2_mask = 3;
    dut->iq_type_0 = IQ_ALU;
    dut->iq_type_1 = IQ_ALU;
    dut->rob_idx_0 = 20;
    dut->rob_idx_1 = 21;
    dut->iq_alu_ready = 1;
    dut->eval();
    expect_true("same IQ scalar output cannot consume both lanes",
                dut->dis_fire != 3);

    pass("dispatch");
    delete dut;
    return 0;
}
