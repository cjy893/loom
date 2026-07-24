// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmem_issue_test_top__pch.h"

Vmem_issue_test_top__Syms::Vmem_issue_test_top__Syms(VerilatedContext* contextp, const char* namep, Vmem_issue_test_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    Vmem_issue_test_top__Syms__ctor__0();
}

Vmem_issue_test_top__Syms::~Vmem_issue_test_top__Syms() {
    Vmem_issue_test_top__Syms__dtor__0();
}
