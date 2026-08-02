// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDECODE_TEST_TOP__SYMS_H_
#define VERILATED_VDECODE_TEST_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdecode_test_top.h"

// INCLUDE MODULE CLASSES
#include "Vdecode_test_top___024root.h"
#include "Vdecode_test_top___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vdecode_test_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdecode_test_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdecode_test_top___024root     TOP;

    // CONSTRUCTORS
    Vdecode_test_top__Syms(VerilatedContext* contextp, const char* namep, Vdecode_test_top* modelp);
    ~Vdecode_test_top__Syms();
    void Vdecode_test_top__Syms__ctor__0();
    void Vdecode_test_top__Syms__dtor__0();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
