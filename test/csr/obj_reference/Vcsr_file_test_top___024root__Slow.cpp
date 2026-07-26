// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsr_file_test_top.h for the primary calling header

#include "Vcsr_file_test_top__pch.h"

void Vcsr_file_test_top___024root___ctor_var_reset(Vcsr_file_test_top___024root* vlSelf);

Vcsr_file_test_top___024root::Vcsr_file_test_top___024root(Vcsr_file_test_top__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vcsr_file_test_top___024root___ctor_var_reset(this);
}

void Vcsr_file_test_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcsr_file_test_top___024root::~Vcsr_file_test_top___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
