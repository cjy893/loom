#include "Vtlb_test_top.h"
#include "verilated.h"

#include <cstdint>
#include <cstdio>
#include <cstdlib>

namespace {

Vtlb_test_top *dut;
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

void idle_inputs() {
    dut->q0_valid = 0;
    dut->q0_vaddr = 0;
    dut->q0_asid = 0;
    dut->q1_valid = 0;
    dut->q1_vaddr = 0;
    dut->q1_asid = 0;
    dut->wr_valid = 0;
    dut->wr_index = 0;
    dut->wr_e = 0;
    dut->wr_vppn = 0;
    dut->wr_asid = 0;
    dut->wr_g = 0;
    dut->wr_ps = 12;
    dut->wr_ppn0 = 0;
    dut->wr_plv0 = 0;
    dut->wr_mat0 = 0;
    dut->wr_d0 = 0;
    dut->wr_v0 = 0;
    dut->wr_ppn1 = 0;
    dut->wr_plv1 = 0;
    dut->wr_mat1 = 0;
    dut->wr_d1 = 0;
    dut->wr_v1 = 0;
    dut->rd_index = 0;
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

void write_entry(uint32_t index, uint32_t vaddr, uint32_t asid,
                 bool global, uint32_t ps, uint32_t ppn0, uint32_t ppn1,
                 bool enabled = true) {
    dut->wr_valid = 1;
    dut->wr_index = index;
    dut->wr_e = enabled;
    dut->wr_vppn = vaddr >> 13;
    dut->wr_asid = asid;
    dut->wr_g = global;
    dut->wr_ps = ps;
    dut->wr_ppn0 = ppn0;
    dut->wr_plv0 = 0;
    dut->wr_mat0 = 1;
    dut->wr_d0 = 1;
    dut->wr_v0 = 1;
    dut->wr_ppn1 = ppn1;
    dut->wr_plv1 = 3;
    dut->wr_mat1 = 2;
    dut->wr_d1 = 0;
    dut->wr_v1 = 1;
    tick();
    dut->wr_valid = 0;
    eval();
}

void query0(uint32_t vaddr, uint32_t asid) {
    dut->q0_valid = 1;
    dut->q0_vaddr = vaddr;
    dut->q0_asid = asid;
    tick();
    dut->q0_valid = 0;
    eval();
    expect(dut->q0_resp_valid, "query port 0 response was not valid");
}

void query1(uint32_t vaddr, uint32_t asid) {
    dut->q1_valid = 1;
    dut->q1_vaddr = vaddr;
    dut->q1_asid = asid;
    tick();
    dut->q1_valid = 0;
    eval();
    expect(dut->q1_resp_valid, "query port 1 response was not valid");
}

void invalidate(uint32_t op, uint32_t asid, uint32_t vaddr) {
    dut->inv_valid = 1;
    dut->inv_op = op;
    dut->inv_asid = asid;
    dut->inv_vaddr = vaddr;
    tick();
    dut->inv_valid = 0;
    eval();
}

bool entry_exists(uint32_t index) {
    dut->rd_index = index;
    eval();
    return dut->rd_e;
}

void test_reset_and_readback() {
    reset();
    for (uint32_t i = 0; i < 5; ++i) {
        expect(!entry_exists(i), "reset did not clear entry existence bit");
    }

    query0(0x12344000u, 7);
    expect(!dut->q0_found, "empty TLB unexpectedly hit");
    expect(dut->q0_ppn == 0, "miss payload was not deterministic");

    write_entry(2, 0x12344000u, 7, false, 12, 0x34567, 0x45678);
    dut->rd_index = 2;
    eval();
    expect(dut->rd_e, "written entry is not enabled");
    expect(dut->rd_vppn == (0x12344000u >> 13), "VPPN readback mismatch");
    expect(dut->rd_asid == 7, "ASID readback mismatch");
    expect(!dut->rd_g, "global bit readback mismatch");
    expect(dut->rd_ps == 12, "page size readback mismatch");
    expect(dut->rd_ppn0 == 0x34567, "even PPN readback mismatch");
    expect(dut->rd_ppn1 == 0x45678, "odd PPN readback mismatch");
}

void test_4k_lookup_and_asid() {
    reset();
    constexpr uint32_t base = 0x12344000u;
    write_entry(1, base, 9, false, 12, 0x11111, 0x22222);

    query0(base + 0x234, 9);
    expect(dut->q0_found && dut->q0_index == 1, "4KB even page missed");
    expect(dut->q0_ppn == 0x11111, "4KB even page selected odd PPN");
    expect(dut->q0_plv == 0 && dut->q0_mat == 1 && dut->q0_d,
           "4KB even page attributes mismatch");

    query0(base + 0x1000 + 0x568, 9);
    expect(dut->q0_found, "4KB odd page missed");
    expect(dut->q0_ppn == 0x22222, "4KB odd page selected even PPN");
    expect(dut->q0_plv == 3 && dut->q0_mat == 2 && !dut->q0_d,
           "4KB odd page attributes mismatch");

    query0(base + 0x100, 8);
    expect(!dut->q0_found, "non-global entry ignored ASID mismatch");

    write_entry(3, 0x20000000u, 4, true, 12, 0x33333, 0x44444);
    query0(0x20000088u, 0x3ff);
    expect(dut->q0_found && dut->q0_index == 3,
           "global entry incorrectly required ASID match");
}

void test_large_page_and_dual_port() {
    reset();
    constexpr uint32_t large_base = 0x40000000u;
    constexpr uint32_t small_base = 0x18000000u;
    write_entry(0, large_base, 3, false, 22, 0x80000, 0x90000);
    write_entry(4, small_base, 3, false, 12, 0x12345, 0x23456);

    dut->q0_valid = 1;
    dut->q0_vaddr = large_base + 0x1234;
    dut->q0_asid = 3;
    dut->q1_valid = 1;
    dut->q1_vaddr = small_base + 0x1000 + 0x80;
    dut->q1_asid = 3;
    tick();
    dut->q0_valid = 0;
    dut->q1_valid = 0;
    eval();
    expect(dut->q0_resp_valid && dut->q1_resp_valid,
           "dual lookup ports did not respond together");
    expect(dut->q0_found && dut->q0_index == 0 &&
               dut->q0_ppn == 0x80000,
           "large even page lookup failed");
    expect(dut->q1_found && dut->q1_index == 4 &&
               dut->q1_ppn == 0x23456,
           "simultaneous 4KB odd lookup failed");

    query1(large_base + 0x00400000u + 0x5678, 3);
    expect(dut->q1_found && dut->q1_ppn == 0x90000,
           "PS=22 odd page must be selected by VA bit 22");

    query0(large_base + 0x00800000u, 3);
    expect(!dut->q0_found,
           "PS=22 entry matched beyond its 8MB even/odd pair");
}

void populate_invalidation_matrix() {
    reset();
    constexpr uint32_t a = 0x30000000u;
    constexpr uint32_t b = 0x38000000u;
    write_entry(0, a, 1, true, 12, 0x10000, 0x10001);
    write_entry(1, a, 1, false, 12, 0x11000, 0x11001);
    write_entry(2, a, 2, false, 12, 0x12000, 0x12001);
    write_entry(3, b, 3, true, 12, 0x13000, 0x13001);
    write_entry(4, b, 1, false, 12, 0x14000, 0x14001);
}

void expect_entry_mask(uint32_t mask, const char *message) {
    uint32_t observed = 0;
    for (uint32_t i = 0; i < 5; ++i) {
        observed |= static_cast<uint32_t>(entry_exists(i)) << i;
    }
    if (observed != mask) {
        std::fprintf(stderr, "expected mask 0x%x, observed 0x%x\n",
                     mask, observed);
        fail(message);
    }
    ++checks;
}

void test_invtlb_operations() {
    constexpr uint32_t a = 0x30000000u;

    populate_invalidation_matrix();
    invalidate(0, 0, 0);
    expect_entry_mask(0x00, "INVTLB op 0 did not invalidate all entries");

    populate_invalidation_matrix();
    invalidate(1, 0, 0);
    expect_entry_mask(0x00, "INVTLB op 1 did not invalidate all entries");

    populate_invalidation_matrix();
    invalidate(2, 0, 0);
    expect_entry_mask(0x16, "INVTLB op 2 did not invalidate global entries");

    populate_invalidation_matrix();
    invalidate(3, 0, 0);
    expect_entry_mask(0x09,
                      "INVTLB op 3 did not invalidate non-global entries");

    populate_invalidation_matrix();
    invalidate(4, 1, 0);
    expect_entry_mask(0x0d,
                      "INVTLB op 4 ASID filtering is incorrect");

    populate_invalidation_matrix();
    invalidate(5, 1, a + 0x44);
    expect_entry_mask(0x1d,
                      "INVTLB op 5 ASID/VPN filtering is incorrect");

    populate_invalidation_matrix();
    invalidate(6, 1, a + 0x44);
    expect_entry_mask(0x1c,
                      "INVTLB op 6 global-or-ASID filtering is incorrect");
}

void test_write_priority_and_disable() {
    populate_invalidation_matrix();

    dut->inv_valid = 1;
    dut->inv_op = 0;
    dut->wr_valid = 1;
    dut->wr_index = 2;
    dut->wr_e = 1;
    dut->wr_vppn = 0x48000000u >> 13;
    dut->wr_asid = 5;
    dut->wr_g = 0;
    dut->wr_ps = 12;
    dut->wr_ppn0 = 0x55555;
    dut->wr_ppn1 = 0x66666;
    dut->wr_v0 = 1;
    dut->wr_v1 = 1;
    tick();
    dut->inv_valid = 0;
    dut->wr_valid = 0;
    eval();
    expect_entry_mask(0x04,
                      "same-cycle write did not take priority over invalidate");

    write_entry(2, 0x48000000u, 5, false, 12, 0, 0, false);
    expect(!entry_exists(2), "write with E=0 did not disable entry");
}

}  // namespace

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    dut = new Vtlb_test_top;
    sim_time = 0;
    checks = 0;

    test_reset_and_readback();
    test_4k_lookup_and_asid();
    test_large_page_and_dual_port();
    test_invtlb_operations();
    test_write_priority_and_disable();

    std::printf("[PASS] TLB contract tests: %d checks\n", checks);
    delete dut;
    return 0;
}
