#include "Vlsu_ordering_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

#include <cstdint>
#include <cstring>

namespace {

constexpr int kWaitCycles = 12;

void clear_inputs(Vlsu_ordering_test_top* dut) {
    dut->st_enq_valid = 0;
    dut->st_enq_rob_idx = 0;
    dut->st_enq_mem_size = 2;
    dut->ld_enq_valid = 0;
    dut->ld_enq_rob_idx = 0;
    dut->ld_enq_pdst = 0;
    dut->ld_enq_mem_size = 2;
    dut->ld_enq_mem_signed = 1;
    dut->ld_enq_stq_snapshot = 0;
    dut->st_agen_valid = 0;
    dut->st_agen_idx = 0;
    dut->st_agen_addr = 0;
    dut->st_dgen_valid = 0;
    dut->st_dgen_idx = 0;
    dut->st_dgen_data = 0;
    dut->ld_agen_valid = 0;
    dut->ld_agen_idx = 0;
    dut->ld_agen_addr = 0;
    dut->load_req_ready = 0;
    dut->load_resp_valid = 0;
    dut->load_resp_idx = 0;
    dut->load_resp_data = 0;
    dut->flush_pipeline = 0;
}

void reset_case(Vlsu_ordering_test_top* dut) {
    clear_inputs(dut);
    reset_dut(dut);
}

unsigned enqueue_store(Vlsu_ordering_test_top* dut, unsigned rob,
                       unsigned mem_size = 2) {
    dut->st_enq_valid = 1;
    dut->st_enq_rob_idx = rob;
    dut->st_enq_mem_size = mem_size;
    dut->eval();
    expect_eq("store enqueue ready", dut->st_enq_ready, 1);
    const unsigned tag = dut->st_enq_idx;
    eval_cycle(dut);
    dut->st_enq_valid = 0;
    dut->eval();
    return tag;
}

unsigned enqueue_load(Vlsu_ordering_test_top* dut, unsigned rob,
                      unsigned stq_snapshot, unsigned mem_size = 2,
                      bool mem_signed = true) {
    dut->ld_enq_valid = 1;
    dut->ld_enq_rob_idx = rob;
    dut->ld_enq_pdst = 1 + (rob % 47);
    dut->ld_enq_mem_size = mem_size;
    dut->ld_enq_mem_signed = mem_signed;
    dut->ld_enq_stq_snapshot = stq_snapshot;
    dut->eval();
    expect_eq("load enqueue ready", dut->ld_enq_ready, 1);
    const unsigned tag = dut->ld_enq_idx;
    eval_cycle(dut);
    dut->ld_enq_valid = 0;
    dut->eval();
    return tag;
}

void present_store_address(Vlsu_ordering_test_top* dut, unsigned tag,
                           uint32_t addr) {
    dut->st_agen_valid = 1;
    dut->st_agen_idx = tag;
    dut->st_agen_addr = addr;
    eval_cycle(dut);
    dut->st_agen_valid = 0;
    dut->eval();
}

void present_store_data(Vlsu_ordering_test_top* dut, unsigned tag,
                        uint32_t data) {
    dut->st_dgen_valid = 1;
    dut->st_dgen_idx = tag;
    dut->st_dgen_data = data;
    eval_cycle(dut);
    dut->st_dgen_valid = 0;
    dut->eval();
}

void present_load_address(Vlsu_ordering_test_top* dut, unsigned tag,
                          uint32_t addr) {
    dut->ld_agen_valid = 1;
    dut->ld_agen_idx = tag;
    dut->ld_agen_addr = addr;
    eval_cycle(dut);
    dut->ld_agen_valid = 0;
    dut->eval();
}

void expect_no_load_request(Vlsu_ordering_test_top* dut, int cycles,
                            const char* message) {
    for(int cycle = 0; cycle < cycles; ++cycle) {
        expect_eq(message, dut->load_req_valid, 0);
        eval_cycle(dut);
    }
}

void wait_for_load_request(Vlsu_ordering_test_top* dut, unsigned tag,
                           uint32_t addr) {
    for(int cycle = 0; cycle < kWaitCycles; ++cycle) {
        dut->eval();
        if(dut->load_req_valid) {
            expect_eq("load request tag", dut->load_req_idx, tag);
            expect_eq("load request address", dut->load_req_addr, addr);
            return;
        }
        eval_cycle(dut);
    }
    expect_true("non-alias load request becomes valid", false);
}

void accept_and_respond(Vlsu_ordering_test_top* dut, unsigned tag,
                        uint32_t addr, uint32_t bus_data,
                        uint32_t expected_data, unsigned rob) {
    wait_for_load_request(dut, tag, addr);
    dut->load_req_ready = 1;
    eval_cycle(dut);
    dut->load_req_ready = 0;
    dut->load_resp_valid = 1;
    dut->load_resp_idx = tag;
    dut->load_resp_data = bus_data;
    dut->eval();
    expect_eq("memory response writes load back", dut->load_wb_valid, 1);
    expect_eq("memory response ROB", dut->load_wb_rob_idx, rob);
    expect_eq("memory response data", dut->load_wb_data, expected_data);
    eval_cycle(dut);
    dut->load_resp_valid = 0;
    dut->eval();
}

void wait_for_forward(Vlsu_ordering_test_top* dut, unsigned tag,
                      unsigned rob, uint32_t data) {
    for(int cycle = 0; cycle < kWaitCycles; ++cycle) {
        dut->eval();
        if(dut->load_wb_valid) {
            expect_eq("forwarded load tag", dut->load_wb_ldq_idx, tag);
            expect_eq("forwarded load ROB", dut->load_wb_rob_idx, rob);
            expect_eq("forwarded load data", dut->load_wb_data, data);
            return;
        }
        eval_cycle(dut);
    }
    expect_true("matching store data forwards to load", false);
}

void test_unknown_store_blocks_load(Vlsu_ordering_test_top* dut) {
    reset_case(dut);
    const unsigned store_tag = enqueue_store(dut, 10);
    const unsigned load_tag = enqueue_load(dut, 11, store_tag + 1);
    present_load_address(dut, load_tag, 0x1000);

    expect_no_load_request(
        dut, 4, "load waits while older store address is unknown");
}

void test_known_non_alias_store_allows_load(
    Vlsu_ordering_test_top* dut) {
    reset_case(dut);
    const unsigned store_tag = enqueue_store(dut, 20);
    present_store_address(dut, store_tag, 0x2000);
    present_store_data(dut, store_tag, 0xaaaaaaaa);

    const unsigned load_tag = enqueue_load(dut, 21, store_tag + 1);
    present_load_address(dut, load_tag, 0x3000);
    accept_and_respond(
        dut, load_tag, 0x3000, 0x12345678, 0x12345678, 21);
}

void test_known_non_overlap_store_allows_load(
    Vlsu_ordering_test_top* dut) {
    reset_case(dut);
    const unsigned store_tag = enqueue_store(dut, 30, 0);
    present_store_address(dut, store_tag, 0x4000);
    present_store_data(dut, store_tag, 0x000000aa);

    const unsigned load_tag =
        enqueue_load(dut, 31, store_tag + 1, 0, false);
    present_load_address(dut, load_tag, 0x4001);
    accept_and_respond(
        dut, load_tag, 0x4001, 0x00005500, 0x00000055, 31);
}

void test_matching_store_forwards(Vlsu_ordering_test_top* dut) {
    reset_case(dut);
    const unsigned store_tag = enqueue_store(dut, 40);
    present_store_address(dut, store_tag, 0x5000);
    present_store_data(dut, store_tag, 0x89abcdef);

    const unsigned load_tag = enqueue_load(dut, 41, store_tag + 1);
    present_load_address(dut, load_tag, 0x5000);
    wait_for_forward(dut, load_tag, 41, 0x89abcdef);
}

void test_matching_store_waits_for_data(
    Vlsu_ordering_test_top* dut) {
    reset_case(dut);
    const unsigned store_tag = enqueue_store(dut, 50);
    present_store_address(dut, store_tag, 0x6000);

    const unsigned load_tag = enqueue_load(dut, 51, store_tag + 1);
    present_load_address(dut, load_tag, 0x6000);
    for(int cycle = 0; cycle < 4; ++cycle) {
        expect_eq("load does not write back before store data",
                  dut->load_wb_valid, 0);
        eval_cycle(dut);
    }

    present_store_data(dut, store_tag, 0x76543210);
    wait_for_forward(dut, load_tag, 51, 0x76543210);
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vlsu_ordering_test_top;

    if(argc != 2) {
        std::fprintf(stderr,
                     "usage: %s unknown|non_alias|non_overlap|forward|data_wait\n",
                     argv[0]);
        delete dut;
        return 2;
    }

    if(std::strcmp(argv[1], "unknown") == 0)
        test_unknown_store_blocks_load(dut);
    else if(std::strcmp(argv[1], "non_alias") == 0)
        test_known_non_alias_store_allows_load(dut);
    else if(std::strcmp(argv[1], "non_overlap") == 0)
        test_known_non_overlap_store_allows_load(dut);
    else if(std::strcmp(argv[1], "forward") == 0)
        test_matching_store_forwards(dut);
    else if(std::strcmp(argv[1], "data_wait") == 0)
        test_matching_store_waits_for_data(dut);
    else {
        std::fprintf(stderr, "unknown test group: %s\n", argv[1]);
        delete dut;
        return 2;
    }

    pass(argv[1]);
    delete dut;
    return 0;
}
