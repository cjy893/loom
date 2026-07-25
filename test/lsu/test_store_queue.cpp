#include "Vstore_queue_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

#include <array>
#include <cstdint>

namespace {

constexpr unsigned kSlotMask = 15;
constexpr int kWaitCycles = 16;

struct Tags {
    unsigned lane0;
    unsigned lane1;
};

void clear_inputs(Vstore_queue_test_top* dut) {
    dut->enq0_valid = 0;
    dut->enq0_rob_idx = 0;
    dut->enq0_br_mask = 0;
    dut->enq0_mem_size = 0;
    dut->enq1_valid = 0;
    dut->enq1_rob_idx = 0;
    dut->enq1_br_mask = 0;
    dut->enq1_mem_size = 0;
    dut->agen_valid_in = 0;
    dut->agen_idx_in = 0;
    dut->agen_addr_in = 0;
    dut->dgen_valid_in = 0;
    dut->dgen_idx_in = 0;
    dut->dgen_data_in = 0;
    dut->store_req_ready = 0;
    dut->store_ack_valid = 0;
    dut->store_ack_idx = 0;
    dut->commit0_valid = 0;
    dut->commit0_idx = 0;
    dut->commit1_valid = 0;
    dut->commit1_idx = 0;
    dut->resolve_mask = 0;
    dut->mispredict_mask = 0;
    dut->br_mispredict = 0;
    dut->flush_pipeline = 0;
}

void reset_case(Vstore_queue_test_top* dut) {
    clear_inputs(dut);
    reset_dut(dut);
}

Tags enqueue_pair(Vstore_queue_test_top* dut, unsigned rob0, unsigned rob1,
                  unsigned size0 = 2, unsigned size1 = 2,
                  unsigned mask0 = 0, unsigned mask1 = 0) {
    dut->enq0_valid = 1;
    dut->enq0_rob_idx = rob0;
    dut->enq0_mem_size = size0;
    dut->enq0_br_mask = mask0;
    dut->enq1_valid = 1;
    dut->enq1_rob_idx = rob1;
    dut->enq1_mem_size = size1;
    dut->enq1_br_mask = mask1;
    dut->eval();
    expect_eq("dual enqueue lane 0 ready", dut->enq0_ready, 1);
    expect_eq("dual enqueue lane 1 ready", dut->enq1_ready, 1);
    const Tags tags{static_cast<unsigned>(dut->enq0_idx),
                    static_cast<unsigned>(dut->enq1_idx)};
    eval_cycle(dut);
    dut->enq0_valid = 0;
    dut->enq1_valid = 0;
    dut->eval();
    return tags;
}

unsigned enqueue_single(Vstore_queue_test_top* dut, unsigned rob,
                        unsigned size = 2, unsigned mask = 0) {
    dut->enq0_valid = 1;
    dut->enq0_rob_idx = rob;
    dut->enq0_mem_size = size;
    dut->enq0_br_mask = mask;
    dut->eval();
    expect_eq("single enqueue ready", dut->enq0_ready, 1);
    const unsigned tag = dut->enq0_idx;
    eval_cycle(dut);
    dut->enq0_valid = 0;
    dut->eval();
    return tag;
}

void present_address(Vstore_queue_test_top* dut, unsigned tag,
                     uint32_t addr) {
    dut->agen_valid_in = 1;
    dut->agen_idx_in = tag;
    dut->agen_addr_in = addr;
    eval_cycle(dut);
    dut->agen_valid_in = 0;
    dut->eval();
}

void present_data(Vstore_queue_test_top* dut, unsigned tag, uint32_t data) {
    dut->dgen_valid_in = 1;
    dut->dgen_idx_in = tag;
    dut->dgen_data_in = data;
    eval_cycle(dut);
    dut->dgen_valid_in = 0;
    dut->eval();
}

void wait_for_clear(Vstore_queue_test_top* dut, unsigned rob) {
    for(int cycle = 0; cycle < kWaitCycles; ++cycle) {
        dut->eval();
        const bool found =
            (dut->clr0_valid && dut->clr0_rob_idx == rob) ||
            (dut->clr1_valid && dut->clr1_rob_idx == rob);
        if(found) {
            eval_cycle(dut);
            return;
        }
        eval_cycle(dut);
    }
    expect_true("store clears ROB busy", false);
}

void complete_store(Vstore_queue_test_top* dut, unsigned tag, unsigned rob,
                    uint32_t addr, uint32_t data, bool data_first = false) {
    if(data_first) {
        present_data(dut, tag, data);
        present_address(dut, tag, addr);
    } else {
        present_address(dut, tag, addr);
        present_data(dut, tag, data);
    }
    wait_for_clear(dut, rob);
}

void commit_single(Vstore_queue_test_top* dut, unsigned tag) {
    dut->commit0_valid = 1;
    dut->commit0_idx = tag;
    eval_cycle(dut);
    dut->commit0_valid = 0;
    dut->eval();
}

void commit_pair(Vstore_queue_test_top* dut, unsigned tag0, unsigned tag1) {
    dut->commit0_valid = 1;
    dut->commit0_idx = tag0;
    dut->commit1_valid = 1;
    dut->commit1_idx = tag1;
    eval_cycle(dut);
    dut->commit0_valid = 0;
    dut->commit1_valid = 0;
    dut->eval();
}

void wait_for_request(Vstore_queue_test_top* dut) {
    for(int cycle = 0; cycle < kWaitCycles; ++cycle) {
        dut->eval();
        if(dut->store_req_valid)
            return;
        eval_cycle(dut);
    }
    expect_true("store request becomes valid", false);
}

void check_request(Vstore_queue_test_top* dut, unsigned tag, unsigned rob,
                   uint32_t addr, uint32_t data, unsigned mask,
                   unsigned size) {
    expect_eq("store request valid", dut->store_req_valid, 1);
    expect_eq("store request tag", dut->store_req_idx, tag);
    expect_eq("store request ROB", dut->store_req_rob_idx, rob);
    expect_eq("store request address", dut->store_req_addr, addr);
    expect_eq("store request data", dut->store_req_data, data);
    expect_eq("store request mask", dut->store_req_mask, mask);
    expect_eq("store request size", dut->store_req_mem_size, size);
}

void accept_request(Vstore_queue_test_top* dut) {
    dut->store_req_ready = 1;
    eval_cycle(dut);
    dut->store_req_ready = 0;
    dut->eval();
    expect_eq("accepted request leaves output", dut->store_req_valid, 0);
}

void acknowledge(Vstore_queue_test_top* dut, unsigned tag) {
    dut->store_ack_valid = 1;
    dut->store_ack_idx = tag;
    eval_cycle(dut);
    dut->store_ack_valid = 0;
    dut->eval();
}

void expect_no_request(Vstore_queue_test_top* dut, int cycles,
                       const char* message) {
    for(int cycle = 0; cycle < cycles; ++cycle) {
        expect_eq(message, dut->store_req_valid, 0);
        eval_cycle(dut);
    }
}

void test_precommit_backpressure_and_word(Vstore_queue_test_top* dut) {
    reset_case(dut);
    const unsigned tag = enqueue_single(dut, 3, 2, 1);
    complete_store(dut, tag, 3, 0x1004, 0x89abcdef, true);
    expect_no_request(dut, 3, "store cannot request before commit");

    commit_single(dut, tag);
    wait_for_request(dut);
    check_request(dut, tag, 3, 0x1004, 0x89abcdef, 0xf, 2);
    const unsigned held_br_mask = dut->store_req_br_mask;

    dut->resolve_mask = 1;
    dut->flush_pipeline = 1;
    eval_cycle(dut);
    dut->resolve_mask = 0;
    dut->flush_pipeline = 0;
    dut->eval();
    check_request(dut, tag, 3, 0x1004, 0x89abcdef, 0xf, 2);
    expect_eq("stalled request uop remains stable",
              dut->store_req_br_mask, held_br_mask);
    expect_eq("flush preserves committed store", dut->stq_empty, 0);

    accept_request(dut);
    acknowledge(dut, tag);
    expect_eq("word store drains STQ", dut->stq_empty, 1);
}

void run_format_case(Vstore_queue_test_top* dut, unsigned rob,
                     unsigned size, uint32_t addr, uint32_t input_data,
                     uint32_t expected_data, unsigned expected_mask) {
    reset_case(dut);
    const unsigned tag = enqueue_single(dut, rob, size);
    complete_store(dut, tag, rob, addr, input_data);
    commit_single(dut, tag);
    wait_for_request(dut);
    check_request(dut, tag, rob, addr, expected_data, expected_mask, size);
    accept_request(dut);
    acknowledge(dut, tag);
    expect_eq("formatted store drains STQ", dut->stq_empty, 1);
}

void test_store_formats(Vstore_queue_test_top* dut) {
    run_format_case(dut, 10, 0, 0x2003, 0xaabbccdd, 0xdd000000, 0x8);
    run_format_case(dut, 11, 1, 0x3002, 0xaabbccdd, 0xccdd0000, 0xc);
}

void test_dual_commit_order_and_push_pop(Vstore_queue_test_top* dut) {
    reset_case(dut);
    const Tags first = enqueue_pair(dut, 20, 21);
    const unsigned third = enqueue_single(dut, 22);
    complete_store(dut, first.lane0, 20, 0x4000, 0x11111111);
    complete_store(dut, first.lane1, 21, 0x4004, 0x22222222);
    complete_store(dut, third, 22, 0x4008, 0x33333333);

    commit_pair(dut, first.lane0, first.lane1);
    wait_for_request(dut);
    check_request(dut, first.lane0, 20, 0x4000, 0x11111111, 0xf, 2);
    accept_request(dut);
    expect_no_request(dut, 2, "second store waits for first ack");

    dut->store_ack_valid = 1;
    dut->store_ack_idx = first.lane0;
    dut->commit0_valid = 1;
    dut->commit0_idx = third;
    eval_cycle(dut);
    dut->store_ack_valid = 0;
    dut->commit0_valid = 0;
    dut->eval();

    acknowledge(dut, first.lane0);
    expect_eq("stale ack does not empty STQ", dut->stq_empty, 0);
    wait_for_request(dut);
    check_request(dut, first.lane1, 21, 0x4004, 0x22222222, 0xf, 2);
    accept_request(dut);
    acknowledge(dut, first.lane1);

    wait_for_request(dut);
    check_request(dut, third, 22, 0x4008, 0x33333333, 0xf, 2);
    accept_request(dut);
    acknowledge(dut, third);
    expect_eq("ordered stores drain STQ", dut->stq_empty, 1);
}

void test_recovery(Vstore_queue_test_top* dut) {
    reset_case(dut);
    const Tags tags = enqueue_pair(dut, 30, 31, 2, 2, 1, 0);

    dut->br_mispredict = 1;
    dut->mispredict_mask = 1;
    dut->agen_valid_in = 1;
    dut->agen_idx_in = tags.lane0;
    dut->agen_addr_in = 0x5000;
    dut->dgen_valid_in = 1;
    dut->dgen_idx_in = tags.lane0;
    dut->dgen_data_in = 0xdeadbeef;
    eval_cycle(dut);
    dut->br_mispredict = 0;
    dut->mispredict_mask = 0;
    dut->agen_valid_in = 0;
    dut->dgen_valid_in = 0;

    commit_single(dut, tags.lane0);
    expect_no_request(dut, 2, "wrong-path store never requests");
    complete_store(dut, tags.lane1, 31, 0x5004, 0x12345678);
    commit_single(dut, tags.lane1);
    wait_for_request(dut);
    check_request(dut, tags.lane1, 31, 0x5004, 0x12345678, 0xf, 2);
    accept_request(dut);
    acknowledge(dut, tags.lane1);
    expect_eq("surviving store drains after recovery", dut->stq_empty, 1);

    enqueue_single(dut, 32);
    dut->flush_pipeline = 1;
    eval_cycle(dut);
    dut->flush_pipeline = 0;
    dut->eval();
    expect_eq("flush removes uncommitted store", dut->stq_empty, 1);
}

void test_stale_generation_inputs(Vstore_queue_test_top* dut) {
    reset_case(dut);
    std::array<unsigned, 16> tags{};
    for(unsigned pair = 0; pair < 8; ++pair) {
        const Tags allocated = enqueue_pair(dut, pair * 2, pair * 2 + 1);
        tags[pair * 2] = allocated.lane0;
        tags[pair * 2 + 1] = allocated.lane1;
    }

    dut->enq0_valid = 1;
    dut->enq1_valid = 1;
    dut->eval();
    expect_eq("full STQ stalls lane 0", dut->enq0_ready, 0);
    expect_eq("full STQ stalls lane 1", dut->enq1_ready, 0);
    dut->enq0_valid = 0;
    dut->enq1_valid = 0;

    complete_store(dut, tags[0], 0, 0x6000, 0x01020304);
    commit_single(dut, tags[0]);
    wait_for_request(dut);
    accept_request(dut);
    acknowledge(dut, tags[0]);

    dut->enq0_valid = 1;
    dut->enq1_valid = 1;
    dut->eval();
    expect_eq("one free STQ slot accepts lane 0", dut->enq0_ready, 1);
    expect_eq("one free STQ slot stalls lane 1", dut->enq1_ready, 0);
    dut->enq0_valid = 0;
    dut->enq1_valid = 0;

    dut->flush_pipeline = 1;
    eval_cycle(dut);
    dut->flush_pipeline = 0;
    dut->eval();
    expect_eq("flush clears remaining uncommitted stores", dut->stq_empty, 1);

    const unsigned reused = enqueue_single(dut, 40);
    expect_eq("physical STQ slot reused",
              reused & kSlotMask, tags[0] & kSlotMask);
    expect_true("STQ generation changes on reuse", reused != tags[0]);

    present_address(dut, tags[0], 0x7000);
    present_data(dut, tags[0], 0xdeadbeef);
    expect_eq("stale AGEN/DGEN do not clear busy lane 0", dut->clr0_valid, 0);
    expect_eq("stale AGEN/DGEN do not clear busy lane 1", dut->clr1_valid, 0);

    complete_store(dut, reused, 40, 0x7004, 0x55667788);
    commit_single(dut, tags[0]);
    expect_no_request(dut, 2, "stale commit creates no request");
    commit_single(dut, reused);
    wait_for_request(dut);
    check_request(dut, reused, 40, 0x7004, 0x55667788, 0xf, 2);
    accept_request(dut);

    acknowledge(dut, tags[0]);
    expect_eq("stale ack does not free reused entry", dut->stq_empty, 0);
    acknowledge(dut, reused);
    expect_eq("matching generation ack drains STQ", dut->stq_empty, 1);
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vstore_queue_test_top;

    test_precommit_backpressure_and_word(dut);
    test_store_formats(dut);
    test_dual_commit_order_and_push_pop(dut);
    test_recovery(dut);
    test_stale_generation_inputs(dut);

    pass("store_queue");
    delete dut;
    return 0;
}
