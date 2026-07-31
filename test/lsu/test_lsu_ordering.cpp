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
    dut->st_commit_valid = 0;
    dut->st_commit_idx = 0;
    dut->store_req_ready = 0;
    dut->store_ack_valid = 0;
    dut->store_ack_idx = 0;
    dut->ld_agen_valid = 0;
    dut->ld_agen_idx = 0;
    dut->ld_agen_addr = 0;
    dut->ld_commit_valid = 0;
    dut->ld_commit_idx = 0;
    dut->load_req_ready = 0;
    dut->load_resp_valid = 0;
    dut->load_resp_idx = 0;
    dut->load_resp_data = 0;
    dut->rob_head_idx = 0;
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

void wait_for_store_clear(Vlsu_ordering_test_top* dut, unsigned rob) {
    for(int cycle = 0; cycle < kWaitCycles; ++cycle) {
        dut->eval();
        if(dut->st_clr_bsy_valid) {
            expect_eq("store busy clear keeps ROB identity",
                      dut->st_clr_bsy_rob_idx, rob);
            return;
        }
        eval_cycle(dut);
    }
    expect_true("completed store clears ROB busy", false);
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

void commit_load(Vlsu_ordering_test_top* dut, unsigned tag) {
    dut->ld_commit_valid = 1;
    dut->ld_commit_idx = tag;
    eval_cycle(dut);
    dut->ld_commit_valid = 0;
    dut->eval();
}

void commit_store(Vlsu_ordering_test_top* dut, unsigned tag) {
    dut->st_commit_valid = 1;
    dut->st_commit_idx = tag;
    eval_cycle(dut);
    dut->st_commit_valid = 0;
    dut->eval();
}

void wait_for_store_request(Vlsu_ordering_test_top* dut, unsigned tag,
                            unsigned rob, uint32_t addr, uint32_t data,
                            unsigned mask) {
    for(int cycle = 0; cycle < kWaitCycles; ++cycle) {
        dut->eval();
        if(dut->store_req_valid) {
            expect_eq("store request tag", dut->store_req_idx, tag);
            expect_eq("store request ROB", dut->store_req_rob_idx, rob);
            expect_eq("store request address", dut->store_req_addr, addr);
            expect_eq("store request data", dut->store_req_data, data);
            expect_eq("store request mask", dut->store_req_mask, mask);
            return;
        }
        eval_cycle(dut);
    }
    expect_true("committed store request becomes valid", false);
}

void accept_store_request(Vlsu_ordering_test_top* dut) {
    dut->store_req_ready = 1;
    eval_cycle(dut);
    dut->store_req_ready = 0;
    dut->eval();
    expect_eq("accepted store request leaves output",
              dut->store_req_valid, 0);
}

void acknowledge_store(Vlsu_ordering_test_top* dut, unsigned tag) {
    dut->store_ack_valid = 1;
    dut->store_ack_idx = tag;
    eval_cycle(dut);
    dut->store_ack_valid = 0;
    dut->eval();
}

void pulse_flush(Vlsu_ordering_test_top* dut) {
    dut->flush_pipeline = 1;
    eval_cycle(dut);
    dut->flush_pipeline = 0;
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

    // Keep slot 0 occupied by an address-less byte load. The forwarded word
    // load then uses a nonzero slot, catching response-slot/forward-slot mixups.
    enqueue_load(dut, 39, store_tag + 1, 0, false);
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

void test_store_commit_and_backpressure(Vlsu_ordering_test_top* dut) {
    reset_case(dut);
    const unsigned store_tag = enqueue_store(dut, 5);
    present_store_address(dut, store_tag, 0x7000);
    present_store_data(dut, store_tag, 0x11223344);
    wait_for_store_clear(dut, 5);
    for(int cycle = 0; cycle < 3; ++cycle) {
        expect_eq("uncommitted store cannot access memory",
                  dut->store_req_valid, 0);
        eval_cycle(dut);
    }

    commit_store(dut, store_tag);
    wait_for_store_request(
        dut, store_tag, 5, 0x7000, 0x11223344, 0xf);

    const uint32_t held_addr = dut->store_req_addr;
    const uint32_t held_data = dut->store_req_data;
    const unsigned held_mask = dut->store_req_mask;
    for(int cycle = 0; cycle < 3; ++cycle) {
        expect_eq("stalled store request remains valid",
                  dut->store_req_valid, 1);
        expect_eq("stalled store address remains stable",
                  dut->store_req_addr, held_addr);
        expect_eq("stalled store data remains stable",
                  dut->store_req_data, held_data);
        expect_eq("stalled store mask remains stable",
                  dut->store_req_mask, held_mask);
        eval_cycle(dut);
    }

    pulse_flush(dut);
    expect_eq("flush preserves committed store request",
              dut->store_req_valid, 1);
    expect_eq("committed store keeps STQ nonempty", dut->stq_empty, 0);

    accept_store_request(dut);
    acknowledge_store(dut, store_tag);
    expect_eq("acknowledged store drains STQ", dut->stq_empty, 1);
}

void test_rob_wrap_ordering(Vlsu_ordering_test_top* dut) {
    reset_case(dut);
    dut->rob_head_idx = 60;

    const unsigned older_store = enqueue_store(dut, 62);
    present_store_address(dut, older_store, 0x7400);
    present_store_data(dut, older_store, 0xa1b2c3d4);
    const unsigned wrapped_load =
        enqueue_load(dut, 1, older_store + 1);
    present_load_address(dut, wrapped_load, 0x7400);
    wait_for_forward(dut, wrapped_load, 1, 0xa1b2c3d4);

    reset_case(dut);
    dut->rob_head_idx = 60;
    enqueue_store(dut, 1);
    const unsigned older_load = enqueue_load(dut, 62, 0);
    present_load_address(dut, older_load, 0x7500);
    accept_and_respond(
        dut, older_load, 0x7500, 0x2468ace0, 0x2468ace0, 62);
}

void test_concurrent_queue_requests(Vlsu_ordering_test_top* dut) {
    reset_case(dut);
    const unsigned store_tag = enqueue_store(dut, 10);
    present_store_address(dut, store_tag, 0x8000);
    present_store_data(dut, store_tag, 0x55667788);
    wait_for_store_clear(dut, 10);
    eval_cycle(dut);
    commit_store(dut, store_tag);
    wait_for_store_request(
        dut, store_tag, 10, 0x8000, 0x55667788, 0xf);

    const unsigned load_tag = enqueue_load(dut, 11, store_tag + 1);
    present_load_address(dut, load_tag, 0x9000);
    wait_for_load_request(dut, load_tag, 0x9000);

    for(int cycle = 0; cycle < 3; ++cycle) {
        expect_eq("load waits independently under memory backpressure",
                  dut->load_req_valid, 1);
        expect_eq("store waits independently under memory backpressure",
                  dut->store_req_valid, 1);
        expect_eq("concurrent load address remains stable",
                  dut->load_req_addr, 0x9000);
        expect_eq("concurrent store address remains stable",
                  dut->store_req_addr, 0x8000);
        eval_cycle(dut);
    }

    dut->load_req_ready = 1;
    eval_cycle(dut);
    dut->load_req_ready = 0;
    dut->eval();
    expect_eq("accepting load does not consume store",
              dut->store_req_valid, 1);

    dut->load_resp_valid = 1;
    dut->load_resp_idx = load_tag;
    dut->load_resp_data = 0x13579bdf;
    dut->eval();
    expect_eq("concurrent load response writes back",
              dut->load_wb_valid, 1);
    expect_eq("concurrent load response data",
              dut->load_wb_data, 0x13579bdf);
    eval_cycle(dut);
    dut->load_resp_valid = 0;
    dut->eval();

    accept_store_request(dut);
    acknowledge_store(dut, store_tag);
    expect_eq("concurrent store eventually drains", dut->stq_empty, 1);
}

void test_flush_rejects_late_load_response(
    Vlsu_ordering_test_top* dut) {
    reset_case(dut);
    const unsigned load_tag = enqueue_load(dut, 20, 0);
    present_load_address(dut, load_tag, 0xa000);
    wait_for_load_request(dut, load_tag, 0xa000);
    dut->load_req_ready = 1;
    eval_cycle(dut);
    dut->load_req_ready = 0;
    dut->eval();

    pulse_flush(dut);
    expect_eq("flush empties LDQ", dut->ldq_empty, 1);

    dut->load_resp_valid = 1;
    dut->load_resp_idx = load_tag;
    dut->load_resp_data = 0xdeadbeef;
    dut->eval();
    expect_eq("late flushed load response cannot write back",
              dut->load_wb_valid, 0);
    eval_cycle(dut);
    dut->load_resp_valid = 0;
    dut->eval();
}

void test_blocked_low_slot_does_not_starve_older_load(
    Vlsu_ordering_test_top* dut) {
    reset_case(dut);

    const unsigned dummy_load = enqueue_load(dut, 1, 0);
    const unsigned older_load = enqueue_load(dut, 2, 0);
    for(unsigned rob = 3; rob <= 16; ++rob)
        enqueue_load(dut, rob, 0);

    present_load_address(dut, dummy_load, 0xb000);
    accept_and_respond(
        dut, dummy_load, 0xb000, 0x11112222, 0x11112222, 1);
    dut->load_resp_valid = 0;
    dut->eval();
    commit_load(dut, dummy_load);

    const unsigned first_store = enqueue_store(dut, 17);
    present_store_address(dut, first_store, 0xa000);
    present_store_data(dut, first_store, 0x33334444);
    const unsigned second_store = enqueue_store(dut, 18);
    present_store_address(dut, second_store, 0xa000);
    present_store_data(dut, second_store, 0x55556666);

    const unsigned younger_load = enqueue_load(dut, 19, 0);
    expect_eq("younger blocked load reuses physical slot zero",
              younger_load & 0xf, 0);
    present_load_address(dut, younger_load, 0xa000);
    present_load_address(dut, older_load, 0xc000);

    bool saw_older_request = false;
    for(int cycle = 0; cycle < kWaitCycles; ++cycle) {
        dut->eval();
        if(dut->load_req_valid) {
            expect_eq("fair load request tag",
                      dut->load_req_idx, older_load);
            expect_eq("fair load request address",
                      dut->load_req_addr, 0xc000);
            saw_older_request = true;
            break;
        }
        eval_cycle(dut);
    }
    expect_true("blocked low slot does not starve older load",
                saw_older_request);
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vlsu_ordering_test_top;

    if(argc != 2) {
        std::fprintf(stderr,
                     "usage: %s unknown|non_alias|non_overlap|forward|data_wait"
                     "|store_commit|rob_wrap|concurrent|flush_late|slot_fair\n",
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
    else if(std::strcmp(argv[1], "store_commit") == 0)
        test_store_commit_and_backpressure(dut);
    else if(std::strcmp(argv[1], "rob_wrap") == 0)
        test_rob_wrap_ordering(dut);
    else if(std::strcmp(argv[1], "concurrent") == 0)
        test_concurrent_queue_requests(dut);
    else if(std::strcmp(argv[1], "flush_late") == 0)
        test_flush_rejects_late_load_response(dut);
    else if(std::strcmp(argv[1], "slot_fair") == 0)
        test_blocked_low_slot_does_not_starve_older_load(dut);
    else {
        std::fprintf(stderr, "unknown test group: %s\n", argv[1]);
        delete dut;
        return 2;
    }

    pass(argv[1]);
    delete dut;
    return 0;
}
