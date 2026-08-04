// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

void Vrename_test_top___024root___nba_sequent__TOP__17(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___nba_sequent__TOP__17\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_br_mask_0 = (0x000000ffU & ((vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[8U] 
                                               << 1U) 
                                              | (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[7U] 
                                                 >> 0x0000001fU)));
    vlSelfRef.out_br_mask_1 = (0x000000ffU & (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[21U] 
                                              >> 4U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26 = ((0U 
                                                  != 
                                                  (0x0000003fU 
                                                   & (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[14U] 
                                                      >> 0x00000014U))) 
                                                 & (2U 
                                                    != 
                                                    (3U 
                                                     & vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[14U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25 = ((0U 
                                                  != 
                                                  (0x0000003fU 
                                                   & (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[1U] 
                                                      >> 0x0000000fU))) 
                                                 & (2U 
                                                    != 
                                                    (3U 
                                                     & (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[0U] 
                                                        >> 0x0000001bU))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45 = (7U 
                                                 & ((vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[7U] 
                                                     >> 0x0000001cU) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48 = (1U 
                                                 & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41 = (0x0000001fU 
                                                 & ((vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[1U] 
                                                     >> 0x0000000fU) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 = (((0x00007c00U 
                                                   & (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[1U] 
                                                      >> 5U)) 
                                                  | ((0x000003e0U 
                                                      & (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[1U] 
                                                         << 2U)) 
                                                     | (0x0000001fU 
                                                        & (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[1U] 
                                                           >> 9U)))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40 = ((IData)(vlSelfRef.dis_fire) 
                                                 & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30 = (((
                                                   (((0U 
                                                      != 
                                                      (0x000000ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec 
                                                                  >> 0x00000030U)))) 
                                                     << 3U) 
                                                    | ((0U 
                                                        != 
                                                        (0x000000ffU 
                                                         & (IData)(
                                                                   (vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec 
                                                                    >> 0x00000028U)))) 
                                                       << 2U)) 
                                                   | (((0U 
                                                        != 
                                                        (0x000000ffU 
                                                         & (IData)(
                                                                   (vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec 
                                                                    >> 0x00000020U)))) 
                                                       << 1U) 
                                                      | (0U 
                                                         != 
                                                         (0x000000ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec 
                                                                     >> 0x00000018U)))))) 
                                                  << 3U) 
                                                 | (((0U 
                                                      != 
                                                      (0x000000ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec 
                                                                  >> 0x00000010U)))) 
                                                     << 2U) 
                                                    | (((0U 
                                                         != 
                                                         (0x000000ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec 
                                                                     >> 8U)))) 
                                                        << 1U) 
                                                       | (0U 
                                                          != 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec))))));
}
