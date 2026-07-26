// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_top_contract_test_top.h for the primary calling header

#include "Vcore_top_contract_test_top__pch.h"


Vcore_top_contract_test_top___024unit::Vcore_top_contract_test_top___024unit() = default;
Vcore_top_contract_test_top___024unit::~Vcore_top_contract_test_top___024unit() = default;

void Vcore_top_contract_test_top___024unit::ctor(Vcore_top_contract_test_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vcore_top_contract_test_top___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vcore_top_contract_test_top___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
