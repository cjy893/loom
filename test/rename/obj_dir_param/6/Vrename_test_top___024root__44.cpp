// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

void Vrename_test_top___024root___nba_sequent__TOP__23(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___nba_sequent__TOP__23\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag 
        = ((0x00000038U & (((2U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q))
                             ? ((vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[21U] 
                                 << 1U) | (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[20U] 
                                           >> 0x0000001fU))
                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45) 
                                >> 3U)) << 3U)) | (7U 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47 = ((2U 
                                                  & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q)) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48));
    vlSelfRef.rename_test_top__DOT__dut__DOT__mt_write_lreg 
        = ((0x000003e0U & (((2U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q))
                             ? ((vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[14U] 
                                 << 0x0000000eU) | 
                                (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[14U] 
                                 >> 0x00000012U)) : 
                            ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41) 
                             >> 5U)) << 5U)) | (0x0000001fU 
                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34 = ((0U 
                                                  == 
                                                  (0x0000001fU 
                                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23))
                                                  ? 0U
                                                  : vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_q
                                                 [(0x0000001fU 
                                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23)]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37 = ((0U 
                                                  == 
                                                  (0x0000001fU 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 
                                                      >> 5U)))
                                                  ? 0U
                                                  : vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_q
                                                 [(0x0000001fU 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 
                                                      >> 5U))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27 = (0x00007fffU 
                                                 & ((2U 
                                                     & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q))
                                                     ? 
                                                    ((0x00007c00U 
                                                      & (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[14U] 
                                                         >> 8U)) 
                                                     | ((0x000003e0U 
                                                         & (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[14U] 
                                                            >> 1U)) 
                                                        | (0x0000001fU 
                                                           & (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[14U] 
                                                              >> 0x0000000cU))))
                                                     : 
                                                    (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 
                                                     >> 0x0000000fU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46 = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40) 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24) 
                                                     & (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[7U] 
                                                        >> 0x0000001bU))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q)))));
}
