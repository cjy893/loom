// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore_top_contract_test_top.h for the primary calling header

#ifndef VERILATED_VCORE_TOP_CONTRACT_TEST_TOP___024UNIT_H_
#define VERILATED_VCORE_TOP_CONTRACT_TEST_TOP___024UNIT_H_  // guard

#include "verilated.h"


class Vcore_top_contract_test_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_top_contract_test_top___024unit final {
  public:

    // INTERNAL VARIABLES
    Vcore_top_contract_test_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcore_top_contract_test_top___024unit();
    ~Vcore_top_contract_test_top___024unit();
    void ctor(Vcore_top_contract_test_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcore_top_contract_test_top___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
