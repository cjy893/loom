// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcacop_ctrl_test_top.h for the primary calling header

#include "Vcacop_ctrl_test_top__pch.h"

void Vcacop_ctrl_test_top___024root___ctor_var_reset(Vcacop_ctrl_test_top___024root* vlSelf);

Vcacop_ctrl_test_top___024root::Vcacop_ctrl_test_top___024root(Vcacop_ctrl_test_top__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vcacop_ctrl_test_top___024root___ctor_var_reset(this);
}

void Vcacop_ctrl_test_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcacop_ctrl_test_top___024root::~Vcacop_ctrl_test_top___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
