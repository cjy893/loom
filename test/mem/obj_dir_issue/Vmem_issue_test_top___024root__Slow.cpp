// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

void Vmem_issue_test_top___024root___ctor_var_reset(Vmem_issue_test_top___024root* vlSelf);

Vmem_issue_test_top___024root::Vmem_issue_test_top___024root(Vmem_issue_test_top__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vmem_issue_test_top___024root___ctor_var_reset(this);
}

void Vmem_issue_test_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmem_issue_test_top___024root::~Vmem_issue_test_top___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
