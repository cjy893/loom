// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

void Vbpd_full_test_top___024root___nba_sequent__TOP__15(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___nba_sequent__TOP__15\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 = (IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x60000000U 
                                                          & vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[7U])));
    vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_hits 
        = ((0xfffffffeU & ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_valid) 
                           & (((0x000007ffU & (vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[8U] 
                                               >> 5U)) 
                               == vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_idx[1U]) 
                              << 1U))) | ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_valid) 
                                          & ((0x000007ffU 
                                              & (vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[8U] 
                                                 >> 5U)) 
                                             == vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_idx[0U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29 = ((vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[7U] 
                                                  >> 0x0000001fU) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28));
    vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_hit = 0U;
    vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_hit_idx = 0U;
    if ((1U & (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_hits))) {
        vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_hit = 1U;
        vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_hit_idx = 0U;
    }
    if ((IData)((((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_hits) 
                  >> 1U) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_hit))))) {
        vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_hit = 1U;
        vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_hit_idx = 1U;
    }
    vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_write 
        = ((~ (0U != (0x0000000fU & (vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[9U] 
                                     >> 1U)))) & ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update_valid) 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29))));
    vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr 
        = (0x0000000fU & ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_hit)
                           ? vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_data
                          [vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_hit_idx]
                           : vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[0U]));
    vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_new_ctr 
        = ((0x0000000cU & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)
                             ? ((IData)(((0x60000000U 
                                          == (0x60000000U 
                                              & vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[7U])) 
                                         & ((vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[7U] 
                                             >> 0x00000019U) 
                                            | (IData)(
                                                      ((0x14000000U 
                                                        == 
                                                        (0x14000000U 
                                                         & vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[7U])) 
                                                       & vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[8U])))))
                                 ? ((3U == (3U & ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr) 
                                                  >> 2U)))
                                     ? ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr) 
                                        >> 2U) : ((IData)(1U) 
                                                  + 
                                                  ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr) 
                                                   >> 2U)))
                                 : (((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr) 
                                     >> 2U) - (0U != 
                                               (3U 
                                                & ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr) 
                                                   >> 2U)))))
                             : ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr) 
                                >> 2U)) << 2U)) | (3U 
                                                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29)
                                                       ? 
                                                      ((((vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[7U] 
                                                          >> 0x00000019U) 
                                                         | (IData)(
                                                                   (0x94000000U 
                                                                    == 
                                                                    (0x94000000U 
                                                                     & vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[7U])))) 
                                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28))
                                                        ? 
                                                       ((3U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr)))
                                                         ? (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr)
                                                         : 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr)))
                                                        : 
                                                       ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr) 
                                                        - 
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr)))))
                                                       : (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr))));
}
