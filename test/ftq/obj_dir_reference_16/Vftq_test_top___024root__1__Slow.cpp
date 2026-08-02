// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vftq_test_top.h for the primary calling header

#include "Vftq_test_top__pch.h"

VL_ATTR_COLD void Vftq_test_top___024root___stl_sequent__TOP__0(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___stl_sequent__TOP__0\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.enq_idx = vlSelfRef.ftq_test_top__DOT__dut__DOT__enq_ptr_q;
    vlSelfRef.bpd_update_valid = vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_valid_q;
    vlSelfRef.bpd_update_is_mispredict_update = (1U 
                                                 & (vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[14U] 
                                                    >> 9U));
    vlSelfRef.bpd_update_is_repair_update = (1U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[14U] 
                                                   >> 8U));
    vlSelfRef.bpd_update_pc = ((vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[14U] 
                                << 0x0000001cU) | (vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[13U] 
                                                   >> 4U));
    vlSelfRef.bpd_update_br_mask = (0x0000000fU & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[13U]);
    vlSelfRef.bpd_update_cfi_valid = (vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U] 
                                      >> 0x0000001fU);
    vlSelfRef.bpd_update_cfi_idx = (3U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U] 
                                          >> 0x0000001dU));
    vlSelfRef.bpd_update_cfi_taken = (1U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U] 
                                            >> 0x0000001cU));
    vlSelfRef.bpd_update_cfi_mispredicted = (1U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U] 
                                                   >> 0x0000001bU));
    vlSelfRef.bpd_update_cfi_is_br = (1U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U] 
                                            >> 0x0000001aU));
    vlSelfRef.bpd_update_cfi_is_b_bl = (1U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U] 
                                              >> 0x00000019U));
    vlSelfRef.bpd_update_cfi_is_jirl = (1U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U] 
                                              >> 0x00000018U));
    vlSelfRef.bpd_update_target = ((vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[8U] 
                                    << 0x00000010U) 
                                   | (vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[7U] 
                                      >> 0x00000010U));
    vlSelfRef.bpd_update_ghist[0U] = ((vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[11U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[10U] 
                                         >> 0x00000010U));
    vlSelfRef.bpd_update_ghist[1U] = ((vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U] 
                                       << 0x00000010U) 
                                      | (vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[11U] 
                                         >> 0x00000010U));
    vlSelfRef.bpd_update_ghist[2U] = (0x000000ffU & 
                                      (vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U] 
                                       >> 0x00000010U));
    vlSelfRef.bpd_update_meta[0U] = vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[0U];
    vlSelfRef.bpd_update_meta[1U] = vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[1U];
    vlSelfRef.bpd_update_meta[2U] = vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[2U];
    vlSelfRef.bpd_update_meta[3U] = vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[3U];
    vlSelfRef.bpd_update_meta[4U] = vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[4U];
    vlSelfRef.bpd_update_meta[5U] = vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[5U];
    vlSelfRef.bpd_update_meta[6U] = vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[6U];
    vlSelfRef.bpd_update_meta[7U] = (0x0000ffffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[7U]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (7U 
                                                & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                   [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][11U] 
                                                   >> 3U));
    vlSelfRef.enq_ready = ((~ ((IData)(vlSelfRef.flush_valid) 
                               | ((IData)(vlSelfRef.redirect_valid) 
                                  | ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_busy_q) 
                                     | ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__entry_valid_q) 
                                        >> (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__enq_ptr_q)))))) 
                           & (IData)(vlSelfRef.rst_n));
    vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_pc_lob_d 
        = vlSelfRef.brupdate_b2_pc_lob;
}
