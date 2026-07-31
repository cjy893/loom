// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbpd_full_test_top.h for the primary calling header

#ifndef VERILATED_VBPD_FULL_TEST_TOP___024UNIT_H_
#define VERILATED_VBPD_FULL_TEST_TOP___024UNIT_H_  // guard

#include "verilated.h"


class Vbpd_full_test_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbpd_full_test_top___024unit final {
  public:

    // INTERNAL VARIABLES
    Vbpd_full_test_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vbpd_full_test_top___024unit();
    ~Vbpd_full_test_top___024unit();
    void ctor(Vbpd_full_test_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vbpd_full_test_top___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
