// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vftq_test_top.h for the primary calling header

#include "Vftq_test_top__pch.h"

void Vftq_test_top___024root___nba_sequent__TOP__0(Vftq_test_top___024root* vlSelf);
void Vftq_test_top___024root___nba_sequent__TOP__1(Vftq_test_top___024root* vlSelf);
void Vftq_test_top___024root___nba_sequent__TOP__2(Vftq_test_top___024root* vlSelf);
void Vftq_test_top___024root___nba_sequent__TOP__3(Vftq_test_top___024root* vlSelf);
void Vftq_test_top___024root___nba_sequent__TOP__4(Vftq_test_top___024root* vlSelf);
void Vftq_test_top___024root___nba_sequent__TOP__5(Vftq_test_top___024root* vlSelf);

void Vftq_test_top___024root___eval_nba(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___eval_nba\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vftq_test_top___024root___nba_sequent__TOP__0(vlSelf);
        Vftq_test_top___024root___nba_sequent__TOP__1(vlSelf);
        Vftq_test_top___024root___nba_sequent__TOP__2(vlSelf);
        Vftq_test_top___024root___nba_sequent__TOP__3(vlSelf);
        Vftq_test_top___024root___nba_sequent__TOP__4(vlSelf);
        Vftq_test_top___024root___nba_sequent__TOP__5(vlSelf);
        {
            // Inlined CFunc: _ico_comb__TOP__2
            if (VL_LTES_III(32, 1U, (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_idx_d))) {
                vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d 
                    = ((0x0dU & (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d)) 
                       | (2U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                [vlSelfRef.brupdate_b2_ftq_idx][11U] 
                                >> 9U)));
            }
            if (VL_LTES_III(32, 2U, (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_idx_d))) {
                vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d 
                    = ((0x0bU & (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d)) 
                       | (4U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                [vlSelfRef.brupdate_b2_ftq_idx][11U] 
                                >> 9U)));
            }
            if (VL_LTES_III(32, 3U, (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_idx_d))) {
                vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d 
                    = ((7U & (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d)) 
                       | (8U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                [vlSelfRef.brupdate_b2_ftq_idx][11U] 
                                >> 9U)));
            }
            if (vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_br_d) {
                vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d 
                    = ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d) 
                       | (0x0fU & ((IData)(1U) << (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_idx_d))));
            }
        }
    }
}

void Vftq_test_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}
