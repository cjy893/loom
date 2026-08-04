// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

void Vrename_test_top___024root___ico_comb__TOP__4(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___ico_comb__TOP__4\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rename_test_top__DOT__dut__DOT__mt_commit_preg 
        = ((IData)(vlSelfRef.commit_pdst) & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29))));
}

void Vrename_test_top___024root___ico_comb__TOP__5(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___ico_comb__TOP__5\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rename_test_top__DOT__dut__DOT__fl_free_en 
        = ((0U != (IData)(vlSelfRef.commit_stale_pdst)) 
           & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29))));
    vlSelfRef.rename_test_top__DOT__dut__DOT__fl_free_preg 
        = ((IData)(vlSelfRef.commit_stale_pdst) & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29))));
}

void Vrename_test_top___024root___ico_comb__TOP__6(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___ico_comb__TOP__6\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46 = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40) 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24) 
                                                     & (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[7U] 
                                                        >> 0x0000001bU))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43 = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40) 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q)))));
    vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_en 
        = ((2U & (((2U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q))
                    ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24) 
                       & ((vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[20U] 
                           >> 0x0000001eU) & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40) 
                                              >> 1U)))
                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46) 
                       >> 1U)) << 1U)) | (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35 = (0x0000003fU 
                                                 & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                                                     & ((0U 
                                                         != 
                                                         (0x0000001fU 
                                                          & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41))) 
                                                        & ((0x0000001fU 
                                                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)) 
                                                           == 
                                                           (0x0000001fU 
                                                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27) 
                                                               >> 5U)))))
                                                     ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44)
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27) 
                                                          >> 5U)))
                                                      ? 0U
                                                      : vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_q
                                                     [
                                                     (0x0000001fU 
                                                      & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27) 
                                                         >> 5U))])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36 = (0x0000003fU 
                                                 & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                                                     & ((0U 
                                                         != 
                                                         (0x0000001fU 
                                                          & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41))) 
                                                        & ((0x0000001fU 
                                                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)) 
                                                           == 
                                                           (0x0000001fU 
                                                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)))))
                                                     ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44)
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x0000001fU 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)))
                                                      ? 0U
                                                      : vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_q
                                                     [
                                                     (0x0000001fU 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27))])));
}
