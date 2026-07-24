#include "Vlsu_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"
#include <cstdint>

namespace {

constexpr unsigned kLdqSlotMask = 15;
constexpr int kWaitCycles = 12;

void clear_inputs(Vlsu_test_top* dut) {
    dut->ldq_enq_valid = 0;
    dut->ldq_enq_rob_idx = 0;
    dut->ldq_enq_pdst = 0;
    dut->ldq_enq_ldst = 0;
    dut->ldq_enq_br_mask = 0;
    dut->load_agen_valid = 0;
    dut->load_agen_idx = 0;
    dut->load_agen_addr = 0;
    dut->dmem_req_ready = 0;
    dut->dmem_resp_valid = 0;
    dut->dmem_resp_idx = 0;
    dut->dmem_resp_data = 0;
    dut->ldq_commit_valid = 0;
    dut->ldq_commit_idx = 0;
    dut->resolve_mask = 0;
    dut->mispredict_mask = 0;
    dut->br_mispredict = 0;
    dut->flush_pipeline = 0;
}

void reset_case(Vlsu_test_top* dut) {
    clear_inputs(dut);
    reset_dut(dut);
}

unsigned enqueue_load(Vlsu_test_top* dut, unsigned rob_idx,
                      unsigned pdst, unsigned ldst,
                      unsigned br_mask = 0) {
    dut->ldq_enq_valid = 1;
    dut->ldq_enq_rob_idx = rob_idx;
    dut->ldq_enq_pdst = pdst;
    dut->ldq_enq_ldst = ldst;
    dut->ldq_enq_br_mask = br_mask;
    dut->eval();
    expect_true("LDQ accepts load", dut->ldq_enq_ready);
    const unsigned idx = dut->ldq_enq_idx;
    eval_cycle(dut);
    dut->ldq_enq_valid = 0;
    dut->eval();
    return idx;
}

void present_address(Vlsu_test_top* dut, unsigned idx, uint32_t addr) {
    dut->load_agen_valid = 1;
    dut->load_agen_idx = idx;
    dut->load_agen_addr = addr;
    eval_cycle(dut);
    dut->load_agen_valid = 0;
    dut->eval();
}

void wait_for_request(Vlsu_test_top* dut) {
    for (int cycle = 0; cycle < kWaitCycles; ++cycle) {
        dut->eval();
        if (dut->dmem_req_valid)
            return;
        eval_cycle(dut);
    }
    expect_true("load request becomes valid", false);
}

void accept_request(Vlsu_test_top* dut, unsigned idx, uint32_t addr) {
    wait_for_request(dut);
    expect_eq("request identity", dut->dmem_req_idx, idx);
    expect_eq("request address", dut->dmem_req_addr, addr);
    dut->dmem_req_ready = 1;
    eval_cycle(dut);
    dut->dmem_req_ready = 0;
    dut->eval();
}

void respond(Vlsu_test_top* dut, unsigned idx, uint32_t data,
             bool expect_writeback, unsigned rob_idx = 0,
             unsigned pdst = 0, unsigned ldst = 0) {
    dut->dmem_resp_valid = 1;
    dut->dmem_resp_idx = idx;
    dut->dmem_resp_data = data;
    dut->eval();

    expect_eq("response writeback validity",
              dut->load_wb_valid, expect_writeback ? 1 : 0);
    if (expect_writeback) {
        expect_eq("writeback data", dut->load_wb_data, data);
        expect_eq("writeback ROB identity", dut->load_wb_rob_idx, rob_idx);
        expect_eq("writeback physical destination", dut->load_wb_pdst, pdst);
        expect_eq("writeback logical destination", dut->load_wb_ldst, ldst);
        expect_eq("writeback LDQ identity", dut->load_wb_ldq_idx, idx);
    }

    eval_cycle(dut);
    dut->dmem_resp_valid = 0;
    dut->eval();
    expect_eq("writeback is a response pulse", dut->load_wb_valid, 0);
}

void commit_load(Vlsu_test_top* dut, unsigned idx) {
    dut->ldq_commit_valid = 1;
    dut->ldq_commit_idx = idx;
    eval_cycle(dut);
    dut->ldq_commit_valid = 0;
    dut->eval();
}

void pulse_resolve(Vlsu_test_top* dut, unsigned mask) {
    dut->resolve_mask = mask;
    eval_cycle(dut);
    dut->resolve_mask = 0;
    dut->eval();
}

void pulse_mispredict(Vlsu_test_top* dut, unsigned mask) {
    dut->br_mispredict = 1;
    dut->mispredict_mask = mask;
    eval_cycle(dut);
    dut->br_mispredict = 0;
    dut->mispredict_mask = 0;
    dut->eval();
}

void pulse_flush(Vlsu_test_top* dut) {
    dut->flush_pipeline = 1;
    eval_cycle(dut);
    dut->flush_pipeline = 0;
    dut->eval();
}

void test_normal_load(Vlsu_test_top* dut) {
    reset_case(dut);
    const unsigned idx = enqueue_load(dut, 5, 33, 7);
    present_address(dut, idx, 0x1004);
    accept_request(dut, idx, 0x1004);
    respond(dut, idx, 0x12345678, true, 5, 33, 7);
    commit_load(dut, idx);
}

void test_request_backpressure(Vlsu_test_top* dut) {
    reset_case(dut);
    const unsigned idx = enqueue_load(dut, 6, 34, 8);
    present_address(dut, idx, 0x2008);
    wait_for_request(dut);

    const unsigned held_idx = dut->dmem_req_idx;
    const uint32_t held_addr = dut->dmem_req_addr;
    for (int cycle = 0; cycle < 3; ++cycle) {
        expect_eq("request remains valid under backpressure",
                  dut->dmem_req_valid, 1);
        expect_eq("request tag remains stable", dut->dmem_req_idx, held_idx);
        expect_eq("request address remains stable",
                  dut->dmem_req_addr, held_addr);
        eval_cycle(dut);
    }

    dut->dmem_req_ready = 1;
    eval_cycle(dut);
    dut->dmem_req_ready = 0;
    dut->eval();
    respond(dut, idx, 0x87654321, true, 6, 34, 8);
    commit_load(dut, idx);
}

void test_late_wrong_path_response(Vlsu_test_top* dut) {
    reset_case(dut);
    const unsigned idx = enqueue_load(dut, 9, 35, 10, 0x1);
    present_address(dut, idx, 0x300c);
    accept_request(dut, idx, 0x300c);

    pulse_mispredict(dut, 0x1);
    respond(dut, idx, 0xdeadbeef, false);
}

void test_resolved_tag_reuse(Vlsu_test_top* dut) {
    reset_case(dut);
    const unsigned idx = enqueue_load(dut, 11, 36, 12, 0x2);
    pulse_resolve(dut, 0x2);

    // Reusing the resolved branch bit must not invalidate the older load.
    pulse_mispredict(dut, 0x2);
    present_address(dut, idx, 0x4010);
    accept_request(dut, idx, 0x4010);
    respond(dut, idx, 0xcafebabe, true, 11, 36, 12);
    commit_load(dut, idx);
}

void test_full_queue_flush(Vlsu_test_top* dut) {
    reset_case(dut);
    const unsigned stale_idx = enqueue_load(dut, 15, 38, 16);
    present_address(dut, stale_idx, 0x4800);
    accept_request(dut, stale_idx, 0x4800);

    for (unsigned entry = 1; entry < 16; ++entry)
        enqueue_load(dut, 15 + entry, 1 + entry, 1 + entry);

    dut->ldq_enq_valid = 1;
    dut->eval();
    expect_eq("full LDQ applies allocation backpressure",
              dut->ldq_enq_ready, 0);
    dut->ldq_enq_valid = 0;

    pulse_flush(dut);
    dut->ldq_enq_valid = 1;
    dut->eval();
    expect_eq("pipeline flush releases LDQ capacity",
              dut->ldq_enq_ready, 1);
    dut->ldq_enq_valid = 0;
    dut->eval();

    respond(dut, stale_idx, 0xfeedface, false);
}

void test_stale_response_after_slot_reuse(Vlsu_test_top* dut) {
    reset_case(dut);
    const unsigned stale_idx = enqueue_load(dut, 13, 37, 14, 0x4);
    const unsigned stale_slot = stale_idx & kLdqSlotMask;
    present_address(dut, stale_idx, 0x5000);
    accept_request(dut, stale_idx, 0x5000);
    pulse_mispredict(dut, 0x4);

    bool found_reuse = false;
    for (unsigned attempt = 0; attempt < 64 && !found_reuse; ++attempt) {
        const unsigned rob_idx = 20 + (attempt & 31);
        const unsigned pdst = 1 + (attempt % 47);
        const unsigned ldst = 1 + (attempt % 31);
        const unsigned idx = enqueue_load(dut, rob_idx, pdst, ldst);

        if ((idx & kLdqSlotMask) == stale_slot) {
            expect_true("reused slot has a new generation", idx != stale_idx);
            found_reuse = true;
            const uint32_t addr = 0x6000 + attempt * 4;
            present_address(dut, idx, addr);
            accept_request(dut, idx, addr);

            respond(dut, stale_idx, 0xbad0bad0, false);
            respond(dut, idx, 0x13579bdf, true, rob_idx, pdst, ldst);
            commit_load(dut, idx);
        } else {
            const uint32_t addr = 0x7000 + attempt * 4;
            present_address(dut, idx, addr);
            accept_request(dut, idx, addr);
            respond(dut, idx, attempt, true, rob_idx, pdst, ldst);
            commit_load(dut, idx);
        }
    }

    expect_true("LDQ physical slot is eventually reused", found_reuse);
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vlsu_test_top;
    clear_inputs(dut);
    reset_dut(dut);

    expect_true("LSU RTL implementation is present", dut->rtl_present);

    test_normal_load(dut);
    test_request_backpressure(dut);
    test_late_wrong_path_response(dut);
    test_resolved_tag_reuse(dut);
    test_full_queue_flush(dut);
    test_stale_response_after_slot_reuse(dut);

    pass("lsu");
    delete dut;
    return 0;
}
