#include "Vload_queue_multi_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"
#include <cstdint>
#include <cstring>

namespace {

constexpr unsigned kSlotMask = 15;
constexpr int kWaitCycles = 12;

struct Tags {
    unsigned lane0;
    unsigned lane1;
};

void clear_inputs(Vload_queue_multi_test_top* dut) {
    dut->enq0_valid = 0;
    dut->enq0_rob_idx = 0;
    dut->enq0_pdst = 0;
    dut->enq0_br_mask = 0;
    dut->enq0_mem_size = 2;
    dut->enq0_mem_signed = 1;
    dut->enq1_valid = 0;
    dut->enq1_rob_idx = 0;
    dut->enq1_pdst = 0;
    dut->enq1_br_mask = 0;
    dut->enq1_mem_size = 2;
    dut->enq1_mem_signed = 1;
    dut->agen_valid_in = 0;
    dut->agen_idx_in = 0;
    dut->agen_addr_in = 0;
    dut->dmem_req_ready = 0;
    dut->dmem_resp_valid = 0;
    dut->dmem_resp_idx = 0;
    dut->dmem_resp_data = 0;
    dut->commit0_valid = 0;
    dut->commit0_idx = 0;
    dut->commit1_valid = 0;
    dut->commit1_idx = 0;
    dut->resolve_mask = 0;
    dut->mispredict_mask = 0;
    dut->br_mispredict = 0;
    dut->flush_pipeline = 0;
}

void reset_case(Vload_queue_multi_test_top* dut) {
    clear_inputs(dut);
    reset_dut(dut);
}

Tags enqueue_pair(Vload_queue_multi_test_top* dut, unsigned rob0,
                  unsigned rob1, unsigned mask0 = 0,
                  unsigned mask1 = 0) {
    dut->enq0_valid = 1;
    dut->enq0_rob_idx = rob0;
    dut->enq0_pdst = 1 + (rob0 % 47);
    dut->enq0_br_mask = mask0;
    dut->enq0_mem_size = 2;
    dut->enq0_mem_signed = 1;
    dut->enq1_valid = 1;
    dut->enq1_rob_idx = rob1;
    dut->enq1_pdst = 1 + (rob1 % 47);
    dut->enq1_br_mask = mask1;
    dut->enq1_mem_size = 2;
    dut->enq1_mem_signed = 1;
    dut->eval();
    expect_eq("dual enqueue lane 0 ready", dut->enq0_ready, 1);
    expect_eq("dual enqueue lane 1 ready", dut->enq1_ready, 1);
    Tags tags{static_cast<unsigned>(dut->enq0_idx),
              static_cast<unsigned>(dut->enq1_idx)};
    eval_cycle(dut);
    dut->enq0_valid = 0;
    dut->enq1_valid = 0;
    dut->eval();
    return tags;
}

unsigned enqueue_single(Vload_queue_multi_test_top* dut, unsigned rob,
                        unsigned mem_size = 2, bool mem_signed = true,
                        unsigned br_mask = 0) {
    dut->enq0_valid = 1;
    dut->enq0_rob_idx = rob;
    dut->enq0_pdst = 1 + (rob % 47);
    dut->enq0_br_mask = br_mask;
    dut->enq0_mem_size = mem_size;
    dut->enq0_mem_signed = mem_signed;
    dut->eval();
    expect_eq("single enqueue ready", dut->enq0_ready, 1);
    const unsigned tag = dut->enq0_idx;
    eval_cycle(dut);
    dut->enq0_valid = 0;
    dut->eval();
    return tag;
}

void present_address(Vload_queue_multi_test_top* dut, unsigned tag,
                     uint32_t addr) {
    dut->agen_valid_in = 1;
    dut->agen_idx_in = tag;
    dut->agen_addr_in = addr;
    eval_cycle(dut);
    dut->agen_valid_in = 0;
    dut->eval();
}

void wait_for_request(Vload_queue_multi_test_top* dut) {
    for(int cycle = 0; cycle < kWaitCycles; ++cycle) {
        dut->eval();
        if(dut->dmem_req_valid)
            return;
        eval_cycle(dut);
    }
    expect_true("load request becomes valid", false);
}

void accept_request(Vload_queue_multi_test_top* dut, unsigned tag,
                    uint32_t addr) {
    wait_for_request(dut);
    expect_eq("request tag", dut->dmem_req_idx, tag);
    expect_eq("request address", dut->dmem_req_addr, addr);
    dut->dmem_req_ready = 1;
    eval_cycle(dut);
    dut->dmem_req_ready = 0;
    dut->eval();
}

void respond(Vload_queue_multi_test_top* dut, unsigned tag, uint32_t data,
             bool expected, unsigned rob = 0) {
    dut->dmem_resp_valid = 1;
    dut->dmem_resp_idx = tag;
    dut->dmem_resp_data = data;
    dut->eval();
    expect_eq("response writeback validity", dut->load_wb_valid,
              expected ? 1 : 0);
    if(expected) {
        expect_eq("response writeback tag", dut->load_wb_ldq_idx, tag);
        expect_eq("response writeback ROB", dut->load_wb_rob_idx, rob);
        expect_eq("response writeback data", dut->load_wb_data, data);
    }
    eval_cycle(dut);
    dut->dmem_resp_valid = 0;
    dut->eval();
}

void respond_formatted(Vload_queue_multi_test_top* dut, unsigned tag,
                       uint32_t bus_data, uint32_t expected_data,
                       unsigned rob) {
    dut->dmem_resp_valid = 1;
    dut->dmem_resp_idx = tag;
    dut->dmem_resp_data = bus_data;
    dut->eval();
    expect_eq("formatted response writeback valid", dut->load_wb_valid, 1);
    expect_eq("formatted response writeback tag", dut->load_wb_ldq_idx, tag);
    expect_eq("formatted response writeback ROB", dut->load_wb_rob_idx, rob);
    expect_eq("formatted response writeback data",
              dut->load_wb_data, expected_data);
    eval_cycle(dut);
    dut->dmem_resp_valid = 0;
    dut->eval();
}

void commit_single(Vload_queue_multi_test_top* dut, unsigned tag) {
    dut->commit0_valid = 1;
    dut->commit0_idx = tag;
    eval_cycle(dut);
    dut->commit0_valid = 0;
    dut->eval();
}

void commit_pair(Vload_queue_multi_test_top* dut, unsigned tag0,
                 unsigned tag1) {
    dut->commit0_valid = 1;
    dut->commit0_idx = tag0;
    dut->commit1_valid = 1;
    dut->commit1_idx = tag1;
    eval_cycle(dut);
    dut->commit0_valid = 0;
    dut->commit1_valid = 0;
    dut->eval();
}

void test_dual_enqueue_and_commit(Vload_queue_multi_test_top* dut) {
    reset_case(dut);
    const Tags tags = enqueue_pair(dut, 10, 11);
    expect_true("dual enqueue returns distinct tags", tags.lane0 != tags.lane1);

    present_address(dut, tags.lane0, 0x1000);
    accept_request(dut, tags.lane0, 0x1000);
    respond(dut, tags.lane0, 0x11111111, true, 10);

    present_address(dut, tags.lane1, 0x1004);
    accept_request(dut, tags.lane1, 0x1004);
    respond(dut, tags.lane1, 0x22222222, true, 11);

    commit_pair(dut, tags.lane0, tags.lane1);
    expect_eq("dual commit empties LDQ", dut->ldq_empty, 1);
}

void run_load_format_case(Vload_queue_multi_test_top* dut, unsigned rob,
                          unsigned mem_size, bool mem_signed, uint32_t addr,
                          uint32_t bus_data, uint32_t expected_data) {
    reset_case(dut);
    const unsigned tag =
        enqueue_single(dut, rob, mem_size, mem_signed);
    present_address(dut, tag, addr);
    accept_request(dut, tag, addr);
    respond_formatted(dut, tag, bus_data, expected_data, rob);
    commit_single(dut, tag);
    expect_eq("formatted load commits and drains LDQ", dut->ldq_empty, 1);
}

void test_load_formats(Vload_queue_multi_test_top* dut) {
    constexpr uint32_t word = 0x80ff7f01;

    run_load_format_case(dut, 1, 0, true,  0x2000, word, 0x00000001);
    run_load_format_case(dut, 2, 0, true,  0x2001, word, 0x0000007f);
    run_load_format_case(dut, 3, 0, true,  0x2002, word, 0xffffffff);
    run_load_format_case(dut, 4, 0, true,  0x2003, word, 0xffffff80);

    run_load_format_case(dut, 5, 0, false, 0x2000, word, 0x00000001);
    run_load_format_case(dut, 6, 0, false, 0x2001, word, 0x0000007f);
    run_load_format_case(dut, 7, 0, false, 0x2002, word, 0x000000ff);
    run_load_format_case(dut, 8, 0, false, 0x2003, word, 0x00000080);

    run_load_format_case(dut, 9,  1, true,  0x3000, word, 0x00007f01);
    run_load_format_case(dut, 10, 1, true,  0x3002, word, 0xffff80ff);
    run_load_format_case(dut, 11, 1, false, 0x3000, word, 0x00007f01);
    run_load_format_case(dut, 12, 1, false, 0x3002, word, 0x000080ff);

    run_load_format_case(dut, 13, 2, true, 0x4000, word, word);
}

void test_request_backpressure_stability(
    Vload_queue_multi_test_top* dut) {
    reset_case(dut);
    const unsigned tag = enqueue_single(dut, 50, 2, true, 1);
    present_address(dut, tag, 0x5000);
    wait_for_request(dut);

    expect_eq("stalled request initial branch mask",
              dut->dmem_req_br_mask, 1);
    expect_eq("stalled request initial size", dut->dmem_req_mem_size, 2);
    expect_eq("stalled request initial signed bit",
              dut->dmem_req_mem_signed, 1);

    dut->resolve_mask = 1;
    eval_cycle(dut);
    dut->resolve_mask = 0;
    dut->eval();

    expect_eq("stalled request remains valid", dut->dmem_req_valid, 1);
    expect_eq("stalled request tag remains stable", dut->dmem_req_idx, tag);
    expect_eq("stalled request address remains stable",
              dut->dmem_req_addr, 0x5000);
    expect_eq("stalled request uop remains stable",
              dut->dmem_req_br_mask, 1);
    expect_eq("stalled request size remains stable",
              dut->dmem_req_mem_size, 2);
    expect_eq("stalled request signed bit remains stable",
              dut->dmem_req_mem_signed, 1);

    accept_request(dut, tag, 0x5000);
    respond(dut, tag, 0x12345678, true, 50);
    commit_single(dut, tag);
}

void test_partial_capacity(Vload_queue_multi_test_top* dut) {
    reset_case(dut);
    for(unsigned pair = 0; pair < 7; ++pair)
        enqueue_pair(dut, pair * 2, pair * 2 + 1);
    enqueue_single(dut, 14);

    dut->enq0_valid = 1;
    dut->enq1_valid = 1;
    dut->eval();
    expect_eq("one free slot accepts lane 0", dut->enq0_ready, 1);
    expect_eq("one free slot stalls lane 1", dut->enq1_ready, 0);
    eval_cycle(dut);
    dut->enq0_valid = 0;
    dut->enq1_valid = 0;

    dut->enq0_valid = 1;
    dut->enq1_valid = 1;
    dut->eval();
    expect_eq("full queue stalls lane 0", dut->enq0_ready, 0);
    expect_eq("full queue stalls lane 1", dut->enq1_ready, 0);
    dut->enq0_valid = 0;
    dut->enq1_valid = 0;

    dut->flush_pipeline = 1;
    eval_cycle(dut);
    dut->flush_pipeline = 0;
    dut->eval();
    expect_eq("flush empties full LDQ", dut->ldq_empty, 1);
}

void test_stale_generation_inputs(Vload_queue_multi_test_top* dut) {
    reset_case(dut);
    Tags first{};
    for(unsigned pair = 0; pair < 8; ++pair) {
        const Tags tags = enqueue_pair(dut, pair * 2, pair * 2 + 1);
        if(pair == 0)
            first = tags;
    }

    commit_pair(dut, first.lane0, first.lane1);
    const Tags reused = enqueue_pair(dut, 40, 41);
    expect_eq("lane 0 physical slot reused",
              reused.lane0 & kSlotMask, first.lane0 & kSlotMask);
    expect_eq("lane 1 physical slot reused",
              reused.lane1 & kSlotMask, first.lane1 & kSlotMask);
    expect_true("lane 0 generation changed", reused.lane0 != first.lane0);
    expect_true("lane 1 generation changed", reused.lane1 != first.lane1);

    commit_pair(dut, first.lane0, first.lane1);
    dut->enq0_valid = 1;
    dut->enq1_valid = 1;
    dut->eval();
    expect_eq("stale commit does not free lane 0", dut->enq0_ready, 0);
    expect_eq("stale commit does not free lane 1", dut->enq1_ready, 0);
    dut->enq0_valid = 0;
    dut->enq1_valid = 0;

    present_address(dut, first.lane0, 0x3000);
    for(int cycle = 0; cycle < 3; ++cycle) {
        expect_eq("stale AGEN creates no request", dut->dmem_req_valid, 0);
        eval_cycle(dut);
    }

    present_address(dut, reused.lane0, 0x4000);
    accept_request(dut, reused.lane0, 0x4000);
    respond(dut, first.lane0, 0xdeadbeef, false);
    respond(dut, reused.lane0, 0x12345678, true, 40);
}

void test_mispredict_with_dual_enqueue(Vload_queue_multi_test_top* dut) {
    reset_case(dut);
    dut->br_mispredict = 1;
    dut->mispredict_mask = 1;
    const Tags tags = enqueue_pair(dut, 30, 31, 1, 0);
    dut->br_mispredict = 0;
    dut->mispredict_mask = 0;
    dut->eval();

    present_address(dut, tags.lane1, 0x5000);
    accept_request(dut, tags.lane1, 0x5000);
    respond(dut, tags.lane1, 0xabcdef01, true, 31);

    dut->commit0_valid = 1;
    dut->commit0_idx = tags.lane1;
    eval_cycle(dut);
    dut->commit0_valid = 0;
    dut->eval();
    expect_eq("only surviving lane commits", dut->ldq_empty, 1);
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vload_queue_multi_test_top;

    if(argc == 2 && std::strcmp(argv[1], "formats") == 0) {
        test_load_formats(dut);
        pass("load_queue_formats");
        delete dut;
        return 0;
    }

    if(argc == 2 && std::strcmp(argv[1], "backpressure") == 0) {
        test_request_backpressure_stability(dut);
        pass("load_queue_backpressure");
        delete dut;
        return 0;
    }

    test_dual_enqueue_and_commit(dut);
    test_load_formats(dut);
    test_request_backpressure_stability(dut);
    test_partial_capacity(dut);
    test_stale_generation_inputs(dut);
    test_mispredict_with_dual_enqueue(dut);

    pass("load_queue_multi");
    delete dut;
    return 0;
}
