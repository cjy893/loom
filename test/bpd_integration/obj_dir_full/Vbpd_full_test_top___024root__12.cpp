// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

void Vbpd_full_test_top___024root___nba_sequent__TOP__3(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___nba_sequent__TOP__3\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_write) {
            if (vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_hit) {
                vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_data__v0 
                    = vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_new_ctr;
                vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_data__v0 
                    = vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_hit_idx;
                vlSelfRef.__VdlySet__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_data__v0 = 1U;
            } else {
                vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_valid 
                    = ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_valid) 
                       | (3U & ((IData)(1U) << (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_enq_idx))));
                vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_idx__v0 
                    = (0x000007ffU & (vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[8U] 
                                      >> 5U));
                vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_idx__v0 
                    = vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_enq_idx;
                vlSelfRef.__VdlySet__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_idx__v0 = 1U;
                vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_data__v1 
                    = vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_new_ctr;
                vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_data__v1 
                    = vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_enq_idx;
                vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_enq_idx 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_enq_idx)));
            }
        }
    } else {
        vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_enq_idx = 0U;
        vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_valid = 0U;
        vlSelfRef.__VdlySet__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_idx__v1 = 1U;
    }
    if (vlSelfRef.__VdlySet__bpd_full_test_top__DOT__ras_inst__DOT__stack__v0) {
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__ras_inst__DOT__stack__v0] 
            = vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__ras_inst__DOT__stack__v0;
    }
    if (vlSelfRef.__VdlySet__bpd_full_test_top__DOT__ras_inst__DOT__stack__v1) {
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[0U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[1U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[2U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[3U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[4U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[5U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[6U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[7U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[8U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[9U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[10U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[11U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[12U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[13U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[14U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[15U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[16U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[17U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[18U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[19U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[20U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[21U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[22U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[23U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[24U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[25U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[26U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[27U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[28U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[29U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[30U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack[31U] = 0U;
    }
}
