#include "Vsrt4_otfc_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <random>

namespace {

uint8_t encode_digit(int digit) {
    return static_cast<uint8_t>(digit) & 0x7U;
}

[[noreturn]] void fail_state(const char* name, int digit, uint32_t quotient,
                             uint32_t quotient_minus_one,
                             uint32_t expected) {
    std::fprintf(
        stderr,
        "FAIL: %s digit=%d Q=0x%08x QM=0x%08x "
        "expected_Q=0x%08x expected_QM=0x%08x\n",
        name, digit, quotient, quotient_minus_one,
        expected, expected - 1U);
    std::exit(1);
}

void check_state(Vsrt4_otfc_test_top* dut, const char* name, int digit,
                 uint32_t expected) {
    if (dut->quotient != expected ||
        dut->quotient_minus_one != expected - 1U) {
        fail_state(name, digit, dut->quotient,
                   dut->quotient_minus_one, expected);
    }
}

void clear_otfc(Vsrt4_otfc_test_top* dut) {
    dut->clear = 1;
    dut->step = 0;
    eval_cycle(dut);
    dut->clear = 0;
    dut->eval();
    check_state(dut, "clear", 0, 0);
}

uint32_t model_step(uint32_t quotient, int digit) {
    const int64_t next =
        static_cast<int64_t>(quotient) * 4 + digit;
    return static_cast<uint32_t>(next);
}

uint32_t apply_digit(Vsrt4_otfc_test_top* dut, uint32_t model, int digit) {
    dut->quotient_digit = encode_digit(digit);
    dut->step = 1;
    eval_cycle(dut);
    dut->step = 0;
    dut->eval();

    model = model_step(model, digit);
    check_state(dut, "OTFC step", digit, model);
    return model;
}

void test_single_digits(Vsrt4_otfc_test_top* dut) {
    const int digits[] = {-2, -1, 0, 1, 2};
    for (int digit : digits) {
        clear_otfc(dut);
        const uint32_t expected =
            static_cast<uint32_t>(digit);
        apply_digit(dut, 0, digit);
        check_state(dut, "single digit", digit, expected);
    }
}

void test_directed_sequences(Vsrt4_otfc_test_top* dut) {
    const int sequences[][8] = {
        {2, 1, 0, -1, -2, 2, -2, 1},
        {0, 0, 0, 0, 1, -1, 2, -2},
        {-2, -2, -1, 0, 1, 2, 2, -1},
        {1, 1, 1, 1, 1, 1, 1, 1},
    };

    for (const auto& sequence : sequences) {
        clear_otfc(dut);
        uint32_t model = 0;
        for (int digit : sequence)
            model = apply_digit(dut, model, digit);
    }
}

void test_hold_and_clear_priority(Vsrt4_otfc_test_top* dut) {
    clear_otfc(dut);
    uint32_t model = 0;
    model = apply_digit(dut, model, 2);
    model = apply_digit(dut, model, 1);

    dut->quotient_digit = encode_digit(-2);
    dut->step = 0;
    for (unsigned cycle = 0; cycle < 5; ++cycle) {
        eval_cycle(dut);
        check_state(dut, "step low holds state", -2, model);
    }

    dut->quotient_digit = encode_digit(2);
    dut->step = 1;
    dut->clear = 1;
    eval_cycle(dut);
    dut->clear = 0;
    dut->step = 0;
    dut->eval();
    check_state(dut, "clear has priority over step", 2, 0);

    model = apply_digit(dut, 0, 1);
    const int invalid_digits[] = {3, -4};
    for (int digit : invalid_digits) {
        dut->quotient_digit = encode_digit(digit);
        dut->step = 1;
        eval_cycle(dut);
        dut->step = 0;
        dut->eval();
        check_state(dut, "invalid digit holds state", digit, model);
    }
}

void test_random_sequences(Vsrt4_otfc_test_top* dut) {
    std::mt19937 random(0x4f544643U);
    constexpr unsigned kSequences = 512;
    unsigned total_steps = 0;

    for (unsigned sequence = 0; sequence < kSequences; ++sequence) {
        clear_otfc(dut);
        uint32_t model = 0;
        const unsigned length = 1 + (random() % 24);

        for (unsigned index = 0; index < length; ++index) {
            if ((random() & 7U) == 0) {
                dut->step = 0;
                eval_cycle(dut);
                check_state(dut, "random stall", 0, model);
            }

            const int digit =
                static_cast<int>(random() % 5) - 2;
            model = apply_digit(dut, model, digit);
            ++total_steps;
        }
    }

    std::printf("OTFC random sequences: sequences=%u steps=%u\n",
                kSequences, total_steps);
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vsrt4_otfc_test_top;

    dut->clear = 0;
    dut->step = 0;
    dut->quotient_digit = 0;
    reset_dut(dut);
    check_state(dut, "reset", 0, 0);

    test_single_digits(dut);
    test_directed_sequences(dut);
    test_hold_and_clear_priority(dut);
    test_random_sequences(dut);

    pass("srt4_otfc");
    delete dut;
    return 0;
}
