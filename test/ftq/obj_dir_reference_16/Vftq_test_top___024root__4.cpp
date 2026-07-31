// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vftq_test_top.h for the primary calling header

#include "Vftq_test_top__pch.h"

bool Vftq_test_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vftq_test_top___024root___nba_sequent__TOP__0(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___nba_sequent__TOP__0\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__commit_busy_q 
        = vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_busy_q;
    vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_end_q 
        = vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_end_q;
    vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__commit_ptr_q 
        = vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q;
    vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_ptr_q 
        = vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q;
    vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__entry_valid_q 
        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entry_valid_q;
    vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_busy_q 
        = vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_busy_q;
    vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__enq_ptr_q 
        = vlSelfRef.ftq_test_top__DOT__dut__DOT__enq_ptr_q;
    vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v0 = 0U;
    vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v1 = 0U;
    vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v2 = 0U;
    vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v3 = 0U;
    vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v4 = 0U;
    vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v7 = 0U;
}

extern const VlWide<15>/*479:0*/ Vftq_test_top__ConstPool__CONST_hb2c668e2_0;

void Vftq_test_top___024root___nba_sequent__TOP__1(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___nba_sequent__TOP__1\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__redirect_idx;
    __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__redirect_idx = 0;
    CData/*3:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__stop_exclusive;
    __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__stop_exclusive = 0;
    SData/*15:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result;
    __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result = 0;
    CData/*3:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx;
    __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx = 0;
    CData/*3:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__Vfuncout;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__idx;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__idx = 0;
    CData/*3:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx = 0;
    CData/*3:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__6__Vfuncout;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__6__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__6__idx;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__6__idx = 0;
    VlWide<3>/*71:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__Vfuncout;
    VL_ZERO_W(72, __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__Vfuncout);
    VlWide<3>/*71:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot;
    VL_ZERO_W(72, __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot);
    CData/*0:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__taken;
    __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__taken = 0;
    CData/*0:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__is_br;
    __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__is_br = 0;
    CData/*0:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__is_call;
    __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__is_call = 0;
    CData/*0:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__is_ret;
    __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__is_ret = 0;
    VlWide<3>/*71:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__result;
    VL_ZERO_W(72, __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__result);
    CData/*3:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__8__Vfuncout;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__8__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__8__idx;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__8__idx = 0;
    CData/*3:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__9__idx;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__9__idx = 0;
    CData/*3:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__mask_to_idx__10__mask;
    __Vfunc_ftq_test_top__DOT__dut__DOT__mask_to_idx__10__mask = 0;
    CData/*0:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__mask_to_idx__10__found;
    __Vfunc_ftq_test_top__DOT__dut__DOT__mask_to_idx__10__found = 0;
    CData/*1:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__mask_to_idx__10__result;
    __Vfunc_ftq_test_top__DOT__dut__DOT__mask_to_idx__10__result = 0;
    VlWide<14>/*428:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__11__entry;
    VL_ZERO_W(429, __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__11__entry);
    CData/*3:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__12__idx;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__12__idx = 0;
    CData/*3:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__13__Vfuncout;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__13__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__13__idx;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__13__idx = 0;
    VlWide<14>/*428:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__14__entry;
    VL_ZERO_W(429, __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__14__entry);
    VlWide<15>/*457:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout;
    VL_ZERO_W(458, __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout);
    VlWide<14>/*428:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry;
    VL_ZERO_W(429, __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry);
    VlWide<15>/*457:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result;
    VL_ZERO_W(458, __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result);
    CData/*3:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__16__Vfuncout;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__16__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__16__idx;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__16__idx = 0;
    CData/*3:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__17__Vfuncout;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__17__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__17__idx;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__17__idx = 0;
    // Body
    if (vlSelfRef.rst_n) {
        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_valid_q = 0U;
        vlSelfRef.ghist_restore_valid = 0U;
        vlSelfRef.ras_repair_valid = 0U;
        vlSelfRef.query_resp_valid = 0U;
        if (((((IData)(vlSelfRef.query_valid) & (~ (IData)(vlSelfRef.redirect_valid))) 
              & VL_GTS_III(32, 0x00000010U, (IData)(vlSelfRef.query_idx))) 
             & ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__entry_valid_q) 
                >> (IData)(vlSelfRef.query_idx)))) {
            vlSelfRef.query_resp_valid = 1U;
            vlSelfRef.query_pc = ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                   [vlSelfRef.query_idx][13U] 
                                   << 0x00000013U) 
                                  | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                     [vlSelfRef.query_idx][12U] 
                                     >> 0x0000000dU));
            vlSelfRef.query_br_mask = (0x0000000fU 
                                       & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                          [vlSelfRef.query_idx][11U] 
                                          >> 9U));
            vlSelfRef.query_cfi_valid = (1U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                               [vlSelfRef.query_idx][11U] 
                                               >> 8U));
            vlSelfRef.query_cfi_idx = (3U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                             [vlSelfRef.query_idx][11U] 
                                             >> 6U));
            vlSelfRef.query_cfi_type = (7U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                              [vlSelfRef.query_idx][11U] 
                                              >> 3U));
            vlSelfRef.query_cfi_is_call = (1U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                 [vlSelfRef.query_idx][11U] 
                                                 >> 2U));
            vlSelfRef.query_cfi_is_ret = (1U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                [vlSelfRef.query_idx][11U] 
                                                >> 1U));
            vlSelfRef.query_cfi_npc_plus4 = (1U & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                             [vlSelfRef.query_idx][11U]);
            vlSelfRef.query_cfi_taken = (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                         [vlSelfRef.query_idx][10U] 
                                         >> 0x0000001fU);
            vlSelfRef.query_ras_top = ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                        [vlSelfRef.query_idx][10U] 
                                        << 2U) | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                  [vlSelfRef.query_idx][9U] 
                                                  >> 0x0000001eU));
            vlSelfRef.query_ras_idx = (0x0000001fU 
                                       & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                          [vlSelfRef.query_idx][9U] 
                                          >> 0x00000019U));
            vlSelfRef.query_start_bank = (1U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                [vlSelfRef.query_idx][9U] 
                                                >> 0x00000018U));
            vlSelfRef.query_ghist[0U] = ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                          [vlSelfRef.query_idx][8U] 
                                          << 0x00000010U) 
                                         | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                            [vlSelfRef.query_idx][7U] 
                                            >> 0x00000010U));
            vlSelfRef.query_ghist[1U] = ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                          [vlSelfRef.query_idx][9U] 
                                          << 0x00000010U) 
                                         | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                            [vlSelfRef.query_idx][8U] 
                                            >> 0x00000010U));
            vlSelfRef.query_ghist[2U] = (0x000000ffU 
                                         & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                            [vlSelfRef.query_idx][9U] 
                                            >> 0x00000010U));
        }
        if (vlSelfRef.commit_valid) {
            vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__commit_busy_q = 1U;
        }
        if (vlSelfRef.redirect_valid) {
            __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__6__idx 
                = vlSelfRef.redirect_ftq_idx;
            __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__stop_exclusive 
                = vlSelfRef.ftq_test_top__DOT__dut__DOT__enq_ptr_q;
            __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__6__Vfuncout 
                = ((0x0fU == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__6__idx))
                    ? 0U : (0x0000000fU & ((IData)(1U) 
                                           + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__6__idx))));
            __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__redirect_idx 
                = vlSelfRef.redirect_ftq_idx;
            __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result = 0U;
            __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__idx 
                = __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__redirect_idx;
            __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__Vfuncout 
                = ((0x0fU == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__idx))
                    ? 0U : (0x0000000fU & ((IData)(1U) 
                                           + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__idx))));
            __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx 
                = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__Vfuncout;
            if (((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx) 
                 != (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__stop_exclusive))) {
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result 
                    = ((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result) 
                       | (0x0000ffffU & ((IData)(1U) 
                                         << (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx;
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout 
                    = ((0x0fU == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))
                        ? 0U : (0x0000000fU & ((IData)(1U) 
                                               + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout;
            }
            if (((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx) 
                 != (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__stop_exclusive))) {
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result 
                    = ((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result) 
                       | (0x0000ffffU & ((IData)(1U) 
                                         << (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx;
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout 
                    = ((0x0fU == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))
                        ? 0U : (0x0000000fU & ((IData)(1U) 
                                               + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout;
            }
            if (((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx) 
                 != (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__stop_exclusive))) {
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result 
                    = ((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result) 
                       | (0x0000ffffU & ((IData)(1U) 
                                         << (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx;
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout 
                    = ((0x0fU == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))
                        ? 0U : (0x0000000fU & ((IData)(1U) 
                                               + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout;
            }
            if (((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx) 
                 != (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__stop_exclusive))) {
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result 
                    = ((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result) 
                       | (0x0000ffffU & ((IData)(1U) 
                                         << (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx;
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout 
                    = ((0x0fU == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))
                        ? 0U : (0x0000000fU & ((IData)(1U) 
                                               + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout;
            }
            if (((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx) 
                 != (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__stop_exclusive))) {
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result 
                    = ((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result) 
                       | (0x0000ffffU & ((IData)(1U) 
                                         << (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx;
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout 
                    = ((0x0fU == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))
                        ? 0U : (0x0000000fU & ((IData)(1U) 
                                               + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout;
            }
            if (((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx) 
                 != (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__stop_exclusive))) {
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result 
                    = ((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result) 
                       | (0x0000ffffU & ((IData)(1U) 
                                         << (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx;
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout 
                    = ((0x0fU == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))
                        ? 0U : (0x0000000fU & ((IData)(1U) 
                                               + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout;
            }
            if (((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx) 
                 != (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__stop_exclusive))) {
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result 
                    = ((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result) 
                       | (0x0000ffffU & ((IData)(1U) 
                                         << (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx;
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout 
                    = ((0x0fU == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))
                        ? 0U : (0x0000000fU & ((IData)(1U) 
                                               + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout;
            }
            if (((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx) 
                 != (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__stop_exclusive))) {
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result 
                    = ((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result) 
                       | (0x0000ffffU & ((IData)(1U) 
                                         << (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx;
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout 
                    = ((0x0fU == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))
                        ? 0U : (0x0000000fU & ((IData)(1U) 
                                               + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout;
            }
            if (((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx) 
                 != (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__stop_exclusive))) {
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result 
                    = ((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result) 
                       | (0x0000ffffU & ((IData)(1U) 
                                         << (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx;
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout 
                    = ((0x0fU == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))
                        ? 0U : (0x0000000fU & ((IData)(1U) 
                                               + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout;
            }
            if (((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx) 
                 != (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__stop_exclusive))) {
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result 
                    = ((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result) 
                       | (0x0000ffffU & ((IData)(1U) 
                                         << (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx;
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout 
                    = ((0x0fU == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))
                        ? 0U : (0x0000000fU & ((IData)(1U) 
                                               + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout;
            }
            if (((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx) 
                 != (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__stop_exclusive))) {
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result 
                    = ((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result) 
                       | (0x0000ffffU & ((IData)(1U) 
                                         << (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx;
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout 
                    = ((0x0fU == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))
                        ? 0U : (0x0000000fU & ((IData)(1U) 
                                               + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout;
            }
            if (((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx) 
                 != (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__stop_exclusive))) {
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result 
                    = ((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result) 
                       | (0x0000ffffU & ((IData)(1U) 
                                         << (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx;
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout 
                    = ((0x0fU == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))
                        ? 0U : (0x0000000fU & ((IData)(1U) 
                                               + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout;
            }
            if (((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx) 
                 != (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__stop_exclusive))) {
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result 
                    = ((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result) 
                       | (0x0000ffffU & ((IData)(1U) 
                                         << (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx;
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout 
                    = ((0x0fU == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))
                        ? 0U : (0x0000000fU & ((IData)(1U) 
                                               + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout;
            }
            if (((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx) 
                 != (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__stop_exclusive))) {
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result 
                    = ((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result) 
                       | (0x0000ffffU & ((IData)(1U) 
                                         << (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx;
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout 
                    = ((0x0fU == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))
                        ? 0U : (0x0000000fU & ((IData)(1U) 
                                               + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout;
            }
            if (((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx) 
                 != (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__stop_exclusive))) {
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result 
                    = ((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result) 
                       | (0x0000ffffU & ((IData)(1U) 
                                         << (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx;
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout 
                    = ((0x0fU == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))
                        ? 0U : (0x0000000fU & ((IData)(1U) 
                                               + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout;
            }
            if (((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx) 
                 != (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__stop_exclusive))) {
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result 
                    = ((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result) 
                       | (0x0000ffffU & ((IData)(1U) 
                                         << (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx;
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout 
                    = ((0x0fU == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))
                        ? 0U : (0x0000000fU & ((IData)(1U) 
                                               + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__scan_idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout;
            }
            vlSelfRef.ftq_test_top__DOT__dut__DOT____VlemCall_1__make_kill_mask 
                = __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__3__result;
            vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__entry_valid_q 
                = ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__entry_valid_q) 
                   & (~ (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT____VlemCall_1__make_kill_mask)));
            vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_busy_q = 0U;
            if ((1U & ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__entry_valid_q) 
                       >> (IData)(vlSelfRef.redirect_ftq_idx)))) {
                vlSelfRef.ghist_restore_valid = 1U;
                vlSelfRef.ghist_restore[0U] = ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                [vlSelfRef.redirect_ftq_idx][8U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                  [vlSelfRef.redirect_ftq_idx][7U] 
                                                  >> 0x00000010U));
                vlSelfRef.ghist_restore[1U] = ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                [vlSelfRef.redirect_ftq_idx][9U] 
                                                << 0x00000010U) 
                                               | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                  [vlSelfRef.redirect_ftq_idx][8U] 
                                                  >> 0x00000010U));
                vlSelfRef.ghist_restore[2U] = (0x000000ffU 
                                               & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                  [vlSelfRef.redirect_ftq_idx][9U] 
                                                  >> 0x00000010U));
                vlSelfRef.ras_repair_valid = 1U;
                vlSelfRef.ras_repair_idx = (0x0000001fU 
                                            & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                               [vlSelfRef.redirect_ftq_idx][9U] 
                                               >> 0x00000019U));
                vlSelfRef.ras_repair_addr = ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                              [vlSelfRef.redirect_ftq_idx][10U] 
                                              << 2U) 
                                             | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                [vlSelfRef.redirect_ftq_idx][9U] 
                                                >> 0x0000001eU));
            }
            if ((((IData)(vlSelfRef.brupdate_b2_mispredict) 
                  & ((IData)(vlSelfRef.brupdate_b2_ftq_idx) 
                     == (IData)(vlSelfRef.redirect_ftq_idx))) 
                 & ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__entry_valid_q) 
                    >> (IData)(vlSelfRef.redirect_ftq_idx)))) {
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__8__idx 
                    = vlSelfRef.redirect_ftq_idx;
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__8__Vfuncout 
                    = ((0x0fU == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__8__idx))
                        ? 0U : (0x0000000fU & ((IData)(1U) 
                                               + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__8__idx))));
                vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_valid_q = 1U;
                vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[0U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.brupdate_b2_ftq_idx][0U];
                vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[1U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.brupdate_b2_ftq_idx][1U];
                vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[2U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.brupdate_b2_ftq_idx][2U];
                vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[3U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.brupdate_b2_ftq_idx][3U];
                vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[4U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.brupdate_b2_ftq_idx][4U];
                vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[5U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.brupdate_b2_ftq_idx][5U];
                vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[6U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.brupdate_b2_ftq_idx][6U];
                vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[7U] 
                    = ((vlSelfRef.brupdate_b2_target 
                        << 0x00000010U) | (0x0000ffffU 
                                           & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                           [vlSelfRef.brupdate_b2_ftq_idx][7U]));
                vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[8U] 
                    = ((0xffff0000U & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[8U]) 
                       | (vlSelfRef.brupdate_b2_target 
                          >> 0x00000010U));
                vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[8U] 
                    = (0x0000ffffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[8U]);
                vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[9U] = 0U;
                vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[10U] 
                    = (0xffff0000U & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                       [vlSelfRef.brupdate_b2_ftq_idx][7U]);
                vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[11U] 
                    = ((0x0000ffffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [vlSelfRef.brupdate_b2_ftq_idx][8U]) 
                       | (0xffff0000U & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                          [vlSelfRef.brupdate_b2_ftq_idx][8U]));
                vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U] 
                    = ((0xff000000U & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U]) 
                       | ((0x0000ffffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                           [vlSelfRef.brupdate_b2_ftq_idx][9U]) 
                          | (0x00ff0000U & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                             [vlSelfRef.brupdate_b2_ftq_idx][9U])));
                vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U] 
                    = (0x88000000U | ((0x00ffffffU 
                                       & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U]) 
                                      | ((((6U & ((
                                                   (0U 
                                                    != (IData)(vlSelfRef.brupdate_b2_br_mask))
                                                    ? 
                                                   (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)
                                                      ? 2U
                                                      : 
                                                     (1U 
                                                      & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))))) 
                                                    | (- (IData)((IData)(
                                                                         (((IData)(vlSelfRef.brupdate_b2_br_mask) 
                                                                           >> 3U) 
                                                                          & (~ 
                                                                             ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4))))))))
                                                    : 
                                                   ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                     [vlSelfRef.brupdate_b2_ftq_idx][11U] 
                                                     << 0x0000001aU) 
                                                    | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                       [vlSelfRef.brupdate_b2_ftq_idx][11U] 
                                                       >> 6U))) 
                                                  << 1U)) 
                                           | (IData)(vlSelfRef.brupdate_b2_taken)) 
                                          << 0x0000001cU) 
                                         | (((IData)(vlSelfRef.brupdate_b2_cfi_is_br) 
                                             << 0x0000001aU) 
                                            | (((2U 
                                                 == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                                << 0x00000019U) 
                                               | ((3U 
                                                   == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                                  << 0x00000018U))))));
                vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[13U] 
                    = (IData)((((QData)((IData)(((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                  [vlSelfRef.brupdate_b2_ftq_idx][13U] 
                                                  << 0x00000013U) 
                                                 | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                    [vlSelfRef.brupdate_b2_ftq_idx][12U] 
                                                    >> 0x0000000dU)))) 
                                << 4U) | (QData)((IData)(vlSelfRef.brupdate_b2_br_mask))));
                vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[14U] 
                    = ((0x000003f0U & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[14U]) 
                       | (0x000003ffU & (IData)(((((QData)((IData)(
                                                                   ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                                     [vlSelfRef.brupdate_b2_ftq_idx][13U] 
                                                                     << 0x00000013U) 
                                                                    | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                                       [vlSelfRef.brupdate_b2_ftq_idx][12U] 
                                                                       >> 0x0000000dU)))) 
                                                   << 4U) 
                                                  | (QData)((IData)(vlSelfRef.brupdate_b2_br_mask))) 
                                                 >> 0x00000020U))));
                vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[14U] 
                    = (0x00000200U | (0x0000000fU & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[14U]));
                vlSelfRef.ghist_restore_valid = 1U;
                vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_ptr_q 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__8__Vfuncout;
                vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_end_q 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__enq_ptr_q;
                __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__is_ret 
                    = vlSelfRef.brupdate_b2_cfi_is_ret;
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__9__idx 
                    = vlSelfRef.redirect_ftq_idx;
                __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__is_call 
                    = vlSelfRef.brupdate_b2_cfi_is_call;
                vlSelfRef.ftq_test_top__DOT__dut__DOT____VlemCall_2__wrap_inc 
                    = ((0x0fU == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__9__idx))
                        ? 0U : (0x0000000fU & ((IData)(1U) 
                                               + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__9__idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__is_br 
                    = vlSelfRef.brupdate_b2_cfi_is_br;
                vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_busy_q 
                    = ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT____VlemCall_2__wrap_inc) 
                       != (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__enq_ptr_q));
                __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__taken 
                    = vlSelfRef.brupdate_b2_taken;
                __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[0U] 
                    = ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [vlSelfRef.redirect_ftq_idx][8U] 
                        << 0x00000010U) | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                           [vlSelfRef.redirect_ftq_idx][7U] 
                                           >> 0x00000010U));
                __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[1U] 
                    = ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [vlSelfRef.redirect_ftq_idx][9U] 
                        << 0x00000010U) | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                           [vlSelfRef.redirect_ftq_idx][8U] 
                                           >> 0x00000010U));
                __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[2U] 
                    = (0x000000ffU & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                      [vlSelfRef.redirect_ftq_idx][9U] 
                                      >> 0x00000010U));
                __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__result[0U] 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[0U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__result[1U] 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[1U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__result[2U] 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[2U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__result[0U] 
                    = (0xffffff9fU & __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__result[0U]);
                if (__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__is_br) {
                    __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__result[0U] 
                        = ((0x0000007fU & __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__result[0U]) 
                           | (((IData)(((0xfffffffffffffffeULL 
                                         & (((QData)((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[2U])) 
                                             << 0x00000039U) 
                                            | (((QData)((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[1U])) 
                                                << 0x00000019U) 
                                               | (0x01fffffffffffffeULL 
                                                  & ((QData)((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[0U])) 
                                                     >> 7U))))) 
                                        | (QData)((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__taken)))) 
                               << 8U) | (0x00000080U 
                                         & ((~ (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__taken)) 
                                            << 7U))));
                    __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__result[1U] 
                        = ((0x0000007fU & ((IData)(
                                                   ((0xfffffffffffffffeULL 
                                                     & (((QData)((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[2U])) 
                                                         << 0x00000039U) 
                                                        | (((QData)((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[1U])) 
                                                            << 0x00000019U) 
                                                           | (0x01fffffffffffffeULL 
                                                              & ((QData)((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[0U])) 
                                                                 >> 7U))))) 
                                                    | (QData)((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__taken)))) 
                                           >> 0x00000018U)) 
                           | ((0x00000080U & ((IData)(
                                                      ((0xfffffffffffffffeULL 
                                                        & (((QData)((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[2U])) 
                                                            << 0x00000039U) 
                                                           | (((QData)((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[1U])) 
                                                               << 0x00000019U) 
                                                              | (0x01fffffffffffffeULL 
                                                                 & ((QData)((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[0U])) 
                                                                    >> 7U))))) 
                                                       | (QData)((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__taken)))) 
                                              >> 0x00000018U)) 
                              | ((IData)((((0xfffffffffffffffeULL 
                                            & (((QData)((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[2U])) 
                                                << 0x00000039U) 
                                               | (((QData)((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[1U])) 
                                                   << 0x00000019U) 
                                                  | (0x01fffffffffffffeULL 
                                                     & ((QData)((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[0U])) 
                                                        >> 7U))))) 
                                           | (QData)((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__taken))) 
                                          >> 0x00000020U)) 
                                 << 8U)));
                    __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__result[2U] 
                        = (0x000000ffU & ((0x0000007fU 
                                           & ((IData)(
                                                      (((0xfffffffffffffffeULL 
                                                         & (((QData)((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[2U])) 
                                                             << 0x00000039U) 
                                                            | (((QData)((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[1U])) 
                                                                << 0x00000019U) 
                                                               | (0x01fffffffffffffeULL 
                                                                  & ((QData)((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[0U])) 
                                                                     >> 7U))))) 
                                                        | (QData)((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__taken))) 
                                                       >> 0x00000020U)) 
                                              >> 0x00000018U)) 
                                          | (0x00000080U 
                                             & ((IData)(
                                                        (((0xfffffffffffffffeULL 
                                                           & (((QData)((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[2U])) 
                                                               << 0x00000039U) 
                                                              | (((QData)((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[1U])) 
                                                                  << 0x00000019U) 
                                                                 | (0x01fffffffffffffeULL 
                                                                    & ((QData)((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[0U])) 
                                                                       >> 7U))))) 
                                                          | (QData)((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__taken))) 
                                                         >> 0x00000020U)) 
                                                >> 0x00000018U))));
                }
                vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v0 
                    = vlSelfRef.brupdate_b2_target;
                vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v0 
                    = vlSelfRef.redirect_ftq_idx;
                vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v0 = 1U;
                if (__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__is_call) {
                    __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__result[0U] 
                        = ((0xffffffe0U & __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__result[0U]) 
                           | ((0x1fU == (0x0000001fU 
                                         & __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[0U]))
                               ? 0U : (0x0000001fU 
                                       & ((IData)(1U) 
                                          + __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[0U]))));
                }
                vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v1 
                    = vlSelfRef.redirect_ftq_idx;
                vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v1 = 1U;
                if (__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__is_ret) {
                    __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__result[0U] 
                        = ((0xffffffe0U & __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__result[0U]) 
                           | ((0U == (0x0000001fU & __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[0U]))
                               ? 0x0000001fU : (0x0000001fU 
                                                & (__Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__snapshot[0U] 
                                                   - (IData)(1U)))));
                }
                if ((0U != (IData)(vlSelfRef.brupdate_b2_br_mask))) {
                    __Vfunc_ftq_test_top__DOT__dut__DOT__mask_to_idx__10__mask 
                        = vlSelfRef.brupdate_b2_br_mask;
                    __Vfunc_ftq_test_top__DOT__dut__DOT__mask_to_idx__10__found = 0U;
                    __Vfunc_ftq_test_top__DOT__dut__DOT__mask_to_idx__10__result = 0U;
                    if ((1U & (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__mask_to_idx__10__mask))) {
                        __Vfunc_ftq_test_top__DOT__dut__DOT__mask_to_idx__10__found = 1U;
                        __Vfunc_ftq_test_top__DOT__dut__DOT__mask_to_idx__10__result = 0U;
                    }
                    if ((1U & (((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__mask_to_idx__10__mask) 
                                >> 1U) & (~ (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__mask_to_idx__10__found))))) {
                        __Vfunc_ftq_test_top__DOT__dut__DOT__mask_to_idx__10__found = 1U;
                        __Vfunc_ftq_test_top__DOT__dut__DOT__mask_to_idx__10__result = 1U;
                    }
                    if ((1U & (((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__mask_to_idx__10__mask) 
                                >> 2U) & (~ (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__mask_to_idx__10__found))))) {
                        __Vfunc_ftq_test_top__DOT__dut__DOT__mask_to_idx__10__found = 1U;
                        __Vfunc_ftq_test_top__DOT__dut__DOT__mask_to_idx__10__result = 2U;
                    }
                    if ((IData)((((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__mask_to_idx__10__mask) 
                                  >> 3U) & (~ (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__mask_to_idx__10__found))))) {
                        __Vfunc_ftq_test_top__DOT__dut__DOT__mask_to_idx__10__found = 1U;
                        __Vfunc_ftq_test_top__DOT__dut__DOT__mask_to_idx__10__result = 3U;
                    }
                    vlSelfRef.ftq_test_top__DOT__dut__DOT____VlemCall_3__mask_to_idx 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__mask_to_idx__10__result;
                    vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v2 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT____VlemCall_3__mask_to_idx;
                    vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v2 
                        = vlSelfRef.redirect_ftq_idx;
                    vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v2 = 1U;
                }
                __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__Vfuncout[0U] 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__result[0U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__Vfuncout[1U] 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__result[1U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__Vfuncout[2U] 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__result[2U];
                vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v3 
                    = vlSelfRef.brupdate_b2_taken;
                vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v3 
                    = vlSelfRef.redirect_ftq_idx;
                vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v3 = 1U;
                vlSelfRef.ghist_restore[0U] = __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__Vfuncout[0U];
                vlSelfRef.ghist_restore[1U] = __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__Vfuncout[1U];
                vlSelfRef.ghist_restore[2U] = __Vfunc_ftq_test_top__DOT__dut__DOT__corrected_ghist__7__Vfuncout[2U];
                vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v4 
                    = vlSelfRef.redirect_ftq_idx;
                vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v4 = 1U;
                vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v5 
                    = vlSelfRef.brupdate_b2_cfi_is_call;
                vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v5 
                    = vlSelfRef.redirect_ftq_idx;
                vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v6 
                    = vlSelfRef.brupdate_b2_cfi_is_ret;
                vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v6 
                    = vlSelfRef.redirect_ftq_idx;
            }
            vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__enq_ptr_q 
                = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__6__Vfuncout;
        } else {
            if (vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_busy_q) {
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__11__entry[0U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][0U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__11__entry[1U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][1U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__11__entry[2U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][2U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__11__entry[3U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][3U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__11__entry[4U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][4U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__11__entry[5U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][5U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__11__entry[6U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][6U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__11__entry[7U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][7U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__11__entry[8U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][8U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__11__entry[9U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][9U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__11__entry[10U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][10U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__11__entry[11U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][11U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__11__entry[12U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][12U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__11__entry[13U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][13U];
                vlSelfRef.ftq_test_top__DOT__dut__DOT____VlemCall_4__entry_needs_update 
                    = (IData)((0U != (0x00001f00U & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__11__entry[11U])));
                if (vlSelfRef.ftq_test_top__DOT__dut__DOT____VlemCall_4__entry_needs_update) {
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_valid_q = 1U;
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[0U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][0U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[1U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][1U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[2U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][2U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[3U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][3U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[4U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][4U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[5U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][5U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[6U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][6U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[7U] 
                        = ((0xffff0000U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                           [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][11U] 
                                           << 3U)) 
                           | (0x0000ffffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                              [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][7U]));
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[8U] 
                        = ((0xffff0000U & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[8U]) 
                           | ((0x0000fff8U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                              [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][12U] 
                                              << 3U)) 
                              | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                 [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][11U] 
                                 >> 0x0000001dU)));
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[8U] 
                        = (0x0000ffffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[8U]);
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[9U] = 0U;
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[10U] 
                        = (0xffff0000U & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                           [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][7U]);
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[11U] 
                        = ((0x0000ffffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][8U]) 
                           | (0xffff0000U & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                              [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][8U]));
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U] 
                        = ((0xff000000U & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U]) 
                           | ((0x0000ffffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                               [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][9U]) 
                              | (0x00ff0000U & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                 [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][9U])));
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U] 
                        = ((0xe0ffffffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U]) 
                           | ((((6U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                       [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][10U] 
                                       >> 0x0000001dU)) 
                                | (1U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
                               << 0x0000001aU) | ((
                                                   (2U 
                                                    == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                                                   << 0x00000019U) 
                                                  | ((3U 
                                                      == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                                                     << 0x00000018U))));
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U] 
                        = ((0x1fffffffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U]) 
                           | ((IData)((((QData)((IData)(
                                                        ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                          [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][13U] 
                                                          << 0x00000013U) 
                                                         | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                            [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][12U] 
                                                            >> 0x0000000dU)))) 
                                        << 7U) | (QData)((IData)(
                                                                 (0x0000007fU 
                                                                  & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                                     [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][11U] 
                                                                     >> 6U)))))) 
                              << 0x0000001dU));
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[13U] 
                        = (((IData)((((QData)((IData)(
                                                      ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                        [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][13U] 
                                                        << 0x00000013U) 
                                                       | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                          [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][12U] 
                                                          >> 0x0000000dU)))) 
                                      << 7U) | (QData)((IData)(
                                                               (0x0000007fU 
                                                                & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                                   [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][11U] 
                                                                   >> 6U)))))) 
                            >> 3U) | ((IData)(((((QData)((IData)(
                                                                 ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                                   [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][13U] 
                                                                   << 0x00000013U) 
                                                                  | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                                     [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][12U] 
                                                                     >> 0x0000000dU)))) 
                                                 << 7U) 
                                                | (QData)((IData)(
                                                                  (0x0000007fU 
                                                                   & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                                      [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][11U] 
                                                                      >> 6U))))) 
                                               >> 0x00000020U)) 
                                      << 0x0000001dU));
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[14U] 
                        = ((0x000003f0U & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[14U]) 
                           | (0x000003ffU & ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                                          [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][13U] 
                                                                          << 0x00000013U) 
                                                                         | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                                            [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][12U] 
                                                                            >> 0x0000000dU)))) 
                                                        << 7U) 
                                                       | (QData)((IData)(
                                                                         (0x0000007fU 
                                                                          & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                                             [vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q][11U] 
                                                                             >> 6U))))) 
                                                      >> 0x00000020U)) 
                                             >> 3U)));
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[14U] 
                        = (0x00000100U | (0x0000000fU 
                                          & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[14U]));
                }
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__12__idx 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q;
                vlSelfRef.ftq_test_top__DOT__dut__DOT____VlemCall_5__wrap_inc 
                    = ((0x0fU == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__12__idx))
                        ? 0U : (0x0000000fU & ((IData)(1U) 
                                               + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__12__idx))));
                if (((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT____VlemCall_5__wrap_inc) 
                     == (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_end_q))) {
                    vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_busy_q = 0U;
                } else {
                    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__13__idx 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q;
                    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__13__Vfuncout 
                        = ((0x0fU == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__13__idx))
                            ? 0U : (0x0000000fU & ((IData)(1U) 
                                                   + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__13__idx))));
                    vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_ptr_q 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__13__Vfuncout;
                }
            } else if (vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_busy_q) {
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__14__entry[0U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][0U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__14__entry[1U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][1U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__14__entry[2U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][2U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__14__entry[3U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][3U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__14__entry[4U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][4U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__14__entry[5U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][5U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__14__entry[6U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][6U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__14__entry[7U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][7U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__14__entry[8U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][8U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__14__entry[9U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][9U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__14__entry[10U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][10U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__14__entry[11U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][11U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__14__entry[12U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][12U];
                __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__14__entry[13U] 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                    [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][13U];
                vlSelfRef.ftq_test_top__DOT__dut__DOT____VlemCall_6__entry_needs_update 
                    = (IData)((0U != (0x00001f00U & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__14__entry[11U])));
                if ((((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__entry_valid_q) 
                      >> (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)) 
                     & (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT____VlemCall_6__entry_needs_update))) {
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[0U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][0U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[1U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][1U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[2U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][2U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[3U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][3U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[4U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][4U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[5U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][5U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[6U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][6U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[7U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][7U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[8U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][8U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[9U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][9U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[10U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][10U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[11U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][11U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[12U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][12U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[13U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q][13U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_valid_q = 1U;
                    VL_ASSIGN_W(458, __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result, Vftq_test_top__ConstPool__CONST_hb2c668e2_0);
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[12U] 
                        = ((0x07ffffffU & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[12U]) 
                           | (((0x000001f0U & (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[11U] 
                                               >> 4U)) 
                               | ((0x0000000cU & (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[11U] 
                                                  >> 4U)) 
                                  | (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[10U] 
                                     >> 0x0000001eU))) 
                              << 0x0000001bU));
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[13U] 
                        = ((0xfffffff0U & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[13U]) 
                           | (((0x000001f0U & (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[11U] 
                                               >> 4U)) 
                               | ((0x0000000cU & (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[11U] 
                                                  >> 4U)) 
                                  | (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[10U] 
                                     >> 0x0000001eU))) 
                              >> 5U));
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[13U] 
                        = ((0x0000000fU & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[13U]) 
                           | ((__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[13U] 
                               << 0x00000017U) | (0x007ffff0U 
                                                  & (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[12U] 
                                                     >> 9U))));
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[14U] 
                        = ((0x000003f0U & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[14U]) 
                           | (0x0000000fU & (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[13U] 
                                             >> 9U)));
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[12U] 
                        = ((0xf9ffffffU & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[12U]) 
                           | (((1U == (7U & (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[11U] 
                                             >> 3U))) 
                               << 0x0000001aU) | ((2U 
                                                   == 
                                                   (7U 
                                                    & (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[11U] 
                                                       >> 3U))) 
                                                  << 0x00000019U)));
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[10U] 
                        = ((0x0000ffffU & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[10U]) 
                           | (0xffff0000U & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[7U]));
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[11U] 
                        = ((0x0000ffffU & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[8U]) 
                           | (0xffff0000U & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[8U]));
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[12U] 
                        = ((0xfe000000U & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[12U]) 
                           | ((0x0000ffffU & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[9U]) 
                              | (((3U == (7U & (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[11U] 
                                                >> 3U))) 
                                  << 0x00000018U) | 
                                 (0x00ff0000U & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[9U]))));
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[0U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[0U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[1U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[1U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[2U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[2U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[3U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[3U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[4U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[4U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[5U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[5U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[6U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[6U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[7U] 
                        = ((0xffff0000U & (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[11U] 
                                           << 3U)) 
                           | (0x0000ffffU & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[7U]));
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[8U] 
                        = ((0xffff0000U & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[8U]) 
                           | ((0x0000fff8U & (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[12U] 
                                              << 3U)) 
                              | (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__entry[11U] 
                                 >> 0x0000001dU)));
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[0U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[0U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[1U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[1U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[2U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[2U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[3U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[3U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[4U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[4U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[5U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[5U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[6U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[6U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[7U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[7U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[8U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[8U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[9U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[9U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[10U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[10U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[11U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[11U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[12U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[12U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[13U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[13U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[14U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__result[14U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[0U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[0U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[1U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[1U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[2U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[2U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[3U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[3U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[4U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[4U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[5U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[5U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[6U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[6U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[7U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[7U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[8U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[8U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[9U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[9U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[10U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[10U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[11U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[11U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[12U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[13U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[13U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[14U] 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__15__Vfuncout[14U];
                }
                vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__entry_valid_q 
                    = ((~ ((IData)(1U) << (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))) 
                       & (IData)(vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__entry_valid_q));
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__16__idx 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q;
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__16__Vfuncout 
                    = ((0x0fU == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__16__idx))
                        ? 0U : (0x0000000fU & ((IData)(1U) 
                                               + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__16__idx))));
                vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__commit_ptr_q 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__16__Vfuncout;
                vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__commit_busy_q 
                    = ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q) 
                       != ((IData)(vlSelfRef.commit_valid)
                            ? (IData)(vlSelfRef.commit_ftq_idx)
                            : (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_end_q)));
            }
            if (((IData)(vlSelfRef.enq_valid) & (IData)(vlSelfRef.enq_ready))) {
                vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v7[0U] 
                    = vlSelfRef.enq_meta[0U];
                vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v7[1U] 
                    = vlSelfRef.enq_meta[1U];
                vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v7[2U] 
                    = vlSelfRef.enq_meta[2U];
                vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v7[3U] 
                    = vlSelfRef.enq_meta[3U];
                vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v7[4U] 
                    = vlSelfRef.enq_meta[4U];
                vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v7[5U] 
                    = vlSelfRef.enq_meta[5U];
                vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v7[6U] 
                    = vlSelfRef.enq_meta[6U];
                vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v7[7U] 
                    = ((vlSelfRef.enq_ghist[0U] << 0x00000010U) 
                       | vlSelfRef.enq_meta[7U]);
                vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v7[8U] 
                    = ((vlSelfRef.enq_ghist[0U] >> 0x00000010U) 
                       | (vlSelfRef.enq_ghist[1U] << 0x00000010U));
                vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v7[9U] 
                    = ((vlSelfRef.enq_ras_top << 0x0000001eU) 
                       | ((((IData)(vlSelfRef.enq_ras_idx) 
                            << 0x00000019U) | ((IData)(vlSelfRef.enq_start_bank) 
                                               << 0x00000018U)) 
                          | ((vlSelfRef.enq_ghist[1U] 
                              >> 0x00000010U) | (vlSelfRef.enq_ghist[2U] 
                                                 << 0x00000010U))));
                vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v7[10U] 
                    = ((0xc0000000U & vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v7[10U]) 
                       | (vlSelfRef.enq_ras_top >> 2U));
                vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v7[10U] 
                    = ((0x3fffffffU & vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v7[10U]) 
                       | ((IData)(vlSelfRef.enq_cfi_taken) 
                          << 0x0000001fU));
                vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v7[11U] 
                    = ((0xffffe000U & vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v7[11U]) 
                       | ((((IData)(vlSelfRef.enq_br_mask) 
                            << 9U) | (((IData)(vlSelfRef.enq_cfi_valid) 
                                       << 8U) | ((IData)(vlSelfRef.enq_cfi_idx) 
                                                 << 6U))) 
                          | (((IData)(vlSelfRef.enq_cfi_type) 
                              << 3U) | (((IData)(vlSelfRef.enq_cfi_is_call) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.enq_cfi_is_ret) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.enq_cfi_npc_plus4))))));
                vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v7[11U] 
                    = ((0x00001fffU & vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v7[11U]) 
                       | ((IData)((((QData)((IData)(vlSelfRef.enq_pc)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.enq_next_pc)))) 
                          << 0x0000000dU));
                vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v7[12U] 
                    = (((IData)((((QData)((IData)(vlSelfRef.enq_pc)) 
                                  << 0x00000020U) | (QData)((IData)(vlSelfRef.enq_next_pc)))) 
                        >> 0x00000013U) | ((IData)(
                                                   ((((QData)((IData)(vlSelfRef.enq_pc)) 
                                                      << 0x00000020U) 
                                                     | (QData)((IData)(vlSelfRef.enq_next_pc))) 
                                                    >> 0x00000020U)) 
                                           << 0x0000000dU));
                vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v7[13U] 
                    = ((IData)(((((QData)((IData)(vlSelfRef.enq_pc)) 
                                  << 0x00000020U) | (QData)((IData)(vlSelfRef.enq_next_pc))) 
                                >> 0x00000020U)) >> 0x00000013U);
                vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v7 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__enq_ptr_q;
                vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v7 = 1U;
                vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__entry_valid_q 
                    = ((IData)(vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__entry_valid_q) 
                       | (0x0000ffffU & ((IData)(1U) 
                                         << (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__enq_ptr_q))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__17__idx 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__enq_ptr_q;
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__17__Vfuncout 
                    = ((0x0fU == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__17__idx))
                        ? 0U : (0x0000000fU & ((IData)(1U) 
                                               + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__17__idx))));
                vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__enq_ptr_q 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__17__Vfuncout;
            }
        }
    } else {
        vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__commit_busy_q = 0U;
        vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__entry_valid_q = 0U;
        vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__enq_ptr_q = 0U;
        vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__commit_ptr_q = 0U;
        vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_ptr_q = 0U;
        vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_end_q = 0U;
        vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_busy_q = 0U;
        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_valid_q = 0U;
        vlSelfRef.ghist_restore_valid = 0U;
        vlSelfRef.ras_repair_valid = 0U;
        vlSelfRef.query_resp_valid = 0U;
        vlSelfRef.query_pc = 0U;
        vlSelfRef.query_br_mask = 0U;
        vlSelfRef.query_cfi_valid = 0U;
        vlSelfRef.query_cfi_idx = 0U;
        vlSelfRef.query_cfi_type = 0U;
        vlSelfRef.query_cfi_is_call = 0U;
        vlSelfRef.query_cfi_is_ret = 0U;
        vlSelfRef.query_cfi_npc_plus4 = 0U;
        vlSelfRef.query_cfi_taken = 0U;
        vlSelfRef.query_ras_top = 0U;
        vlSelfRef.query_ras_idx = 0U;
        vlSelfRef.query_start_bank = 0U;
        vlSelfRef.query_ghist[0U] = 0U;
        vlSelfRef.query_ghist[1U] = 0U;
        vlSelfRef.query_ghist[2U] = 0U;
    }
}
