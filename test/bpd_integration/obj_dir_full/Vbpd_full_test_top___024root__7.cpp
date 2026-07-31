// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

void Vbpd_full_test_top___024root___ico_comb__TOP__5(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___ico_comb__TOP__5\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_vec) 
                >> 0x0dU) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx = 0x0dU;
    }
    if ((1U & (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_vec) 
                >> 0x0eU) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx = 0x0eU;
    }
    if ((IData)((((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_vec) 
                  >> 0x0000000fU) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx = 0x0fU;
    }
    vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__upd_hit_way 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24)) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7));
}

void Vbpd_full_test_top___024root___ico_comb__TOP__0(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___ico_comb__TOP__1(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___ico_comb__TOP__2(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___ico_comb__TOP__3(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___ico_comb__TOP__4(Vbpd_full_test_top___024root* vlSelf);

void Vbpd_full_test_top___024root___eval_ico(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___eval_ico\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000200ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__0
            vlSelfRef.ras_read_addr = vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack
                [vlSelfRef.ras_read_idx];
        }
    }
    if ((0x0000000000003800ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vbpd_full_test_top___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0x000000001fff8000ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vbpd_full_test_top___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((0x0000000000240000ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vbpd_full_test_top___024root___ico_comb__TOP__2(vlSelf);
        Vbpd_full_test_top___024root___ico_comb__TOP__3(vlSelf);
        Vbpd_full_test_top___024root___ico_comb__TOP__4(vlSelf);
        Vbpd_full_test_top___024root___ico_comb__TOP__5(vlSelf);
    }
    if ((0x000000001fffc000ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_comb__TOP__6
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                = ((IData)(vlSelfRef.update_valid) 
                   & ((IData)(vlSelfRef.update_cfi_valid) 
                      & ((0U != (3U & (vlSelfRef.bpd_full_test_top__DOT__update_packed[7U] 
                                       >> 0x00000018U))) 
                         | ((IData)(vlSelfRef.update_cfi_taken) 
                            & (IData)(vlSelfRef.update_cfi_is_br)))));
            vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__do_allocate 
                = ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24)) 
                   & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)) 
                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)));
            vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__do_allocate 
                = ((~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit)) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0));
        }
    }
}
