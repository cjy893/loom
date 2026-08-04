// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

void Vbpd_full_test_top___024root___ico_comb__TOP__8(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___ico_comb__TOP__8\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34 = (((IData)(vlSelfRef.f1_is_br)
                                                   ? (IData)(vlSelfRef.f1_taken)
                                                   : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30)) 
                                                 & (IData)(vlSelfRef.bpd_full_test_top__DOT__ghist_cfi_valid));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31 = ((IData)(vlSelfRef.f1_is_br) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (1U 
                                                & (- (IData)(
                                                             ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31)) 
                                                              & (IData)(vlSelfRef.f1_is_br)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33 = (1U 
                                                 & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                    | ((vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[0U] 
                                                        >> 7U) 
                                                       | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                          >> 1U))));
}

void Vbpd_full_test_top___024root___ico_sequent__TOP__0(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___ico_comb__TOP__0(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___ico_comb__TOP__2(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___ico_comb__TOP__3(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___ico_comb__TOP__4(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___ico_comb__TOP__5(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___ico_comb__TOP__6(Vbpd_full_test_top___024root* vlSelf);

void Vbpd_full_test_top___024root___eval_ico(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___eval_ico\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000040000ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vbpd_full_test_top___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__1
            vlSelfRef.ras_read_addr = vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack
                [vlSelfRef.ras_read_idx];
        }
    }
    if ((0x000000001fff8000ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vbpd_full_test_top___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0x0000000000000180ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_comb__TOP__1
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30 
                = ((IData)(vlSelfRef.f1_is_call) | (IData)(vlSelfRef.f1_is_ret));
        }
    }
    if ((0x0000000000240000ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vbpd_full_test_top___024root___ico_comb__TOP__2(vlSelf);
        Vbpd_full_test_top___024root___ico_comb__TOP__3(vlSelf);
        Vbpd_full_test_top___024root___ico_comb__TOP__4(vlSelf);
        Vbpd_full_test_top___024root___ico_comb__TOP__5(vlSelf);
    }
    if ((0x000000001fffc000ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vbpd_full_test_top___024root___ico_comb__TOP__6(vlSelf);
    }
    if ((0x00000000000001a0ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_comb__TOP__7
            vlSelfRef.bpd_full_test_top__DOT__ghist_cfi_valid 
                = ((IData)(vlSelfRef.f1_is_br) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30));
        }
    }
    if ((0x00000000000001e0ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vbpd_full_test_top___024root___ico_comb__TOP__8(vlSelf);
    }
}
