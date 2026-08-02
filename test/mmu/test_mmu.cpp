#include "Vmmu_test_top.h"
#include "verilated.h"

#include <cstdint>
#include <cstdio>
#include <cstdlib>

namespace {

constexpr uint32_t ACCESS_FETCH = 0;
constexpr uint32_t ACCESS_LOAD = 1;
constexpr uint32_t ACCESS_STORE = 2;

constexpr uint32_t ECODE_PIL = 0x01;
constexpr uint32_t ECODE_PIS = 0x02;
constexpr uint32_t ECODE_PIF = 0x03;
constexpr uint32_t ECODE_PME = 0x04;
constexpr uint32_t ECODE_PPI = 0x07;
constexpr uint32_t ECODE_TLBR = 0x3f;

Vmmu_test_top *dut;
int checks;

void fail(const char *message) {
    std::fprintf(stderr, "[FAIL] %s\n", message);
    std::exit(1);
}

void expect(bool condition, const char *message) {
    ++checks;
    if (!condition) {
        fail(message);
    }
}

void eval() {
    dut->eval();
}

uint32_t make_dmw(uint32_t vseg, uint32_t pseg, uint32_t mat,
                  bool plv0, bool plv3) {
    return ((vseg & 0x7) << 29) |
           ((pseg & 0x7) << 25) |
           ((mat & 0x3) << 4) |
           (static_cast<uint32_t>(plv3) << 3) |
           static_cast<uint32_t>(plv0);
}

uint32_t translated_paddr(uint32_t vaddr, uint32_t ppn, uint32_t ps) {
    const uint32_t offset_mask =
        (ps == 32) ? 0xffffffffu : ((uint32_t{1} << ps) - 1);
    return ((ppn << 12) & ~offset_mask) | (vaddr & offset_mask);
}

void defaults() {
    dut->req_valid = 1;
    dut->req_vaddr = 0;
    dut->req_access = ACCESS_LOAD;
    dut->csr_plv = 0;
    dut->csr_da = 1;
    dut->csr_pg = 0;
    dut->csr_datf = 0;
    dut->csr_datm = 0;
    dut->csr_dmw0 = 0;
    dut->csr_dmw1 = 0;
    dut->tlb_resp_valid = 1;
    dut->tlb_found = 0;
    dut->tlb_ps = 12;
    dut->tlb_ppn = 0;
    dut->tlb_v = 0;
    dut->tlb_d = 0;
    dut->tlb_mat = 0;
    dut->tlb_plv = 0;
}

void use_paging() {
    dut->csr_da = 0;
    dut->csr_pg = 1;
}

void set_valid_tlb() {
    dut->tlb_found = 1;
    dut->tlb_ps = 12;
    dut->tlb_ppn = 0xabcde;
    dut->tlb_v = 1;
    dut->tlb_d = 1;
    dut->tlb_mat = 1;
    dut->tlb_plv = 3;
}

void expect_exception(uint32_t code, uint32_t vaddr,
                      const char *message) {
    eval();
    expect(dut->resp_valid, "exception response was not valid");
    expect(dut->resp_xcpt_valid, message);
    expect(dut->resp_xcpt_code == code, message);
    expect(dut->resp_badvaddr == vaddr, "BADV did not preserve virtual address");
}

void test_request_masking_and_direct_mode() {
    defaults();
    dut->req_valid = 0;
    dut->req_vaddr = 0x12345678;
    eval();
    expect(!dut->resp_valid, "invalid request produced a response");
    expect(!dut->resp_xcpt_valid, "invalid request produced an exception");
    expect(dut->resp_paddr == 0, "invalid request leaked an address");

    defaults();
    dut->req_vaddr = 0x87654321;
    dut->req_access = ACCESS_FETCH;
    dut->csr_datf = 1;
    dut->csr_datm = 2;
    eval();
    expect(dut->resp_paddr == 0x87654321, "direct fetch changed address");
    expect(dut->resp_mat == 1 && dut->resp_cacheable,
           "direct fetch did not use DATF");
    expect(!dut->resp_use_tlb && !dut->resp_xcpt_valid,
           "direct fetch incorrectly used TLB");

    dut->req_access = ACCESS_LOAD;
    eval();
    expect(dut->resp_mat == 2 && !dut->resp_cacheable,
           "direct load did not use DATM");

    dut->req_access = ACCESS_STORE;
    eval();
    expect(dut->resp_mat == 2, "direct store did not use DATM");

    defaults();
    use_paging();
    dut->req_vaddr = 0x45678000;
    dut->tlb_resp_valid = 0;
    eval();
    expect(dut->resp_use_tlb, "mapped request did not request TLB result");
    expect(!dut->resp_valid, "mapped request completed without TLB response");
    expect(!dut->resp_xcpt_valid,
           "missing TLB response was incorrectly treated as TLB miss");
}

void test_dmw_translation_and_privilege() {
    defaults();
    use_paging();
    dut->req_vaddr = 0x81234567;
    dut->csr_plv = 0;
    dut->csr_dmw0 = make_dmw(4, 2, 1, true, false);
    dut->tlb_resp_valid = 0;
    eval();
    expect(dut->resp_dmw_hit == 1, "DMW0 did not match PLV0");
    expect(dut->resp_paddr == 0x41234567,
           "DMW0 physical segment replacement failed");
    expect(dut->resp_mat == 1 && dut->resp_cacheable,
           "DMW0 MAT handling failed");
    expect(!dut->resp_use_tlb && !dut->resp_xcpt_valid,
           "DMW0 did not bypass the TLB");

    dut->csr_plv = 3;
    dut->tlb_resp_valid = 1;
    eval();
    expect(dut->resp_dmw_hit == 0, "DMW0 ignored its PLV3 disable bit");
    expect(dut->resp_use_tlb, "disabled DMW did not fall through to TLB");
    expect(dut->resp_xcpt_valid && dut->resp_xcpt_code == ECODE_TLBR,
           "disabled DMW did not expose TLB miss");

    dut->csr_dmw1 = make_dmw(4, 5, 2, false, true);
    eval();
    expect(dut->resp_dmw_hit == 2, "DMW1 did not match PLV3");
    expect(dut->resp_paddr == 0xa1234567,
           "DMW1 physical segment replacement failed");
    expect(dut->resp_mat == 2 && !dut->resp_cacheable,
           "DMW1 MAT handling failed");
    expect(!dut->resp_xcpt_valid, "DMW1 did not bypass TLB exception");

    dut->csr_plv = 1;
    eval();
    expect(dut->resp_dmw_hit == 0,
           "DMW must not be available at PLV1 or PLV2");

    dut->csr_plv = 0;
    dut->csr_dmw0 = make_dmw(4, 1, 0, true, false);
    dut->csr_dmw1 = make_dmw(4, 6, 1, true, false);
    eval();
    expect(dut->resp_dmw_hit == 3, "overlapping DMW hit visibility failed");
    expect(dut->resp_paddr == 0x21234567,
           "DMW0 did not take priority over DMW1");
}

void test_tlb_address_composition() {
    defaults();
    use_paging();
    set_valid_tlb();
    dut->req_vaddr = 0x12345abc;
    eval();
    expect(dut->resp_use_tlb, "mapped request did not use TLB");
    expect(dut->resp_paddr == 0xabcdeabc,
           "4KB TLB physical address composition failed");
    expect(dut->resp_mat == 1 && dut->resp_cacheable,
           "TLB MAT=CC was not cacheable");
    expect(!dut->resp_xcpt_valid, "valid 4KB mapping raised exception");

    dut->tlb_ps = 22;
    dut->tlb_ppn = 0xc1234;
    dut->tlb_mat = 2;
    dut->req_vaddr = 0x4056789a;
    eval();
    expect(dut->resp_paddr ==
               translated_paddr(0x4056789a, 0xc1234, 22),
           "PS=22 physical address composition failed");
    expect(dut->resp_mat == 2 && !dut->resp_cacheable,
           "TLB MAT=WUC was incorrectly cacheable");

    for (uint32_t mat = 0; mat <= 2; ++mat) {
        dut->tlb_mat = mat;
        eval();
        expect(dut->resp_mat == mat, "TLB MAT was not forwarded");
        expect(static_cast<bool>(dut->resp_cacheable) == (mat == 1),
               "only MAT=CC may be marked cacheable");
    }
}

void test_tlb_exceptions_and_priority() {
    constexpr uint32_t va = 0x456789ab;

    for (uint32_t access = ACCESS_FETCH; access <= ACCESS_STORE; ++access) {
        defaults();
        use_paging();
        dut->req_vaddr = va;
        dut->req_access = access;
        expect_exception(ECODE_TLBR, va, "TLB miss exception mismatch");
    }

    const uint32_t invalid_codes[] = {ECODE_PIF, ECODE_PIL, ECODE_PIS};
    for (uint32_t access = ACCESS_FETCH; access <= ACCESS_STORE; ++access) {
        defaults();
        use_paging();
        set_valid_tlb();
        dut->req_vaddr = va;
        dut->req_access = access;
        dut->tlb_v = 0;
        dut->tlb_d = 0;
        dut->csr_plv = 3;
        dut->tlb_plv = 0;
        expect_exception(invalid_codes[access], va,
                         "invalid-page exception or priority mismatch");
    }

    for (uint32_t access = ACCESS_FETCH; access <= ACCESS_STORE; ++access) {
        defaults();
        use_paging();
        set_valid_tlb();
        dut->req_vaddr = va;
        dut->req_access = access;
        dut->csr_plv = 3;
        dut->tlb_plv = 0;
        dut->tlb_d = 0;
        expect_exception(ECODE_PPI, va,
                         "page privilege exception or priority mismatch");
    }

    defaults();
    use_paging();
    set_valid_tlb();
    dut->req_vaddr = va;
    dut->req_access = ACCESS_STORE;
    dut->tlb_d = 0;
    expect_exception(ECODE_PME, va, "store dirty exception mismatch");

    dut->req_access = ACCESS_LOAD;
    eval();
    expect(!dut->resp_xcpt_valid,
           "load incorrectly required the dirty permission");

    dut->req_access = ACCESS_STORE;
    dut->tlb_d = 1;
    eval();
    expect(!dut->resp_xcpt_valid, "dirty store mapping raised exception");
}

}  // namespace

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    dut = new Vmmu_test_top;
    checks = 0;

    test_request_masking_and_direct_mode();
    test_dmw_translation_and_privilege();
    test_tlb_address_composition();
    test_tlb_exceptions_and_priority();

    std::printf("[PASS] MMU contract tests: %d checks\n", checks);
    delete dut;
    return 0;
}
