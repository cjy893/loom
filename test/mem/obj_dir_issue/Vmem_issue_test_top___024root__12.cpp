// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

void Vmem_issue_test_top___024root___ico_sequent__TOP__0(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___ico_comb__TOP__0(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___ico_comb__TOP__1(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___ico_comb__TOP__2(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___ico_comb__TOP__3(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___ico_comb__TOP__5(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___ico_comb__TOP__6(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___ico_comb__TOP__7(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___ico_comb__TOP__8(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___ico_comb__TOP__9(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___ico_comb__TOP__10(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___ico_comb__TOP__11(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___ico_comb__TOP__12(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___ico_comb__TOP__13(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___ico_comb__TOP__14(Vmem_issue_test_top___024root* vlSelf);

void Vmem_issue_test_top___024root___eval_ico(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___eval_ico\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000020000000ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vmem_issue_test_top___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000a00000ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vmem_issue_test_top___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0x0000000001400000ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vmem_issue_test_top___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((0x0000000000001008ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vmem_issue_test_top___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((0x00000000101feff0ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vmem_issue_test_top___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((0x0000000020101808ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_comb__TOP__4
            vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_br_killed 
                = ((((IData)(vlSelfRef.dis_valid_1) 
                     & (0U != ((IData)(vlSelfRef.mispredict_mask) 
                               & (IData)(vlSelfRef.dis_br_mask_1)))) 
                    << 1U) | ((IData)(vlSelfRef.dis_valid) 
                              & (0U != ((IData)(vlSelfRef.mispredict_mask) 
                                        & (IData)(vlSelfRef.dis_br_mask)))));
        }
    }
    if ((0x0000000070000000ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vmem_issue_test_top___024root___ico_comb__TOP__5(vlSelf);
        Vmem_issue_test_top___024root___ico_comb__TOP__6(vlSelf);
        Vmem_issue_test_top___024root___ico_comb__TOP__7(vlSelf);
        Vmem_issue_test_top___024root___ico_comb__TOP__8(vlSelf);
        Vmem_issue_test_top___024root___ico_comb__TOP__9(vlSelf);
        Vmem_issue_test_top___024root___ico_comb__TOP__10(vlSelf);
    }
    if ((0x0000000070101808ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vmem_issue_test_top___024root___ico_comb__TOP__11(vlSelf);
        Vmem_issue_test_top___024root___ico_comb__TOP__12(vlSelf);
        Vmem_issue_test_top___024root___ico_comb__TOP__13(vlSelf);
        Vmem_issue_test_top___024root___ico_comb__TOP__14(vlSelf);
    }
}
