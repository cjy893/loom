// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

void Vrename_test_top___024root___eval_ico__0(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_comb__TOP__21(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_comb__TOP__22(Vrename_test_top___024root* vlSelf);

void Vrename_test_top___024root___eval_ico(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___eval_ico\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrename_test_top___024root___eval_ico__0(vlSelf);
    {
        // Inlined CFunc: _eval_ico__1
        if ((0x0000000010618000ULL & vlSelfRef.__VicoTriggered[0U])) {
            Vrename_test_top___024root___ico_comb__TOP__21(vlSelf);
            Vrename_test_top___024root___ico_comb__TOP__22(vlSelf);
            {
                // Inlined CFunc: _ico_comb__TOP__23
                vlSelfRef.out_psrc1_0 = (0x0000003fU 
                                         & (IData)(
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22 
                                                    >> 0x0000001aU)));
                vlSelfRef.out_psrc2_0 = (0x0000003fU 
                                         & (IData)(
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22 
                                                    >> 0x00000014U)));
                vlSelfRef.out_pdst_0 = (0x0000003fU 
                                        & (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22 
                                                   >> 0x00000020U)));
                vlSelfRef.out_stale_0 = (0x0000003fU 
                                         & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22));
                vlSelfRef.out_psrc1_busy_0 = (1U & (IData)(
                                                           (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22 
                                                            >> 9U)));
                vlSelfRef.out_psrc1_1 = (0x0000003fU 
                                         & (IData)(
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 
                                                    >> 0x0000001aU)));
                vlSelfRef.out_psrc2_1 = (0x0000003fU 
                                         & (IData)(
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 
                                                    >> 0x00000014U)));
                vlSelfRef.out_pdst_1 = (0x0000003fU 
                                        & (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 
                                                   >> 0x00000020U)));
                vlSelfRef.out_stale_1 = (0x0000003fU 
                                         & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21));
                vlSelfRef.out_psrc1_busy_1 = (1U & (IData)(
                                                           (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 
                                                            >> 9U)));
            }
        }
    }
}

void Vrename_test_top___024root___ico_comb__TOP__0(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_comb__TOP__1(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_sequent__TOP__0(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_comb__TOP__2(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_comb__TOP__3(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_comb__TOP__4(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_comb__TOP__5(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_comb__TOP__6(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_comb__TOP__7(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_comb__TOP__8(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_comb__TOP__9(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_comb__TOP__10(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_comb__TOP__11(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_comb__TOP__12(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_comb__TOP__13(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_comb__TOP__14(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_comb__TOP__15(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_comb__TOP__16(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_comb__TOP__17(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_comb__TOP__18(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_comb__TOP__19(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_comb__TOP__20(Vrename_test_top___024root* vlSelf);

void Vrename_test_top___024root___eval_ico__0(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___eval_ico__0\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000007800000ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vrename_test_top___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0x0000000000060000ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vrename_test_top___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((0x0000000010000000ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vrename_test_top___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000600000ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vrename_test_top___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((0x000000001f807ffcULL & vlSelfRef.__VicoTriggered[0U])) {
        Vrename_test_top___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((0x00000000000e0000ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vrename_test_top___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((0x0000000000160000ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vrename_test_top___024root___ico_comb__TOP__5(vlSelf);
    }
    if ((0x0000000010600000ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vrename_test_top___024root___ico_comb__TOP__6(vlSelf);
        Vrename_test_top___024root___ico_comb__TOP__7(vlSelf);
        Vrename_test_top___024root___ico_comb__TOP__8(vlSelf);
        Vrename_test_top___024root___ico_comb__TOP__9(vlSelf);
        Vrename_test_top___024root___ico_comb__TOP__10(vlSelf);
        Vrename_test_top___024root___ico_comb__TOP__11(vlSelf);
        Vrename_test_top___024root___ico_comb__TOP__12(vlSelf);
        Vrename_test_top___024root___ico_comb__TOP__13(vlSelf);
        Vrename_test_top___024root___ico_comb__TOP__14(vlSelf);
        Vrename_test_top___024root___ico_comb__TOP__15(vlSelf);
        Vrename_test_top___024root___ico_comb__TOP__16(vlSelf);
        Vrename_test_top___024root___ico_comb__TOP__17(vlSelf);
        Vrename_test_top___024root___ico_comb__TOP__18(vlSelf);
    }
    if ((0x0000000017f60000ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vrename_test_top___024root___ico_comb__TOP__19(vlSelf);
        Vrename_test_top___024root___ico_comb__TOP__20(vlSelf);
    }
}
