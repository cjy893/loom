#include "Vdivider_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <random>

namespace {

constexpr unsigned kAcceptTimeout = 8;
constexpr unsigned kResponseTimeout = 64;

struct Request {
    bool signed_op;
    bool remainder;
    uint32_t dividend;
    uint32_t divisor;
    const char* name;
};

[[noreturn]] void fail_value(const Request& req, uint32_t actual,
                             uint32_t expected) {
    std::fprintf(
        stderr,
        "FAIL: %s: signed=%u remainder=%u dividend=0x%08x "
        "divisor=0x%08x got=0x%08x expected=0x%08x\n",
        req.name, req.signed_op, req.remainder, req.dividend, req.divisor,
        actual, expected);
    std::exit(1);
}

int64_t signed32(uint32_t value) {
    if ((value & 0x80000000U) != 0)
        return static_cast<int64_t>(value) - (INT64_C(1) << 32);
    return value;
}

uint32_t reference_result(const Request& req) {
    if (req.divisor == 0)
        return req.remainder ? req.dividend : UINT32_MAX;

    if (!req.signed_op) {
        return req.remainder ? req.dividend % req.divisor
                             : req.dividend / req.divisor;
    }

    const int64_t dividend = signed32(req.dividend);
    const int64_t divisor = signed32(req.divisor);
    const int64_t result =
        req.remainder ? dividend % divisor : dividend / divisor;
    return static_cast<uint32_t>(result);
}

void clear_inputs(Vdivider_test_top* dut) {
    dut->req_valid = 0;
    dut->req_signed = 0;
    dut->req_remainder = 0;
    dut->req_dividend = 0;
    dut->req_divisor = 0;
    dut->kill = 0;
    dut->resp_ready = 1;
}

void drive_request(Vdivider_test_top* dut, const Request& req) {
    dut->req_signed = req.signed_op;
    dut->req_remainder = req.remainder;
    dut->req_dividend = req.dividend;
    dut->req_divisor = req.divisor;
    dut->req_valid = 1;
}

unsigned accept_request(Vdivider_test_top* dut, const Request& req) {
    drive_request(dut, req);

    for (unsigned cycle = 0; cycle <= kAcceptTimeout; ++cycle) {
        dut->eval();
        if (dut->req_ready) {
            eval_cycle(dut);
            dut->req_valid = 0;
            dut->eval();
            return cycle;
        }
        eval_cycle(dut);
    }

    std::fprintf(stderr, "FAIL: %s: request was not accepted within %u cycles\n",
                 req.name, kAcceptTimeout);
    std::exit(1);
}

unsigned wait_for_response(Vdivider_test_top* dut, const Request& req) {
    for (unsigned cycle = 0; cycle <= kResponseTimeout; ++cycle) {
        dut->eval();
        if (dut->resp_valid)
            return cycle;
        eval_cycle(dut);
    }

    std::fprintf(stderr, "FAIL: %s: response did not arrive within %u cycles\n",
                 req.name, kResponseTimeout);
    std::exit(1);
}

unsigned execute(Vdivider_test_top* dut, const Request& req) {
    dut->resp_ready = 1;
    accept_request(dut, req);
    const unsigned latency = wait_for_response(dut, req);
    const uint32_t expected = reference_result(req);
    const uint32_t actual = dut->resp_data;
    if (actual != expected)
        fail_value(req, actual, expected);

    eval_cycle(dut);
    dut->eval();
    expect_eq("response clears after handshake", dut->resp_valid, 0);
    return latency;
}

void test_directed_arithmetic(Vdivider_test_top* dut) {
    const Request cases[] = {
        {false, false, 0x00000000, 0x00000001, "unsigned zero quotient"},
        {false, true,  0x00000000, 0x00000001, "unsigned zero remainder"},
        {false, false, 0x00000001, 0x00000001, "unsigned one quotient"},
        {false, true,  0x00000001, 0x00000001, "unsigned one remainder"},
        {false, false, 0xffffffff, 0x00000001, "unsigned maximum by one"},
        {false, true,  0xffffffff, 0x00000001, "unsigned maximum remainder"},
        {false, false, 0xffffffff, 0xffffffff, "unsigned equal operands"},
        {false, true,  0xffffffff, 0xffffffff, "unsigned equal remainder"},
        {false, false, 0x12345678, 0x00001000, "unsigned power-of-two"},
        {false, true,  0x12345678, 0x00001000, "unsigned power-of-two remainder"},
        {false, false, 0x00000007, 0x00000064, "unsigned dividend smaller"},
        {false, true,  0x00000007, 0x00000064, "unsigned smaller remainder"},

        {true, false, uint32_t(-100), 7, "signed negative dividend"},
        {true, true,  uint32_t(-100), 7, "signed negative remainder"},
        {true, false, 100, uint32_t(-7), "signed negative divisor"},
        {true, true,  100, uint32_t(-7), "signed positive remainder"},
        {true, false, uint32_t(-100), uint32_t(-7), "signed both negative"},
        {true, true,  uint32_t(-100), uint32_t(-7), "signed remainder sign"},
        {true, false, 0x80000000, 0xffffffff, "signed overflow quotient"},
        {true, true,  0x80000000, 0xffffffff, "signed overflow remainder"},
        {true, false, 0x80000000, 0x00000001, "signed minimum by one"},
        {true, true,  0x80000000, 0x00000001, "signed minimum remainder"},

        {false, false, 0x12345678, 0, "unsigned divide by zero"},
        {false, true,  0x12345678, 0, "unsigned remainder by zero"},
        {true, false,  0x87654321, 0, "signed divide by zero"},
        {true, true,   0x87654321, 0, "signed remainder by zero"},
        {false, false, 0, 0, "zero divided by zero quotient"},
        {false, true,  0, 0, "zero divided by zero remainder"},
    };

    for (const Request& req : cases)
        execute(dut, req);
}

void test_response_backpressure(Vdivider_test_top* dut) {
    const Request req{
        true, true, uint32_t(-123456789), 97, "response backpressure"};

    dut->resp_ready = 0;
    accept_request(dut, req);
    wait_for_response(dut, req);

    const uint32_t expected = reference_result(req);
    if (dut->resp_data != expected)
        fail_value(req, dut->resp_data, expected);

    for (unsigned cycle = 0; cycle < 5; ++cycle) {
        expect_eq("stalled response remains valid", dut->resp_valid, 1);
        expect_eq("stalled response data remains stable", dut->resp_data,
                  expected);
        expect_eq("no second request while response is pending",
                  dut->req_ready, 0);
        eval_cycle(dut);
    }

    dut->resp_ready = 1;
    eval_cycle(dut);
    dut->eval();
    expect_eq("accepted stalled response clears", dut->resp_valid, 0);
}

void test_busy_backpressure(Vdivider_test_top* dut) {
    const Request first{
        false, false, 0xfedcba98, 3, "busy first request"};
    const Request second{
        false, false, 0x12345678, 11, "busy second request"};

    dut->resp_ready = 1;
    accept_request(dut, first);
    drive_request(dut, second);
    dut->eval();
    expect_eq("active divider rejects a second request", dut->req_ready, 0);
    dut->req_valid = 0;

    wait_for_response(dut, first);
    const uint32_t expected = reference_result(first);
    if (dut->resp_data != expected)
        fail_value(first, dut->resp_data, expected);
    eval_cycle(dut);
}

void wait_until_ready(Vdivider_test_top* dut, const char* name) {
    for (unsigned cycle = 0; cycle <= kAcceptTimeout; ++cycle) {
        dut->eval();
        if (dut->req_ready)
            return;
        eval_cycle(dut);
    }
    std::fprintf(stderr, "FAIL: %s: divider did not return to ready\n", name);
    std::exit(1);
}

void test_kill(Vdivider_test_top* dut) {
    const Request inflight{
        false, false, 0xffffffff, 3, "kill in-flight request"};

    dut->resp_ready = 1;
    accept_request(dut, inflight);
    eval_cycle(dut);
    dut->kill = 1;
    eval_cycle(dut);
    dut->kill = 0;
    dut->eval();

    expect_eq("kill suppresses in-flight response", dut->resp_valid, 0);
    wait_until_ready(dut, "kill in-flight request");

    for (unsigned cycle = 0; cycle < 4; ++cycle) {
        expect_eq("killed request never responds", dut->resp_valid, 0);
        eval_cycle(dut);
    }

    const Request pending{
        true, false, uint32_t(-7654321), 37, "kill pending response"};
    dut->resp_ready = 0;
    accept_request(dut, pending);
    wait_for_response(dut, pending);
    dut->kill = 1;
    eval_cycle(dut);
    dut->kill = 0;
    dut->resp_ready = 1;
    dut->eval();

    expect_eq("kill clears a pending response", dut->resp_valid, 0);
    wait_until_ready(dut, "kill pending response");
}

void test_random_arithmetic(Vdivider_test_top* dut) {
    std::mt19937 random(0x4c413332U);
    unsigned min_latency = kResponseTimeout;
    unsigned max_latency = 0;

    for (unsigned i = 0; i < 512; ++i) {
        const uint32_t dividend = random();
        uint32_t divisor = random();
        if ((i & 31U) == 0)
            divisor = 0;

        for (unsigned signed_op = 0; signed_op < 2; ++signed_op) {
            for (unsigned remainder = 0; remainder < 2; ++remainder) {
                const Request req{
                    signed_op != 0,
                    remainder != 0,
                    dividend,
                    divisor,
                    "random arithmetic",
                };
                const unsigned latency = execute(dut, req);
                if (latency < min_latency)
                    min_latency = latency;
                if (latency > max_latency)
                    max_latency = latency;
            }
        }
    }

    std::printf("divider random latency: min=%u max=%u cycles\n",
                min_latency, max_latency);
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vdivider_test_top;
    clear_inputs(dut);
    reset_dut(dut);

    expect_eq("no response after reset", dut->resp_valid, 0);
    expect_eq("divider ready after reset", dut->req_ready, 1);

    test_directed_arithmetic(dut);
    test_response_backpressure(dut);
    test_busy_backpressure(dut);
    test_kill(dut);
    test_random_arithmetic(dut);

    pass("divider");
    delete dut;
    return 0;
}
