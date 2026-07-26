// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsr_file_test_top.h for the primary calling header

#ifndef VERILATED_VCSR_FILE_TEST_TOP___024UNIT_H_
#define VERILATED_VCSR_FILE_TEST_TOP___024UNIT_H_  // guard

#include "verilated.h"


class Vcsr_file_test_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsr_file_test_top___024unit final {
  public:

    // INTERNAL VARIABLES
    Vcsr_file_test_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsr_file_test_top___024unit();
    ~Vcsr_file_test_top___024unit();
    void ctor(Vcsr_file_test_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsr_file_test_top___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
