// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode_test_top.h for the primary calling header

#include "Vdecode_test_top__pch.h"

void Vdecode_test_top___024root___ico_comb__TOP__2(Vdecode_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_test_top___024root___ico_comb__TOP__2\n"); );
    Vdecode_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.imm_packed = (0x03ffffffU & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[6U] 
                                            << 0x0000000aU) 
                                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[5U] 
                                              >> 0x00000016U)));
    vlSelfRef.br_type = (0x0000000fU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[7U] 
                                        >> 0x00000015U));
    vlSelfRef.allocate_brtag = (1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[7U] 
                                      >> 0x00000019U));
    vlSelfRef.is_br = (1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[7U] 
                             >> 8U));
    vlSelfRef.is_b_bl = (1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[7U] 
                               >> 7U));
    vlSelfRef.is_jirl = (1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[7U] 
                               >> 6U));
    vlSelfRef.uses_ldq = (1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U] 
                                >> 2U));
    vlSelfRef.uses_stq = (1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U] 
                                >> 1U));
    vlSelfRef.mem_cmd = (0x0000001fU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U] 
                                        >> 6U));
    vlSelfRef.mem_size = (3U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U] 
                                >> 4U));
    vlSelfRef.mem_signed = (1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U] 
                                  >> 3U));
    vlSelfRef.is_unique = (1U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U]);
    vlSelfRef.is_rdcnt = (1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[7U] 
                                >> 5U));
    vlSelfRef.is_ertn = (1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[7U] 
                               >> 0x0000000cU));
    vlSelfRef.flush_on_commit = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                 >> 0x0000001fU);
    vlSelfRef.csr_cmd = (7U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U] 
                               >> 0x00000019U));
    vlSelfRef.tlb_cmd = (7U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U] 
                               >> 0x00000016U));
    vlSelfRef.exception = (1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U] 
                                 >> 0x0000000bU));
    vlSelfRef.exc_cause = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U] 
                            << 0x00000015U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U] 
                                               >> 0x0000000bU));
    vlSelfRef.exc_adef = (1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                >> 9U));
}
