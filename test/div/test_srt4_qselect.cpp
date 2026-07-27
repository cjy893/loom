#include "Vsrt4_qselect_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

#include <cstdint>
#include <cstdio>
#include <cstdlib>

namespace {

struct Thresholds {
    int plus_one_min;
    int plus_two_min;
    int zero_min;
    int minus_one_min;
};

constexpr Thresholds kThresholds[8] = {
    {4, 12, -4, -13},
    {4, 14, -6, -15},
    {4, 15, -6, -16},
    {4, 16, -6, -18},
    {6, 18, -8, -20},
    {6, 20, -8, -20},
    {8, 20, -8, -22},
    {8, 24, -8, -24},
};

int decode_signed(unsigned raw, unsigned width) {
    const unsigned sign = 1U << (width - 1);
    const unsigned mask = (1U << width) - 1;
    raw &= mask;
    return (raw & sign) ? static_cast<int>(raw) - (1 << width)
                        : static_cast<int>(raw);
}

int reference_digit(int partial_remainder, unsigned divisor_index) {
    if (divisor_index < 8 || divisor_index > 15)
        return 0;

    const Thresholds& threshold = kThresholds[divisor_index - 8];
    if (partial_remainder >= threshold.plus_two_min)
        return 2;
    if (partial_remainder >= threshold.plus_one_min)
        return 1;
    if (partial_remainder >= threshold.zero_min)
        return 0;
    if (partial_remainder >= threshold.minus_one_min)
        return -1;
    return -2;
}

[[noreturn]] void fail_case(unsigned divisor_index, int partial_remainder,
                            int actual, int expected) {
    std::fprintf(
        stderr,
        "FAIL: qselect divisor_index=0x%x partial=%d got=%d expected=%d\n",
        divisor_index, partial_remainder, actual, expected);
    std::exit(1);
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vsrt4_qselect_test_top;

    unsigned legal_cases = 0;
    unsigned invalid_cases = 0;

    for (unsigned divisor_index = 0; divisor_index < 16; ++divisor_index) {
        for (unsigned partial_raw = 0; partial_raw < 128; ++partial_raw) {
            dut->divisor_index = divisor_index;
            dut->partial_remainder_index = partial_raw;
            dut->eval();

            const int partial_remainder =
                decode_signed(partial_raw, 7);
            const int actual =
                decode_signed(dut->quotient_digit, 3);
            const int expected =
                reference_digit(partial_remainder, divisor_index);

            if (actual != expected)
                fail_case(divisor_index, partial_remainder, actual, expected);

            if (divisor_index >= 8)
                ++legal_cases;
            else
                ++invalid_cases;
        }
    }

    expect_eq("legal qselect case count", legal_cases, 1024);
    expect_eq("invalid qselect case count", invalid_cases, 1024);
    std::printf("qselect exhaustive cases: legal=%u invalid=%u\n",
                legal_cases, invalid_cases);
    pass("srt4_qselect");

    delete dut;
    return 0;
}
