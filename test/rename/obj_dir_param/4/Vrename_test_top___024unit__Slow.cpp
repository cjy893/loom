// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"


Vrename_test_top___024unit::Vrename_test_top___024unit() = default;
Vrename_test_top___024unit::~Vrename_test_top___024unit() = default;

void Vrename_test_top___024unit::ctor(Vrename_test_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vrename_test_top___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vrename_test_top___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
