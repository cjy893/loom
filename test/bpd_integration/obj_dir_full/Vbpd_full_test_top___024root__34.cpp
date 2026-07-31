// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

void Vbpd_full_test_top___024root___nba_sequent__TOP__0(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__1(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__2(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__3(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__4(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__5(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__7(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__8(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__9(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__10(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__11(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__12(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__13(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__14(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__15(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_comb__TOP__0(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_comb__TOP__1(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_comb__TOP__2(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_comb__TOP__3(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_comb__TOP__4(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_comb__TOP__5(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_comb__TOP__6(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_comb__TOP__7(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_comb__TOP__8(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_comb__TOP__9(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_comb__TOP__10(Vbpd_full_test_top___024root* vlSelf);

void Vbpd_full_test_top___024root___eval_nba(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___eval_nba\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vbpd_full_test_top___024root___nba_sequent__TOP__0(vlSelf);
        Vbpd_full_test_top___024root___nba_sequent__TOP__1(vlSelf);
        Vbpd_full_test_top___024root___nba_sequent__TOP__2(vlSelf);
        Vbpd_full_test_top___024root___nba_sequent__TOP__3(vlSelf);
        Vbpd_full_test_top___024root___nba_sequent__TOP__4(vlSelf);
        Vbpd_full_test_top___024root___nba_sequent__TOP__5(vlSelf);
        {
            // Inlined CFunc: _nba_sequent__TOP__6
            vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s2_valid 
                = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_valid));
            vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_valid 
                = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.f0_valid));
        }
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vbpd_full_test_top___024root___nba_sequent__TOP__7(vlSelf);
        Vbpd_full_test_top___024root___nba_sequent__TOP__8(vlSelf);
        Vbpd_full_test_top___024root___nba_sequent__TOP__9(vlSelf);
        Vbpd_full_test_top___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vbpd_full_test_top___024root___nba_sequent__TOP__11(vlSelf);
        Vbpd_full_test_top___024root___nba_sequent__TOP__12(vlSelf);
        Vbpd_full_test_top___024root___nba_sequent__TOP__13(vlSelf);
        Vbpd_full_test_top___024root___nba_sequent__TOP__14(vlSelf);
        Vbpd_full_test_top___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vbpd_full_test_top___024root___nba_comb__TOP__0(vlSelf);
        Vbpd_full_test_top___024root___nba_comb__TOP__1(vlSelf);
        Vbpd_full_test_top___024root___nba_comb__TOP__2(vlSelf);
        Vbpd_full_test_top___024root___nba_comb__TOP__3(vlSelf);
        Vbpd_full_test_top___024root___nba_comb__TOP__4(vlSelf);
        Vbpd_full_test_top___024root___nba_comb__TOP__5(vlSelf);
        Vbpd_full_test_top___024root___nba_comb__TOP__6(vlSelf);
        Vbpd_full_test_top___024root___nba_comb__TOP__7(vlSelf);
        Vbpd_full_test_top___024root___nba_comb__TOP__8(vlSelf);
        Vbpd_full_test_top___024root___nba_comb__TOP__9(vlSelf);
        Vbpd_full_test_top___024root___nba_comb__TOP__10(vlSelf);
    }
}

void Vbpd_full_test_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}
