#include "Vmmu_integration_test_top.h"
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

Vmmu_integration_test_top *dut;
vluint64_t sim_time;
int checks;

void fail(const char *message) {
    std::fprintf(stderr, "[FAIL] %s at cycle %llu\n", message,
                 static_cast<unsigned long long>(sim_time / 2));
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

void tick() {
    dut->clk = 0;
    eval();
    ++sim_time;
    dut->clk = 1;
    eval();
    ++sim_time;
}

uint32_t make_dmw(uint32_t vseg, uint32_t pseg, uint32_t mat,
                  bool plv0, bool plv3) {
    return ((vseg & 7) << 29) |
           ((pseg & 7) << 25) |
           ((mat & 3) << 4) |
           (static_cast<uint32_t>(plv3) << 3) |
           static_cast<uint32_t>(plv0);
}

uint32_t translated_paddr(uint32_t vaddr, uint32_t ppn, uint32_t ps) {
    const uint32_t mask = (uint32_t{1} << ps) - 1;
    return ((ppn << 12) & ~mask) | (vaddr & mask);
}

void idle_inputs() {
    dut->req_valid = 0;
    dut->req_vaddr = 0;
    dut->req_access = ACCESS_LOAD;
    dut->csr_asid = 0;
    dut->csr_plv = 0;
    dut->csr_da = 1;
    dut->csr_pg = 0;
    dut->csr_datf = 0;
    dut->csr_datm = 0;
    dut->csr_dmw0 = 0;
    dut->csr_dmw1 = 0;
    dut->wr_valid = 0;
    dut->wr_idx = 0;
    dut->wr_e = 0;
    dut->wr_vppn = 0;
    dut->wr_asid = 0;
    dut->wr_g = 0;
    dut->wr_ps = 12;
    dut->wr_ppn0 = 0;
    dut->wr_ppn1 = 0;
    dut->wr_mat0 = 0;
    dut->wr_mat1 = 0;
    dut->wr_plv0 = 0;
    dut->wr_plv1 = 0;
    dut->wr_d0 = 0;
    dut->wr_d1 = 0;
    dut->wr_v0 = 0;
    dut->wr_v1 = 0;
    dut->inv_valid = 0;
    dut->inv_op = 0;
    dut->inv_asid = 0;
    dut->inv_vaddr = 0;
}

void reset() {
    idle_inputs();
    dut->rst_n = 0;
    tick();
    tick();
    dut->rst_n = 1;
    tick();
}

void use_paging(uint32_t asid = 0, uint32_t plv = 0) {
    dut->csr_da = 0;
    dut->csr_pg = 1;
    dut->csr_asid = asid;
    dut->csr_plv = plv;
}

void write_entry(uint32_t index, uint32_t base, uint32_t asid,
                 bool global, uint32_t ps, uint32_t ppn0, uint32_t ppn1,
                 bool v0 = true, bool v1 = true,
                 bool d0 = true, bool d1 = true,
                 uint32_t plv0 = 3, uint32_t plv1 = 3,
                 uint32_t mat0 = 1, uint32_t mat1 = 1) {
    dut->wr_valid = 1;
    dut->wr_idx = index;
    dut->wr_e = 1;
    dut->wr_vppn = base >> 13;
    dut->wr_asid = asid;
    dut->wr_g = global;
    dut->wr_ps = ps;
    dut->wr_ppn0 = ppn0;
    dut->wr_ppn1 = ppn1;
    dut->wr_mat0 = mat0;
    dut->wr_mat1 = mat1;
    dut->wr_plv0 = plv0;
    dut->wr_plv1 = plv1;
    dut->wr_d0 = d0;
    dut->wr_d1 = d1;
    dut->wr_v0 = v0;
    dut->wr_v1 = v1;
    tick();
    dut->wr_valid = 0;
    eval();
}

void issue(uint32_t vaddr, uint32_t access) {
    dut->req_valid = 1;
    dut->req_vaddr = vaddr;
    dut->req_access = access;
    tick();
    dut->req_valid = 0;
    eval();
    expect(dut->resp_valid, "request did not produce a one-cycle response");
}

void expect_exception(uint32_t code, uint32_t vaddr,
                      const char *message) {
    expect(dut->resp_xcpt_valid, message);
    expect(dut->resp_xcpt_code == code, message);
    expect(dut->resp_badvaddr == vaddr, "BADV address mismatch");
}

void test_direct_and_dmw_bypass() {
    reset();
    dut->csr_datf = 1;
    dut->csr_datm = 2;

    issue(0x12345678, ACCESS_FETCH);
    expect(dut->resp_paddr == 0x12345678,
           "direct fetch changed physical address");
    expect(dut->resp_mat == 1 && dut->resp_cacheable,
           "direct fetch did not preserve DATF");
    expect(!dut->resp_use_tlb && !dut->resp_xcpt_valid,
           "direct fetch incorrectly consumed TLB miss");

    dut->csr_datf = 0;
    dut->req_vaddr = 0xdeadbeef;
    eval();
    expect(dut->resp_paddr == 0x12345678 && dut->resp_mat == 1,
           "response context changed before the next clock");

    use_paging(7, 0);
    dut->csr_dmw0 = make_dmw(4, 2, 2, true, false);
    issue(0x81234567, ACCESS_LOAD);
    expect(dut->resp_paddr == 0x41234567,
           "DMW translation failed in integrated path");
    expect(dut->resp_dmw_hit == 1 && !dut->resp_use_tlb,
           "DMW request was not identified as a bypass");
    expect(!dut->resp_xcpt_valid,
           "DMW request exposed the underlying TLB miss");

    tick();
    expect(!dut->resp_valid, "request bubble did not clear response valid");
}

void test_4k_mapping_and_asid() {
    reset();
    constexpr uint32_t base = 0x12344000;
    write_entry(1, base, 9, false, 12, 0x34567, 0x45678,
                true, true, true, true, 3, 3, 1, 2);
    use_paging(9, 3);

    issue(base + 0x234, ACCESS_LOAD);
    expect(dut->resp_paddr == 0x34567234,
           "integrated 4KB even translation failed");
    expect(dut->resp_mat == 1 && dut->resp_cacheable,
           "integrated even-page MAT mismatch");

    issue(base + 0x1000 + 0x568, ACCESS_STORE);
    expect(dut->resp_paddr == 0x45678568,
           "integrated 4KB odd translation failed");
    expect(dut->resp_mat == 2 && !dut->resp_cacheable,
           "integrated odd-page MAT mismatch");

    dut->csr_asid = 8;
    issue(base + 0x80, ACCESS_LOAD);
    expect_exception(ECODE_TLBR, base + 0x80,
                     "ASID mismatch did not produce TLBR");

    write_entry(2, 0x20000000, 1, true, 12, 0x50000, 0x50001);
    dut->csr_asid = 0x3ff;
    issue(0x20000044, ACCESS_LOAD);
    expect(dut->resp_paddr == 0x50000044,
           "global TLB entry incorrectly required ASID match");
}

void test_large_page_mapping() {
    reset();
    constexpr uint32_t base = 0x40000000;
    write_entry(0, base, 3, false, 22, 0x80000, 0x90000);
    use_paging(3, 3);

    issue(base + 0x1234, ACCESS_LOAD);
    expect(dut->resp_paddr ==
               translated_paddr(base + 0x1234, 0x80000, 22),
           "integrated large even-page translation failed");

    issue(base + 0x00400000 + 0x5678, ACCESS_LOAD);
    expect(dut->resp_paddr ==
               translated_paddr(base + 0x00400000 + 0x5678, 0x90000, 22),
           "integrated large odd-page translation failed");
}

void test_integrated_exceptions() {
    constexpr uint32_t base = 0x30000000;

    reset();
    write_entry(0, base, 4, false, 12, 0x60000, 0x60001,
                false, false, false, false, 0, 0);
    use_paging(4, 3);

    const uint32_t invalid_codes[] = {ECODE_PIF, ECODE_PIL, ECODE_PIS};
    for (uint32_t access = ACCESS_FETCH; access <= ACCESS_STORE; ++access) {
        issue(base + 0x44, access);
        expect_exception(invalid_codes[access], base + 0x44,
                         "integrated invalid-page exception mismatch");
    }

    write_entry(0, base, 4, false, 12, 0x60000, 0x60001,
                true, true, false, true, 0, 0);
    issue(base + 0x44, ACCESS_STORE);
    expect_exception(ECODE_PPI, base + 0x44,
                     "privilege exception did not precede dirty exception");

    dut->csr_plv = 0;
    issue(base + 0x44, ACCESS_STORE);
    expect_exception(ECODE_PME, base + 0x44,
                     "integrated store dirty exception mismatch");

    issue(base + 0x44, ACCESS_LOAD);
    expect(!dut->resp_xcpt_valid,
           "integrated load incorrectly required dirty permission");
}

void test_invalidation_and_continuous_requests() {
    reset();
    constexpr uint32_t base = 0x38000000;
    write_entry(3, base, 6, false, 12, 0x70000, 0x70001);
    use_paging(6, 3);

    issue(base + 0x88, ACCESS_LOAD);
    expect(!dut->resp_xcpt_valid, "mapping was unavailable before INVTLB");

    dut->inv_valid = 1;
    dut->inv_op = 6;
    dut->inv_asid = 6;
    dut->inv_vaddr = base + 0x88;
    tick();
    dut->inv_valid = 0;

    issue(base + 0x88, ACCESS_LOAD);
    expect_exception(ECODE_TLBR, base + 0x88,
                     "integrated INVTLB did not remove mapping");

    dut->csr_da = 1;
    dut->csr_pg = 0;
    dut->csr_datm = 1;
    issue(0x10000100, ACCESS_LOAD);
    expect(dut->resp_paddr == 0x10000100,
           "first continuous request produced wrong response");

    dut->csr_datm = 2;
    issue(0x20000200, ACCESS_STORE);
    expect(dut->resp_paddr == 0x20000200 && dut->resp_mat == 2,
           "second continuous request lost its CSR context");
}

}  // namespace

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    dut = new Vmmu_integration_test_top;
    sim_time = 0;
    checks = 0;

    test_direct_and_dmw_bypass();
    test_4k_mapping_and_asid();
    test_large_page_mapping();
    test_integrated_exceptions();
    test_invalidation_and_continuous_requests();

    std::printf("[PASS] TLB + addr_trans integration: %d checks\n", checks);
    delete dut;
    return 0;
}
