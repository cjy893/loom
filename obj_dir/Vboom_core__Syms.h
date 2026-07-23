// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBOOM_CORE__SYMS_H_
#define VERILATED_VBOOM_CORE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vboom_core.h"

// INCLUDE MODULE CLASSES
#include "Vboom_core___024root.h"
#include "Vboom_core___024unit.h"
#include "Vboom_core_decode.h"
#include "Vboom_core_loom_types.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vboom_core__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vboom_core* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vboom_core___024root           TOP;
    Vboom_core_decode              TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst;
    Vboom_core_decode              TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst;

    // CONSTRUCTORS
    Vboom_core__Syms(VerilatedContext* contextp, const char* namep, Vboom_core* modelp);
    ~Vboom_core__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
