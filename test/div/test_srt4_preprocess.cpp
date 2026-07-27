#include "Vsrt4_preprocess_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <random>

namespace {

unsigned leading_zeros(uint32_t value) {
    if (value == 0)
        return 32;

    unsigned count = 0;
    for (uint32_t mask = 0x80000000U; (value & mask) == 0; mask >>= 1)
        ++count;
    return count;
}

[[noreturn]] void fail_case(const char* field, uint32_t dividend,
                            uint32_t divisor, uint64_t actual,
                            uint64_t expected) {
    std::fprintf(
        stderr,
        "FAIL: preprocess %s dividend=0x%08x divisor=0x%08x "
        "got=0x%llx expected=0x%llx\n",
        field, dividend, divisor,
        static_cast<unsigned long long>(actual),
        static_cast<unsigned long long>(expected));
    std::exit(1);
}

void check_field(const char* field, uint32_t dividend, uint32_t divisor,
                 uint64_t actual, uint64_t expected) {
    if (actual != expected)
        fail_case(field, dividend, divisor, actual, expected);
}

void check_case(Vsrt4_preprocess_test_top* dut, uint32_t dividend,
                uint32_t divisor) {
    dut->dividend = dividend;
    dut->divisor = divisor;
    dut->eval();

    if (divisor == 0) {
        check_field("divisor_is_zero", dividend, divisor,
                    dut->divisor_is_zero, 1);
        check_field("initial_partial_remainder", dividend, divisor,
                    dut->initial_partial_remainder, 0);
        check_field("aligned_divisor", dividend, divisor,
                    dut->aligned_divisor, 0);
        check_field("iteration_count", dividend, divisor,
                    dut->iteration_count, 0);
        check_field("recovery_shift", dividend, divisor,
                    dut->recovery_shift, 0);
        return;
    }

    const unsigned shift = leading_zeros(divisor);
    const uint32_t normalized_divisor = divisor << shift;
    const uint64_t expected_aligned =
        static_cast<uint64_t>(normalized_divisor) << 1;
    const uint64_t expected_partial =
        (shift & 1U) ? static_cast<uint64_t>(dividend)
                     : static_cast<uint64_t>(dividend) << 1;
    const unsigned expected_iterations =
        (shift >> 1) + (shift & 1U) + 1;
    const unsigned expected_recovery = 32 - shift;

    check_field("divisor_is_zero", dividend, divisor,
                dut->divisor_is_zero, 0);
    check_field("initial_partial_remainder", dividend, divisor,
                dut->initial_partial_remainder, expected_partial);
    check_field("aligned_divisor", dividend, divisor,
                dut->aligned_divisor, expected_aligned);
    check_field("iteration_count", dividend, divisor,
                dut->iteration_count, expected_iterations);
    check_field("recovery_shift", dividend, divisor,
                dut->recovery_shift, expected_recovery);

    const unsigned divisor_index =
        static_cast<unsigned>((dut->aligned_divisor >> 29) & 0xfU);
    if (divisor_index < 8 || divisor_index > 15)
        fail_case("normalized divisor index", dividend, divisor,
                  divisor_index, 8);
    check_field("aligned divisor low bit", dividend, divisor,
                dut->aligned_divisor & 1U, 0);
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vsrt4_preprocess_test_top;

    const uint32_t dividends[] = {
        0x00000000,
        0x00000001,
        0x12345678,
        0x80000000,
        0xffffffff,
    };

    for (uint32_t dividend : dividends)
        check_case(dut, dividend, 0);

    unsigned single_bit_cases = 0;
    for (unsigned bit = 0; bit < 32; ++bit) {
        const uint32_t divisor = UINT32_C(1) << bit;
        for (uint32_t dividend : dividends) {
            check_case(dut, dividend, divisor);
            ++single_bit_cases;
        }
    }

    std::mt19937 random(0x53525434U);
    constexpr unsigned kRandomCases = 4096;
    for (unsigned i = 0; i < kRandomCases; ++i) {
        const uint32_t dividend = random();
        uint32_t divisor = random();
        if ((i & 255U) == 0)
            divisor = 0;
        check_case(dut, dividend, divisor);
    }

    expect_eq("single-bit preprocess case count", single_bit_cases, 160);
    std::printf(
        "preprocess cases: zero=%zu single_bit=%u random=%u\n",
        sizeof(dividends) / sizeof(dividends[0]),
        single_bit_cases, kRandomCases);
    pass("srt4_preprocess");

    delete dut;
    return 0;
}
