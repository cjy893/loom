// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboom_core.h for the primary calling header

#include "Vboom_core__pch.h"

void Vboom_core_issue_slot___ctor_var_reset(Vboom_core_issue_slot* vlSelf);

Vboom_core_issue_slot::Vboom_core_issue_slot() = default;
Vboom_core_issue_slot::~Vboom_core_issue_slot() = default;

void Vboom_core_issue_slot::ctor(Vboom_core__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vboom_core_issue_slot___ctor_var_reset(this);
}

void Vboom_core_issue_slot::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vboom_core_issue_slot::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
