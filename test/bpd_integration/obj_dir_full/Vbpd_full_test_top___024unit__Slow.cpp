// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"


Vbpd_full_test_top___024unit::Vbpd_full_test_top___024unit() = default;
Vbpd_full_test_top___024unit::~Vbpd_full_test_top___024unit() = default;

void Vbpd_full_test_top___024unit::ctor(Vbpd_full_test_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vbpd_full_test_top___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vbpd_full_test_top___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
