#include "Vtlb_ctrl_test_top.h"
#include "verilated.h"

#include <cstdint>
#include <cstdio>
#include <cstdlib>

namespace {

constexpr uint32_t TLB_CMD_SEARCH = 1;
constexpr uint32_t TLB_CMD_READ = 2;
constexpr uint32_t TLB_CMD_WRITE = 3;
constexpr uint32_t TLB_CMD_FILL = 4;
constexpr uint32_t TLB_CMD_INV = 5;

constexpr uint32_t CSR_MASK_TLBIDX = 1u << 0;
constexpr uint32_t CSR_MASK_TLBEHI = 1u << 1;
constexpr uint32_t CSR_MASK_TLBELO0 = 1u << 2;
constexpr uint32_t CSR_MASK_TLBELO1 = 1u << 3;
constexpr uint32_t CSR_MASK_ASID = 1u << 4;
constexpr uint32_t CSR_MASK_ALL_TLB =
    CSR_MASK_TLBIDX | CSR_MASK_TLBEHI | CSR_MASK_TLBELO0 |
    CSR_MASK_TLBELO1 | CSR_MASK_ASID;

constexpr uint32_t TLBIDX_INDEX_MASK = 0x0000001f;
constexpr uint32_t TLBIDX_PS_MASK = 0x3f000000;
constexpr uint32_t TLBIDX_NE_MASK = 0x80000000;
constexpr uint32_t ASID_MASK = 0x000003ff;

Vtlb_ctrl_test_top *dut;
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

void expect_eq(uint32_t actual, uint32_t expected, const char *message) {
    ++checks;
    if (actual != expected) {
        std::fprintf(stderr,
                     "[FAIL] %s: expected 0x%08x, observed 0x%08x "
                     "at cycle %llu\n",
                     message, expected, actual,
                     static_cast<unsigned long long>(sim_time / 2));
        std::exit(1);
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

uint32_t make_tlbidx(uint32_t index, uint32_t ps, bool ne) {
    return ((static_cast<uint32_t>(ne) << 31) |
            ((ps & 0x3f) << 24) |
            (index & TLBIDX_INDEX_MASK));
}

uint32_t make_tlbelo(uint32_t ppn, bool global, uint32_t mat,
                     uint32_t plv, bool dirty, bool valid) {
    return ((ppn & 0xfffff) << 8) |
           (static_cast<uint32_t>(global) << 6) |
           ((mat & 3) << 4) |
           ((plv & 3) << 2) |
           (static_cast<uint32_t>(dirty) << 1) |
           static_cast<uint32_t>(valid);
}

void idle_inputs() {
    dut->req_valid = 0;
    dut->req_rob_idx = 0;
    dut->req_cmd = 0;
    dut->req_inv_op = 0;
    dut->req_inv_asid = 0;
    dut->req_inv_vaddr = 0;
    dut->resp_ready = 0;
    dut->commit_valid = 0;
    dut->commit_rob_idx = 0;
    dut->flush_pending = 0;

    dut->csr_tlbidx = 0;
    dut->csr_tlbehi = 0;
    dut->csr_tlbelo0 = 0;
    dut->csr_tlbelo1 = 0;
    dut->csr_asid = 0;

    dut->search_resp_valid = 0;
    dut->search_resp_found = 0;
    dut->search_idx = 0;

    dut->rd_e = 0;
    dut->rd_vppn = 0;
    dut->rd_asid = 0;
    dut->rd_g = 0;
    dut->rd_ps = 0;
    dut->rd_ppn0 = 0;
    dut->rd_ppn1 = 0;
    dut->rd_mat0 = 0;
    dut->rd_mat1 = 0;
    dut->rd_plv0 = 0;
    dut->rd_plv1 = 0;
    dut->rd_d0 = 0;
    dut->rd_d1 = 0;
    dut->rd_v0 = 0;
    dut->rd_v1 = 0;
}

void reset() {
    idle_inputs();
    dut->rst_n = 0;
    tick();
    tick();
    dut->rst_n = 1;
    tick();
}

void expect_no_side_effects(const char *message) {
    expect(!dut->wr_valid, message);
    expect(!dut->inv_valid, message);
    expect(!dut->csr_update_valid, message);
}

void issue_non_search(uint32_t cmd, uint32_t rob_idx) {
    expect(dut->req_ready, "controller was not ready for a request");
    dut->req_cmd = cmd;
    dut->req_rob_idx = rob_idx;
    dut->req_valid = 1;
    eval();
    expect(!dut->search_req_valid,
           "non-search command incorrectly used the search port");
    tick();
    dut->req_valid = 0;
    eval();

    expect(dut->resp_valid,
           "non-search command did not produce an execution response");
    expect_eq(dut->resp_rob_idx, rob_idx,
              "execution response ROB index mismatch");
    expect(!dut->req_ready,
           "controller accepted a second request before commit");
}

void accept_response(uint32_t rob_idx) {
    expect(dut->resp_valid, "execution response was not valid");
    expect_eq(dut->resp_rob_idx, rob_idx,
              "response ROB index changed before acceptance");
    dut->resp_ready = 1;
    tick();
    dut->resp_ready = 0;
    eval();
    expect(!dut->resp_valid,
           "response valid did not clear after ready handshake");
    expect(!dut->req_ready,
           "response handshake incorrectly released pending command");
}

void finish_commit() {
    tick();
    dut->commit_valid = 0;
    dut->flush_pending = 0;
    eval();
    expect(dut->req_ready,
           "matching commit did not release the pending command");
    expect_no_side_effects(
        "side-effect valid remained asserted after commit cycle");
}

void test_reset_backpressure_and_invtlb() {
    reset();
    expect(dut->req_ready, "reset did not leave controller ready");
    expect(!dut->resp_valid, "reset left a response pending");
    expect(!dut->search_active, "reset left search port owned");
    expect(!dut->search_req_valid, "reset emitted a search request");
    expect_no_side_effects("reset left a side effect asserted");

    constexpr uint32_t rob_idx = 7;
    dut->req_inv_op = 5;
    dut->req_inv_asid = 0x155;
    dut->req_inv_vaddr = 0x81234000;
    issue_non_search(TLB_CMD_INV, rob_idx);
    expect_no_side_effects(
        "INVTLB modified state before the instruction committed");

    dut->req_inv_op = 2;
    dut->req_inv_asid = 0x2aa;
    dut->req_inv_vaddr = 0x45678000;
    tick();
    expect(dut->resp_valid,
           "response was not held while resp_ready was low");
    expect_eq(dut->resp_rob_idx, rob_idx,
              "held response ROB index was not stable");
    expect(!dut->req_ready,
           "pending INVTLB did not apply request backpressure");

    accept_response(rob_idx);

    dut->commit_valid = 1;
    dut->commit_rob_idx = rob_idx + 1;
    eval();
    expect_no_side_effects(
        "wrong ROB commit triggered an INVTLB side effect");
    tick();
    dut->commit_valid = 0;
    eval();
    expect(!dut->req_ready,
           "wrong ROB commit released the pending command");

    dut->commit_valid = 1;
    dut->commit_rob_idx = rob_idx;
    eval();
    expect(dut->inv_valid,
           "matching INVTLB commit did not assert inv_valid");
    expect_eq(dut->inv_op, 5, "INVTLB op was not snapshotted");
    expect_eq(dut->inv_asid, 0x155,
              "INVTLB ASID was not snapshotted");
    expect_eq(dut->inv_vaddr, 0x81234000,
              "INVTLB address was not snapshotted");
    expect(!dut->wr_valid && !dut->csr_update_valid,
           "INVTLB commit asserted an unrelated side effect");
    finish_commit();
}

void test_flush_cancels_pending_command() {
    reset();
    constexpr uint32_t rob_idx = 11;
    dut->csr_tlbidx = make_tlbidx(2, 12, false);
    issue_non_search(TLB_CMD_WRITE, rob_idx);
    accept_response(rob_idx);

    dut->flush_pending = 1;
    eval();
    expect_no_side_effects(
        "flush converted a pending command into a side effect");
    tick();
    dut->flush_pending = 0;
    eval();
    expect(dut->req_ready, "flush did not cancel pending command");
    expect(!dut->resp_valid, "flush left a response pending");

    dut->commit_valid = 1;
    dut->commit_rob_idx = rob_idx;
    eval();
    expect_no_side_effects(
        "flushed command was later applied by a stale commit");
    dut->commit_valid = 0;
}

void start_search(uint32_t rob_idx, uint32_t tlbidx,
                  uint32_t tlbehi, uint32_t asid) {
    expect(dut->req_ready, "controller was not ready for TLBSRCH");
    dut->csr_tlbidx = tlbidx;
    dut->csr_tlbehi = tlbehi;
    dut->csr_asid = asid;
    dut->req_cmd = TLB_CMD_SEARCH;
    dut->req_rob_idx = rob_idx;
    dut->req_valid = 1;
    eval();

    expect(dut->search_active,
           "TLBSRCH did not take ownership of query port");
    expect(dut->search_req_valid,
           "TLBSRCH did not emit a query request");
    expect_eq(dut->search_req_vaddr, tlbehi & 0xffffe000,
              "TLBSRCH query address did not come from TLBEHI");
    expect_eq(dut->search_req_asid, asid & ASID_MASK,
              "TLBSRCH query ASID did not come from CSR.ASID");

    tick();
    dut->req_valid = 0;
    eval();
    expect(dut->search_active,
           "TLBSRCH released query port before its response");
    expect(!dut->req_ready,
           "TLBSRCH allowed another request while waiting");
    expect(!dut->resp_valid,
           "TLBSRCH completed before search response arrived");
}

void return_search_result(uint32_t rob_idx, bool found, uint32_t index) {
    dut->search_resp_valid = 1;
    dut->search_resp_found = found;
    dut->search_idx = index;
    tick();
    dut->search_resp_valid = 0;
    dut->search_resp_found = 0;
    dut->search_idx = 0;
    eval();

    expect(!dut->search_active,
           "TLBSRCH retained query port after response");
    expect(dut->resp_valid,
           "TLBSRCH response did not complete the instruction");
    expect_eq(dut->resp_rob_idx, rob_idx,
              "TLBSRCH completion ROB index mismatch");
}

void test_tlbsrch_hit_and_miss() {
    reset();
    constexpr uint32_t hit_rob_idx = 13;
    constexpr uint32_t hit_tlbidx = 0xa500001b;
    constexpr uint32_t hit_tlbehi = 0x81235abc;
    constexpr uint32_t hit_asid = 0x000a0155;

    start_search(hit_rob_idx, hit_tlbidx, hit_tlbehi, hit_asid);
    dut->csr_tlbidx = 0;
    dut->csr_tlbehi = 0;
    dut->csr_asid = 0;
    return_search_result(hit_rob_idx, true, 3);
    expect_no_side_effects(
        "TLBSRCH hit updated CSR before ROB commit");
    accept_response(hit_rob_idx);

    dut->commit_valid = 1;
    dut->commit_rob_idx = hit_rob_idx;
    eval();
    expect(dut->csr_update_valid,
           "TLBSRCH hit did not update TLBIDX at commit");
    expect_eq(dut->csr_update_mask, CSR_MASK_TLBIDX,
              "TLBSRCH hit used the wrong CSR update mask");
    const uint32_t hit_expected =
        (hit_tlbidx & ~(TLBIDX_NE_MASK | TLBIDX_INDEX_MASK)) | 3;
    expect_eq(dut->csr_tlbidx_wdata, hit_expected,
              "TLBSRCH hit produced the wrong TLBIDX value");
    expect(!dut->wr_valid && !dut->inv_valid,
           "TLBSRCH hit asserted an unrelated side effect");
    finish_commit();

    constexpr uint32_t miss_rob_idx = 14;
    constexpr uint32_t miss_tlbidx = 0x21000012;
    start_search(miss_rob_idx, miss_tlbidx, 0x45678123,
                 0x000a02aa);
    return_search_result(miss_rob_idx, false, 7);
    accept_response(miss_rob_idx);

    dut->commit_valid = 1;
    dut->commit_rob_idx = miss_rob_idx;
    eval();
    expect(dut->csr_update_valid,
           "TLBSRCH miss did not update TLBIDX at commit");
    expect_eq(dut->csr_update_mask, CSR_MASK_TLBIDX,
              "TLBSRCH miss used the wrong CSR update mask");
    expect_eq(dut->csr_tlbidx_wdata,
              miss_tlbidx | TLBIDX_NE_MASK,
              "TLBSRCH miss did not preserve the old index");
    finish_commit();
}

void test_flush_cancels_search_response() {
    reset();
    constexpr uint32_t rob_idx = 15;
    start_search(rob_idx, make_tlbidx(1, 12, false),
                 0x50001000, 3);

    dut->flush_pending = 1;
    eval();
    expect_no_side_effects(
        "flush during TLBSRCH asserted a side effect");
    tick();
    dut->flush_pending = 0;
    eval();
    expect(dut->req_ready,
           "flush did not release an outstanding TLBSRCH");
    expect(!dut->search_active,
           "flush did not release TLBSRCH query ownership");

    dut->search_resp_valid = 1;
    dut->search_resp_found = 1;
    dut->search_idx = 2;
    tick();
    dut->search_resp_valid = 0;
    eval();
    expect(!dut->resp_valid,
           "stale search response completed a flushed command");
    expect_no_side_effects(
        "stale search response produced a side effect");
}

void set_read_entry(bool enabled, uint32_t vppn, uint32_t asid,
                    bool global, uint32_t ps,
                    uint32_t ppn0, uint32_t ppn1,
                    uint32_t mat0, uint32_t mat1,
                    uint32_t plv0, uint32_t plv1,
                    bool d0, bool d1, bool v0, bool v1) {
    dut->rd_e = enabled;
    dut->rd_vppn = vppn;
    dut->rd_asid = asid;
    dut->rd_g = global;
    dut->rd_ps = ps;
    dut->rd_ppn0 = ppn0;
    dut->rd_ppn1 = ppn1;
    dut->rd_mat0 = mat0;
    dut->rd_mat1 = mat1;
    dut->rd_plv0 = plv0;
    dut->rd_plv1 = plv1;
    dut->rd_d0 = d0;
    dut->rd_d1 = d1;
    dut->rd_v0 = v0;
    dut->rd_v1 = v1;
}

void issue_tlbrd(uint32_t rob_idx, uint32_t index) {
    expect(dut->req_ready, "controller was not ready for TLBRD");
    dut->req_cmd = TLB_CMD_READ;
    dut->req_rob_idx = rob_idx;
    dut->req_valid = 1;
    eval();
    expect_eq(dut->rd_idx, index,
              "TLBRD did not select CSR.TLBIDX index");
    tick();
    dut->req_valid = 0;
    eval();
    expect(dut->resp_valid,
           "TLBRD did not produce an execution response");
    expect_eq(dut->resp_rob_idx, rob_idx,
              "TLBRD response ROB index mismatch");
}

void test_tlbrd_valid_and_invalid() {
    reset();
    constexpr uint32_t valid_rob_idx = 17;
    constexpr uint32_t old_tlbidx = 0x9a000003;
    constexpr uint32_t old_asid = 0x000a02aa;
    constexpr uint32_t vppn = 0x45678;
    constexpr uint32_t entry_asid = 0x155;
    constexpr uint32_t ppn0 = 0x12345;
    constexpr uint32_t ppn1 = 0x54321;

    dut->csr_tlbidx = old_tlbidx;
    dut->csr_asid = old_asid;
    set_read_entry(true, vppn, entry_asid, true, 22,
                   ppn0, ppn1, 2, 1, 3, 1,
                   true, false, true, true);
    issue_tlbrd(valid_rob_idx, 3);

    set_read_entry(false, 0, 0, false, 0,
                   0, 0, 0, 0, 0, 0,
                   false, false, false, false);
    accept_response(valid_rob_idx);

    dut->commit_valid = 1;
    dut->commit_rob_idx = valid_rob_idx;
    eval();
    expect(dut->csr_update_valid,
           "valid TLBRD did not update TLB CSRs");
    expect_eq(dut->csr_update_mask, CSR_MASK_ALL_TLB,
              "valid TLBRD did not select all TLB CSRs");
    const uint32_t expected_tlbidx =
        (old_tlbidx & ~(TLBIDX_NE_MASK | TLBIDX_PS_MASK)) |
        (22u << 24);
    expect_eq(dut->csr_tlbidx_wdata, expected_tlbidx,
              "valid TLBRD produced wrong TLBIDX");
    expect_eq(dut->csr_tlbehi_wdata, vppn << 13,
              "valid TLBRD produced wrong TLBEHI");
    expect_eq(dut->csr_tlbelo0_wdata,
              make_tlbelo(ppn0, true, 2, 3, true, true),
              "valid TLBRD produced wrong TLBELO0");
    expect_eq(dut->csr_tlbelo1_wdata,
              make_tlbelo(ppn1, true, 1, 1, false, true),
              "valid TLBRD produced wrong TLBELO1");
    expect_eq(dut->csr_asid_wdata,
              (old_asid & ~ASID_MASK) | entry_asid,
              "valid TLBRD produced wrong ASID");
    expect(!dut->wr_valid && !dut->inv_valid,
           "TLBRD asserted an unrelated side effect");
    finish_commit();

    constexpr uint32_t invalid_rob_idx = 18;
    constexpr uint32_t invalid_tlbidx = 0x2d000002;
    constexpr uint32_t invalid_asid = 0x000a03ab;
    dut->csr_tlbidx = invalid_tlbidx;
    dut->csr_asid = invalid_asid;
    set_read_entry(false, 0x7ffff, 0x3ff, true, 31,
                   0xfffff, 0xfffff, 3, 3, 3, 3,
                   true, true, true, true);
    issue_tlbrd(invalid_rob_idx, 2);
    accept_response(invalid_rob_idx);

    dut->commit_valid = 1;
    dut->commit_rob_idx = invalid_rob_idx;
    eval();
    const uint32_t invalid_idx_expected =
        (invalid_tlbidx & ~(TLBIDX_NE_MASK | TLBIDX_PS_MASK)) |
        TLBIDX_NE_MASK;
    expect(dut->csr_update_valid,
           "invalid TLBRD did not update TLB CSRs");
    expect_eq(dut->csr_update_mask, CSR_MASK_ALL_TLB,
              "invalid TLBRD did not select all TLB CSRs");
    expect_eq(dut->csr_tlbidx_wdata, invalid_idx_expected,
              "invalid TLBRD did not set NE and clear PS");
    expect_eq(dut->csr_tlbehi_wdata, 0,
              "invalid TLBRD did not clear TLBEHI");
    expect_eq(dut->csr_tlbelo0_wdata, 0,
              "invalid TLBRD did not clear TLBELO0");
    expect_eq(dut->csr_tlbelo1_wdata, 0,
              "invalid TLBRD did not clear TLBELO1");
    expect_eq(dut->csr_asid_wdata, invalid_asid & ~ASID_MASK,
              "invalid TLBRD did not clear ASID field");
    finish_commit();
}

void set_write_csrs(uint32_t tlbidx, uint32_t tlbehi,
                    uint32_t tlbelo0, uint32_t tlbelo1,
                    uint32_t asid) {
    dut->csr_tlbidx = tlbidx;
    dut->csr_tlbehi = tlbehi;
    dut->csr_tlbelo0 = tlbelo0;
    dut->csr_tlbelo1 = tlbelo1;
    dut->csr_asid = asid;
}

void test_tlbwr_snapshot_and_enable() {
    reset();
    constexpr uint32_t rob_idx = 21;
    const uint32_t tlbidx = make_tlbidx(3, 22, false);
    constexpr uint32_t tlbehi = 0x81234000;
    const uint32_t tlbelo0 =
        make_tlbelo(0x12345, true, 2, 3, true, true);
    const uint32_t tlbelo1 =
        make_tlbelo(0x54321, false, 1, 1, false, true);
    constexpr uint32_t asid = 0x000a0155;

    set_write_csrs(tlbidx, tlbehi, tlbelo0, tlbelo1, asid);
    issue_non_search(TLB_CMD_WRITE, rob_idx);
    set_write_csrs(0, 0, 0, 0, 0);
    accept_response(rob_idx);

    dut->commit_valid = 1;
    dut->commit_rob_idx = rob_idx;
    eval();
    expect(dut->wr_valid, "TLBWR did not write at commit");
    expect_eq(dut->wr_idx, 3, "TLBWR index mismatch");
    expect(dut->wr_e, "TLBWR ignored clear TLBIDX.NE");
    expect_eq(dut->wr_vppn, tlbehi >> 13, "TLBWR VPPN mismatch");
    expect_eq(dut->wr_asid, asid & ASID_MASK,
              "TLBWR ASID mismatch");
    expect(!dut->wr_g, "TLBWR global bit must be ELO0.G && ELO1.G");
    expect_eq(dut->wr_ps, 22, "TLBWR page size mismatch");
    expect_eq(dut->wr_ppn0, 0x12345, "TLBWR PPN0 mismatch");
    expect_eq(dut->wr_ppn1, 0x54321, "TLBWR PPN1 mismatch");
    expect_eq(dut->wr_mat0, 2, "TLBWR MAT0 mismatch");
    expect_eq(dut->wr_mat1, 1, "TLBWR MAT1 mismatch");
    expect_eq(dut->wr_plv0, 3, "TLBWR PLV0 mismatch");
    expect_eq(dut->wr_plv1, 1, "TLBWR PLV1 mismatch");
    expect(dut->wr_d0 && !dut->wr_d1,
           "TLBWR dirty attributes mismatch");
    expect(dut->wr_v0 && dut->wr_v1,
           "TLBWR valid attributes mismatch");
    expect(!dut->inv_valid && !dut->csr_update_valid,
           "TLBWR asserted an unrelated side effect");
    finish_commit();

    constexpr uint32_t disabled_rob_idx = 22;
    set_write_csrs(make_tlbidx(1, 12, true), 0x40000000,
                   tlbelo0, tlbelo1, asid);
    issue_non_search(TLB_CMD_WRITE, disabled_rob_idx);
    accept_response(disabled_rob_idx);
    dut->commit_valid = 1;
    dut->commit_rob_idx = disabled_rob_idx;
    eval();
    expect(dut->wr_valid && !dut->wr_e,
           "TLBWR with TLBIDX.NE did not disable the entry");
    finish_commit();
}

uint32_t commit_fill(uint32_t rob_idx) {
    issue_non_search(TLB_CMD_FILL, rob_idx);
    accept_response(rob_idx);
    dut->commit_valid = 1;
    dut->commit_rob_idx = rob_idx;
    eval();
    expect(dut->wr_valid, "TLBFILL did not write at commit");
    expect(dut->wr_e,
           "TLBFILL must create an enabled entry during refill");
    expect(!dut->inv_valid && !dut->csr_update_valid,
           "TLBFILL asserted an unrelated side effect");
    const uint32_t index = dut->wr_idx;
    finish_commit();
    return index;
}

void test_tlbfill_round_robin_and_flush() {
    reset();
    const uint32_t entries = dut->config_num_entries;
    expect(entries > 1, "TLBFILL test requires more than one entry");

    set_write_csrs(make_tlbidx(0, 12, true), 0x60000000,
                   make_tlbelo(0x11111, true, 1, 0, true, true),
                   make_tlbelo(0x22222, true, 2, 3, true, true),
                   0x000a0033);

    const uint32_t first = commit_fill(25);
    expect(first < entries, "TLBFILL selected an out-of-range index");

    issue_non_search(TLB_CMD_FILL, 26);
    accept_response(26);
    dut->flush_pending = 1;
    eval();
    expect_no_side_effects(
        "flushed TLBFILL wrote an entry or advanced visibly");
    tick();
    dut->flush_pending = 0;
    eval();
    expect(dut->req_ready, "flush did not release TLBFILL");

    uint32_t expected = (first + 1) % entries;
    for (uint32_t step = 0; step < entries; ++step) {
        const uint32_t observed = commit_fill(27 + step);
        expect_eq(observed, expected,
                  "TLBFILL replacement pointer did not advance/wrap");
        expected = (expected + 1) % entries;
    }
}

void test_matching_commit_beats_flush() {
    reset();
    constexpr uint32_t rob_idx = 37;
    dut->req_inv_op = 6;
    dut->req_inv_asid = 0x2a;
    dut->req_inv_vaddr = 0x70002000;
    issue_non_search(TLB_CMD_INV, rob_idx);
    accept_response(rob_idx);

    dut->commit_valid = 1;
    dut->commit_rob_idx = rob_idx;
    dut->flush_pending = 1;
    eval();
    expect(dut->inv_valid,
           "matching commit was incorrectly suppressed by flush");
    expect_eq(dut->inv_op, 6,
              "commit/flush priority corrupted INVTLB op");
    finish_commit();
}

}  // namespace

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    dut = new Vtlb_ctrl_test_top;
    sim_time = 0;
    checks = 0;

    test_reset_backpressure_and_invtlb();
    test_flush_cancels_pending_command();
    test_tlbsrch_hit_and_miss();
    test_flush_cancels_search_response();
    test_tlbrd_valid_and_invalid();
    test_tlbwr_snapshot_and_enable();
    test_tlbfill_round_robin_and_flush();
    test_matching_commit_beats_flush();

    std::printf("[PASS] tlb_ctrl NUM_ENTRIES=%u: %d checks\n",
                dut->config_num_entries, checks);
    delete dut;
    return 0;
}
