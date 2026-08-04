// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

void Vrename_test_top___024root___nba_sequent__TOP__39(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___nba_sequent__TOP__39\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][31U] 
        = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][31U];
    if ((((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__mt_write_en) 
          >> 1U) & (0U != (0x0000001fU & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__mt_write_lreg) 
                                          >> 5U))))) {
        vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][(0x0000001fU 
                                                                                & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__mt_write_lreg) 
                                                                                >> 5U))] 
            = (0x0000003fU & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__mt_write_preg) 
                              >> 6U));
    }
    vlSelfRef.out_psrc1_0 = (0x0000003fU & (IData)(
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22 
                                                    >> 0x0000001aU)));
    vlSelfRef.out_psrc2_0 = (0x0000003fU & (IData)(
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22 
                                                    >> 0x00000014U)));
    vlSelfRef.out_pdst_0 = (0x0000003fU & (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22 
                                                   >> 0x00000020U)));
    vlSelfRef.out_stale_0 = (0x0000003fU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22));
    vlSelfRef.out_psrc1_busy_0 = (1U & (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22 
                                                >> 9U)));
    vlSelfRef.out_psrc1_1 = (0x0000003fU & (IData)(
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 
                                                    >> 0x0000001aU)));
    vlSelfRef.out_psrc2_1 = (0x0000003fU & (IData)(
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 
                                                    >> 0x00000014U)));
    vlSelfRef.out_pdst_1 = (0x0000003fU & (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 
                                                   >> 0x00000020U)));
    vlSelfRef.out_stale_1 = (0x0000003fU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21));
    vlSelfRef.out_psrc1_busy_1 = (1U & (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 
                                                >> 9U)));
}
