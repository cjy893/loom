// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

void Vrename_test_top___024root___ico_comb__TOP__14(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___ico_comb__TOP__14\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][27U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[0U][27U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][28U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[0U][28U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][29U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[0U][29U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][30U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[0U][30U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][31U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[0U][31U];
    if (((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__mt_write_en) 
         & (0U != (0x0000001fU & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__mt_write_lreg))))) {
        vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][(0x0000001fU 
                                                                                & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__mt_write_lreg))] 
            = (0x0000003fU & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__mt_write_preg));
    }
    vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][0U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][0U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][1U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][1U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][2U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][2U];
}
