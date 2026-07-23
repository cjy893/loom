// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboom_core.h for the primary calling header

#include "Vboom_core__pch.h"


Vboom_core___024unit::Vboom_core___024unit() = default;
Vboom_core___024unit::~Vboom_core___024unit() = default;

void Vboom_core___024unit::ctor(Vboom_core__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vboom_core___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vboom_core___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
