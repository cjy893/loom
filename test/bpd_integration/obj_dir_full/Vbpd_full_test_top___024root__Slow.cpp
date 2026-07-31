// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

void Vbpd_full_test_top___024root___ctor_var_reset(Vbpd_full_test_top___024root* vlSelf);

Vbpd_full_test_top___024root::Vbpd_full_test_top___024root(Vbpd_full_test_top__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vbpd_full_test_top___024root___ctor_var_reset(this);
}

void Vbpd_full_test_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vbpd_full_test_top___024root::~Vbpd_full_test_top___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
