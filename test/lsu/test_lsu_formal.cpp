#include "Vlsu_formal_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

#include <cstdint>

namespace {

constexpr int kWaitCycles = 16;

void clear_inputs(Vlsu_formal_test_top* dut) {
    dut->dis0_valid = 0;
    dut->dis0_fire = 0;
    dut->dis0_is_load = 0;
    dut->dis0_is_store = 0;
    dut->dis0_rob_idx = 0;
    dut->dis0_pdst = 0;
    dut->dis0_mem_size = 2;
    dut->dis0_mem_signed = 1;
    dut->dis1_valid = 0;
    dut->dis1_fire = 0;
    dut->dis1_is_load = 0;
    dut->dis1_is_store = 0;
    dut->dis1_rob_idx = 0;
    dut->dis1_pdst = 0;
    dut->dis1_mem_size = 2;
    dut->dis1_mem_signed = 1;
    dut->agen_valid = 0;
    dut->agen_is_load = 0;
    dut->agen_is_store = 0;
    dut->agen_idx = 0;
    dut->agen_addr = 0;
    dut->dgen_valid = 0;
    dut->dgen_idx = 0;
    dut->dgen_data = 0;
    dut->commit_valid = 0;
    dut->commit_is_load = 0;
    dut->commit_is_store = 0;
    dut->commit_idx = 0;
    dut->rob_head_idx = 0;
    dut->dmem_req_ready = 0;
    dut->dmem_resp_valid = 0;
    dut->dmem_resp_is_store = 0;
    dut->dmem_resp_data = 0;
    dut->dmem_resp_idx = 0;
    dut->flush_pipeline = 0;
}

void present_address(Vlsu_formal_test_top* dut, bool store, unsigned tag,
                     uint32_t addr) {
    dut->agen_valid = 1;
    dut->agen_is_load = store ? 0 : 1;
    dut->agen_is_store = store ? 1 : 0;
    dut->agen_idx = tag;
    dut->agen_addr = addr;
    eval_cycle(dut);
    dut->agen_valid = 0;
    dut->agen_is_load = 0;
    dut->agen_is_store = 0;
    dut->eval();
}

void present_store_data(Vlsu_formal_test_top* dut, unsigned tag,
                        uint32_t data) {
    dut->dgen_valid = 1;
    dut->dgen_idx = tag;
    dut->dgen_data = data;
    eval_cycle(dut);
    dut->dgen_valid = 0;
    dut->eval();
}

void wait_for_store_clear(Vlsu_formal_test_top* dut, unsigned rob) {
    for(int cycle = 0; cycle < kWaitCycles; ++cycle) {
        dut->eval();
        if(dut->clr_bsy_valid && dut->clr_bsy_rob_idx == rob) {
            eval_cycle(dut);
            return;
        }
        eval_cycle(dut);
    }
    expect_true("formal LSU store clears ROB busy", false);
}

void commit(Vlsu_formal_test_top* dut, bool store, unsigned tag) {
    dut->commit_valid = 1;
    dut->commit_is_load = store ? 0 : 1;
    dut->commit_is_store = store ? 1 : 0;
    dut->commit_idx = tag;
    eval_cycle(dut);
    dut->commit_valid = 0;
    dut->commit_is_load = 0;
    dut->commit_is_store = 0;
    dut->eval();
}

void wait_for_request(Vlsu_formal_test_top* dut, bool store) {
    for(int cycle = 0; cycle < kWaitCycles; ++cycle) {
        dut->eval();
        if(dut->dmem_req_valid && dut->dmem_req_is_store == store)
            return;
        eval_cycle(dut);
    }
    expect_true(store ? "formal LSU produces store request"
                      : "formal LSU produces load request",
                false);
}

void test_dispatch_arbiter_and_response(Vlsu_formal_test_top* dut) {
    clear_inputs(dut);
    reset_dut(dut);

    dut->dis0_valid = 1;
    dut->dis0_is_load = 1;
    dut->dis0_rob_idx = 1;
    dut->dis0_pdst = 5;
    dut->dis1_valid = 1;
    dut->dis1_is_store = 1;
    dut->dis1_rob_idx = 2;
    dut->eval();

    expect_eq("formal load preview ready", dut->dis0_ready, 1);
    expect_eq("formal store preview ready", dut->dis1_ready, 1);
    const unsigned load_tag = dut->dis0_ldq_idx;
    const unsigned store_tag = dut->dis1_stq_idx;

    for(int cycle = 0; cycle < 2; ++cycle) {
        eval_cycle(dut);
        expect_eq("formal load preview does not allocate", dut->ldq_empty, 1);
        expect_eq("formal store preview does not allocate", dut->stq_empty, 1);
        expect_eq("formal load preview tag stable",
                  dut->dis0_ldq_idx, load_tag);
        expect_eq("formal store preview tag stable",
                  dut->dis1_stq_idx, store_tag);
    }

    dut->dis0_fire = 1;
    dut->dis1_fire = 1;
    eval_cycle(dut);
    dut->dis0_valid = 0;
    dut->dis0_fire = 0;
    dut->dis1_valid = 0;
    dut->dis1_fire = 0;
    dut->eval();
    expect_eq("formal load fire allocates LDQ", dut->ldq_empty, 0);
    expect_eq("formal store fire allocates STQ", dut->stq_empty, 0);

    present_address(dut, false, load_tag, 0x1000);
    wait_for_request(dut, false);
    expect_eq("initial arbitration selects load address",
              dut->dmem_req_addr, 0x1000);
    expect_eq("initial arbitration selects load tag",
              dut->dmem_req_idx, load_tag);

    // Cross an edge while stalled so the arbiter locks the load source.
    eval_cycle(dut);
    present_address(dut, true, store_tag, 0x2000);
    present_store_data(dut, store_tag, 0x89abcdef);
    wait_for_store_clear(dut, 2);
    commit(dut, true, store_tag);

    for(int cycle = 0; cycle < 3; ++cycle) {
        dut->eval();
        expect_eq("locked request remains a load",
                  dut->dmem_req_is_store, 0);
        expect_eq("locked load remains valid", dut->dmem_req_valid, 1);
        expect_eq("locked load address remains stable",
                  dut->dmem_req_addr, 0x1000);
        expect_eq("locked load tag remains stable",
                  dut->dmem_req_idx, load_tag);
        eval_cycle(dut);
    }

    dut->dmem_req_ready = 1;
    eval_cycle(dut);
    dut->dmem_req_ready = 0;
    dut->eval();

    // A successful load changes prefer_store, so the waiting store goes next.
    wait_for_request(dut, true);
    expect_eq("priority flip selects store address",
              dut->dmem_req_addr, 0x2000);
    expect_eq("priority flip selects store tag",
              dut->dmem_req_idx, store_tag);
    expect_eq("formal store data", dut->dmem_req_data, 0x89abcdef);
    expect_eq("formal word store mask", dut->dmem_req_mask, 0xf);

    dut->dmem_req_ready = 1;
    eval_cycle(dut);
    dut->dmem_req_ready = 0;
    dut->eval();

    dut->dmem_resp_valid = 1;
    dut->dmem_resp_is_store = 1;
    dut->dmem_resp_idx = store_tag;
    dut->eval();
    expect_eq("store ack does not create load writeback",
              dut->load_wb_valid, 0);
    eval_cycle(dut);
    dut->dmem_resp_valid = 0;
    dut->eval();

    dut->dmem_resp_valid = 1;
    dut->dmem_resp_is_store = 0;
    dut->dmem_resp_idx = load_tag;
    dut->dmem_resp_data = 0x12345678;
    dut->eval();
    expect_eq("load response writes back", dut->load_wb_valid, 1);
    expect_eq("load response data", dut->load_wb_data, 0x12345678);
    expect_eq("load response ROB", dut->load_wb_rob_idx, 1);
    expect_eq("load response tag", dut->load_wb_ldq_idx, load_tag);
    eval_cycle(dut);
    dut->dmem_resp_valid = 0;
    dut->eval();

    commit(dut, false, load_tag);
    expect_eq("formal load queue drains", dut->ldq_empty, 1);
    expect_eq("formal store queue drains", dut->stq_empty, 1);
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vlsu_formal_test_top;

    test_dispatch_arbiter_and_response(dut);

    pass("lsu_formal");
    delete dut;
    return 0;
}
