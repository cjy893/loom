// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdecode_test_top.h for the primary calling header

#ifndef VERILATED_VDECODE_TEST_TOP___024UNIT_H_
#define VERILATED_VDECODE_TEST_TOP___024UNIT_H_  // guard

#include "verilated.h"


class Vdecode_test_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdecode_test_top___024unit final {
  public:

    // INTERNAL VARIABLES
    Vdecode_test_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdecode_test_top___024unit();
    ~Vdecode_test_top___024unit();
    void ctor(Vdecode_test_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdecode_test_top___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
