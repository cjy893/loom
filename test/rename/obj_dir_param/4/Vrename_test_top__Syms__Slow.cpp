// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vrename_test_top__pch.h"

Vrename_test_top__Syms::Vrename_test_top__Syms(VerilatedContext* contextp, const char* namep, Vrename_test_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    Vrename_test_top__Syms__ctor__0();
}

Vrename_test_top__Syms::~Vrename_test_top__Syms() {
    Vrename_test_top__Syms__dtor__0();
}
