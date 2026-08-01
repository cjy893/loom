// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vicache_test_top.h for the primary calling header

#include "Vicache_test_top__pch.h"

void Vicache_test_top___024root___ctor_var_reset(Vicache_test_top___024root* vlSelf);

Vicache_test_top___024root::Vicache_test_top___024root(Vicache_test_top__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vicache_test_top___024root___ctor_var_reset(this);
}

void Vicache_test_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vicache_test_top___024root::~Vicache_test_top___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
