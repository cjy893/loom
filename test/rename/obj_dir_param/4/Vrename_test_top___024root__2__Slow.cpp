// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

VL_ATTR_COLD void Vrename_test_top___024root___stl_sequent__TOP__5(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___stl_sequent__TOP__5\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40 = ((IData)(vlSelfRef.dis_fire) 
                                                 & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q));
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24 = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.rollback) 
                                                     | (IData)(vlSelfRef.kill))));
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
    vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag 
        = ((0x0000000cU & (((2U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q))
                             ? ((vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[20U] 
                                 << 4U) | (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[20U] 
                                           >> 0x0000001cU))
                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45) 
                                >> 2U)) << 2U)) | (3U 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45)));
    vlSelfRef.rename_test_top__DOT__dut__DOT__mt_commit_lreg 
        = ((IData)(vlSelfRef.commit_ldst) & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29))));
    vlSelfRef.rename_test_top__DOT__dut__DOT__mt_commit_preg 
        = ((IData)(vlSelfRef.commit_pdst) & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29))));
    vlSelfRef.rename_test_top__DOT__dut__DOT__fl_free_en 
        = ((0U != (IData)(vlSelfRef.commit_stale_pdst)) 
           & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29))));
}
