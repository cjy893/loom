// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

void Vrename_test_top___024root___ctor_var_reset(Vrename_test_top___024root* vlSelf);

Vrename_test_top___024root::Vrename_test_top___024root(Vrename_test_top__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vrename_test_top___024root___ctor_var_reset(this);
}

void Vrename_test_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vrename_test_top___024root::~Vrename_test_top___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
