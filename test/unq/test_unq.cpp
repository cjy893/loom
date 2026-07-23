#include "Vunq_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"
#include <cstdint>

enum { OP_CSR = 0, OP_MUL = 1, OP_DIV = 2 };

static void clear_inputs(Vunq_test_top* dut) {
    dut->iss_valid = 0;
    dut->op_class = OP_CSR;
    dut->fcn_op = 0;
    dut->rob_idx = 0;
    dut->csr_addr_in = 0;
    dut->csr_cmd_in = 0;
    dut->rs1_data = 0;
    dut->rs2_data = 0;
    dut->csr_rdata = 0;
    dut->kill = 0;
}

static void start_op(Vunq_test_top* dut, unsigned op_class,
                     unsigned rob_idx, uint32_t rs1, uint32_t rs2) {
    dut->op_class = op_class;
    dut->rob_idx = rob_idx;
    dut->rs1_data = rs1;
    dut->rs2_data = rs2;
    dut->iss_valid = 1;
    eval_cycle(dut);
    dut->iss_valid = 0;
    dut->eval();
}

static unsigned wait_for_result(Vunq_test_top* dut, unsigned max_cycles) {
    for (unsigned cycle = 0; cycle <= max_cycles; ++cycle) {
        if (dut->res_valid)
            return cycle;
        eval_cycle(dut);
    }
    expect_true("UNQ result arrived before timeout", false);
    return 0;
}

static void finish_result(Vunq_test_top* dut) {
    eval_cycle(dut);
    expect_eq("UNQ result is one cycle pulse", dut->res_valid, 0);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vunq_test_top;
    clear_inputs(dut);
    reset_dut(dut);

    dut->op_class = OP_CSR;
    dut->rob_idx = 3;
    dut->csr_addr_in = 0x123;
    dut->csr_cmd_in = 2;
    dut->rs1_data = 0x55aa55aa;
    dut->csr_rdata = 0xabcdef01;
    dut->iss_valid = 1;
    dut->eval();
    expect_eq("CSR request valid in issue cycle", dut->csr_req_valid, 1);
    expect_eq("CSR request address", dut->csr_addr, 0x123);
    expect_eq("CSR request command", dut->csr_cmd, 2);
    expect_eq("CSR write data", dut->csr_wdata, 0x55aa55aa);
    eval_cycle(dut);
    dut->iss_valid = 0;
    dut->eval();
    expect_eq("CSR response valid", dut->res_valid, 1);
    expect_eq("CSR response data", dut->res_data, 0xabcdef01);
    expect_eq("CSR response identity", dut->res_rob_idx, 3);
    finish_result(dut);

    start_op(dut, OP_MUL, 4, uint32_t(-7), 9);
    unsigned mul_cycles = wait_for_result(dut, 5);
    expect_eq("multiply latency after issue", mul_cycles, 2);
    expect_eq("signed multiply low word", dut->res_data, uint32_t(-63));
    expect_eq("multiply identity", dut->res_rob_idx, 4);
    finish_result(dut);

    start_op(dut, OP_DIV, 5, uint32_t(-100), 7);
    unsigned div_cycles = wait_for_result(dut, 8);
    expect_eq("divide latency after issue", div_cycles, 5);
    expect_eq("signed divide quotient", dut->res_data, uint32_t(-14));
    expect_eq("divide identity", dut->res_rob_idx, 5);
    finish_result(dut);

    start_op(dut, OP_MUL, 6, 0x1234, 0x5678);
    dut->kill = 1;
    eval_cycle(dut);
    dut->kill = 0;
    for (int i = 0; i < 5; ++i) {
        expect_eq("killed multiply has no result", dut->res_valid, 0);
        eval_cycle(dut);
    }

    pass("unq");
    delete dut;
    return 0;
}
