// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vftq_test_top.h for the primary calling header

#include "Vftq_test_top__pch.h"

VL_ATTR_COLD void Vftq_test_top___024root___dump_triggers__ico__3(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___dump_triggers__ico__3\n"); );
    // Body
    if ((1U & (IData)((triggers[0U] >> 0x0000001dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 29 is active: @( query_idx)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 30 is active: @( flush_valid)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}

bool Vftq_test_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vftq_test_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vftq_test_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vftq_test_top___024root___eval_static__0(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___eval_static__0\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__enq_valid__0 = vlSelfRef.enq_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__enq_pc__0 = vlSelfRef.enq_pc;
    vlSelfRef.__Vtrigprevexpr___TOP__enq_next_pc__0 
        = vlSelfRef.enq_next_pc;
    vlSelfRef.__Vtrigprevexpr___TOP__enq_br_mask__0 
        = vlSelfRef.enq_br_mask;
    vlSelfRef.__Vtrigprevexpr___TOP__enq_cfi_valid__0 
        = vlSelfRef.enq_cfi_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__enq_cfi_idx__0 
        = vlSelfRef.enq_cfi_idx;
    vlSelfRef.__Vtrigprevexpr___TOP__enq_cfi_type__0 
        = vlSelfRef.enq_cfi_type;
    vlSelfRef.__Vtrigprevexpr___TOP__enq_cfi_is_call__0 
        = vlSelfRef.enq_cfi_is_call;
    vlSelfRef.__Vtrigprevexpr___TOP__enq_cfi_is_ret__0 
        = vlSelfRef.enq_cfi_is_ret;
    vlSelfRef.__Vtrigprevexpr___TOP__enq_cfi_npc_plus4__0 
        = vlSelfRef.enq_cfi_npc_plus4;
    vlSelfRef.__Vtrigprevexpr___TOP__enq_cfi_taken__0 
        = vlSelfRef.enq_cfi_taken;
    vlSelfRef.__Vtrigprevexpr___TOP__enq_ras_top__0 
        = vlSelfRef.enq_ras_top;
    vlSelfRef.__Vtrigprevexpr___TOP__enq_ras_idx__0 
        = vlSelfRef.enq_ras_idx;
    vlSelfRef.__Vtrigprevexpr___TOP__enq_start_bank__0 
        = vlSelfRef.enq_start_bank;
    vlSelfRef.__Vtrigprevexpr___TOP__enq_ghist__0[0U] 
        = vlSelfRef.enq_ghist[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__enq_ghist__0[1U] 
        = vlSelfRef.enq_ghist[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__enq_ghist__0[2U] 
        = vlSelfRef.enq_ghist[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__enq_meta__0[0U] 
        = vlSelfRef.enq_meta[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__enq_meta__0[1U] 
        = vlSelfRef.enq_meta[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__enq_meta__0[2U] 
        = vlSelfRef.enq_meta[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__enq_meta__0[3U] 
        = vlSelfRef.enq_meta[3U];
    vlSelfRef.__Vtrigprevexpr___TOP__enq_meta__0[4U] 
        = vlSelfRef.enq_meta[4U];
    vlSelfRef.__Vtrigprevexpr___TOP__enq_meta__0[5U] 
        = vlSelfRef.enq_meta[5U];
    vlSelfRef.__Vtrigprevexpr___TOP__enq_meta__0[6U] 
        = vlSelfRef.enq_meta[6U];
    vlSelfRef.__Vtrigprevexpr___TOP__enq_meta__0[7U] 
        = vlSelfRef.enq_meta[7U];
    vlSelfRef.__Vtrigprevexpr___TOP__commit_valid__0 
        = vlSelfRef.commit_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__commit_ftq_idx__0 
        = vlSelfRef.commit_ftq_idx;
    vlSelfRef.__Vtrigprevexpr___TOP__redirect_valid__0 
        = vlSelfRef.redirect_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__redirect_ftq_idx__0 
        = vlSelfRef.redirect_ftq_idx;
    vlSelfRef.__Vtrigprevexpr___TOP__brupdate_b2_mispredict__0 
        = vlSelfRef.brupdate_b2_mispredict;
    vlSelfRef.__Vtrigprevexpr___TOP__brupdate_b2_ftq_idx__0 
        = vlSelfRef.brupdate_b2_ftq_idx;
    vlSelfRef.__Vtrigprevexpr___TOP__brupdate_b2_taken__0 
        = vlSelfRef.brupdate_b2_taken;
    vlSelfRef.__Vtrigprevexpr___TOP__brupdate_b2_target__0 
        = vlSelfRef.brupdate_b2_target;
    vlSelfRef.__Vtrigprevexpr___TOP__brupdate_b2_pc_lob__0 
        = vlSelfRef.brupdate_b2_pc_lob;
    vlSelfRef.__Vtrigprevexpr___TOP__brupdate_b2_cfi_type__0 
        = vlSelfRef.brupdate_b2_cfi_type;
    vlSelfRef.__Vtrigprevexpr___TOP__query_valid__0 
        = vlSelfRef.query_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__query_idx__0 = vlSelfRef.query_idx;
    vlSelfRef.__Vtrigprevexpr___TOP__flush_valid__0 
        = vlSelfRef.flush_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__1 = vlSelfRef.rst_n;
}
