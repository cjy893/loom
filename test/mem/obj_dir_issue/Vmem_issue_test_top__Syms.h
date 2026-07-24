// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMEM_ISSUE_TEST_TOP__SYMS_H_
#define VERILATED_VMEM_ISSUE_TEST_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmem_issue_test_top.h"

// INCLUDE MODULE CLASSES
#include "Vmem_issue_test_top___024root.h"
#include "Vmem_issue_test_top___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vmem_issue_test_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmem_issue_test_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmem_issue_test_top___024root  TOP;

    // CONSTRUCTORS
    Vmem_issue_test_top__Syms(VerilatedContext* contextp, const char* namep, Vmem_issue_test_top* modelp);
    ~Vmem_issue_test_top__Syms();
    void Vmem_issue_test_top__Syms__ctor__0();
    void Vmem_issue_test_top__Syms__dtor__0();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
