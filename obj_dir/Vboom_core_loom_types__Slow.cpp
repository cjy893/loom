// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboom_core.h for the primary calling header

#include "Vboom_core__pch.h"


Vboom_core_loom_types::Vboom_core_loom_types() = default;
Vboom_core_loom_types::~Vboom_core_loom_types() = default;

void Vboom_core_loom_types::ctor(Vboom_core__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vboom_core_loom_types::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vboom_core_loom_types::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
