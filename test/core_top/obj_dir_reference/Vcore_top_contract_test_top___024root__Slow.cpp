// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_top_contract_test_top.h for the primary calling header

#include "Vcore_top_contract_test_top__pch.h"

void Vcore_top_contract_test_top___024root___ctor_var_reset(Vcore_top_contract_test_top___024root* vlSelf);

Vcore_top_contract_test_top___024root::Vcore_top_contract_test_top___024root(Vcore_top_contract_test_top__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vcore_top_contract_test_top___024root___ctor_var_reset(this);
}

void Vcore_top_contract_test_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_top_contract_test_top___024root::~Vcore_top_contract_test_top___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
