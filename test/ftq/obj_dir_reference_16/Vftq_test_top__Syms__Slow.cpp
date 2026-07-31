// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vftq_test_top__pch.h"

Vftq_test_top__Syms::Vftq_test_top__Syms(VerilatedContext* contextp, const char* namep, Vftq_test_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    Vftq_test_top__Syms__ctor__0();
}

Vftq_test_top__Syms::~Vftq_test_top__Syms() {
    Vftq_test_top__Syms__dtor__0();
}
