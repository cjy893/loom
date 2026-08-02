// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

void Vbpd_full_test_top___024root___nba_sequent__TOP__5(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___nba_sequent__TOP__5\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_data__v0) {
        vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_data[vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_data__v0] 
            = vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_data__v0;
    }
    if (vlSelfRef.__VdlySet__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_idx__v0) {
        vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_data[vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_data__v1] 
            = vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_data__v1;
        vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_idx[vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_idx__v0] 
            = vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_idx__v0;
    }
    if (vlSelfRef.__VdlySet__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_idx__v1) {
        vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_data[0U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_data[1U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_idx[0U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_idx[1U] = 0U;
    }
    vlSelfRef.ras_read_addr = vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack
        [vlSelfRef.ras_read_idx];
    vlSelfRef.current_ghist[0U] = vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[0U];
    vlSelfRef.current_ghist[1U] = vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[1U];
    vlSelfRef.current_ghist[2U] = vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = ((0x00000020U 
                                                 & vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[0U])
                                                 ? 
                                                (1ULL 
                                                 | (0xfffffffffffffffeULL 
                                                    & (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[2U])) 
                                                        << 0x00000039U) 
                                                       | (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[1U])) 
                                                           << 0x00000019U) 
                                                          | (0x01fffffffffffffeULL 
                                                             & ((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[0U])) 
                                                                >> 7U))))))
                                                 : 
                                                ((0x00000040U 
                                                  & vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[0U])
                                                  ? 
                                                 (0xfffffffffffffffeULL 
                                                  & (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[2U])) 
                                                      << 0x00000039U) 
                                                     | (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[1U])) 
                                                         << 0x00000019U) 
                                                        | (0x01fffffffffffffeULL 
                                                           & ((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[0U])) 
                                                              >> 7U)))))
                                                  : 
                                                 (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[2U])) 
                                                   << 0x00000038U) 
                                                  | (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[1U])) 
                                                      << 0x00000018U) 
                                                     | ((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[0U])) 
                                                        >> 8U)))));
}
