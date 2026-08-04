// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

void Vrename_test_top___024root___ico_comb__TOP__8(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___ico_comb__TOP__8\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 = (0x0000003fU 
                                                 & ((2U 
                                                     & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q))
                                                     ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49)
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44) 
                                                     >> 6U)));
    vlSelfRef.rename_test_top__DOT__dut__DOT__mt_write_preg 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20) 
            << 6U) | (0x0000003fU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44)));
    vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[0U][0U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_q[0U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[0U][1U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_q[1U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[0U][2U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_q[2U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[0U][3U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_q[3U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[0U][4U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_q[4U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[0U][5U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_q[5U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[0U][6U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_q[6U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[0U][7U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_q[7U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[0U][8U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_q[8U];
    vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[0U][9U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_q[9U];
}
