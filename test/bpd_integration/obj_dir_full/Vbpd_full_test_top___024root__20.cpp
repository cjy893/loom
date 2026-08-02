// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

void Vbpd_full_test_top___024root___nba_sequent__TOP__12(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___nba_sequent__TOP__12\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty = 0U;
    vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx 
        = vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__repl_ptr;
    if ((1U & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid)))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx = 0U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                   >> 1U)) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                   >> 2U)) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx = 2U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                   >> 3U)) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx = 3U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                   >> 4U)) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx = 4U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                   >> 5U)) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx = 5U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                   >> 6U)) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx = 6U;
    }
}
