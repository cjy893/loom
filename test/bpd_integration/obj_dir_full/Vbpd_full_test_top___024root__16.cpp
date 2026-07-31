// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

void Vbpd_full_test_top___024root___nba_sequent__TOP__9(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___nba_sequent__TOP__9\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_ctrs 
        = vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_rdata;
    vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s2_hit 
        = ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)) 
            << 1U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)));
    vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s2_entry[0U] 
        = (IData)((0x0fffffffffffffffULL & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)
                                             ? (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                                 [
                                                                 (0x0000001fU 
                                                                  & (IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set))][1U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                                  [
                                                                  (0x0000001fU 
                                                                   & (IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set))][0U])))
                                             : ((((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                                  [
                                                                  (0x0000001fU 
                                                                   & (IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set))][3U])) 
                                                  << 0x00000024U) 
                                                 | (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                                     [
                                                                     (0x0000001fU 
                                                                      & (IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set))][2U])) 
                                                     << 4U) 
                                                    | ((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                                       [
                                                                       (0x0000001fU 
                                                                        & (IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set))][1U])) 
                                                       >> 0x0000001cU))) 
                                                & (- (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)))))));
    vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s2_entry[1U] 
        = ((0xf0000000U & vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s2_entry[1U]) 
           | (IData)(((0x0fffffffffffffffULL & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)
                                                 ? 
                                                (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                                  [
                                                                  (0x0000001fU 
                                                                   & (IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set))][1U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                                   [
                                                                   (0x0000001fU 
                                                                    & (IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set))][0U])))
                                                 : 
                                                ((((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                                   [
                                                                   (0x0000001fU 
                                                                    & (IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set))][3U])) 
                                                   << 0x00000024U) 
                                                  | (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                                      [
                                                                      (0x0000001fU 
                                                                       & (IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set))][2U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                                        [
                                                                        (0x0000001fU 
                                                                         & (IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set))][1U])) 
                                                        >> 0x0000001cU))) 
                                                 & (- (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)))))) 
                      >> 0x00000020U)));
    vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s2_entry[1U] 
        = ((0x0fffffffU & vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s2_entry[1U]) 
           | ((IData)((0x0fffffffffffffffULL & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)
                                                 ? 
                                                (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                                  [
                                                                  (0x0000001fU 
                                                                   & ((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set) 
                                                                      >> 5U))][1U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                                   [
                                                                   (0x0000001fU 
                                                                    & ((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set) 
                                                                       >> 5U))][0U])))
                                                 : 
                                                ((((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                                   [
                                                                   (0x0000001fU 
                                                                    & ((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set) 
                                                                       >> 5U))][3U])) 
                                                   << 0x00000024U) 
                                                  | (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                                      [
                                                                      (0x0000001fU 
                                                                       & ((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set) 
                                                                          >> 5U))][2U])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                                        [
                                                                        (0x0000001fU 
                                                                         & ((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set) 
                                                                            >> 5U))][1U])) 
                                                        >> 0x0000001cU))) 
                                                 & (- (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))))))) 
              << 0x0000001cU));
    vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s2_entry[2U] 
        = (((IData)((0x0fffffffffffffffULL & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)
                                               ? (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                                   [
                                                                   (0x0000001fU 
                                                                    & ((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set) 
                                                                       >> 5U))][1U])) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                                    [
                                                                    (0x0000001fU 
                                                                     & ((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set) 
                                                                        >> 5U))][0U])))
                                               : ((
                                                   ((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                                    [
                                                                    (0x0000001fU 
                                                                     & ((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set) 
                                                                        >> 5U))][3U])) 
                                                    << 0x00000024U) 
                                                   | (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                                       [
                                                                       (0x0000001fU 
                                                                        & ((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set) 
                                                                           >> 5U))][2U])) 
                                                       << 4U) 
                                                      | ((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                                         [
                                                                         (0x0000001fU 
                                                                          & ((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set) 
                                                                             >> 5U))][1U])) 
                                                         >> 0x0000001cU))) 
                                                  & (- (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))))))) 
            >> 4U) | ((IData)(((0x0fffffffffffffffULL 
                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)
                                    ? (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                        [
                                                        (0x0000001fU 
                                                         & ((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set) 
                                                            >> 5U))][1U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                         [
                                                         (0x0000001fU 
                                                          & ((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set) 
                                                             >> 5U))][0U])))
                                    : ((((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                         [
                                                         (0x0000001fU 
                                                          & ((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set) 
                                                             >> 5U))][3U])) 
                                         << 0x00000024U) 
                                        | (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                            [
                                                            (0x0000001fU 
                                                             & ((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set) 
                                                                >> 5U))][2U])) 
                                            << 4U) 
                                           | ((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                              [
                                                              (0x0000001fU 
                                                               & ((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set) 
                                                                  >> 5U))][1U])) 
                                              >> 0x0000001cU))) 
                                       & (- (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)))))) 
                               >> 0x00000020U)) << 0x0000001cU));
    vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s2_entry[3U] 
        = (0x00ffffffU & ((IData)(((0x0fffffffffffffffULL 
                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)
                                        ? (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                            [
                                                            (0x0000001fU 
                                                             & ((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set) 
                                                                >> 5U))][1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                             [
                                                             (0x0000001fU 
                                                              & ((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set) 
                                                                 >> 5U))][0U])))
                                        : ((((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                             [
                                                             (0x0000001fU 
                                                              & ((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set) 
                                                                 >> 5U))][3U])) 
                                             << 0x00000024U) 
                                            | (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                                [
                                                                (0x0000001fU 
                                                                 & ((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set) 
                                                                    >> 5U))][2U])) 
                                                << 4U) 
                                               | ((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                                  [
                                                                  (0x0000001fU 
                                                                   & ((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set) 
                                                                      >> 5U))][1U])) 
                                                  >> 0x0000001cU))) 
                                           & (- (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)))))) 
                                   >> 0x00000020U)) 
                          >> 4U));
    if (((IData)(vlSelfRef.f0_valid) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__doing_reset)))) {
        vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_rdata 
            = (((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_write) 
                & ((0x000007ffU & (vlSelfRef.f0_pc 
                                   >> 4U)) == (0x000007ffU 
                                               & (vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[8U] 
                                                  >> 5U))))
                ? (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_new_ctr)
                : vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__ram
               [(7U & (vlSelfRef.f0_pc >> 4U))][(0x000000ffU 
                                                 & (vlSelfRef.f0_pc 
                                                    >> 7U))]);
    }
}
