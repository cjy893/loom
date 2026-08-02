// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

VL_ATTR_COLD void Vbpd_full_test_top___024root___ctor_var_reset_2(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___ctor_var_reset_2\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__Vtrigprevexpr___TOP__update_cfi_mispredicted__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__update_cfi_is_br__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__update_cfi_is_b_bl__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__update_cfi_is_jirl__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__update_target__0 = 0;
    VL_ZERO_RESET_W(120, vlSelf->__Vtrigprevexpr___TOP__update_meta__0);
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

VL_ATTR_COLD void Vbpd_full_test_top___024root___ctor_var_reset_0(Vbpd_full_test_top___024root* vlSelf);
VL_ATTR_COLD void Vbpd_full_test_top___024root___ctor_var_reset_1(Vbpd_full_test_top___024root* vlSelf);

VL_ATTR_COLD void Vbpd_full_test_top___024root___ctor_var_reset(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___ctor_var_reset\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vbpd_full_test_top___024root___ctor_var_reset_0(vlSelf);
    Vbpd_full_test_top___024root___ctor_var_reset_1(vlSelf);
    Vbpd_full_test_top___024root___ctor_var_reset_2(vlSelf);
}
