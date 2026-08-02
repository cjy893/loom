#include "Vcsr_file_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"
#include <cstdint>

namespace {

enum : uint32_t {
    CSR_CRMD      = 0x000,
    CSR_PRMD      = 0x001,
    CSR_EUEN      = 0x002,
    CSR_ECFG      = 0x004,
    CSR_ESTAT     = 0x005,
    CSR_ERA       = 0x006,
    CSR_BADV      = 0x007,
    CSR_BADI      = 0x008,
    CSR_EENTRY    = 0x00c,
    CSR_TLBIDX    = 0x010,
    CSR_TLBEHI    = 0x011,
    CSR_TLBELO0   = 0x012,
    CSR_TLBELO1   = 0x013,
    CSR_ASID      = 0x018,
    CSR_CPUID     = 0x020,
    CSR_PRCFG1    = 0x021,
    CSR_PRCFG2    = 0x022,
    CSR_PRCFG3    = 0x023,
    CSR_SAVE0     = 0x030,
    CSR_TID       = 0x040,
    CSR_TCFG      = 0x041,
    CSR_TVAL      = 0x042,
    CSR_CNTC      = 0x043,
    CSR_TICLR     = 0x044,
    CSR_TLBRENTRY = 0x088,
    CSR_DMW0      = 0x180,
    CSR_DMW1      = 0x181,
    CSR_CNTLO     = 0x182,
    CSR_CNTHI     = 0x183,
};

enum : uint32_t {
    CSR_READ  = 0,
    CSR_WRITE = 1,
    CSR_XCHG  = 2,
};

constexpr uint32_t CORE_ID = 0x12345678;
constexpr uint32_t ECODE_INT = 0x00;
constexpr uint32_t ECODE_PIF = 0x03;
constexpr uint32_t ECODE_ADE = 0x08;
constexpr uint32_t ECODE_ALE = 0x09;
constexpr uint32_t ECODE_TLBR = 0x3f;

void clear_inputs(Vcsr_file_test_top* dut) {
    dut->csr_req_valid = 0;
    dut->csr_req_rob_idx = 0;
    dut->csr_req_addr = 0;
    dut->csr_cmd = CSR_READ;
    dut->csr_wdata = 0;
    dut->csr_wmask = 0;
    dut->csr_resp_ready = 0;
    dut->csr_commit_valid = 0;
    dut->csr_commit_rob_idx = 0;
    dut->csr_flush_pending = 0;
    dut->tlb_update_valid = 0;
    dut->tlb_update_mask = 0;
    dut->tlb_update_tlbidx = 0;
    dut->tlb_update_tlbehi = 0;
    dut->tlb_update_tlbelo0 = 0;
    dut->tlb_update_tlbelo1 = 0;
    dut->tlb_update_asid = 0;
    dut->xcpt_valid = 0;
    dut->xcpt_inst = 0;
    dut->xcpt_pc = 0;
    dut->xcpt_code = 0;
    dut->xcpt_esubcode = 0;
    dut->xcpt_badvaddr = 0;
    dut->ertn_valid = 0;
    dut->hw_irq = 0;
    dut->ipi_irq = 0;
}

void reset_clean(Vcsr_file_test_top* dut) {
    clear_inputs(dut);
    reset_dut(dut);
}

uint32_t issue_request(Vcsr_file_test_top* dut, uint32_t rob_idx,
                       uint32_t addr, uint32_t cmd, uint32_t wdata,
                       uint32_t wmask, bool check_hold = false) {
    dut->csr_req_rob_idx = rob_idx;
    dut->csr_req_addr = addr;
    dut->csr_cmd = cmd;
    dut->csr_wdata = wdata;
    dut->csr_wmask = wmask;
    dut->csr_req_valid = 1;
    dut->csr_resp_ready = 0;
    dut->eval();

    expect_eq("CSR request accepted only when ready",
              dut->csr_req_ready, 1);
    eval_cycle(dut);
    dut->csr_req_valid = 0;
    dut->eval();

    expect_eq("CSR response becomes valid", dut->csr_resp_valid, 1);
    expect_eq("CSR response preserves ROB identity",
              dut->csr_resp_rob_idx, rob_idx);
    expect_eq("pending transaction blocks another request",
              dut->csr_req_ready, 0);

    uint32_t old_value = dut->csr_rdata;
    if (check_hold) {
        for (int cycle = 0; cycle < 3; ++cycle) {
            eval_cycle(dut);
            expect_eq("stalled CSR response remains valid",
                      dut->csr_resp_valid, 1);
            expect_eq("stalled CSR response preserves ROB identity",
                      dut->csr_resp_rob_idx, rob_idx);
            expect_eq("stalled CSR response data remains stable",
                      dut->csr_rdata, old_value);
        }
    }
    return old_value;
}

void consume_response(Vcsr_file_test_top* dut) {
    expect_eq("response is valid before consumption",
              dut->csr_resp_valid, 1);
    dut->csr_resp_ready = 1;
    eval_cycle(dut);
    dut->csr_resp_ready = 0;
    dut->eval();
    expect_eq("response clears after handshake", dut->csr_resp_valid, 0);
    expect_eq("transaction remains pending until commit",
              dut->csr_req_ready, 0);
}

void commit_request(Vcsr_file_test_top* dut, uint32_t rob_idx) {
    dut->csr_commit_valid = 1;
    dut->csr_commit_rob_idx = rob_idx;
    eval_cycle(dut);
    dut->csr_commit_valid = 0;
    dut->eval();
    expect_eq("matching commit releases transaction",
              dut->csr_req_ready, 1);
}

uint32_t read_csr(Vcsr_file_test_top* dut, uint32_t addr,
                  uint32_t rob_idx) {
    uint32_t value = issue_request(
        dut, rob_idx, addr, CSR_READ, 0, 0);
    consume_response(dut);
    commit_request(dut, rob_idx);
    return value;
}

uint32_t write_csr(Vcsr_file_test_top* dut, uint32_t addr,
                   uint32_t value, uint32_t rob_idx,
                   uint32_t mask = 0xffffffffU,
                   uint32_t cmd = CSR_WRITE) {
    uint32_t old_value = issue_request(
        dut, rob_idx, addr, cmd, value, mask);
    consume_response(dut);
    commit_request(dut, rob_idx);
    return old_value;
}

void pulse_exception(Vcsr_file_test_top* dut, uint32_t pc,
                     uint32_t ecode, uint32_t esubcode,
                     uint32_t badvaddr, uint32_t inst = 0) {
    dut->xcpt_valid = 1;
    dut->xcpt_inst = inst;
    dut->xcpt_pc = pc;
    dut->xcpt_code = ecode;
    dut->xcpt_esubcode = esubcode;
    dut->xcpt_badvaddr = badvaddr;
    dut->eval();
    eval_cycle(dut);
    dut->xcpt_valid = 0;
    dut->xcpt_inst = 0;
    dut->eval();
}

uint32_t merge_arch(uint32_t old_value, uint32_t new_value,
                    uint32_t arch_mask) {
    return (old_value & ~arch_mask) | (new_value & arch_mask);
}

void pulse_tlb_update(Vcsr_file_test_top* dut, uint32_t update_mask,
                      uint32_t tlbidx, uint32_t tlbehi,
                      uint32_t tlbelo0, uint32_t tlbelo1,
                      uint32_t asid, bool flush = false) {
    dut->tlb_update_valid = 1;
    dut->tlb_update_mask = update_mask;
    dut->tlb_update_tlbidx = tlbidx;
    dut->tlb_update_tlbehi = tlbehi;
    dut->tlb_update_tlbelo0 = tlbelo0;
    dut->tlb_update_tlbelo1 = tlbelo1;
    dut->tlb_update_asid = asid;
    dut->csr_flush_pending = flush;
    eval_cycle(dut);
    dut->tlb_update_valid = 0;
    dut->tlb_update_mask = 0;
    dut->csr_flush_pending = 0;
    dut->eval();
}

void test_reset_and_response_protocol(Vcsr_file_test_top* dut) {
    reset_clean(dut);

    expect_eq("CRMD reset value", dut->crmd_value, 0x00000008);
    expect_eq("reset privilege level", dut->current_plv, 0);
    expect_eq("reset interrupt enable", dut->current_ie, 0);
    expect_eq("reset has no interrupt", dut->interrupt_pending, 0);
    expect_eq("reset accepts a CSR request", dut->csr_req_ready, 1);
    expect_eq("reset has no CSR response", dut->csr_resp_valid, 0);
    expect_eq("TLBIDX reset value", dut->tlbidx_value, 0x80000000);
    expect_eq("TLBEHI reset value", dut->tlbehi_value, 0);
    expect_eq("TLBELO0 reset value", dut->tlbelo0_value, 0);
    expect_eq("TLBELO1 reset value", dut->tlbelo1_value, 0);

    uint32_t crmd = issue_request(
        dut, 1, CSR_CRMD, CSR_READ, 0, 0, true);
    expect_eq("CRMD read after reset", crmd, 0x00000008);
    consume_response(dut);
    commit_request(dut, 1);

    expect_eq("TID exposes configured core ID",
              read_csr(dut, CSR_TID, 2), CORE_ID);
    expect_eq("TID direct output exposes configured core ID",
              dut->tid_value, CORE_ID);
    expect_eq("CPUID exposes the architectural low nine bits",
              read_csr(dut, CSR_CPUID, 3), CORE_ID & 0x1ff);
}

void test_commit_gating_and_flush(Vcsr_file_test_top* dut) {
    reset_clean(dut);

    write_csr(dut, CSR_EENTRY, 0x1c000000, 3);
    uint32_t old_value = issue_request(
        dut, 4, CSR_EENTRY, CSR_WRITE, 0x1c001234,
        0xffffffffU);
    expect_eq("EENTRY write returns old value",
              old_value, 0x1c000000);
    expect_eq("EENTRY unchanged before response",
              dut->eentry_value, 0x1c000000);
    consume_response(dut);
    expect_eq("EENTRY unchanged before commit",
              dut->eentry_value, 0x1c000000);

    dut->csr_commit_valid = 1;
    dut->csr_commit_rob_idx = 5;
    eval_cycle(dut);
    dut->csr_commit_valid = 0;
    dut->eval();
    expect_eq("wrong ROB commit does not update EENTRY",
              dut->eentry_value, 0x1c000000);
    expect_eq("wrong ROB commit keeps transaction pending",
              dut->csr_req_ready, 0);

    commit_request(dut, 4);
    expect_eq("matching ROB commit updates aligned EENTRY",
              dut->eentry_value, 0x1c001200);
    expect_eq("ordinary exception target follows EENTRY",
              dut->xcpt_target, 0x1c001200);
    expect_eq("EENTRY readback",
              read_csr(dut, CSR_EENTRY, 6), 0x1c001200);

    issue_request(dut, 7, CSR_EENTRY, CSR_WRITE,
                  0x1c002000, 0xffffffffU);
    consume_response(dut);
    dut->csr_flush_pending = 1;
    eval_cycle(dut);
    dut->csr_flush_pending = 0;
    dut->eval();
    expect_eq("flush releases pending transaction",
              dut->csr_req_ready, 1);
    expect_eq("flushed CSR write has no side effect",
              dut->eentry_value, 0x1c001200);
}

void test_commands_and_architectural_masks(Vcsr_file_test_top* dut) {
    reset_clean(dut);

    write_csr(dut, CSR_SAVE0, 0xa5a55a5a, 8);
    expect_eq("SAVE0 full-width write",
              read_csr(dut, CSR_SAVE0, 9), 0xa5a55a5a);

    uint32_t old_value = issue_request(
        dut, 10, CSR_SAVE0, CSR_XCHG, 0xffff0000,
        0x00ff00ff);
    expect_eq("CSRXCHG returns old value", old_value, 0xa5a55a5a);
    consume_response(dut);
    commit_request(dut, 10);
    expect_eq("CSRXCHG applies operand mask",
              read_csr(dut, CSR_SAVE0, 11), 0xa5ff5a00);

    write_csr(dut, CSR_CRMD, 0xffffffffU, 12);
    expect_eq("CRMD architectural write mask",
              dut->crmd_value, 0x000001ff);
    expect_eq("CRMD PLV output", dut->current_plv, 3);
    expect_eq("CRMD IE output", dut->current_ie, 1);

    write_csr(dut, CSR_ASID, 0xffffffffU, 13);
    expect_eq("ASID architectural mask", dut->asid_value, 0x000003ff);
    expect_eq("ASID read exposes ASIDBITS",
              read_csr(dut, CSR_ASID, 14), 0x000a03ff);

    write_csr(dut, CSR_DMW0, 0xffffffffU, 15);
    write_csr(dut, CSR_DMW1, 0xffffffffU, 16);
    expect_eq("DMW0 architectural mask", dut->dmw0_value, 0xee000039);
    expect_eq("DMW1 architectural mask", dut->dmw1_value, 0xee000039);

    expect_eq("PRCFG1 reports four SAVE registers and 32-bit timer",
              read_csr(dut, CSR_PRCFG1, 17), 0x000001f4);
    expect_eq("PRCFG2 reports no implemented page sizes yet",
              read_csr(dut, CSR_PRCFG2, 18), 0);
    expect_eq("PRCFG3 reports no implemented TLB yet",
              read_csr(dut, CSR_PRCFG3, 19), 0);

    write_csr(dut, CSR_ECFG, 0xffffffffU, 20);
    expect_eq("ECFG architectural mask",
              read_csr(dut, CSR_ECFG, 21), 0x00001bff);

    write_csr(dut, CSR_ESTAT, 0xffffffffU, 22);
    expect_eq("only ESTAT software interrupt bits are writable",
              read_csr(dut, CSR_ESTAT, 23) & 0x3, 0x3);

    write_csr(dut, CSR_EUEN, 0xffffffffU, 24);
    expect_eq("unsupported EUEN bits remain zero",
              read_csr(dut, CSR_EUEN, 25), 0);
}

void test_tlb_sideband_updates(Vcsr_file_test_top* dut) {
    constexpr uint32_t TLBIDX_MASK = 0xbf00001f;
    constexpr uint32_t TLBEHI_MASK = 0xffffe000;
    constexpr uint32_t TLBELO_MASK = 0x0fffff7f;
    constexpr uint32_t ASID_MASK = 0x000003ff;

    reset_clean(dut);

    uint32_t expected_tlbidx =
        merge_arch(0x80000000, 0x3512341b, TLBIDX_MASK);
    uint32_t expected_tlbehi =
        merge_arch(0, 0x12345678, TLBEHI_MASK);
    uint32_t expected_tlbelo0 =
        merge_arch(0, 0xfedcba98, TLBELO_MASK);
    uint32_t expected_tlbelo1 =
        merge_arch(0, 0x89abcdef, TLBELO_MASK);
    uint32_t expected_asid =
        merge_arch(0, 0xfffff5a5, ASID_MASK);

    pulse_tlb_update(
        dut, 0x1f, 0x3512341b, 0x12345678,
        0xfedcba98, 0x89abcdef, 0xfffff5a5);

    expect_eq("sideband updates TLBIDX with architectural mask",
              dut->tlbidx_value, expected_tlbidx);
    expect_eq("sideband updates TLBEHI with architectural mask",
              dut->tlbehi_value, expected_tlbehi);
    expect_eq("sideband updates TLBELO0 with architectural mask",
              dut->tlbelo0_value, expected_tlbelo0);
    expect_eq("sideband updates TLBELO1 with architectural mask",
              dut->tlbelo1_value, expected_tlbelo1);
    expect_eq("sideband updates ASID with architectural mask",
              dut->asid_value, expected_asid);

    expect_eq("sideband TLBIDX is visible through CSR read",
              read_csr(dut, CSR_TLBIDX, 43), expected_tlbidx);
    expect_eq("sideband TLBEHI is visible through CSR read",
              read_csr(dut, CSR_TLBEHI, 44), expected_tlbehi);
    expect_eq("sideband TLBELO0 is visible through CSR read",
              read_csr(dut, CSR_TLBELO0, 45), expected_tlbelo0);
    expect_eq("sideband TLBELO1 is visible through CSR read",
              read_csr(dut, CSR_TLBELO1, 46), expected_tlbelo1);
    expect_eq("sideband ASID read includes ASIDBITS",
              read_csr(dut, CSR_ASID, 47),
              0x000a0000 | expected_asid);

    const uint32_t old_tlbidx = dut->tlbidx_value;
    const uint32_t old_tlbelo0 = dut->tlbelo0_value;
    const uint32_t old_asid = dut->asid_value;
    expected_tlbehi =
        merge_arch(expected_tlbehi, 0x87654321, TLBEHI_MASK);
    expected_tlbelo1 =
        merge_arch(expected_tlbelo1, 0x76543210, TLBELO_MASK);

    pulse_tlb_update(
        dut, 0x0a, 0xffffffff, 0x87654321,
        0xffffffff, 0x76543210, 0xffffffff);

    expect_eq("selective update preserves masked-off TLBIDX",
              dut->tlbidx_value, old_tlbidx);
    expect_eq("selective update changes selected TLBEHI",
              dut->tlbehi_value, expected_tlbehi);
    expect_eq("selective update preserves masked-off TLBELO0",
              dut->tlbelo0_value, old_tlbelo0);
    expect_eq("selective update changes selected TLBELO1",
              dut->tlbelo1_value, expected_tlbelo1);
    expect_eq("selective update preserves masked-off ASID",
              dut->asid_value, old_asid);

    expected_tlbidx =
        merge_arch(expected_tlbidx, 0xa5000012, TLBIDX_MASK);

    issue_request(
        dut, 48, CSR_SAVE0, CSR_WRITE,
        0x5a5aa5a5, 0xffffffffU);
    consume_response(dut);
    expect_eq("CSR transaction is pending before update/flush",
              dut->csr_req_ready, 0);

    pulse_tlb_update(
        dut, 0x01, 0xa5000012, 0, 0, 0, 0, true);
    expect_eq("TLB update is not discarded by same-cycle flush",
              dut->tlbidx_value, expected_tlbidx);
    expect_eq("same-cycle flush still cancels pending CSR transaction",
              dut->csr_req_ready, 1);
    expect_eq("flushed CSR write has no side effect during TLB update",
              read_csr(dut, CSR_SAVE0, 49), 0);

    dut->tlb_update_valid = 1;
    dut->tlb_update_mask = 0x02;
    dut->tlb_update_tlbehi = 0xdeadbeef;
    dut->xcpt_valid = 1;
    dut->xcpt_pc = 0x1c012345;
    dut->xcpt_code = ECODE_PIF;
    eval_cycle(dut);
    dut->tlb_update_valid = 0;
    dut->tlb_update_mask = 0;
    dut->xcpt_valid = 0;
    dut->eval();
    expect_eq("PIF exception overrides same-cycle sideband TLBEHI",
              dut->tlbehi_value, 0x1c012000);
}

void test_bad_address_subcodes(Vcsr_file_test_top* dut) {
    reset_clean(dut);

    pulse_exception(dut, 0x1c010004, ECODE_ADE, 0,
                    0xdead0000, 0x0010800c);
    expect_eq("ADEF records the faulting PC in BADV",
              read_csr(dut, CSR_BADV, 26), 0x1c010004);
    expect_eq("synchronous exception records instruction in BADI",
              read_csr(dut, CSR_BADI, 27), 0x0010800c);

    pulse_exception(dut, 0x1c010008, ECODE_ADE, 1,
                    0x80000003, 0x2880018c);
    expect_eq("ADEM records the bad memory address in BADV",
              read_csr(dut, CSR_BADV, 28), 0x80000003);
    expect_eq("new synchronous exception replaces BADI",
              read_csr(dut, CSR_BADI, 29), 0x2880018c);

    pulse_exception(dut, 0x1c01000c, ECODE_INT, 0,
                    0, 0xdeadbeef);
    expect_eq("interrupt does not replace BADI",
              read_csr(dut, CSR_BADI, 30), 0x2880018c);
}

void test_precise_exception_and_ertn(Vcsr_file_test_top* dut) {
    reset_clean(dut);

    write_csr(dut, CSR_CRMD, 0x0000000f, 22);
    write_csr(dut, CSR_EENTRY, 0x1c001240, 23);
    write_csr(dut, CSR_TLBRENTRY, 0x1c0022ff, 24);

    pulse_exception(dut, 0x1c003004, ECODE_ALE, 0x12,
                    0xdeadbeec);
    expect_eq("exception switches to PLV0", dut->current_plv, 0);
    expect_eq("exception disables interrupts", dut->current_ie, 0);
    expect_eq("exception preserves CRMD non-PLV/IE fields",
              dut->crmd_value, 0x00000008);
    expect_eq("exception records ERA", dut->era_value, 0x1c003004);
    expect_eq("ERTN target follows ERA", dut->ertn_target, 0x1c003004);
    expect_eq("exception uses aligned EENTRY",
              dut->xcpt_target, 0x1c001240);
    expect_eq("exception saves prior PLV and IE",
              read_csr(dut, CSR_PRMD, 25) & 0x7, 0x7);
    expect_eq("exception records BADV",
              read_csr(dut, CSR_BADV, 26), 0xdeadbeec);

    uint32_t estat = read_csr(dut, CSR_ESTAT, 27);
    expect_eq("ESTAT records ECODE", (estat >> 16) & 0x3f,
              ECODE_ALE);
    expect_eq("ESTAT records ESUBCODE", (estat >> 22) & 0x1ff,
              0x12);

    dut->ertn_valid = 1;
    eval_cycle(dut);
    dut->ertn_valid = 0;
    dut->eval();
    expect_eq("ERTN restores privilege level", dut->current_plv, 3);
    expect_eq("ERTN restores interrupt enable", dut->current_ie, 1);
    expect_eq("ERTN restores CRMD low state",
              dut->crmd_value, 0x0000000f);

    write_csr(dut, CSR_CRMD, 0x00000017, 28);
    dut->xcpt_valid = 1;
    dut->xcpt_pc = 0x1c004000;
    dut->xcpt_code = ECODE_TLBR;
    dut->xcpt_esubcode = 0;
    dut->xcpt_badvaddr = 0x40001234;
    dut->eval();
    expect_eq("TLB refill selects TLBRENTRY",
              dut->xcpt_target, 0x1c0022c0);
    eval_cycle(dut);
    dut->xcpt_valid = 0;
    dut->eval();
    expect_eq("TLB refill enters direct-address mode",
              dut->crmd_value & 0x1f, 0x08);

    dut->ertn_valid = 1;
    eval_cycle(dut);
    dut->ertn_valid = 0;
    dut->eval();
    expect_eq("TLB refill ERTN restores paging mode",
              dut->crmd_value & 0x1f, 0x17);
}

void test_counter_timer_and_interrupts(Vcsr_file_test_top* dut) {
    reset_clean(dut);

    expect_eq("CNTC reset value", read_csr(dut, CSR_CNTC, 28), 0);
    uint64_t counter_before_offset = dut->counter_value;
    write_csr(dut, CSR_CNTC, 0x100, 29);
    expect_eq("CNTC writeback", read_csr(dut, CSR_CNTC, 30), 0x100);
    expect_eq("counter output includes signed CNTC compensation",
              dut->counter_value,
              counter_before_offset + 0x100 + 6);

    uint32_t counter_a = read_csr(dut, CSR_CNTLO, 29);
    for (int cycle = 0; cycle < 5; ++cycle)
        eval_cycle(dut);
    uint32_t counter_b = read_csr(dut, CSR_CNTLO, 30);
    expect_true("stable counter advances", counter_b > counter_a);
    expect_eq("stable counter high word starts at zero",
              read_csr(dut, CSR_CNTHI, 31), 0);

    write_csr(dut, CSR_CRMD, 0x0000000c, 32);
    write_csr(dut, CSR_ECFG, 1U << 2, 33);
    dut->hw_irq = 1;
    dut->eval();
    expect_eq("HWI0 maps to ESTAT.IS[2]",
              dut->interrupt_pending_bits & (1U << 2), 1U << 2);
    expect_eq("enabled hardware interrupt is pending",
              dut->interrupt_pending, 1);
    dut->hw_irq = 0;
    dut->eval();
    expect_eq("deasserted hardware interrupt clears pending",
              dut->interrupt_pending, 0);

    write_csr(dut, CSR_ECFG, 1U << 12, 34);
    dut->ipi_irq = 1;
    dut->eval();
    expect_eq("IPI maps to ESTAT.IS[12]",
              dut->interrupt_pending_bits & (1U << 12), 1U << 12);
    expect_eq("enabled IPI is pending", dut->interrupt_pending, 1);
    dut->ipi_irq = 0;

    write_csr(dut, CSR_ECFG, 1U, 35);
    write_csr(dut, CSR_ESTAT, 1U, 36);
    expect_eq("software interrupt sets raw pending bit",
              dut->interrupt_pending_bits & 1U, 1U);
    expect_eq("enabled software interrupt is pending",
              dut->interrupt_pending, 1);
    write_csr(dut, CSR_ESTAT, 0, 37);
    expect_eq("software interrupt can be cleared",
              dut->interrupt_pending, 0);

    write_csr(dut, CSR_ECFG, 1U << 11, 38);
    write_csr(dut, CSR_TCFG, (2U << 2) | 1U, 39);
    for (int cycle = 0; cycle < 7; ++cycle) {
        eval_cycle(dut);
        expect_eq("one-shot timer stays clear before reaching zero",
                  dut->interrupt_pending_bits & (1U << 11), 0);
    }
    eval_cycle(dut);
    expect_eq("one-shot timer raises ESTAT.IS[11] when reaching zero",
              dut->interrupt_pending_bits & (1U << 11), 1U << 11);
    expect_eq("enabled timer interrupt is pending",
              dut->interrupt_pending, 1);

    write_csr(dut, CSR_TICLR, 1, 40);
    expect_eq("TICLR reads as zero",
              read_csr(dut, CSR_TICLR, 41), 0);
    expect_eq("TICLR clears timer interrupt",
              dut->interrupt_pending_bits & (1U << 11), 0);
    expect_eq("cleared timer no longer requests interrupt",
              dut->interrupt_pending, 0);

    expect_eq("one-shot TVAL stops at zero",
              read_csr(dut, CSR_TVAL, 42), 0);
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vcsr_file_test_top;

    test_reset_and_response_protocol(dut);
    test_commit_gating_and_flush(dut);
    test_commands_and_architectural_masks(dut);
    test_tlb_sideband_updates(dut);
    test_bad_address_subcodes(dut);
    test_precise_exception_and_ertn(dut);
    test_counter_timer_and_interrupts(dut);

    pass("csr_file");
    delete dut;
    return 0;
}
