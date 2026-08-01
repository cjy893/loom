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
    FC_ALU = 0, FC_AGEN = 1, FC_DGEN = 2, FC_MUL = 3, FC_DIV = 4,
    FC_CSR = 5,
    OP1_SRC1 = 0, OP1_ZERO = 1,
    OP2_SRC2 = 0, OP2_IMM = 1,
    RT_FIX = 0, RT_X = 2,
    IMM_I12 = 0, IMM_I16_S2 = 2, IMM_U20_S12 = 3, IMM_I26_S2 = 4, IMM_NONE = 6, IMM_U14 = 7,
    BR_BEQ = 2, BR_B_BL = 7,
    ALU_ADD = 0, ALU_OR = 5,
    MULDIV_MUL_W = 0, MULDIV_MULH_W = 1, MULDIV_MULH_WU = 2,
    MULDIV_DIV_W = 3, MULDIV_DIV_WU = 4,
    MULDIV_MOD_W = 5, MULDIV_MOD_WU = 6,
    CNT_LOW = 0, CNT_HIGH = 1, CNT_ID = 2,
    TLB_CMD_NONE = 0, TLB_CMD_SEARCH = 1, TLB_CMD_READ = 2,
    TLB_CMD_WRITE = 3, TLB_CMD_FILL = 4, TLB_CMD_INV = 5,
};

static void decode_at_plv(Vdecode_test_top* dut, uint32_t inst,
                          unsigned status_prv) {
    dut->inst = inst;
    dut->pc = 0;
    dut->status_prv = status_prv;
    dut->eval();
}

static void decode(Vdecode_test_top* dut, uint32_t inst) {
    decode_at_plv(dut, inst, 0);
}

static void expect_fu(const char* name, Vdecode_test_top* dut, unsigned bit) {
    expect_true(name, (dut->fu_code & (1U << bit)) != 0);
}

static void expect_privilege_fault(Vdecode_test_top* dut, uint32_t inst,
                                   unsigned status_prv,
                                   const char* instruction_name) {
    decode_at_plv(dut, inst, status_prv);

    const bool is_clean_ipe =
        dut->exception == 1 &&
        dut->exc_cause == 14 &&
        dut->iq_type == 0 &&
        dut->fu_code == 0 &&
        dut->ldst == 0 &&
        dut->lsrc1 == 0 &&
        dut->lsrc2 == 0 &&
        dut->dst_rtype == RT_X &&
        dut->lsrc1_rtype == RT_X &&
        dut->lsrc2_rtype == RT_X &&
        dut->tlb_cmd == TLB_CMD_NONE &&
        dut->is_unique == 0 &&
        dut->flush_on_commit == 0;

    if (!is_clean_ipe) {
        std::fprintf(
            stderr,
            "FAIL: %s in PLV%u: exception=%u cause=%u iq=%u fu=0x%x "
            "ldst=%u lsrc1=%u/%u lsrc2=%u/%u dst_rtype=%u "
            "tlb_cmd=%u unique=%u flush=%u\n",
            instruction_name,
            status_prv,
            dut->exception,
            dut->exc_cause,
            dut->iq_type,
            dut->fu_code,
            dut->ldst,
            dut->lsrc1,
            dut->lsrc1_rtype,
            dut->lsrc2,
            dut->lsrc2_rtype,
            dut->dst_rtype,
            dut->tlb_cmd,
            dut->is_unique,
            dut->flush_on_commit);
        ++failures;
    }
}

static void expect_tlb_decode(Vdecode_test_top* dut, uint32_t inst,
                              unsigned expected_cmd,
                              unsigned expected_src1,
                              unsigned expected_src2,
                              bool has_register_sources,
                              const char* instruction_name) {
    decode(dut, inst);

    const unsigned expected_source_type = has_register_sources ? RT_FIX : RT_X;
    const bool is_clean_tlb_uop =
        dut->exception == 0 &&
        dut->iq_type == IQ_UNQ &&
        dut->fu_code == 0 &&
        dut->tlb_cmd == expected_cmd &&
        dut->ldst == 0 &&
        dut->dst_rtype == RT_X &&
        dut->lsrc1 == expected_src1 &&
        dut->lsrc2 == expected_src2 &&
        dut->lsrc1_rtype == expected_source_type &&
        dut->lsrc2_rtype == expected_source_type &&
        dut->is_unique == 1 &&
        dut->flush_on_commit == 1;

    if (!is_clean_tlb_uop) {
        std::fprintf(
            stderr,
            "FAIL: %s decode: exception=%u cause=%u iq=%u fu=0x%x "
            "tlb_cmd=%u ldst=%u/%u lsrc1=%u/%u lsrc2=%u/%u "
            "unique=%u flush=%u\n",
            instruction_name,
            dut->exception,
            dut->exc_cause,
            dut->iq_type,
            dut->fu_code,
            dut->tlb_cmd,
            dut->ldst,
            dut->dst_rtype,
            dut->lsrc1,
            dut->lsrc1_rtype,
            dut->lsrc2,
            dut->lsrc2_rtype,
            dut->is_unique,
            dut->flush_on_commit);
        ++failures;
    }
}

