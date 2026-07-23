#pragma once

#include <cstdio>
#include <cstdlib>

template <typename Dut>
void eval_cycle(Dut* dut) {
    dut->clk = 0;
    dut->eval();
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
}

template <typename Dut>
void reset_dut(Dut* dut, int cycles = 3) {
    dut->rst_n = 0;
    for (int i = 0; i < cycles; ++i)
        eval_cycle(dut);
    dut->rst_n = 1;
    dut->eval();
}

inline void expect_eq(const char* name, unsigned long long actual,
                      unsigned long long expected) {
    if (actual != expected) {
        std::fprintf(stderr, "FAIL: %s: got %llu, expected %llu\n",
                     name, actual, expected);
        std::exit(1);
    }
}

inline void expect_true(const char* name, bool value) {
    if (!value) {
        std::fprintf(stderr, "FAIL: %s\n", name);
        std::exit(1);
    }
}

inline void pass(const char* suite) {
    std::printf("PASS: %s\n", suite);
}
