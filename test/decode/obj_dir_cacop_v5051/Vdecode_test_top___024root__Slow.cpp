// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode_test_top.h for the primary calling header

#include "Vdecode_test_top__pch.h"

void Vdecode_test_top___024root___ctor_var_reset(Vdecode_test_top___024root* vlSelf);

Vdecode_test_top___024root::Vdecode_test_top___024root(Vdecode_test_top__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vdecode_test_top___024root___ctor_var_reset(this);
}

void Vdecode_test_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdecode_test_top___024root::~Vdecode_test_top___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
