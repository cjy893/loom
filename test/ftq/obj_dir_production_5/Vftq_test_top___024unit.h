// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vftq_test_top.h for the primary calling header

#ifndef VERILATED_VFTQ_TEST_TOP___024UNIT_H_
#define VERILATED_VFTQ_TEST_TOP___024UNIT_H_  // guard

#include "verilated.h"


class Vftq_test_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vftq_test_top___024unit final {
  public:

    // INTERNAL VARIABLES
    Vftq_test_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vftq_test_top___024unit();
    ~Vftq_test_top___024unit();
    void ctor(Vftq_test_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vftq_test_top___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
