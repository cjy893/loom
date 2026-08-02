// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vftq_test_top.h for the primary calling header

#include "Vftq_test_top__pch.h"

bool Vftq_test_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void Vftq_test_top___024root___eval_triggers_vec__ico__0(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___eval_triggers_vec__ico__0\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                    ((((((((IData)(vlSelfRef.flush_valid) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__flush_valid__0)) 
                                                          << 6U) 
                                                         | ((((IData)(vlSelfRef.query_idx) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__query_idx__0)) 
                                                             << 5U) 
                                                            | (((IData)(vlSelfRef.query_valid) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__query_valid__0)) 
                                                               << 4U))) 
                                                        | (((((IData)(vlSelfRef.brupdate_b2_cfi_type) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__brupdate_b2_cfi_type__0)) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.brupdate_b2_pc_lob) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__brupdate_b2_pc_lob__0)) 
                                                               << 2U)) 
                                                           | (((vlSelfRef.brupdate_b2_target 
                                                                != vlSelfRef.__Vtrigprevexpr___TOP__brupdate_b2_target__0) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.brupdate_b2_taken) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__brupdate_b2_taken__0))))) 
                                                       << 0x00000018U) 
                                                      | (((((((IData)(vlSelfRef.brupdate_b2_ftq_idx) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__brupdate_b2_ftq_idx__0)) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.brupdate_b2_mispredict) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__brupdate_b2_mispredict__0)) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.redirect_ftq_idx) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__redirect_ftq_idx__0)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.redirect_valid) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__redirect_valid__0)))) 
                                                          << 0x00000014U) 
                                                         | ((((((IData)(vlSelfRef.commit_ftq_idx) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__commit_ftq_idx__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.commit_valid) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__commit_valid__0)) 
                                                                 << 2U)) 
                                                             | (((0U 
                                                                  != 
                                                                  ((((((((vlSelfRef.enq_meta[0U] 
                                                                          ^ vlSelfRef.__Vtrigprevexpr___TOP__enq_meta__0[0U]) 
                                                                         | (vlSelfRef.enq_meta[1U] 
                                                                            ^ vlSelfRef.__Vtrigprevexpr___TOP__enq_meta__0[1U])) 
                                                                        | (vlSelfRef.enq_meta[2U] 
                                                                           ^ vlSelfRef.__Vtrigprevexpr___TOP__enq_meta__0[2U])) 
                                                                       | (vlSelfRef.enq_meta[3U] 
                                                                          ^ vlSelfRef.__Vtrigprevexpr___TOP__enq_meta__0[3U])) 
                                                                      | (vlSelfRef.enq_meta[4U] 
                                                                         ^ vlSelfRef.__Vtrigprevexpr___TOP__enq_meta__0[4U])) 
                                                                     | (vlSelfRef.enq_meta[5U] 
                                                                        ^ vlSelfRef.__Vtrigprevexpr___TOP__enq_meta__0[5U])) 
                                                                    | (vlSelfRef.enq_meta[6U] 
                                                                       ^ vlSelfRef.__Vtrigprevexpr___TOP__enq_meta__0[6U])) 
                                                                   | (vlSelfRef.enq_meta[7U] 
                                                                      ^ vlSelfRef.__Vtrigprevexpr___TOP__enq_meta__0[7U]))) 
                                                                 << 1U) 
                                                                | (0U 
                                                                   != 
                                                                   (((vlSelfRef.enq_ghist[0U] 
                                                                      ^ vlSelfRef.__Vtrigprevexpr___TOP__enq_ghist__0[0U]) 
                                                                     | (vlSelfRef.enq_ghist[1U] 
                                                                        ^ vlSelfRef.__Vtrigprevexpr___TOP__enq_ghist__0[1U])) 
                                                                    | (vlSelfRef.enq_ghist[2U] 
                                                                       ^ vlSelfRef.__Vtrigprevexpr___TOP__enq_ghist__0[2U]))))) 
                                                            << 0x00000010U))) 
                                                     | ((((((((IData)(vlSelfRef.enq_start_bank) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__enq_start_bank__0)) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.enq_ras_idx) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__enq_ras_idx__0)) 
                                                               << 2U)) 
                                                           | (((vlSelfRef.enq_ras_top 
                                                                != vlSelfRef.__Vtrigprevexpr___TOP__enq_ras_top__0) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.enq_cfi_taken) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__enq_cfi_taken__0)))) 
                                                          << 0x0000000cU) 
                                                         | ((((((IData)(vlSelfRef.enq_cfi_npc_plus4) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__enq_cfi_npc_plus4__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.enq_cfi_is_ret) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__enq_cfi_is_ret__0)) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.enq_cfi_is_call) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__enq_cfi_is_call__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.enq_cfi_type) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__enq_cfi_type__0)))) 
                                                            << 8U)) 
                                                        | (((((((IData)(vlSelfRef.enq_cfi_idx) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__enq_cfi_idx__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.enq_cfi_valid) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__enq_cfi_valid__0)) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.enq_br_mask) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__enq_br_mask__0)) 
                                                                 << 1U) 
                                                                | (vlSelfRef.enq_next_pc 
                                                                   != vlSelfRef.__Vtrigprevexpr___TOP__enq_next_pc__0))) 
                                                            << 4U) 
                                                           | ((((vlSelfRef.enq_pc 
                                                                 != vlSelfRef.__Vtrigprevexpr___TOP__enq_pc__0) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.enq_valid) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__enq_valid__0)) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.rst_n) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.clk) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))))))));
}
