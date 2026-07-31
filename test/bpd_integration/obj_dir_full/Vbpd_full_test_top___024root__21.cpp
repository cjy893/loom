// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

extern const VlWide<10>/*319:0*/ Vbpd_full_test_top__ConstPool__CONST_h9e45139a_0;

void Vbpd_full_test_top___024root___nba_sequent__TOP__14(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___nba_sequent__TOP__14\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((~ ((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                   >> 0x0fU)) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx = 0x0fU;
    }
    if (vlSelfRef.__VdlySet__bpd_full_test_top__DOT__bim_inst__DOT__ram__v0) {
        vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__ram[vlSelfRef.__VdlyDim1__bpd_full_test_top__DOT__bim_inst__DOT__ram__v0][vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__bim_inst__DOT__ram__v0] = 0x0aU;
    }
    if (vlSelfRef.__VdlySet__bpd_full_test_top__DOT__bim_inst__DOT__ram__v1) {
        vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__ram[vlSelfRef.__VdlyDim1__bpd_full_test_top__DOT__bim_inst__DOT__ram__v1][vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__bim_inst__DOT__ram__v1] 
            = vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__bim_inst__DOT__ram__v1;
    }
    if (vlSelfRef.rst_n) {
        if (((IData)(vlSelfRef.update_valid) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__doing_reset)))) {
            vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[0U] 
                = vlSelfRef.bpd_full_test_top__DOT__update_packed[0U];
            vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[1U] 
                = vlSelfRef.bpd_full_test_top__DOT__update_packed[1U];
            vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[2U] 
                = vlSelfRef.bpd_full_test_top__DOT__update_packed[2U];
            vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[3U] 
                = vlSelfRef.bpd_full_test_top__DOT__update_packed[3U];
            vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[4U] 
                = vlSelfRef.bpd_full_test_top__DOT__update_packed[4U];
            vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[5U] 
                = vlSelfRef.bpd_full_test_top__DOT__update_packed[5U];
            vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[6U] 
                = vlSelfRef.bpd_full_test_top__DOT__update_packed[6U];
            vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[7U] 
                = vlSelfRef.bpd_full_test_top__DOT__update_packed[7U];
            vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[8U] 
                = vlSelfRef.bpd_full_test_top__DOT__update_packed[8U];
            vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[9U] 
                = vlSelfRef.bpd_full_test_top__DOT__update_packed[9U];
        }
    } else {
        VL_ASSIGN_W(293, vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update, Vbpd_full_test_top__ConstPool__CONST_h9e45139a_0);
    }
    vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__doing_reset 
        = vlSelfRef.__Vdly__bpd_full_test_top__DOT__bim_inst__DOT__doing_reset;
    vlSelfRef.bim_ready = (1U & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__doing_reset)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 = (1U 
                                                 & (vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[8U] 
                                                    | (3U 
                                                       == 
                                                       (3U 
                                                        & (vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[7U] 
                                                           >> 0x0000001dU)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29 = (IData)(
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
}
