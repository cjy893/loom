// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

void Vbpd_full_test_top___024root___nba_sequent__TOP__8(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___nba_sequent__TOP__8\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_preds_in[0U] 
        = vlSelfRef.bim_f2_preds[0U];
    vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_preds_in[1U] 
        = vlSelfRef.bim_f2_preds[1U];
    vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_preds_in[2U] 
        = vlSelfRef.bim_f2_preds[2U];
    vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[0U] 
        = vlSelfRef.ubtb_f1_preds[0U];
    vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[1U] 
        = vlSelfRef.ubtb_f1_preds[1U];
    vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[2U] 
        = vlSelfRef.ubtb_f1_preds[2U];
    vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_tag 
        = (((QData)((IData)((((IData)(4U) + vlSelfRef.f0_pc) 
                             >> 7U))) << 0x00000019U) 
           | (QData)((IData)((vlSelfRef.f0_pc >> 7U))));
    vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_hit 
        = vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s2_hit;
    vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__f1_pc 
        = vlSelfRef.f0_pc;
    vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_entry[0U] 
        = vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s2_entry[0U];
    vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_entry[1U] 
        = vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s2_entry[1U];
    vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_entry[2U] 
        = vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s2_entry[2U];
    vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_entry[3U] 
        = vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s2_entry[3U];
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__do_allocate) {
            VL_ASSIGNSEL_WI(1040, 30, ((IData)(0x00000023U) 
                                       + (0x000007ffU 
                                          & ((IData)(0x00000041U) 
                                             * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx)))), vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries, 
                            (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                             >> 2U));
            VL_ASSIGNSEL_WI(1040, 32, ((IData)(3U) 
                                       + (0x000007ffU 
                                          & ((IData)(0x00000041U) 
                                             * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx)))), vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries, 
                            ((vlSelfRef.bpd_full_test_top__DOT__update_packed[4U] 
                              << 8U) | (vlSelfRef.bpd_full_test_top__DOT__update_packed[3U] 
                                        >> 0x00000018U)));
            vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[(
                                                                       ((IData)(2U) 
                                                                        + 
                                                                        (0x000007ffU 
                                                                         & ((IData)(0x00000041U) 
                                                                            * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx)))) 
                                                                       >> 5U)] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(2U) 
                                           + (0x000007ffU 
                                              & ((IData)(0x00000041U) 
                                                 * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx))))))) 
                    & vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                    [(((IData)(2U) + (0x000007ffU & 
                                      ((IData)(0x00000041U) 
                                       * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx)))) 
                      >> 5U)]) | ((1U & (vlSelfRef.bpd_full_test_top__DOT__update_packed[7U] 
                                         >> 0x0000001aU)) 
                                  << (0x0000001fU & 
                                      ((IData)(2U) 
                                       + (0x000007ffU 
                                          & ((IData)(0x00000041U) 
                                             * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx)))))));
            vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[(
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        (0x000007ffU 
                                                                         & ((IData)(0x00000041U) 
                                                                            * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx)))) 
                                                                       >> 5U)] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(1U) 
                                           + (0x000007ffU 
                                              & ((IData)(0x00000041U) 
                                                 * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx))))))) 
                    & vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                    [(((IData)(1U) + (0x000007ffU & 
                                      ((IData)(0x00000041U) 
                                       * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx)))) 
                      >> 5U)]) | ((1U & (vlSelfRef.bpd_full_test_top__DOT__update_packed[7U] 
                                         >> 0x00000019U)) 
                                  << (0x0000001fU & 
                                      ((IData)(1U) 
                                       + (0x000007ffU 
                                          & ((IData)(0x00000041U) 
                                             * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx)))))));
            vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[(0x0000003fU 
                                                                       & (((IData)(0x00000041U) 
                                                                           * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx)) 
                                                                          >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(0x00000041U) 
                                           * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx))))) 
                    & vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                    [(0x0000003fU & (((IData)(0x00000041U) 
                                      * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx)) 
                                     >> 5U))]) | ((1U 
                                                   & (vlSelfRef.bpd_full_test_top__DOT__update_packed[7U] 
                                                      >> 0x00000018U)) 
                                                  << 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000041U) 
                                                      * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx)))));
        } else if (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit) 
                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))) {
            VL_ASSIGNSEL_WI(1040, 32, ((IData)(3U) 
                                       + (0x000007ffU 
                                          & ((IData)(0x00000041U) 
                                             * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx)))), vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries, 
                            ((vlSelfRef.bpd_full_test_top__DOT__update_packed[4U] 
                              << 8U) | (vlSelfRef.bpd_full_test_top__DOT__update_packed[3U] 
                                        >> 0x00000018U)));
            vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[(
                                                                       ((IData)(2U) 
                                                                        + 
                                                                        (0x000007ffU 
                                                                         & ((IData)(0x00000041U) 
                                                                            * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx)))) 
                                                                       >> 5U)] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(2U) 
                                           + (0x000007ffU 
                                              & ((IData)(0x00000041U) 
                                                 * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx))))))) 
                    & vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                    [(((IData)(2U) + (0x000007ffU & 
                                      ((IData)(0x00000041U) 
                                       * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx)))) 
                      >> 5U)]) | ((1U & (vlSelfRef.bpd_full_test_top__DOT__update_packed[7U] 
                                         >> 0x0000001aU)) 
                                  << (0x0000001fU & 
                                      ((IData)(2U) 
                                       + (0x000007ffU 
                                          & ((IData)(0x00000041U) 
                                             * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx)))))));
            vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[(
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        (0x000007ffU 
                                                                         & ((IData)(0x00000041U) 
                                                                            * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx)))) 
                                                                       >> 5U)] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(1U) 
                                           + (0x000007ffU 
                                              & ((IData)(0x00000041U) 
                                                 * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx))))))) 
                    & vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                    [(((IData)(1U) + (0x000007ffU & 
                                      ((IData)(0x00000041U) 
                                       * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx)))) 
                      >> 5U)]) | ((1U & (vlSelfRef.bpd_full_test_top__DOT__update_packed[7U] 
                                         >> 0x00000019U)) 
                                  << (0x0000001fU & 
                                      ((IData)(1U) 
                                       + (0x000007ffU 
                                          & ((IData)(0x00000041U) 
                                             * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx)))))));
            vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[(0x0000003fU 
                                                                       & (((IData)(0x00000041U) 
                                                                           * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx)) 
                                                                          >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(0x00000041U) 
                                           * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx))))) 
                    & vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                    [(0x0000003fU & (((IData)(0x00000041U) 
                                      * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx)) 
                                     >> 5U))]) | ((1U 
                                                   & (vlSelfRef.bpd_full_test_top__DOT__update_packed[7U] 
                                                      >> 0x00000018U)) 
                                                  << 
                                                  (0x0000001fU 
                                                   & ((IData)(0x00000041U) 
                                                      * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx)))));
        }
    }
}
