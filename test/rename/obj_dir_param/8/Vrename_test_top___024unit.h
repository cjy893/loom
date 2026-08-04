// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrename_test_top.h for the primary calling header

#ifndef VERILATED_VRENAME_TEST_TOP___024UNIT_H_
#define VERILATED_VRENAME_TEST_TOP___024UNIT_H_  // guard

#include "verilated.h"


class Vrename_test_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrename_test_top___024unit final {
  public:

    // INTERNAL VARIABLES
    Vrename_test_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrename_test_top___024unit();
    ~Vrename_test_top___024unit();
    void ctor(Vrename_test_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrename_test_top___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
