// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsr_file_test_top.h for the primary calling header

#include "Vcsr_file_test_top__pch.h"

VL_ATTR_COLD void Vcsr_file_test_top___024root___ctor_var_reset_1(Vcsr_file_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___ctor_var_reset_1\n"); );
    Vcsr_file_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__Vtrigprevexpr___TOP__csr_flush_pending__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__xcpt_valid__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__xcpt_pc__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__xcpt_code__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__xcpt_esubcode__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__xcpt_badvaddr__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ertn_valid__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__hw_irq__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ipi_irq__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}

VL_ATTR_COLD void Vcsr_file_test_top___024root___ctor_var_reset_0(Vcsr_file_test_top___024root* vlSelf);

VL_ATTR_COLD void Vcsr_file_test_top___024root___ctor_var_reset(Vcsr_file_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___ctor_var_reset\n"); );
    Vcsr_file_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcsr_file_test_top___024root___ctor_var_reset_0(vlSelf);
    Vcsr_file_test_top___024root___ctor_var_reset_1(vlSelf);
}
