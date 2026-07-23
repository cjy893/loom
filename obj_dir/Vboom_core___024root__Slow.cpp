// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboom_core.h for the primary calling header

#include "Vboom_core__pch.h"

void Vboom_core___024root___ctor_var_reset(Vboom_core___024root* vlSelf);

Vboom_core___024root::Vboom_core___024root(Vboom_core__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vboom_core___024root___ctor_var_reset(this);
}

void Vboom_core___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vboom_core___024root::~Vboom_core___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
