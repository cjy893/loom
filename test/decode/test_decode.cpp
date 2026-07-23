#include "Vdecode_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"
#include <cstdint>

static unsigned failures = 0;

static void check_eq(const char* name, unsigned long long actual,
                     unsigned long long expected) {
    if (actual != expected) {
        std::fprintf(stderr, "FAIL: %s: got %llu, expected %llu\n",
                     name, actual, expected);
        ++failures;
    }
}

#define expect_eq check_eq

enum {
    IQ_MEM = 1, IQ_UNQ = 2, IQ_ALU = 4,
    FC_ALU = 0, FC_AGEN = 1, FC_DGEN = 2, FC_CSR = 5,
    OP1_RS1 = 0, OP1_ZERO = 1,
    OP2_RS2 = 0, OP2_IMM = 1,
    RT_FIX = 0, RT_X = 2,
    IS_I = 0, IS_B = 2, IS_U = 3, IS_J = 4, IS_N = 6, IS_F3 = 7,
    B_EQ = 2, B_J = 7,
    ALU_ADD = 0, ALU_OR = 5,
};

static void decode(Vdecode_test_top* dut, uint32_t inst) {
    dut->inst = inst;
    dut->status_prv = 0;
    dut->eval();
}

static void expect_fu(const char* name, Vdecode_test_top* dut, unsigned bit) {
    expect_true(name, (dut->fu_code & (1U << bit)) != 0);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vdecode_test_top;

    // 1c000000: addi.w $r12,$r0,-1
    decode(dut, 0x02bffc0c);
    expect_eq("addi queue", dut->iq_type, IQ_ALU);
    expect_fu("addi ALU", dut, FC_ALU);
    expect_eq("addi source", dut->lrs1, 0);
    expect_eq("addi destination", dut->ldst, 12);
    expect_eq("addi op1", dut->op1_sel, OP1_RS1);
    expect_eq("addi op2", dut->op2_sel, OP2_IMM);
    expect_eq("addi operation", dut->fcn_op, ALU_ADD);
    expect_eq("addi immediate kind", dut->imm_sel, IS_I);
    expect_eq("addi sign-extended packed immediate", dut->imm_packed, 0x03ffffff);
    expect_eq("addi no exception", dut->exception, 0);

    // 1c000018: add.w $r15,$r17,$r18
    decode(dut, 0x00104a2f);
    expect_eq("add queue", dut->iq_type, IQ_ALU);
    expect_eq("add source 1", dut->lrs1, 17);
    expect_eq("add source 2", dut->lrs2, 18);
    expect_eq("add destination", dut->ldst, 15);
    expect_eq("add operand 2", dut->op2_sel, OP2_RS2);
    expect_eq("add immediate kind", dut->imm_sel, IS_N);
    expect_eq("add operation", dut->fcn_op, ALU_ADD);

    // 1c008008: ori $r12,$r0,0x1
    decode(dut, 0x0380040c);
    expect_eq("ori queue", dut->iq_type, IQ_ALU);
    expect_eq("ori destination", dut->ldst, 12);
    expect_eq("ori operation", dut->fcn_op, ALU_OR);
    expect_eq("ori immediate", dut->imm_packed, 1);

    // 1c00000c: lu12i.w $r12,0x80000
    decode(dut, 0x1500000c);
    expect_eq("lu12i queue", dut->iq_type, IQ_ALU);
    expect_eq("lu12i op1", dut->op1_sel, OP1_ZERO);
    expect_eq("lu12i op2", dut->op2_sel, OP2_IMM);
    expect_eq("lu12i destination", dut->ldst, 12);
    expect_eq("lu12i immediate kind", dut->imm_sel, IS_U);
    expect_eq("lu12i immediate", dut->imm_packed, 0x80000);

    // 1c00001c: ld.w $r16,$r12,0
    decode(dut, 0x28800190);
    expect_eq("load queue", dut->iq_type, IQ_MEM);
    expect_fu("load AGEN", dut, FC_AGEN);
    expect_eq("load base", dut->lrs1, 12);
    expect_eq("load destination", dut->ldst, 16);
    expect_eq("load uses LDQ", dut->uses_ldq, 1);
    expect_eq("load does not use STQ", dut->uses_stq, 0);
    expect_eq("load size word", dut->mem_size, 2);
    expect_eq("load is signed", dut->mem_signed, 1);

    // 1c00020c: st.w $r0,$r14,0
    decode(dut, 0x298001c0);
    expect_eq("store queue", dut->iq_type, IQ_MEM);
    expect_fu("store AGEN", dut, FC_AGEN);
    expect_fu("store DGEN", dut, FC_DGEN);
    expect_eq("store base", dut->lrs1, 14);
    expect_eq("store data source", dut->lrs2, 0);
    expect_eq("store has no destination", dut->ldst, 0);
    expect_eq("store destination type", dut->dst_rtype, RT_X);
    expect_eq("store uses STQ", dut->uses_stq, 1);
    expect_eq("store command", dut->mem_cmd, 1);

    // 1c000008: b 0xfff8
    decode(dut, 0x50fff800);
    expect_eq("b queue", dut->iq_type, IQ_ALU);
    expect_eq("b allocates branch tag", dut->allocate_brtag, 1);
    expect_eq("b is jump", dut->is_jal, 1);
    expect_eq("b branch type", dut->br_type, B_J);
    expect_eq("b destination r0", dut->ldst, 0);
    expect_eq("b immediate kind", dut->imm_sel, IS_J);
    expect_eq("b encoded offset", dut->imm_packed, 0x3ffe);

    // 1c00800c: beq $r13,$r12,0x78
    decode(dut, 0x580079ac);
    expect_eq("beq queue", dut->iq_type, IQ_ALU);
    expect_eq("beq source 1", dut->lrs1, 13);
    expect_eq("beq source 2", dut->lrs2, 12);
    expect_eq("beq is conditional branch", dut->is_br, 1);
    expect_eq("beq type", dut->br_type, B_EQ);
    expect_eq("beq immediate kind", dut->imm_sel, IS_B);
    expect_eq("beq encoded offset", dut->imm_packed, 0x1e);

    // 1c008088: csrrd $r12,0x6
    decode(dut, 0x0400180c);
    expect_eq("csrrd queue", dut->iq_type, IQ_UNQ);
    expect_fu("csrrd CSR FU", dut, FC_CSR);
    expect_eq("csrrd destination", dut->ldst, 12);
    expect_eq("csrrd command", dut->csr_cmd, 0);
    expect_eq("csrrd address kind", dut->imm_sel, IS_F3);
    expect_eq("csrrd address", dut->imm_packed, 6);
    expect_eq("csrrd serializes", dut->flush_on_commit, 1);

    // 1c000230: syscall 0x11. LA32 syscall has exception cause 11.
    decode(dut, 0x002b0011);
    expect_eq("syscall exception", dut->exception, 1);
    expect_eq("syscall is unique", dut->is_unique, 1);
    expect_eq("syscall serializes", dut->flush_on_commit, 1);
    expect_eq("syscall cause", dut->exc_cause, 11);

    decode(dut, 0xffffffff);
    expect_eq("illegal instruction exception", dut->exception, 1);
    expect_eq("illegal instruction cause", dut->exc_cause, 2);

    if (failures != 0) {
        std::fprintf(stderr, "FAIL: decode: %u checks failed\n", failures);
        delete dut;
        return 1;
    }

    pass("decode");
    delete dut;
    return 0;
}
