// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

void Vbpd_full_test_top___024root___nba_comb__TOP__3(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___nba_comb__TOP__3\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bim_f2_meta[0U] = ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_valid)
                                  ? (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_ctrs)
                                  : 0U);
    vlSelfRef.bim_f2_meta[1U] = 0U;
    vlSelfRef.bim_f2_meta[2U] = 0U;
    vlSelfRef.bim_f2_meta[3U] = 0U;
    vlSelfRef.bim_f2_preds[0U] = (IData)(((- (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_valid))) 
                                          & (((QData)((IData)(
                                                              (1U 
                                                               & ((4U 
                                                                   & vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[1U])
                                                                   ? 
                                                                  ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_ctrs) 
                                                                   >> 1U)
                                                                   : 
                                                                  (vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[1U] 
                                                                   >> 3U))))) 
                                              << 0x00000023U) 
                                             | (0x00000007ffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[0U])))))));
    vlSelfRef.bim_f2_preds[1U] = ((0xfffffff0U & vlSelfRef.bim_f2_preds[1U]) 
                                  | (IData)((((- (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_valid))) 
                                              & (((QData)((IData)(
                                                                  (1U 
                                                                   & ((4U 
                                                                       & vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[1U])
                                                                       ? 
                                                                      ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_ctrs) 
                                                                       >> 1U)
                                                                       : 
                                                                      (vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[1U] 
                                                                       >> 3U))))) 
                                                  << 0x00000023U) 
                                                 | (0x00000007ffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[0U])))))) 
                                             >> 0x00000020U)));
    vlSelfRef.bim_f2_preds[1U] = ((0x0000000fU & vlSelfRef.bim_f2_preds[1U]) 
                                  | ((IData)((0x0000000fffffffffULL 
                                              & (((0x00000040U 
                                                   & vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[2U])
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_ctrs) 
                                                                        >> 3U)))) 
                                                    << 0x00000023U) 
                                                   | (0x00000007ffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[2U])) 
                                                          << 0x0000001cU) 
                                                         | ((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[1U])) 
                                                            >> 4U))))
                                                   : 
                                                  (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[2U])) 
                                                    << 0x0000003cU) 
                                                   | (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[2U])) 
                                                       << 0x0000001cU) 
                                                      | ((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[1U])) 
                                                         >> 4U)))) 
                                                 & (- (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_valid)))))) 
                                     << 4U));
    vlSelfRef.bim_f2_preds[2U] = (0x000000ffU & (((IData)(
                                                          (0x0000000fffffffffULL 
                                                           & (((0x00000040U 
                                                                & vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[2U])
                                                                ? 
                                                               (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_ctrs) 
                                                                                >> 3U)))) 
                                                                 << 0x00000023U) 
                                                                | (0x00000007ffffffffULL 
                                                                   & (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[2U])) 
                                                                       << 0x0000001cU) 
                                                                      | ((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[1U])) 
                                                                         >> 4U))))
                                                                : 
                                                               (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[2U])) 
                                                                 << 0x0000003cU) 
                                                                | (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[2U])) 
                                                                    << 0x0000001cU) 
                                                                   | ((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[1U])) 
                                                                      >> 4U)))) 
                                                              & (- (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_valid)))))) 
                                                  >> 0x0000001cU) 
                                                 | ((IData)(
                                                            ((0x0000000fffffffffULL 
                                                              & (((0x00000040U 
                                                                   & vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[2U])
                                                                   ? 
                                                                  (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_ctrs) 
                                                                                >> 3U)))) 
                                                                    << 0x00000023U) 
                                                                   | (0x00000007ffffffffULL 
                                                                      & (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[2U])) 
                                                                          << 0x0000001cU) 
                                                                         | ((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[1U])) 
                                                                            >> 4U))))
                                                                   : 
                                                                  (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[2U])) 
                                                                    << 0x0000003cU) 
                                                                   | (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[2U])) 
                                                                       << 0x0000001cU) 
                                                                      | ((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[1U])) 
                                                                         >> 4U)))) 
                                                                 & (- (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_valid))))) 
                                                             >> 0x00000020U)) 
                                                    << 4U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10 = ((vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid
                                                  [
                                                  (0x0000001fU 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 = (vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = (vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid
                                                [(0x0000001fU 
                                                  & (IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set))] 
                                                & ((0x01ffffffU 
                                                    & (vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                       [
                                                       (0x0000001fU 
                                                        & (IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set))][1U] 
                                                       >> 3U)) 
                                                   == 
                                                   (0x01ffffffU 
                                                    & (IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_tag))));
}
