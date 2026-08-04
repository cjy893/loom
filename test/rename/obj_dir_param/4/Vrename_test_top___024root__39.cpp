// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

void Vrename_test_top___024root___nba_sequent__TOP__18(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___nba_sequent__TOP__18\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43 = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40) 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30) 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30))));
    vlSelfRef.out_valid = ((2U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47))) 
                           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 = ((QData)((IData)(
                                                                 (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37) 
                                                                   << 6U) 
                                                                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34)))) 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q))))));
    vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_en 
        = ((2U & (((2U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q))
                    ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24) 
                       & ((vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[20U] 
                           >> 0x0000001bU) & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40) 
                                              >> 1U)))
                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46) 
                       >> 1U)) << 1U)) | (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19 = (1U 
                                                 & ((2U 
                                                     & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q))
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26) 
                                                     & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24) 
                                                        & (((IData)(vlSelfRef.dis_fire) 
                                                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47)) 
                                                           >> 1U)))
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                                                     >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = (0x000000ffU 
                                                & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec) 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10)))))));
}