static void expect_illegal_invtlb(Vdecode_test_top* dut, uint32_t inst,
                                  unsigned op) {
    decode(dut, inst);

    const bool is_clean_ine =
        dut->exception == 1 &&
        dut->exc_cause == 13 &&
        dut->iq_type == 0 &&
        dut->fu_code == 0 &&
        dut->tlb_cmd == TLB_CMD_NONE &&
        dut->ldst == 0 &&
        dut->lsrc1 == 0 &&
        dut->lsrc2 == 0 &&
        dut->dst_rtype == RT_X &&
        dut->lsrc1_rtype == RT_X &&
        dut->lsrc2_rtype == RT_X &&
        dut->is_unique == 0 &&
        dut->flush_on_commit == 0;

    if (!is_clean_ine) {
        std::fprintf(
            stderr,
            "FAIL: INVTLB op %u was not a clean INE: exception=%u cause=%u "
            "iq=%u fu=0x%x tlb_cmd=%u lsrc1=%u/%u lsrc2=%u/%u "
            "unique=%u flush=%u\n",
            op,
            dut->exception,
            dut->exc_cause,
            dut->iq_type,
            dut->fu_code,
            dut->tlb_cmd,
            dut->lsrc1,
            dut->lsrc1_rtype,
            dut->lsrc2,
            dut->lsrc2_rtype,
            dut->is_unique,
            dut->flush_on_commit);
        ++failures;
    }
}

static void expect_muldiv_decode(Vdecode_test_top* dut, uint32_t inst,
                                 unsigned fu, unsigned fcn,
                                 const char* fcn_name) {
    decode(dut, inst);
    expect_eq("mul/div queue", dut->iq_type, IQ_UNQ);
    expect_fu("mul/div functional unit", dut, fu);
    expect_eq("mul/div source 1", dut->lsrc1, 12);
    expect_eq("mul/div source 2", dut->lsrc2, 13);
    expect_eq("mul/div destination", dut->ldst, 15);
    expect_eq(fcn_name, dut->fcn_op, fcn);
    expect_eq("mul/div no exception", dut->exception, 0);
}

constexpr uint32_t cacop(unsigned code, unsigned rj, unsigned imm12) {
    return 0x0600'0000U | ((imm12 & 0xfffU) << 10) |
           ((rj & 0x1fU) << 5) | (code & 0x1fU);
}

