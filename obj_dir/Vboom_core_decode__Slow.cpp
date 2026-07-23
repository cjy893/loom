// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboom_core.h for the primary calling header

#include "Vboom_core__pch.h"

void Vboom_core_decode___ctor_var_reset(Vboom_core_decode* vlSelf);

Vboom_core_decode::Vboom_core_decode() = default;
Vboom_core_decode::~Vboom_core_decode() = default;

void Vboom_core_decode::ctor(Vboom_core__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vboom_core_decode___ctor_var_reset(this);
}

void Vboom_core_decode::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vboom_core_decode::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
