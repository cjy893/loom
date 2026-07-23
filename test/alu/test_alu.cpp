#include "Valu_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"
#include <cstdint>

enum {
    ALU_ADD = 0, ALU_SUB = 1, ALU_SLT = 2, ALU_SLTU = 3,
    ALU_AND = 4, ALU_OR = 5, ALU_XOR = 6, ALU_NOR = 7,
    ALU_SLL = 8, ALU_SRL = 9, ALU_SRA = 10, ALU_LUI = 11
};
enum { OP1_RS1 = 0, OP1_ZERO = 1 };
enum { OP2_RS2 = 0, OP2_IMM = 1 };
enum { B_EQ = 2, B_LT = 5 };

static void clear_inputs(Valu_test_top* dut) {
    dut->valid = 0;
    dut->op = ALU_ADD;
    dut->op1_sel = OP1_RS1;
    dut->op2_sel = OP2_RS2;
    dut->rs1 = dut->rs2 = dut->imm = 0;
    dut->rob_idx = 0;
    dut->is_br = 0;
    dut->br_type = 0;
    dut->predicted_taken = 0;
    dut->kill = 0;
}

static uint32_t execute(Valu_test_top* dut, unsigned op, uint32_t rs1,
                        uint32_t rs2, unsigned op1 = OP1_RS1,
                        unsigned op2 = OP2_RS2, uint32_t imm = 0,
                        unsigned rob_idx = 3) {
    dut->valid = 1;
    dut->op = op;
    dut->op1_sel = op1;
    dut->op2_sel = op2;
    dut->rs1 = rs1;
    dut->rs2 = rs2;
    dut->imm = imm;
    dut->rob_idx = rob_idx;
    eval_cycle(dut);
    expect_eq("ALU early wakeup", dut->wakeup_valid, 1);
    dut->valid = 0;
    eval_cycle(dut);
    expect_eq("ALU result valid", dut->result_valid, 1);
    expect_eq("ALU preserves ROB identity", dut->result_rob_idx, rob_idx);
    uint32_t result = dut->result;
    eval_cycle(dut);
    expect_eq("ALU result is one cycle pulse", dut->result_valid, 0);
    return result;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Valu_test_top;
    clear_inputs(dut);
    reset_dut(dut);

    expect_eq("add", execute(dut, ALU_ADD, 7, 9), 16);
    expect_eq("sub", execute(dut, ALU_SUB, 7, 9), uint32_t(-2));
    expect_eq("signed less-than", execute(dut, ALU_SLT, uint32_t(-1), 1), 1);
    expect_eq("unsigned less-than", execute(dut, ALU_SLTU, uint32_t(-1), 1), 0);
    expect_eq("and", execute(dut, ALU_AND, 0xf0, 0x5a), 0x50);
    expect_eq("or", execute(dut, ALU_OR, 0xf0, 0x5a), 0xfa);
    expect_eq("xor", execute(dut, ALU_XOR, 0xf0, 0x5a), 0xaa);
    expect_eq("nor", execute(dut, ALU_NOR, 0xf0, 0x5a), uint32_t(~0xfaU));
    expect_eq("shift left", execute(dut, ALU_SLL, 4, 3), 48);
    expect_eq("shift right", execute(dut, ALU_SRL, 4, 0x80), 8);
    expect_eq("arithmetic shift", execute(dut, ALU_SRA, 4, 0x80000000), 0xf8000000);
    expect_eq("immediate add",
              execute(dut, ALU_ADD, 10, 0, OP1_RS1, OP2_IMM, 5), 15);
    expect_eq("lui", execute(dut, ALU_LUI, 0, 0, OP1_ZERO, OP2_IMM, 0x12345000),
              0x12345000);

    // Equal while predicted not-taken must resolve as a misprediction.
    dut->valid = 1;
    dut->op = ALU_ADD;
    dut->rs1 = 5;
    dut->rs2 = 5;
    dut->is_br = 1;
    dut->br_type = B_EQ;
    dut->predicted_taken = 0;
    eval_cycle(dut);
    dut->valid = 0;
    eval_cycle(dut);
    expect_eq("branch response valid", dut->brinfo_valid, 1);
    expect_eq("branch taken", dut->branch_taken, 1);
    expect_eq("branch mispredict", dut->mispredict, 1);

    pass("alu");
    delete dut;
    return 0;
}
