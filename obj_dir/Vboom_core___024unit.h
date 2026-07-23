// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vboom_core.h for the primary calling header

#ifndef VERILATED_VBOOM_CORE___024UNIT_H_
#define VERILATED_VBOOM_CORE___024UNIT_H_  // guard

#include "verilated.h"


class Vboom_core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vboom_core___024unit final {
  public:

    // INTERNAL VARIABLES
    Vboom_core__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vboom_core___024unit();
    ~Vboom_core___024unit();
    void ctor(Vboom_core__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vboom_core___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
