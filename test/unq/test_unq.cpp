#include "Vunq_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"
#include <cstdint>

enum {
    OP_CSR = 0,
    OP_MUL = 1,
    OP_DIV = 2,
    OP_CNT = 3,
    OP_ERTN = 4,
};
enum {
    MULDIV_MUL_W = 0,
    MULDIV_MULH_W = 1,
    MULDIV_MULH_WU = 2,
    MULDIV_DIV_W = 3,
    MULDIV_DIV_WU = 4,
    MULDIV_MOD_W = 5,
    MULDIV_MOD_WU = 6,
};
enum { CNT_LOW = 0, CNT_HIGH = 1, CNT_ID = 2 };

static void clear_inputs(Vunq_test_top* dut) {
    dut->iss_valid = 0;
    dut->op_class = OP_CSR;
    dut->fcn_op = 0;
    dut->rob_idx = 0;
    dut->csr_addr_in = 0;
    dut->csr_cmd_in = 0;
    dut->src1_data = 0;
    dut->src2_data = 0;
    dut->csr_rdata = 0;
    dut->counter_value = 0;
    dut->counter_id_value = 0;
    dut->uop_br_mask = 0;
    dut->resolve_mask = 0;
    dut->mispredict_mask = 0;
    dut->br_mispredict = 0;
    dut->kill = 0;
}

