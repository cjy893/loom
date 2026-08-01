// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vicache_test_top__pch.h"

Vicache_test_top__Syms::Vicache_test_top__Syms(VerilatedContext* contextp, const char* namep, Vicache_test_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    Vicache_test_top__Syms__ctor__0();
}

Vicache_test_top__Syms::~Vicache_test_top__Syms() {
    Vicache_test_top__Syms__dtor__0();
}
