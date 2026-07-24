// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmem_issue_test_top.h for the primary calling header

#ifndef VERILATED_VMEM_ISSUE_TEST_TOP___024UNIT_H_
#define VERILATED_VMEM_ISSUE_TEST_TOP___024UNIT_H_  // guard

#include "verilated.h"


class Vmem_issue_test_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmem_issue_test_top___024unit final {
  public:

    // INTERNAL VARIABLES
    Vmem_issue_test_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vmem_issue_test_top___024unit();
    ~Vmem_issue_test_top___024unit();
    void ctor(Vmem_issue_test_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vmem_issue_test_top___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