static_assert(cacop(0x11, 12, 0x123) == 0x0604'8d91U);

static void expect_cacop_decode(Vdecode_test_top* dut, unsigned code,
                                unsigned rj, unsigned imm12,
                                unsigned status_prv) {
    decode_at_plv(dut, cacop(code, rj, imm12), status_prv);

    const unsigned packed_imm =
        (imm12 & 0x800U) != 0 ? (0x03ff'f000U | (imm12 & 0xfffU))
                              : (imm12 & 0xfffU);
    const bool clean_cacop =
        dut->exception == 0 &&
        dut->iq_type == IQ_UNQ &&
        dut->fu_code == 0 &&
        dut->ldst == 0 &&
        dut->dst_rtype == RT_X &&
        dut->lsrc1 == rj &&
        dut->lsrc1_rtype == RT_FIX &&
        dut->lsrc2 == 0 &&
        dut->lsrc2_rtype == RT_X &&
        dut->op1_sel == OP1_SRC1 &&
        dut->op2_sel == OP2_IMM &&
        dut->imm_sel == IMM_I12 &&
        dut->imm_packed == packed_imm &&
        dut->tlb_cmd == TLB_CMD_NONE &&
        dut->is_unique == 1 &&
        dut->flush_on_commit == 1;

    if (!clean_cacop) {
        std::fprintf(
            stderr,
            "FAIL: CACOP code 0x%02x in PLV%u: exception=%u cause=%u "
            "iq=%u fu=0x%x ldst=%u/%u lsrc1=%u/%u lsrc2=%u/%u "
            "op1=%u op2=%u imm_sel=%u imm=0x%x tlb=%u unique=%u "
            "flush=%u\n",
            code, status_prv, dut->exception, dut->exc_cause,
            dut->iq_type, dut->fu_code, dut->ldst, dut->dst_rtype,
            dut->lsrc1, dut->lsrc1_rtype, dut->lsrc2,
            dut->lsrc2_rtype, dut->op1_sel, dut->op2_sel,
            dut->imm_sel, dut->imm_packed, dut->tlb_cmd,
            dut->is_unique, dut->flush_on_commit);
        ++failures;
    }
}

static void expect_cacop_nop(Vdecode_test_top* dut, unsigned code) {
    decode_at_plv(dut, cacop(code, 19, 0xa55), 3);

    const bool clean_nop =
        dut->exception == 0 &&
        dut->iq_type == IQ_ALU &&
        dut->fu_code == (1U << FC_ALU) &&
        dut->ldst == 0 &&
        dut->dst_rtype == RT_X &&
        dut->lsrc1 == 0 &&
        dut->lsrc1_rtype == RT_X &&
        dut->lsrc2 == 0 &&
        dut->lsrc2_rtype == RT_X &&
        dut->uses_ldq == 0 &&
        dut->uses_stq == 0 &&
        dut->tlb_cmd == TLB_CMD_NONE &&
        dut->is_unique == 0 &&
        dut->flush_on_commit == 0;

    if (!clean_nop) {
        std::fprintf(
            stderr,
            "FAIL: unsupported CACOP code 0x%02x was not a clean NOP: "
            "exception=%u cause=%u iq=%u fu=0x%x ldst=%u/%u "
            "lsrc1=%u/%u lsrc2=%u/%u ldq=%u stq=%u tlb=%u "
            "unique=%u flush=%u\n",
            code, dut->exception, dut->exc_cause, dut->iq_type,
            dut->fu_code, dut->ldst, dut->dst_rtype, dut->lsrc1,
            dut->lsrc1_rtype, dut->lsrc2, dut->lsrc2_rtype,
            dut->uses_ldq, dut->uses_stq, dut->tlb_cmd,
            dut->is_unique, dut->flush_on_commit);
        ++failures;
    }
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vdecode_test_top;

    // 1c000000: addi.w $r12,$r0,-1
    decode(dut, 0x02bffc0c);
    expect_eq("addi queue", dut->iq_type, IQ_ALU);
    expect_fu("addi ALU", dut, FC_ALU);
    expect_eq("addi source", dut->lsrc1, 0);
    expect_eq("addi destination", dut->ldst, 12);
    expect_eq("addi op1", dut->op1_sel, OP1_SRC1);
    expect_eq("addi op2", dut->op2_sel, OP2_IMM);
    expect_eq("addi operation", dut->fcn_op, ALU_ADD);
    expect_eq("addi immediate kind", dut->imm_sel, IMM_I12);
    expect_eq("addi sign-extended packed immediate", dut->imm_packed, 0x03ffffff);
    expect_eq("addi no exception", dut->exception, 0);

    // 1c000018: add.w $r15,$r17,$r18
    decode(dut, 0x00104a2f);
    expect_eq("add queue", dut->iq_type, IQ_ALU);
    expect_eq("add source 1", dut->lsrc1, 17);
    expect_eq("add source 2", dut->lsrc2, 18);
    expect_eq("add destination", dut->ldst, 15);
    expect_eq("add operand 2", dut->op2_sel, OP2_SRC2);
    expect_eq("add immediate kind", dut->imm_sel, IMM_NONE);
    expect_eq("add operation", dut->fcn_op, ALU_ADD);

    // Real encodings from nscscc_func/obj/test.s.
    expect_muldiv_decode(dut, 0x001c358f, FC_MUL, MULDIV_MUL_W,
                         "mul.w operation");
    expect_muldiv_decode(dut, 0x001cb58f, FC_MUL, MULDIV_MULH_W,
                         "mulh.w operation");
    expect_muldiv_decode(dut, 0x001d358f, FC_MUL, MULDIV_MULH_WU,
                         "mulh.wu operation");
    expect_muldiv_decode(dut, 0x0020358f, FC_DIV, MULDIV_DIV_W,
                         "div.w operation");
    expect_muldiv_decode(dut, 0x0021358f, FC_DIV, MULDIV_DIV_WU,
                         "div.wu operation");
    expect_muldiv_decode(dut, 0x0020b58f, FC_DIV, MULDIV_MOD_W,
                         "mod.w operation");
    expect_muldiv_decode(dut, 0x0021b58f, FC_DIV, MULDIV_MOD_WU,
                         "mod.wu operation");

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
    expect_eq("lu12i immediate kind", dut->imm_sel, IMM_U20_S12);
    expect_eq("lu12i immediate", dut->imm_packed, 0x80000);

    // 1c00001c: ld.w $r16,$r12,0
    decode(dut, 0x28800190);
    expect_eq("load queue", dut->iq_type, IQ_MEM);
    expect_fu("load AGEN", dut, FC_AGEN);
    expect_eq("load base", dut->lsrc1, 12);
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
    expect_eq("store base", dut->lsrc1, 14);
    expect_eq("store data source", dut->lsrc2, 0);
    expect_eq("store has no destination", dut->ldst, 0);
    expect_eq("store destination type", dut->dst_rtype, RT_X);
    expect_eq("store uses STQ", dut->uses_stq, 1);
    expect_eq("store command", dut->mem_cmd, 1);

    // 1c000008: b 0xfff8
    decode(dut, 0x50fff800);
    expect_eq("b queue", dut->iq_type, IQ_ALU);
    expect_eq("b allocates branch tag", dut->allocate_brtag, 1);
    expect_eq("b is jump", dut->is_b_bl, 1);
    expect_eq("b branch type", dut->br_type, BR_B_BL);
    expect_eq("b destination r0", dut->ldst, 0);
    expect_eq("b immediate kind", dut->imm_sel, IMM_I26_S2);
    expect_eq("b encoded offset", dut->imm_packed, 0x3ffe);

    // 1c00800c: beq $r13,$r12,0x78
    decode(dut, 0x580079ac);
    expect_eq("beq queue", dut->iq_type, IQ_ALU);
    expect_eq("beq source 1", dut->lsrc1, 13);
    expect_eq("beq source 2", dut->lsrc2, 12);
    expect_eq("beq is conditional branch", dut->is_br, 1);
    expect_eq("beq type", dut->br_type, BR_BEQ);
    expect_eq("beq immediate kind", dut->imm_sel, IMM_I16_S2);
    expect_eq("beq encoded offset", dut->imm_packed, 0x1e);

    // 1c008088: csrrd $r12,0x6
    decode(dut, 0x0400180c);
    expect_eq("csrrd queue", dut->iq_type, IQ_UNQ);
    expect_fu("csrrd CSR FU", dut, FC_CSR);
    expect_eq("csrrd destination", dut->ldst, 12);
    expect_eq("csrrd command", dut->csr_cmd, 0);
    expect_eq("csrrd address kind", dut->imm_sel, IMM_U14);
    expect_eq("csrrd address", dut->imm_packed, 6);
    expect_eq("csrrd serializes", dut->flush_on_commit, 1);

    // Real CSRWR/CSRXCHG encodings from nscscc_func/obj/test.s.
    decode(dut, 0x0401102d);
    expect_eq("csrwr queue", dut->iq_type, IQ_UNQ);
    expect_fu("csrwr CSR FU", dut, FC_CSR);
    expect_eq("csrwr source", dut->lsrc1, 13);
    expect_eq("csrwr destination", dut->ldst, 13);
    expect_eq("csrwr command", dut->csr_cmd, 1);
    expect_eq("csrwr address", dut->imm_packed, 0x44);
    expect_eq("csrwr no exception in PLV0", dut->exception, 0);

    decode(dut, 0x0400158d);
    expect_eq("csrxchg queue", dut->iq_type, IQ_UNQ);
    expect_fu("csrxchg CSR FU", dut, FC_CSR);
    expect_eq("csrxchg value source", dut->lsrc1, 13);
    expect_eq("csrxchg mask source", dut->lsrc2, 12);
    expect_eq("csrxchg destination", dut->ldst, 13);
    expect_eq("csrxchg command", dut->csr_cmd, 2);
    expect_eq("csrxchg address", dut->imm_packed, 5);
    expect_eq("csrxchg no exception in PLV0", dut->exception, 0);

    // Every CSR instruction is privileged. A faulting CSR uop must enter only
    // the precise exception path and must not retain issue/serialization state.
    expect_privilege_fault(dut, 0x0400180c, 3, "csrrd");
    expect_privilege_fault(dut, 0x0401102d, 3, "csrwr");
    expect_privilege_fault(dut, 0x0400158d, 3, "csrxchg");

    // TLB management operations use the serialized UNQ path but are distinct
    // from CSR execution. Only INVTLB reads GPR operands: rj supplies ASID and
    // rk supplies the virtual address.
    expect_tlb_decode(dut, 0x06482800, TLB_CMD_SEARCH, 0, 0, false,
                      "TLBSRCH");
    expect_tlb_decode(dut, 0x06482c00, TLB_CMD_READ, 0, 0, false,
                      "TLBRD");
    expect_tlb_decode(dut, 0x06483000, TLB_CMD_WRITE, 0, 0, false,
                      "TLBWR");
    expect_tlb_decode(dut, 0x06483400, TLB_CMD_FILL, 0, 0, false,
                      "TLBFILL");

    constexpr uint32_t invtlb_base =
        0x06498000U | (13U << 10) | (12U << 5);
    for (unsigned op = 0; op <= 6; ++op) {
        char instruction_name[32];
        std::snprintf(instruction_name, sizeof(instruction_name),
                      "INVTLB op %u", op);
        expect_tlb_decode(dut, invtlb_base | op, TLB_CMD_INV, 12, 13, true,
                          instruction_name);
    }

    expect_illegal_invtlb(dut, invtlb_base | 7U, 7);
    expect_illegal_invtlb(dut, invtlb_base | 31U, 31);

    // Every legal TLB management operation is privileged. Exercise every
    // implemented branch and all nonzero LA32 privilege levels.
    constexpr uint32_t privileged_tlb_insts[] = {
        0x06482800U,
        0x06482c00U,
        0x06483000U,
        0x06483400U,
        invtlb_base | 6U,
    };
    constexpr const char* privileged_tlb_names[] = {
        "TLBSRCH",
        "TLBRD",
        "TLBWR",
        "TLBFILL",
        "INVTLB",
    };
    for (unsigned i = 0;
         i < sizeof(privileged_tlb_insts) / sizeof(privileged_tlb_insts[0]);
         ++i) {
        for (unsigned plv = 1; plv <= 3; ++plv) {
            expect_privilege_fault(dut, privileged_tlb_insts[i], plv,
                                   privileged_tlb_names[i]);
        }
    }

    // An undefined INVTLB op is an illegal instruction even outside PLV0;
    // it must not be reclassified as a legal privileged operation.
    decode_at_plv(dut, invtlb_base | 7U, 3);
    expect_eq("illegal INVTLB in PLV3 raises exception", dut->exception, 1);
    expect_eq("illegal INVTLB in PLV3 remains INE", dut->exc_cause, 13);
    expect_eq("illegal INVTLB in PLV3 has no command",
              dut->tlb_cmd, TLB_CMD_NONE);

    // CACOP code[2:0] selects I-Cache (0) or D-Cache (1), while code[4:3]
    // selects direct-index mode 0/1 or translated hit mode 2. It reads rj and
    // carries si12 so the serialized execution path can form rj + si12.
    constexpr unsigned legal_cacop_codes[] = {
        0x00, 0x01, 0x08, 0x09, 0x10, 0x11,
    };
    for (unsigned code : legal_cacop_codes)
        expect_cacop_decode(dut, code, 12, 0x123, 0);
    expect_cacop_decode(dut, 0x10, 7, 0xffc, 3);
    expect_cacop_decode(dut, 0x11, 8, 0x800, 3);

    // Direct-index modes are privileged. Hit operations (mode 2) are legal
    // at user privilege and rely on normal address translation permissions.
    constexpr unsigned privileged_cacop_codes[] = {
        0x00, 0x01, 0x08, 0x09,
    };
    for (unsigned code : privileged_cacop_codes) {
        for (unsigned plv = 1; plv <= 3; ++plv) {
            char instruction_name[32];
            std::snprintf(instruction_name, sizeof(instruction_name),
                          "CACOP code 0x%02x", code);
            expect_privilege_fault(dut, cacop(code, 12, 0x123), plv,
                                   instruction_name);
        }
    }

    // The chosen LA32 reference treats unsupported cache selectors and mode
    // 3 as NOPs. Cover all 26 unsupported values instead of sampling one.
    unsigned unsupported_cacop_count = 0;
    for (unsigned code = 0; code < 32; ++code) {
        const bool supported =
            (code >> 3) != 3 && ((code & 7U) == 0 || (code & 7U) == 1);
        if (!supported) {
            expect_cacop_nop(dut, code);
            ++unsupported_cacop_count;
        }
    }
    expect_eq("all unsupported CACOP encodings covered",
              unsupported_cacop_count, 26);

    // ERTN is a serialized UNQ operation in PLV0. Its redirect is performed
    // only when the uop commits from the ROB.
    decode(dut, 0x06483800);
    expect_eq("ERTN queue", dut->iq_type, IQ_UNQ);
    expect_eq("ERTN marker", dut->is_ertn, 1);
    expect_eq("ERTN is unique", dut->is_unique, 1);
    expect_eq("ERTN serializes", dut->flush_on_commit, 1);
    expect_eq("ERTN has no functional-unit request", dut->fu_code, 0);
    expect_eq("ERTN is not a JIRL", dut->is_jirl, 0);
    expect_eq("ERTN has no exception in PLV0", dut->exception, 0);

    dut->status_prv = 3;
    dut->eval();
    expect_eq("ERTN raises IPE outside PLV0", dut->exception, 1);
    expect_eq("ERTN privilege exception cause", dut->exc_cause, 14);
    expect_eq("faulting ERTN is not issued", dut->iq_type, 0);
    expect_eq("faulting ERTN has no marker", dut->is_ertn, 0);

    // Real RDCNT encodings from nscscc_func/obj/test.s.
    decode(dut, 0x0000600d);
    expect_eq("rdcntvl queue", dut->iq_type, IQ_UNQ);
    expect_eq("rdcntvl marker", dut->is_rdcnt, 1);
    expect_eq("rdcntvl destination", dut->ldst, 13);
    expect_eq("rdcntvl operation", dut->fcn_op, CNT_LOW);
    expect_eq("rdcntvl no exception", dut->exception, 0);

    decode(dut, 0x0000640e);
    expect_eq("rdcntvh marker", dut->is_rdcnt, 1);
    expect_eq("rdcntvh destination", dut->ldst, 14);
    expect_eq("rdcntvh operation", dut->fcn_op, CNT_HIGH);
    expect_eq("rdcntvh no exception", dut->exception, 0);

    decode(dut, 0x00006180);
    expect_eq("rdcntid marker", dut->is_rdcnt, 1);
    expect_eq("rdcntid writes rj", dut->ldst, 12);
    expect_eq("rdcntid operation", dut->fcn_op, CNT_ID);
    expect_eq("rdcntid no exception", dut->exception, 0);

    // inst[10]=1 selects RDCNTVH and requires rj=0.
    decode(dut, 0x00006420);
    expect_eq("rdcntvh with nonzero rj is illegal",
              dut->exception, 1);
    expect_eq("illegal rdcntvh cause", dut->exc_cause, 13);

    // 1c000230: syscall 0x11. LA32 syscall has exception cause 11.
    decode(dut, 0x002b0011);
    expect_eq("syscall exception", dut->exception, 1);
    expect_eq("syscall is unique", dut->is_unique, 1);
    expect_eq("syscall serializes", dut->flush_on_commit, 1);
    expect_eq("syscall cause", dut->exc_cause, 11);

    decode(dut, 0xffffffff);
    expect_eq("illegal instruction exception", dut->exception, 1);
    expect_eq("illegal instruction cause", dut->exc_cause, 13);

    // ADEF has priority over the instruction's decoded semantics.
    dut->inst = 0x0400180c;
    dut->pc = 0x227f9789U;
    dut->status_prv = 0;
    dut->eval();
    expect_eq("misaligned fetch raises exception", dut->exception, 1);
    expect_eq("misaligned fetch ADEF cause", dut->exc_cause, 8);
    expect_eq("misaligned fetch marker", dut->exc_adef, 1);
    expect_eq("ADEF has no issue queue", dut->iq_type, 0);
    expect_eq("ADEF has no functional unit", dut->fu_code, 0);
    expect_eq("ADEF has no destination", dut->ldst, 0);
    expect_eq("ADEF is not serialized CSR", dut->flush_on_commit, 0);

    if (failures != 0) {
        std::fprintf(stderr, "FAIL: decode: %u checks failed\n", failures);
        delete dut;
        return 1;
    }

    pass("decode");
    delete dut;
    return 0;
}