static void start_op(Vunq_test_top* dut, unsigned op_class,
                     unsigned fcn_op, unsigned rob_idx,
                     uint32_t src1, uint32_t src2) {
    dut->op_class = op_class;
    dut->fcn_op = fcn_op;
    dut->rob_idx = rob_idx;
    dut->src1_data = src1;
    dut->src2_data = src2;
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
    dut->src1_data = 0x55aa55aa;
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

    dut->counter_value = 0x1122334455667788ULL;
    dut->counter_id_value = 0xaabbccdd;
    start_op(dut, OP_CNT, CNT_LOW, 18, 0, 0);
    expect_eq("counter low result is available after issue",
              dut->res_valid, 1);
    expect_eq("counter low word", dut->res_data, 0x55667788);
    expect_eq("counter low identity", dut->res_rob_idx, 18);
    finish_result(dut);

    start_op(dut, OP_CNT, CNT_HIGH, 19, 0, 0);
    expect_eq("counter high result is available after issue",
              dut->res_valid, 1);
    expect_eq("counter high word", dut->res_data, 0x11223344);
    expect_eq("counter high identity", dut->res_rob_idx, 19);
    finish_result(dut);

    start_op(dut, OP_CNT, CNT_ID, 20, 0, 0);
    expect_eq("counter ID result is available after issue",
              dut->res_valid, 1);
    expect_eq("counter ID value", dut->res_data, 0xaabbccdd);
    expect_eq("counter ID identity", dut->res_rob_idx, 20);
    finish_result(dut);

    dut->op_class = OP_ERTN;
    dut->rob_idx = 21;
    dut->iss_valid = 1;
    dut->eval();
    expect_eq("ERTN does not create a CSR request", dut->csr_req_valid, 0);
    eval_cycle(dut);
    dut->iss_valid = 0;
    dut->eval();
    expect_eq("ERTN completion is available after issue", dut->res_valid, 1);
    expect_eq("ERTN completion identity", dut->res_rob_idx, 21);
    expect_eq("ERTN marker survives UNQ", dut->res_is_ertn, 1);
    expect_eq("ERTN has no result data", dut->res_data, 0);
    finish_result(dut);

    start_op(dut, OP_MUL, MULDIV_MUL_W, 4, uint32_t(-7), 9);
    unsigned mul_cycles = wait_for_result(dut, 5);
    expect_eq("multiply latency after issue", mul_cycles, 2);
    expect_eq("signed multiply low word", dut->res_data, uint32_t(-63));
    expect_eq("multiply identity", dut->res_rob_idx, 4);
    finish_result(dut);

    start_op(dut, OP_DIV, MULDIV_DIV_W, 5, uint32_t(-100), 7);
    unsigned div_cycles = wait_for_result(dut, 8);
    expect_eq("divide latency after issue", div_cycles, 5);
    expect_eq("signed divide quotient", dut->res_data, uint32_t(-14));
    expect_eq("divide identity", dut->res_rob_idx, 5);
    finish_result(dut);

    start_op(dut, OP_MUL, MULDIV_MUL_W, 6, 0x1234, 0x5678);
    dut->kill = 1;
    eval_cycle(dut);
    dut->kill = 0;
    for (int i = 0; i < 5; ++i) {
        expect_eq("killed multiply has no result", dut->res_valid, 0);
        eval_cycle(dut);
    }

    start_op(dut, OP_MUL, MULDIV_MULH_W, 10, 0x80000000, 2);
    wait_for_result(dut, 5);
    expect_eq("signed multiply high word", dut->res_data, 0xffffffff);
    finish_result(dut);

    start_op(dut, OP_MUL, MULDIV_MULH_WU, 11, 0x80000000, 2);
    wait_for_result(dut, 5);
    expect_eq("unsigned multiply high word", dut->res_data, 1);
    finish_result(dut);

    start_op(dut, OP_DIV, MULDIV_DIV_WU, 12, 0xffffff00, 16);
    wait_for_result(dut, 8);
    expect_eq("unsigned divide quotient", dut->res_data, 0x0ffffff0);
    finish_result(dut);

    start_op(dut, OP_DIV, MULDIV_MOD_W, 13, uint32_t(-100), 7);
    wait_for_result(dut, 8);
    expect_eq("signed remainder follows dividend sign",
              dut->res_data, uint32_t(-2));
    finish_result(dut);

    start_op(dut, OP_DIV, MULDIV_MOD_WU, 14, 0xffffff05, 16);
    wait_for_result(dut, 8);
    expect_eq("unsigned remainder", dut->res_data, 5);
    finish_result(dut);

    start_op(dut, OP_DIV, MULDIV_DIV_W, 15, 0x80000000, 0xffffffff);
    wait_for_result(dut, 8);
    expect_eq("signed divide overflow wraps to INT_MIN",
              dut->res_data, 0x80000000);
    finish_result(dut);

    // LoongArch permits any result for a zero divisor, but no exception.
    // Keep the implementation deterministic: quotient=-1, remainder=dividend.
    start_op(dut, OP_DIV, MULDIV_DIV_WU, 16, 0x12345678, 0);
    wait_for_result(dut, 8);
    expect_eq("zero-divisor quotient is deterministic",
              dut->res_data, 0xffffffff);
    finish_result(dut);

    start_op(dut, OP_DIV, MULDIV_MOD_W, 17, 0x87654321, 0);
    wait_for_result(dut, 8);
    expect_eq("zero-divisor remainder preserves dividend",
              dut->res_data, 0x87654321);
    finish_result(dut);

    // A wrong-path CSR must not create an externally visible request.
    clear_inputs(dut);
    dut->op_class = OP_CSR;
    dut->rob_idx = 7;
    dut->iss_valid = 1;
    dut->uop_br_mask = 1;
    dut->br_mispredict = 1;
    dut->mispredict_mask = 1;
    dut->eval();
    expect_eq("mispredict suppresses issue-time CSR request",
              dut->csr_req_valid, 0);
    eval_cycle(dut);
    clear_inputs(dut);
    dut->eval();
    expect_eq("rejected CSR has no response", dut->res_valid, 0);
    expect_eq("UNQ remains ready after rejected CSR", dut->iss_ready, 1);

    // A completing wrong-path operation must be suppressed in the same cycle.
    dut->op_class = OP_MUL;
    dut->fcn_op = MULDIV_MUL_W;
    dut->rob_idx = 8;
    dut->src1_data = 11;
    dut->src2_data = 13;
    dut->uop_br_mask = 1;
    dut->iss_valid = 1;
    eval_cycle(dut);
    dut->iss_valid = 0;
    wait_for_result(dut, 5);
    dut->br_mispredict = 1;
    dut->mispredict_mask = 1;
    dut->eval();
    expect_eq("mispredict suppresses completing multiply",
              dut->res_valid, 0);
    eval_cycle(dut);
    clear_inputs(dut);

    // Clearing a resolved tag on acceptance protects against later tag reuse.
    dut->op_class = OP_MUL;
    dut->fcn_op = MULDIV_MUL_W;
    dut->rob_idx = 9;
    dut->src1_data = 7;
    dut->src2_data = 9;
    dut->uop_br_mask = 1;
    dut->resolve_mask = 1;
    dut->iss_valid = 1;
    eval_cycle(dut);
    dut->iss_valid = 0;
    dut->resolve_mask = 0;
    eval_cycle(dut);
    dut->br_mispredict = 1;
    dut->mispredict_mask = 1;
    eval_cycle(dut);
    dut->br_mispredict = 0;
    dut->mispredict_mask = 0;
    wait_for_result(dut, 5);
    expect_eq("resolved-tag multiply still completes", dut->res_valid, 1);
    expect_eq("resolved-tag multiply data", dut->res_data, 63);
    expect_eq("resolved-tag multiply identity", dut->res_rob_idx, 9);
    finish_result(dut);

    pass("unq");
    delete dut;
    return 0;
}
