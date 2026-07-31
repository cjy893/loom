// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

void Vbpd_full_test_top___024root___nba_sequent__TOP__2(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___nba_sequent__TOP__2\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__doing_reset) {
            vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__bim_inst__DOT__ram__v0 
                = vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__rst_set;
            vlSelfRef.__VdlyDim1__bpd_full_test_top__DOT__bim_inst__DOT__ram__v0 
                = vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__rst_col;
            vlSelfRef.__VdlySet__bpd_full_test_top__DOT__bim_inst__DOT__ram__v0 = 1U;
            if ((0xffU == (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__rst_set))) {
                vlSelfRef.__Vdly__bpd_full_test_top__DOT__bim_inst__DOT__rst_set = 0U;
                if ((7U == (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__rst_col))) {
                    vlSelfRef.__Vdly__bpd_full_test_top__DOT__bim_inst__DOT__doing_reset = 0U;
                } else {
                    vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__rst_col 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__rst_col)));
                }
            } else {
                vlSelfRef.__Vdly__bpd_full_test_top__DOT__bim_inst__DOT__rst_set 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__rst_set)));
            }
        } else if (vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_write) {
            vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__bim_inst__DOT__ram__v1 
                = vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_new_ctr;
            vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__bim_inst__DOT__ram__v1 
                = (0x000000ffU & (vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[8U] 
                                  >> 8U));
            vlSelfRef.__VdlyDim1__bpd_full_test_top__DOT__bim_inst__DOT__ram__v1 
                = (7U & (vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[8U] 
                         >> 5U));
            vlSelfRef.__VdlySet__bpd_full_test_top__DOT__bim_inst__DOT__ram__v1 = 1U;
        }
        if (vlSelfRef.ghist_restore_valid) {
            vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__saw_nt 
                = (1U & (vlSelfRef.bpd_full_test_top__DOT__restore_packed[0U] 
                         >> 7U));
        } else if (vlSelfRef.f1_update_valid) {
            if (vlSelfRef.f1_is_br) {
                vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__saw_nt 
                    = (1U & (~ (IData)(vlSelfRef.f1_taken)));
            }
        }
    } else {
        vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__rst_col = 0U;
        vlSelfRef.__Vdly__bpd_full_test_top__DOT__bim_inst__DOT__rst_set = 0U;
        vlSelfRef.__Vdly__bpd_full_test_top__DOT__bim_inst__DOT__doing_reset = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__saw_nt = 0U;
    }
    vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__f1_valid 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.f0_valid));
    vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update_valid 
        = ((IData)(vlSelfRef.rst_n) && ((IData)(vlSelfRef.update_valid) 
                                        & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__doing_reset))));
    vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_valid 
        = ((IData)(vlSelfRef.rst_n) && (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_valid));
}
