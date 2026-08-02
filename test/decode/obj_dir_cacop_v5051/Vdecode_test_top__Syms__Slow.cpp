// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vdecode_test_top__pch.h"

Vdecode_test_top__Syms::Vdecode_test_top__Syms(VerilatedContext* contextp, const char* namep, Vdecode_test_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    Vdecode_test_top__Syms__ctor__0();
}

Vdecode_test_top__Syms::~Vdecode_test_top__Syms() {
    Vdecode_test_top__Syms__dtor__0();
}
