// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

void Vbpd_full_test_top___024root___nba_sequent__TOP__1(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___nba_sequent__TOP__1\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.ghist_restore_valid) {
            vlSelfRef.__Vdly__bpd_full_test_top__DOT__ghist_inst__DOT__ras_idx 
                = (0x0000001fU & vlSelfRef.bpd_full_test_top__DOT__restore_packed[0U]);
        } else if (vlSelfRef.f1_update_valid) {
            if (vlSelfRef.f1_is_call) {
                vlSelfRef.__Vdly__bpd_full_test_top__DOT__ghist_inst__DOT__ras_idx 
                    = ((0x1fU == (IData)(vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__ras_idx))
                        ? 0U : (0x0000001fU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__ras_idx))));
            }
            if (vlSelfRef.f1_is_ret) {
                vlSelfRef.__Vdly__bpd_full_test_top__DOT__ghist_inst__DOT__ras_idx 
                    = ((0U == (IData)(vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__ras_idx))
                        ? 0x0000001fU : (0x0000001fU 
                                         & ((IData)(vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__ras_idx) 
                                            - (IData)(1U))));
            }
        }
        if (((IData)(vlSelfRef.f1_update_valid) & (IData)(vlSelfRef.f1_is_call))) {
            vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__ras_inst__DOT__stack__v0 
                = ((IData)(4U) + vlSelfRef.f0_pc);
            vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__ras_inst__DOT__stack__v0 
                = vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__ras_idx;
            vlSelfRef.__VdlySet__bpd_full_test_top__DOT__ras_inst__DOT__stack__v0 = 1U;
        }
        if (vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__do_allocate) {
            vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__repl_ptr__v0 
                = (1U & ((~ (IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__repl_ptr
                                    [(0x0000001fU & 
                                      (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                       >> 2U))])) & 
                         ((IData)(1U) + (IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__repl_ptr
                                                [(0x0000001fU 
                                                  & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                                     >> 2U))]))));
            vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__repl_ptr__v0 
                = (0x0000001fU & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                  >> 2U));
            vlSelfRef.__VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__repl_ptr__v0 = 1U;
            vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v0 
                = vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__repl_ptr
                [(0x0000001fU & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                 >> 2U))];
            vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v0 
                = (0x0000001fU & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                  >> 2U));
            vlSelfRef.__VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v0 = 1U;
        }
    } else {
        vlSelfRef.__Vdly__bpd_full_test_top__DOT__ghist_inst__DOT__ras_idx = 0U;
        vlSelfRef.__VdlySet__bpd_full_test_top__DOT__ras_inst__DOT__stack__v1 = 1U;
        vlSelfRef.__VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__repl_ptr__v1 = 1U;
        vlSelfRef.__VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v1 = 1U;
    }
}
