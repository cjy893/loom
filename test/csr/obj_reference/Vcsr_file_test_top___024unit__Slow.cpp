// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsr_file_test_top.h for the primary calling header

#include "Vcsr_file_test_top__pch.h"


Vcsr_file_test_top___024unit::Vcsr_file_test_top___024unit() = default;
Vcsr_file_test_top___024unit::~Vcsr_file_test_top___024unit() = default;

void Vcsr_file_test_top___024unit::ctor(Vcsr_file_test_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vcsr_file_test_top___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vcsr_file_test_top___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
