// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCACOP_CTRL_TEST_TOP__SYMS_H_
#define VERILATED_VCACOP_CTRL_TEST_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcacop_ctrl_test_top.h"

// INCLUDE MODULE CLASSES
#include "Vcacop_ctrl_test_top___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vcacop_ctrl_test_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcacop_ctrl_test_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcacop_ctrl_test_top___024root TOP;

    // CONSTRUCTORS
    Vcacop_ctrl_test_top__Syms(VerilatedContext* contextp, const char* namep, Vcacop_ctrl_test_top* modelp);
    ~Vcacop_ctrl_test_top__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
