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
        if (vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__do_allocate) {
            vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v0 
                = vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__repl_ptr
                [(0x0000001fU & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                 >> 2U))];
            vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v0 
                = (0x0000001fU & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                  >> 2U));
            vlSelfRef.__VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v0 = 1U;
        }
        if ((((IData)(vlSelfRef.update_valid) & (vlSelfRef.bpd_full_test_top__DOT__update_packed[9U] 
                                                 >> 1U)) 
             & vlSelfRef.update_meta[0U])) {
            vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v1 
                = (1U & (vlSelfRef.update_meta[0U] 
                         >> 2U));
            vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v1 
                = (0x0000001fU & (IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__invalidate_set));
            vlSelfRef.__VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v1 = 1U;
        }
        if ((((IData)(vlSelfRef.update_valid) & (vlSelfRef.bpd_full_test_top__DOT__update_packed[9U] 
                                                 >> 2U)) 
             & (vlSelfRef.update_meta[0U] >> 1U))) {
            vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v2 
                = (1U & (vlSelfRef.update_meta[0U] 
                         >> 3U));
            vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v2 
                = (0x0000001fU & ((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__invalidate_set) 
                                  >> 5U));
            vlSelfRef.__VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v2 = 1U;
        }
    } else {
        vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__rst_col = 0U;
        vlSelfRef.__Vdly__bpd_full_test_top__DOT__bim_inst__DOT__rst_set = 0U;
        vlSelfRef.__Vdly__bpd_full_test_top__DOT__bim_inst__DOT__doing_reset = 1U;
        vlSelfRef.__VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v3 = 1U;
    }
}
