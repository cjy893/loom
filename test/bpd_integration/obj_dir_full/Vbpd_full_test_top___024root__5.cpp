// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

void Vbpd_full_test_top___024root___ico_comb__TOP__3(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___ico_comb__TOP__3\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = ((vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid
                                                 [(0x0000001fU 
                                                   & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                                      >> 2U))] 
                                                 >> 1U) 
                                                & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                                    >> 7U) 
                                                   == 
                                                   (0x01ffffffU 
                                                    & ((vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                        [
                                                        (0x0000001fU 
                                                         & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                                            >> 2U))][3U] 
                                                        << 1U) 
                                                       | (vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                          [
                                                          (0x0000001fU 
                                                           & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                                              >> 2U))][2U] 
                                                          >> 0x0000001fU)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24 = (vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid
                                                 [(0x0000001fU 
                                                   & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                                      >> 2U))] 
                                                 & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                                     >> 7U) 
                                                    == 
                                                    (0x01ffffffU 
                                                     & (vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                        [
                                                        (0x0000001fU 
                                                         & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                                            >> 2U))][1U] 
                                                        >> 3U))));
    vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit = 0U;
    vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx = 0U;
    if ((1U & (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_vec))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_vec) 
                >> 1U) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx = 1U;
    }
    if ((1U & (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_vec) 
                >> 2U) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx = 2U;
    }
    if ((1U & (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_vec) 
                >> 3U) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx = 3U;
    }
    if ((1U & (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_vec) 
                >> 4U) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx = 4U;
    }
}
