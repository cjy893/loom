// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vftq_test_top.h for the primary calling header

#include "Vftq_test_top__pch.h"

extern const VlWide<15>/*479:0*/ Vftq_test_top__ConstPool__CONST_hb2c668e2_0;

void Vftq_test_top___024root___nba_sequent__TOP__1(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___nba_sequent__TOP__1\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__redirect_idx;
    __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__redirect_idx = 0;
    CData/*2:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__stop_exclusive;
    __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__stop_exclusive = 0;
    CData/*4:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__result;
    __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__result = 0;
    CData/*2:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx;
    __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx = 0;
    CData/*2:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__3__Vfuncout;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__3__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__3__idx;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__3__idx = 0;
    CData/*2:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__Vfuncout;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__idx;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__idx = 0;
    CData/*2:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx = 0;
    VlWide<3>/*71:0*/ __Vfunc_update_global_history__6__Vfuncout;
    VL_ZERO_W(72, __Vfunc_update_global_history__6__Vfuncout);
    VlWide<3>/*71:0*/ __Vfunc_update_global_history__6__snapshot;
    VL_ZERO_W(72, __Vfunc_update_global_history__6__snapshot);
    CData/*3:0*/ __Vfunc_update_global_history__6__br_mask;
    __Vfunc_update_global_history__6__br_mask = 0;
    CData/*0:0*/ __Vfunc_update_global_history__6__cfi_valid;
    __Vfunc_update_global_history__6__cfi_valid = 0;
    CData/*1:0*/ __Vfunc_update_global_history__6__cfi_idx;
    __Vfunc_update_global_history__6__cfi_idx = 0;
    CData/*0:0*/ __Vfunc_update_global_history__6__cfi_taken;
    __Vfunc_update_global_history__6__cfi_taken = 0;
    CData/*0:0*/ __Vfunc_update_global_history__6__cfi_is_br;
    __Vfunc_update_global_history__6__cfi_is_br = 0;
    CData/*0:0*/ __Vfunc_update_global_history__6__cfi_is_call;
    __Vfunc_update_global_history__6__cfi_is_call = 0;
    CData/*0:0*/ __Vfunc_update_global_history__6__cfi_is_ret;
    __Vfunc_update_global_history__6__cfi_is_ret = 0;
    IData/*31:0*/ __Vfunc_update_global_history__6__pc;
    __Vfunc_update_global_history__6__pc = 0;
    VlWide<3>/*71:0*/ __Vfunc_update_global_history__6__result;
    VL_ZERO_W(72, __Vfunc_update_global_history__6__result);
    QData/*63:0*/ __Vfunc_update_global_history__6__base_history;
    __Vfunc_update_global_history__6__base_history = 0;
    CData/*3:0*/ __Vfunc_update_global_history__6__not_taken_mask;
    __Vfunc_update_global_history__6__not_taken_mask = 0;
    CData/*0:0*/ __Vfunc_update_global_history__6__first_bank_saw_nt;
    __Vfunc_update_global_history__6__first_bank_saw_nt = 0;
    CData/*0:0*/ __Vfunc_update_global_history__6__second_bank_saw_nt;
    __Vfunc_update_global_history__6__second_bank_saw_nt = 0;
    CData/*0:0*/ __Vfunc_update_global_history__6__cfi_in_first_bank;
    __Vfunc_update_global_history__6__cfi_in_first_bank = 0;
    CData/*0:0*/ __Vfunc_update_global_history__6__last_bank_in_block;
    __Vfunc_update_global_history__6__last_bank_in_block = 0;
    CData/*2:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__7__Vfuncout;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__7__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__7__idx;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__7__idx = 0;
    CData/*2:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__8__idx;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__8__idx = 0;
    VlWide<14>/*428:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__9__entry;
    VL_ZERO_W(429, __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__9__entry);
    CData/*2:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__10__idx;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__10__idx = 0;
    CData/*2:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__11__Vfuncout;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__11__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__11__idx;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__11__idx = 0;
    VlWide<14>/*428:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__12__entry;
    VL_ZERO_W(429, __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__12__entry);
    VlWide<15>/*457:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout;
    VL_ZERO_W(458, __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout);
    VlWide<14>/*428:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry;
    VL_ZERO_W(429, __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry);
    VlWide<15>/*457:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result;
    VL_ZERO_W(458, __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result);
    CData/*2:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__14__Vfuncout;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__14__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__14__idx;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__14__idx = 0;
    CData/*2:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__15__idx;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__15__idx = 0;
    CData/*2:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__16__Vfuncout;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__16__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__16__idx;
    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__16__idx = 0;
    // Body
    if (vlSelfRef.rst_n) {
        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_valid_q = 0U;
        vlSelfRef.ghist_restore_valid = 0U;
        vlSelfRef.ras_repair_valid = 0U;
        vlSelfRef.query_resp_valid = 0U;
        vlSelfRef.exec_query_resp_valid = 0U;
        vlSelfRef.exec_query_cfi_match = 0U;
        if (vlSelfRef.flush_valid) {
            vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__entry_valid_q = 0U;
            vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__enq_ptr_q = 0U;
            vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__commit_ptr_q = 0U;
            vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__commit_busy_q = 0U;
            vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_ptr_q = 0U;
            vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_end_q = 0U;
            vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_busy_q = 0U;
        } else {
            if ((((IData)(vlSelfRef.exec_query_valid) 
                  & (~ (IData)(vlSelfRef.redirect_valid))) 
                 & VL_GTS_III(32, 5U, (7U & (IData)(vlSelfRef.exec_query_idx))))) {
                if (((4U >= (7U & (IData)(vlSelfRef.exec_query_idx))) 
                     && (1U & ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__entry_valid_q) 
                               >> (7U & (IData)(vlSelfRef.exec_query_idx)))))) {
                    vlSelfRef.exec_query_resp_valid 
                        = (1U | (IData)(vlSelfRef.exec_query_resp_valid));
                    vlSelfRef.exec_query_next_pc[0U] 
                        = ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((4U >= (7U & (IData)(vlSelfRef.exec_query_idx)))
                               ? (7U & (IData)(vlSelfRef.exec_query_idx))
                               : 0U)][12U] << 0x00000013U) 
                           | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                              [((4U >= (7U & (IData)(vlSelfRef.exec_query_idx)))
                                 ? (7U & (IData)(vlSelfRef.exec_query_idx))
                                 : 0U)][11U] >> 0x0000000dU));
                    vlSelfRef.exec_query_cfi_match 
                        = ((6U & (IData)(vlSelfRef.exec_query_cfi_match)) 
                           | ((((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                 [((4U >= (7U & (IData)(vlSelfRef.exec_query_idx)))
                                    ? (7U & (IData)(vlSelfRef.exec_query_idx))
                                    : 0U)][11U] >> 8U) 
                                & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                   [((4U >= (7U & (IData)(vlSelfRef.exec_query_idx)))
                                      ? (7U & (IData)(vlSelfRef.exec_query_idx))
                                      : 0U)][10U] >> 0x0000001fU)) 
                               & (3U == (7U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                               [((4U 
                                                  >= 
                                                  (7U 
                                                   & (IData)(vlSelfRef.exec_query_idx)))
                                                  ? 
                                                 (7U 
                                                  & (IData)(vlSelfRef.exec_query_idx))
                                                  : 0U)][11U] 
                                               >> 3U)))) 
                              & (vlSelfRef.exec_query_pc[0U] 
                                 == (((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                       [((4U >= (7U 
                                                 & (IData)(vlSelfRef.exec_query_idx)))
                                          ? (7U & (IData)(vlSelfRef.exec_query_idx))
                                          : 0U)][13U] 
                                       << 0x00000013U) 
                                      | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                         [((4U >= (7U 
                                                   & (IData)(vlSelfRef.exec_query_idx)))
                                            ? (7U & (IData)(vlSelfRef.exec_query_idx))
                                            : 0U)][12U] 
                                         >> 0x0000000dU)) 
                                     + (0x0000000cU 
                                        & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                           [((4U >= 
                                              (7U & (IData)(vlSelfRef.exec_query_idx)))
                                              ? (7U 
                                                 & (IData)(vlSelfRef.exec_query_idx))
                                              : 0U)][11U] 
                                           >> 4U))))));
                }
            }
            if (((((IData)(vlSelfRef.exec_query_valid) 
                   >> 1U) & (~ (IData)(vlSelfRef.redirect_valid))) 
                 & VL_GTS_III(32, 5U, (7U & ((IData)(vlSelfRef.exec_query_idx) 
                                             >> 3U))))) {
                if (((4U >= (7U & ((IData)(vlSelfRef.exec_query_idx) 
                                   >> 3U))) && (1U 
                                                & ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__entry_valid_q) 
                                                   >> 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.exec_query_idx) 
                                                       >> 3U)))))) {
                    vlSelfRef.exec_query_resp_valid 
                        = (2U | (IData)(vlSelfRef.exec_query_resp_valid));
                    vlSelfRef.exec_query_next_pc[1U] 
                        = ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((4U >= (7U & ((IData)(vlSelfRef.exec_query_idx) 
                                            >> 3U)))
                               ? (7U & ((IData)(vlSelfRef.exec_query_idx) 
                                        >> 3U)) : 0U)][12U] 
                            << 0x00000013U) | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                               [((4U 
                                                  >= 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.exec_query_idx) 
                                                      >> 3U)))
                                                  ? 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.exec_query_idx) 
                                                     >> 3U))
                                                  : 0U)][11U] 
                                               >> 0x0000000dU));
                    vlSelfRef.exec_query_cfi_match 
                        = ((5U & (IData)(vlSelfRef.exec_query_cfi_match)) 
                           | (((((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                  [((4U >= (7U & ((IData)(vlSelfRef.exec_query_idx) 
                                                  >> 3U)))
                                     ? (7U & ((IData)(vlSelfRef.exec_query_idx) 
                                              >> 3U))
                                     : 0U)][11U] >> 8U) 
                                 & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                    [((4U >= (7U & 
                                              ((IData)(vlSelfRef.exec_query_idx) 
                                               >> 3U)))
                                       ? (7U & ((IData)(vlSelfRef.exec_query_idx) 
                                                >> 3U))
                                       : 0U)][10U] 
                                    >> 0x0000001fU)) 
                                & (3U == (7U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                [((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.exec_query_idx) 
                                                       >> 3U)))
                                                   ? 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.exec_query_idx) 
                                                      >> 3U))
                                                   : 0U)][11U] 
                                                >> 3U)))) 
                               & (vlSelfRef.exec_query_pc[1U] 
                                  == (((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                        [((4U >= (7U 
                                                  & ((IData)(vlSelfRef.exec_query_idx) 
                                                     >> 3U)))
                                           ? (7U & 
                                              ((IData)(vlSelfRef.exec_query_idx) 
                                               >> 3U))
                                           : 0U)][13U] 
                                        << 0x00000013U) 
                                       | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                          [((4U >= 
                                             (7U & 
                                              ((IData)(vlSelfRef.exec_query_idx) 
                                               >> 3U)))
                                             ? (7U 
                                                & ((IData)(vlSelfRef.exec_query_idx) 
                                                   >> 3U))
                                             : 0U)][12U] 
                                          >> 0x0000000dU)) 
                                      + (0x0000000cU 
                                         & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                            [((4U >= 
                                               (7U 
                                                & ((IData)(vlSelfRef.exec_query_idx) 
                                                   >> 3U)))
                                               ? (7U 
                                                  & ((IData)(vlSelfRef.exec_query_idx) 
                                                     >> 3U))
                                               : 0U)][11U] 
                                            >> 4U))))) 
                              << 1U));
                }
            }
            if (((((IData)(vlSelfRef.exec_query_valid) 
                   >> 2U) & (~ (IData)(vlSelfRef.redirect_valid))) 
                 & VL_GTS_III(32, 5U, (7U & ((IData)(vlSelfRef.exec_query_idx) 
                                             >> 6U))))) {
                if (((4U >= (7U & ((IData)(vlSelfRef.exec_query_idx) 
                                   >> 6U))) && (1U 
                                                & ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__entry_valid_q) 
                                                   >> 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.exec_query_idx) 
                                                       >> 6U)))))) {
                    vlSelfRef.exec_query_resp_valid 
                        = (4U | (IData)(vlSelfRef.exec_query_resp_valid));
                    vlSelfRef.exec_query_next_pc[2U] 
                        = ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((4U >= (7U & ((IData)(vlSelfRef.exec_query_idx) 
                                            >> 6U)))
                               ? (7U & ((IData)(vlSelfRef.exec_query_idx) 
                                        >> 6U)) : 0U)][12U] 
                            << 0x00000013U) | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                               [((4U 
                                                  >= 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.exec_query_idx) 
                                                      >> 6U)))
                                                  ? 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.exec_query_idx) 
                                                     >> 6U))
                                                  : 0U)][11U] 
                                               >> 0x0000000dU));
                    vlSelfRef.exec_query_cfi_match 
                        = ((3U & (IData)(vlSelfRef.exec_query_cfi_match)) 
                           | (((((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                  [((4U >= (7U & ((IData)(vlSelfRef.exec_query_idx) 
                                                  >> 6U)))
                                     ? (7U & ((IData)(vlSelfRef.exec_query_idx) 
                                              >> 6U))
                                     : 0U)][11U] >> 8U) 
                                 & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                    [((4U >= (7U & 
                                              ((IData)(vlSelfRef.exec_query_idx) 
                                               >> 6U)))
                                       ? (7U & ((IData)(vlSelfRef.exec_query_idx) 
                                                >> 6U))
                                       : 0U)][10U] 
                                    >> 0x0000001fU)) 
                                & (3U == (7U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                [((4U 
                                                   >= 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.exec_query_idx) 
                                                       >> 6U)))
                                                   ? 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.exec_query_idx) 
                                                      >> 6U))
                                                   : 0U)][11U] 
                                                >> 3U)))) 
                               & (vlSelfRef.exec_query_pc[2U] 
                                  == (((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                        [((4U >= (7U 
                                                  & ((IData)(vlSelfRef.exec_query_idx) 
                                                     >> 6U)))
                                           ? (7U & 
                                              ((IData)(vlSelfRef.exec_query_idx) 
                                               >> 6U))
                                           : 0U)][13U] 
                                        << 0x00000013U) 
                                       | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                          [((4U >= 
                                             (7U & 
                                              ((IData)(vlSelfRef.exec_query_idx) 
                                               >> 6U)))
                                             ? (7U 
                                                & ((IData)(vlSelfRef.exec_query_idx) 
                                                   >> 6U))
                                             : 0U)][12U] 
                                          >> 0x0000000dU)) 
                                      + (0x0000000cU 
                                         & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                            [((4U >= 
                                               (7U 
                                                & ((IData)(vlSelfRef.exec_query_idx) 
                                                   >> 6U)))
                                               ? (7U 
                                                  & ((IData)(vlSelfRef.exec_query_idx) 
                                                     >> 6U))
                                               : 0U)][11U] 
                                            >> 4U))))) 
                              << 2U));
                }
            }
            if (((((IData)(vlSelfRef.query_valid) & 
                   (~ (IData)(vlSelfRef.redirect_valid))) 
                  & VL_GTS_III(32, 5U, (IData)(vlSelfRef.query_idx))) 
                 & ((4U >= (IData)(vlSelfRef.query_idx)) 
                    && (1U & ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__entry_valid_q) 
                              >> (IData)(vlSelfRef.query_idx)))))) {
                vlSelfRef.query_resp_valid = 1U;
                vlSelfRef.query_pc = ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                       [((4U >= (IData)(vlSelfRef.query_idx))
                                          ? (IData)(vlSelfRef.query_idx)
                                          : 0U)][13U] 
                                       << 0x00000013U) 
                                      | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                         [((4U >= (IData)(vlSelfRef.query_idx))
                                            ? (IData)(vlSelfRef.query_idx)
                                            : 0U)][12U] 
                                         >> 0x0000000dU));
                vlSelfRef.query_next_pc = ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                            [((4U >= (IData)(vlSelfRef.query_idx))
                                               ? (IData)(vlSelfRef.query_idx)
                                               : 0U)][12U] 
                                            << 0x00000013U) 
                                           | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                              [((4U 
                                                 >= (IData)(vlSelfRef.query_idx))
                                                 ? (IData)(vlSelfRef.query_idx)
                                                 : 0U)][11U] 
                                              >> 0x0000000dU));
                vlSelfRef.query_br_mask = (0x0000000fU 
                                           & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                              [((4U 
                                                 >= (IData)(vlSelfRef.query_idx))
                                                 ? (IData)(vlSelfRef.query_idx)
                                                 : 0U)][11U] 
                                              >> 9U));
                vlSelfRef.query_cfi_valid = (1U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                   [
                                                   ((4U 
                                                     >= (IData)(vlSelfRef.query_idx))
                                                     ? (IData)(vlSelfRef.query_idx)
                                                     : 0U)][11U] 
                                                   >> 8U));
                vlSelfRef.query_cfi_idx = (3U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                 [(
                                                   (4U 
                                                    >= (IData)(vlSelfRef.query_idx))
                                                    ? (IData)(vlSelfRef.query_idx)
                                                    : 0U)][11U] 
                                                 >> 6U));
                vlSelfRef.query_cfi_type = (7U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                  [
                                                  ((4U 
                                                    >= (IData)(vlSelfRef.query_idx))
                                                    ? (IData)(vlSelfRef.query_idx)
                                                    : 0U)][11U] 
                                                  >> 3U));
                vlSelfRef.query_cfi_is_call = (1U & 
                                               (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                [((4U 
                                                   >= (IData)(vlSelfRef.query_idx))
                                                   ? (IData)(vlSelfRef.query_idx)
                                                   : 0U)][11U] 
                                                >> 2U));
                vlSelfRef.query_cfi_is_ret = (1U & 
                                              (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                               [((4U 
                                                  >= (IData)(vlSelfRef.query_idx))
                                                  ? (IData)(vlSelfRef.query_idx)
                                                  : 0U)][11U] 
                                               >> 1U));
                vlSelfRef.query_cfi_npc_plus4 = (1U 
                                                 & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                 [(
                                                   (4U 
                                                    >= (IData)(vlSelfRef.query_idx))
                                                    ? (IData)(vlSelfRef.query_idx)
                                                    : 0U)][11U]);
                vlSelfRef.query_cfi_taken = (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                             [((4U 
                                                >= (IData)(vlSelfRef.query_idx))
                                                ? (IData)(vlSelfRef.query_idx)
                                                : 0U)][10U] 
                                             >> 0x0000001fU);
                vlSelfRef.query_ras_top = ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                            [((4U >= (IData)(vlSelfRef.query_idx))
                                               ? (IData)(vlSelfRef.query_idx)
                                               : 0U)][10U] 
                                            << 2U) 
                                           | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                              [((4U 
                                                 >= (IData)(vlSelfRef.query_idx))
                                                 ? (IData)(vlSelfRef.query_idx)
                                                 : 0U)][9U] 
                                              >> 0x0000001eU));
                vlSelfRef.query_ras_idx = (0x0000001fU 
                                           & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                              [((4U 
                                                 >= (IData)(vlSelfRef.query_idx))
                                                 ? (IData)(vlSelfRef.query_idx)
                                                 : 0U)][9U] 
                                              >> 0x00000019U));
                vlSelfRef.query_start_bank = (1U & 
                                              (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                               [((4U 
                                                  >= (IData)(vlSelfRef.query_idx))
                                                  ? (IData)(vlSelfRef.query_idx)
                                                  : 0U)][9U] 
                                               >> 0x00000018U));
                vlSelfRef.query_ghist[0U] = ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                              [((4U 
                                                 >= (IData)(vlSelfRef.query_idx))
                                                 ? (IData)(vlSelfRef.query_idx)
                                                 : 0U)][8U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                [((4U 
                                                   >= (IData)(vlSelfRef.query_idx))
                                                   ? (IData)(vlSelfRef.query_idx)
                                                   : 0U)][7U] 
                                                >> 0x00000010U));
                vlSelfRef.query_ghist[1U] = ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                              [((4U 
                                                 >= (IData)(vlSelfRef.query_idx))
                                                 ? (IData)(vlSelfRef.query_idx)
                                                 : 0U)][9U] 
                                              << 0x00000010U) 
                                             | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                [((4U 
                                                   >= (IData)(vlSelfRef.query_idx))
                                                   ? (IData)(vlSelfRef.query_idx)
                                                   : 0U)][8U] 
                                                >> 0x00000010U));
                vlSelfRef.query_ghist[2U] = (0x000000ffU 
                                             & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                [((4U 
                                                   >= (IData)(vlSelfRef.query_idx))
                                                   ? (IData)(vlSelfRef.query_idx)
                                                   : 0U)][9U] 
                                                >> 0x00000010U));
            }
            if (vlSelfRef.commit_valid) {
                if ((1U & (~ (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_busy_q)))) {
                    vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__commit_busy_q 
                        = ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q) 
                           != (IData)(vlSelfRef.commit_ftq_idx));
                }
            }
            if (vlSelfRef.redirect_valid) {
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx 
                    = vlSelfRef.redirect_ftq_idx;
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__stop_exclusive 
                    = vlSelfRef.ftq_test_top__DOT__dut__DOT__enq_ptr_q;
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout 
                    = ((4U == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))
                        ? 0U : (7U & ((IData)(1U) + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__redirect_idx 
                    = vlSelfRef.redirect_ftq_idx;
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__result = 0U;
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__3__idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__redirect_idx;
                __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__3__Vfuncout 
                    = ((4U == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__3__idx))
                        ? 0U : (7U & ((IData)(1U) + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__3__idx))));
                __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__3__Vfuncout;
                if (((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx) 
                     != (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__stop_exclusive))) {
                    if ((4U >= (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx))) {
                        __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__result 
                            = ((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__result) 
                               | (0x1fU & ((IData)(1U) 
                                           << (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx))));
                    }
                    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__idx 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx;
                    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__Vfuncout 
                        = ((4U == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__idx))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__idx))));
                    __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__Vfuncout;
                }
                if (((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx) 
                     != (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__stop_exclusive))) {
                    if ((4U >= (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx))) {
                        __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__result 
                            = ((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__result) 
                               | (0x1fU & ((IData)(1U) 
                                           << (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx))));
                    }
                    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__idx 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx;
                    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__Vfuncout 
                        = ((4U == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__idx))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__idx))));
                    __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__Vfuncout;
                }
                if (((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx) 
                     != (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__stop_exclusive))) {
                    if ((4U >= (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx))) {
                        __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__result 
                            = ((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__result) 
                               | (0x1fU & ((IData)(1U) 
                                           << (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx))));
                    }
                    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__idx 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx;
                    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__Vfuncout 
                        = ((4U == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__idx))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__idx))));
                    __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__Vfuncout;
                }
                if (((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx) 
                     != (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__stop_exclusive))) {
                    if ((4U >= (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx))) {
                        __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__result 
                            = ((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__result) 
                               | (0x1fU & ((IData)(1U) 
                                           << (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx))));
                    }
                    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__idx 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx;
                    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__Vfuncout 
                        = ((4U == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__idx))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__idx))));
                    __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__Vfuncout;
                }
                if (((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx) 
                     != (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__stop_exclusive))) {
                    if ((4U >= (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx))) {
                        __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__result 
                            = ((IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__result) 
                               | (0x1fU & ((IData)(1U) 
                                           << (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx))));
                    }
                    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__idx 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx;
                    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__Vfuncout 
                        = ((4U == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__idx))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__idx))));
                    __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__scan_idx 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__4__Vfuncout;
                }
                vlSelfRef.ftq_test_top__DOT__dut__DOT____VlemCall_0__make_kill_mask 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__make_kill_mask__2__result;
                vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__entry_valid_q 
                    = ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__entry_valid_q) 
                       & (~ (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT____VlemCall_0__make_kill_mask)));
                vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_busy_q = 0U;
                if (((4U >= (IData)(vlSelfRef.redirect_ftq_idx)) 
                     && (1U & ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__entry_valid_q) 
                               >> (IData)(vlSelfRef.redirect_ftq_idx))))) {
                    vlSelfRef.ghist_restore_valid = 1U;
                    vlSelfRef.ghist_restore[0U] = (
                                                   (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                    [
                                                    ((4U 
                                                      >= (IData)(vlSelfRef.redirect_ftq_idx))
                                                      ? (IData)(vlSelfRef.redirect_ftq_idx)
                                                      : 0U)][8U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                      [
                                                      ((4U 
                                                        >= (IData)(vlSelfRef.redirect_ftq_idx))
                                                        ? (IData)(vlSelfRef.redirect_ftq_idx)
                                                        : 0U)][7U] 
                                                      >> 0x00000010U));
                    vlSelfRef.ghist_restore[1U] = (
                                                   (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                    [
                                                    ((4U 
                                                      >= (IData)(vlSelfRef.redirect_ftq_idx))
                                                      ? (IData)(vlSelfRef.redirect_ftq_idx)
                                                      : 0U)][9U] 
                                                    << 0x00000010U) 
                                                   | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                      [
                                                      ((4U 
                                                        >= (IData)(vlSelfRef.redirect_ftq_idx))
                                                        ? (IData)(vlSelfRef.redirect_ftq_idx)
                                                        : 0U)][8U] 
                                                      >> 0x00000010U));
                    vlSelfRef.ghist_restore[2U] = (0x000000ffU 
                                                   & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                      [
                                                      ((4U 
                                                        >= (IData)(vlSelfRef.redirect_ftq_idx))
                                                        ? (IData)(vlSelfRef.redirect_ftq_idx)
                                                        : 0U)][9U] 
                                                      >> 0x00000010U));
                    vlSelfRef.ras_repair_valid = 1U;
                    vlSelfRef.ras_repair_idx = (0x0000001fU 
                                                & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                   [
                                                   ((4U 
                                                     >= (IData)(vlSelfRef.redirect_ftq_idx))
                                                     ? (IData)(vlSelfRef.redirect_ftq_idx)
                                                     : 0U)][9U] 
                                                   >> 0x00000019U));
                    vlSelfRef.ras_repair_addr = ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                  [
                                                  ((4U 
                                                    >= (IData)(vlSelfRef.redirect_ftq_idx))
                                                    ? (IData)(vlSelfRef.redirect_ftq_idx)
                                                    : 0U)][10U] 
                                                  << 2U) 
                                                 | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                    [
                                                    ((4U 
                                                      >= (IData)(vlSelfRef.redirect_ftq_idx))
                                                      ? (IData)(vlSelfRef.redirect_ftq_idx)
                                                      : 0U)][9U] 
                                                    >> 0x0000001eU));
                }
                if ((((IData)(vlSelfRef.brupdate_b2_mispredict) 
                      & ((IData)(vlSelfRef.brupdate_b2_ftq_idx) 
                         == (IData)(vlSelfRef.redirect_ftq_idx))) 
                     & ((4U >= (IData)(vlSelfRef.redirect_ftq_idx)) 
                        && (1U & ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__entry_valid_q) 
                                  >> (IData)(vlSelfRef.redirect_ftq_idx)))))) {
                    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__7__idx 
                        = vlSelfRef.redirect_ftq_idx;
                    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__7__Vfuncout 
                        = ((4U == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__7__idx))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__7__idx))));
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_valid_q = 1U;
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[0U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((IData)(vlSelfRef.brupdate_b2_ftq_idx) 
                          & (- (IData)((4U >= (IData)(vlSelfRef.brupdate_b2_ftq_idx)))))][0U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[1U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((IData)(vlSelfRef.brupdate_b2_ftq_idx) 
                          & (- (IData)((4U >= (IData)(vlSelfRef.brupdate_b2_ftq_idx)))))][1U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[2U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((IData)(vlSelfRef.brupdate_b2_ftq_idx) 
                          & (- (IData)((4U >= (IData)(vlSelfRef.brupdate_b2_ftq_idx)))))][2U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[3U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((IData)(vlSelfRef.brupdate_b2_ftq_idx) 
                          & (- (IData)((4U >= (IData)(vlSelfRef.brupdate_b2_ftq_idx)))))][3U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[4U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((IData)(vlSelfRef.brupdate_b2_ftq_idx) 
                          & (- (IData)((4U >= (IData)(vlSelfRef.brupdate_b2_ftq_idx)))))][4U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[5U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((IData)(vlSelfRef.brupdate_b2_ftq_idx) 
                          & (- (IData)((4U >= (IData)(vlSelfRef.brupdate_b2_ftq_idx)))))][5U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[6U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((IData)(vlSelfRef.brupdate_b2_ftq_idx) 
                          & (- (IData)((4U >= (IData)(vlSelfRef.brupdate_b2_ftq_idx)))))][6U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[7U] 
                        = ((0xffff0000U & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[7U]) 
                           | (0x0000ffffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                              [((IData)(vlSelfRef.brupdate_b2_ftq_idx) 
                                & (- (IData)((4U >= (IData)(vlSelfRef.brupdate_b2_ftq_idx)))))][7U]));
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[7U] 
                        = ((0x0000ffffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[7U]) 
                           | (vlSelfRef.brupdate_b2_target 
                              << 0x00000010U));
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[8U] 
                        = (vlSelfRef.brupdate_b2_target 
                           >> 0x00000010U);
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[9U] = 0U;
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[10U] 
                        = (0xffff0000U & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[10U]);
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[10U] 
                        = ((0x0000ffffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[10U]) 
                           | (0xffff0000U & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                              [((IData)(vlSelfRef.brupdate_b2_ftq_idx) 
                                & (- (IData)((4U >= (IData)(vlSelfRef.brupdate_b2_ftq_idx)))))][7U]));
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[11U] 
                        = ((0x0000ffffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((IData)(vlSelfRef.brupdate_b2_ftq_idx) 
                              & (- (IData)((4U >= (IData)(vlSelfRef.brupdate_b2_ftq_idx)))))][8U]) 
                           | (0xffff0000U & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                              [((IData)(vlSelfRef.brupdate_b2_ftq_idx) 
                                & (- (IData)((4U >= (IData)(vlSelfRef.brupdate_b2_ftq_idx)))))][8U]));
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U] 
                        = ((0xff000000U & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U]) 
                           | ((0x0000ffffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                               [((IData)(vlSelfRef.brupdate_b2_ftq_idx) 
                                 & (- (IData)((4U >= (IData)(vlSelfRef.brupdate_b2_ftq_idx)))))][9U]) 
                              | (0x00ff0000U & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                 [((IData)(vlSelfRef.brupdate_b2_ftq_idx) 
                                   & (- (IData)((4U 
                                                 >= (IData)(vlSelfRef.brupdate_b2_ftq_idx)))))][9U])));
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U] 
                        = (0x88000000U | ((0x00ffffffU 
                                           & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U]) 
                                          | (((((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_idx_d) 
                                                << 5U) 
                                               | ((IData)(vlSelfRef.brupdate_b2_taken) 
                                                  << 4U)) 
                                              | (((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_br_d) 
                                                  << 2U) 
                                                 | (((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_b_bl_d) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_jirl_d)))) 
                                             << 0x00000018U)));
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[13U] 
                        = ((0xfffffff0U & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[13U]) 
                           | (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d));
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[13U] 
                        = ((0x0000000fU & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[13U]) 
                           | ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                               [((IData)(vlSelfRef.brupdate_b2_ftq_idx) 
                                 & (- (IData)((4U >= (IData)(vlSelfRef.brupdate_b2_ftq_idx)))))][13U] 
                               << 0x00000017U) | (0x007ffff0U 
                                                  & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                     [
                                                     ((IData)(vlSelfRef.brupdate_b2_ftq_idx) 
                                                      & (- (IData)(
                                                                   (4U 
                                                                    >= (IData)(vlSelfRef.brupdate_b2_ftq_idx)))))][12U] 
                                                     >> 9U))));
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[14U] 
                        = ((0x000003f0U & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[14U]) 
                           | (0x0000000fU & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                             [((IData)(vlSelfRef.brupdate_b2_ftq_idx) 
                                               & (- (IData)(
                                                            (4U 
                                                             >= (IData)(vlSelfRef.brupdate_b2_ftq_idx)))))][13U] 
                                             >> 9U)));
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[14U] 
                        = (0x00000200U | (0x0000000fU 
                                          & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[14U]));
                    vlSelfRef.ghist_restore_valid = 1U;
                    vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_ptr_q 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__7__Vfuncout;
                    vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_end_q 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__enq_ptr_q;
                    __Vfunc_update_global_history__6__pc 
                        = ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((4U >= (IData)(vlSelfRef.redirect_ftq_idx))
                               ? (IData)(vlSelfRef.redirect_ftq_idx)
                               : 0U)][13U] << 0x00000013U) 
                           | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                              [((4U >= (IData)(vlSelfRef.redirect_ftq_idx))
                                 ? (IData)(vlSelfRef.redirect_ftq_idx)
                                 : 0U)][12U] >> 0x0000000dU));
                    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__8__idx 
                        = vlSelfRef.redirect_ftq_idx;
                    __Vfunc_update_global_history__6__cfi_is_ret 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_ret_d;
                    vlSelfRef.ftq_test_top__DOT__dut__DOT____VlemCall_1__wrap_inc 
                        = ((4U == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__8__idx))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__8__idx))));
                    __Vfunc_update_global_history__6__cfi_is_call 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_call_d;
                    vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_busy_q 
                        = ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT____VlemCall_1__wrap_inc) 
                           != (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__enq_ptr_q));
                    __Vfunc_update_global_history__6__cfi_is_br 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_br_d;
                    __Vfunc_update_global_history__6__cfi_taken 
                        = vlSelfRef.brupdate_b2_taken;
                    __Vfunc_update_global_history__6__cfi_idx 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_idx_d;
                    __Vfunc_update_global_history__6__cfi_valid = 1U;
                    __Vfunc_update_global_history__6__br_mask 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d;
                    __Vfunc_update_global_history__6__snapshot[0U] 
                        = ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((4U >= (IData)(vlSelfRef.redirect_ftq_idx))
                               ? (IData)(vlSelfRef.redirect_ftq_idx)
                               : 0U)][8U] << 0x00000010U) 
                           | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                              [((4U >= (IData)(vlSelfRef.redirect_ftq_idx))
                                 ? (IData)(vlSelfRef.redirect_ftq_idx)
                                 : 0U)][7U] >> 0x00000010U));
                    __Vfunc_update_global_history__6__snapshot[1U] 
                        = ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((4U >= (IData)(vlSelfRef.redirect_ftq_idx))
                               ? (IData)(vlSelfRef.redirect_ftq_idx)
                               : 0U)][9U] << 0x00000010U) 
                           | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                              [((4U >= (IData)(vlSelfRef.redirect_ftq_idx))
                                 ? (IData)(vlSelfRef.redirect_ftq_idx)
                                 : 0U)][8U] >> 0x00000010U));
                    __Vfunc_update_global_history__6__snapshot[2U] 
                        = (0x000000ffU & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                          [((4U >= (IData)(vlSelfRef.redirect_ftq_idx))
                                             ? (IData)(vlSelfRef.redirect_ftq_idx)
                                             : 0U)][9U] 
                                          >> 0x00000010U));
                    __Vfunc_update_global_history__6__base_history 
                        = ((0x00000020U & __Vfunc_update_global_history__6__snapshot[0U])
                            ? (1ULL | (0xfffffffffffffffeULL 
                                       & (((QData)((IData)(__Vfunc_update_global_history__6__snapshot[2U])) 
                                           << 0x00000039U) 
                                          | (((QData)((IData)(__Vfunc_update_global_history__6__snapshot[1U])) 
                                              << 0x00000019U) 
                                             | (0x01fffffffffffffeULL 
                                                & ((QData)((IData)(__Vfunc_update_global_history__6__snapshot[0U])) 
                                                   >> 7U))))))
                            : ((0x00000040U & __Vfunc_update_global_history__6__snapshot[0U])
                                ? (0xfffffffffffffffeULL 
                                   & (((QData)((IData)(__Vfunc_update_global_history__6__snapshot[2U])) 
                                       << 0x00000039U) 
                                      | (((QData)((IData)(__Vfunc_update_global_history__6__snapshot[1U])) 
                                          << 0x00000019U) 
                                         | (0x01fffffffffffffeULL 
                                            & ((QData)((IData)(__Vfunc_update_global_history__6__snapshot[0U])) 
                                               >> 7U)))))
                                : (((QData)((IData)(__Vfunc_update_global_history__6__snapshot[2U])) 
                                    << 0x00000038U) 
                                   | (((QData)((IData)(__Vfunc_update_global_history__6__snapshot[1U])) 
                                       << 0x00000018U) 
                                      | ((QData)((IData)(__Vfunc_update_global_history__6__snapshot[0U])) 
                                         >> 8U)))));
                    __Vfunc_update_global_history__6__not_taken_mask = 0U;
                    if ((((IData)(__Vfunc_update_global_history__6__br_mask) 
                          & VL_LTES_III(32, 0U, (IData)(__Vfunc_update_global_history__6__cfi_idx))) 
                         & (~ (((IData)(__Vfunc_update_global_history__6__cfi_is_br) 
                                & (IData)(__Vfunc_update_global_history__6__cfi_taken)) 
                               & (0U == (IData)(__Vfunc_update_global_history__6__cfi_idx)))))) {
                        __Vfunc_update_global_history__6__not_taken_mask 
                            = (1U | (IData)(__Vfunc_update_global_history__6__not_taken_mask));
                    }
                    if ((4U >= (IData)(vlSelfRef.redirect_ftq_idx))) {
                        vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v0 
                            = vlSelfRef.brupdate_b2_target;
                        vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v0 
                            = vlSelfRef.redirect_ftq_idx;
                        vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v0 = 1U;
                        vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v1 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d;
                        vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v1 
                            = vlSelfRef.redirect_ftq_idx;
                        vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v1 = 1U;
                        vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v2 
                            = vlSelfRef.redirect_ftq_idx;
                        vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v2 = 1U;
                        vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v3 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_idx_d;
                        vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v3 
                            = vlSelfRef.redirect_ftq_idx;
                        vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v3 = 1U;
                        vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v4 
                            = vlSelfRef.brupdate_b2_cfi_type;
                        vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v4 
                            = vlSelfRef.redirect_ftq_idx;
                        vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v4 = 1U;
                        vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v5 
                            = vlSelfRef.brupdate_b2_taken;
                        vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v5 
                            = vlSelfRef.redirect_ftq_idx;
                        vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v5 = 1U;
                        vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v6 
                            = vlSelfRef.redirect_ftq_idx;
                        vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v6 = 1U;
                        vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v7 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_call_d;
                        vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v7 
                            = vlSelfRef.redirect_ftq_idx;
                        vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v7 = 1U;
                        vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v8 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_ret_d;
                        vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v8 
                            = vlSelfRef.redirect_ftq_idx;
                        vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v8 = 1U;
                        vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v9 
                            = vlSelfRef.redirect_ftq_idx;
                        vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v9 = 1U;
                    }
                    if (((((IData)(__Vfunc_update_global_history__6__br_mask) 
                           >> 1U) & VL_LTES_III(32, 1U, (IData)(__Vfunc_update_global_history__6__cfi_idx))) 
                         & (~ (((IData)(__Vfunc_update_global_history__6__cfi_is_br) 
                                & (IData)(__Vfunc_update_global_history__6__cfi_taken)) 
                               & (1U == (IData)(__Vfunc_update_global_history__6__cfi_idx)))))) {
                        __Vfunc_update_global_history__6__not_taken_mask 
                            = (2U | (IData)(__Vfunc_update_global_history__6__not_taken_mask));
                    }
                    if (((((IData)(__Vfunc_update_global_history__6__br_mask) 
                           >> 2U) & VL_LTES_III(32, 2U, (IData)(__Vfunc_update_global_history__6__cfi_idx))) 
                         & (~ (((IData)(__Vfunc_update_global_history__6__cfi_is_br) 
                                & (IData)(__Vfunc_update_global_history__6__cfi_taken)) 
                               & (2U == (IData)(__Vfunc_update_global_history__6__cfi_idx)))))) {
                        __Vfunc_update_global_history__6__not_taken_mask 
                            = (4U | (IData)(__Vfunc_update_global_history__6__not_taken_mask));
                    }
                    if (((((IData)(__Vfunc_update_global_history__6__br_mask) 
                           >> 3U) & VL_LTES_III(32, 3U, (IData)(__Vfunc_update_global_history__6__cfi_idx))) 
                         & (~ (((IData)(__Vfunc_update_global_history__6__cfi_is_br) 
                                & (IData)(__Vfunc_update_global_history__6__cfi_taken)) 
                               & (3U == (IData)(__Vfunc_update_global_history__6__cfi_idx)))))) {
                        __Vfunc_update_global_history__6__not_taken_mask 
                            = (8U | (IData)(__Vfunc_update_global_history__6__not_taken_mask));
                    }
                    __Vfunc_update_global_history__6__first_bank_saw_nt 
                        = (1U & (__Vfunc_update_global_history__6__snapshot[0U] 
                                 >> 7U));
                    __Vfunc_update_global_history__6__first_bank_saw_nt 
                        = (1U & ((IData)(__Vfunc_update_global_history__6__first_bank_saw_nt) 
                                 | (IData)(__Vfunc_update_global_history__6__not_taken_mask)));
                    __Vfunc_update_global_history__6__first_bank_saw_nt 
                        = (1U & ((IData)(__Vfunc_update_global_history__6__first_bank_saw_nt) 
                                 | ((IData)(__Vfunc_update_global_history__6__not_taken_mask) 
                                    >> 1U)));
                    __Vfunc_update_global_history__6__second_bank_saw_nt 
                        = (1U & ((IData)(__Vfunc_update_global_history__6__not_taken_mask) 
                                 >> 2U));
                    __Vfunc_update_global_history__6__second_bank_saw_nt 
                        = ((IData)(__Vfunc_update_global_history__6__second_bank_saw_nt) 
                           | ((IData)(__Vfunc_update_global_history__6__not_taken_mask) 
                              >> 3U));
                    __Vfunc_update_global_history__6__cfi_in_first_bank 
                        = ((IData)(__Vfunc_update_global_history__6__cfi_taken) 
                           & VL_GTS_III(32, 2U, (IData)(__Vfunc_update_global_history__6__cfi_idx)));
                    __Vfunc_update_global_history__6__last_bank_in_block 
                        = (7U == (7U & (__Vfunc_update_global_history__6__pc 
                                        >> 3U)));
                    __Vfunc_update_global_history__6__result[0U] 
                        = __Vfunc_update_global_history__6__snapshot[0U];
                    __Vfunc_update_global_history__6__result[1U] 
                        = __Vfunc_update_global_history__6__snapshot[1U];
                    __Vfunc_update_global_history__6__result[2U] 
                        = __Vfunc_update_global_history__6__snapshot[2U];
                    __Vfunc_update_global_history__6__result[0U] 
                        = (0xffffff1fU & __Vfunc_update_global_history__6__result[0U]);
                    if (((IData)(__Vfunc_update_global_history__6__cfi_in_first_bank) 
                         | (IData)(__Vfunc_update_global_history__6__last_bank_in_block))) {
                        __Vfunc_update_global_history__6__result[0U] 
                            = ((0x000000ffU & __Vfunc_update_global_history__6__result[0U]) 
                               | ((IData)(__Vfunc_update_global_history__6__base_history) 
                                  << 8U));
                        __Vfunc_update_global_history__6__result[1U] 
                            = (((IData)(__Vfunc_update_global_history__6__base_history) 
                                >> 0x00000018U) | ((IData)(
                                                           (__Vfunc_update_global_history__6__base_history 
                                                            >> 0x00000020U)) 
                                                   << 8U));
                        __Vfunc_update_global_history__6__result[2U] 
                            = ((IData)((__Vfunc_update_global_history__6__base_history 
                                        >> 0x00000020U)) 
                               >> 0x00000018U);
                        __Vfunc_update_global_history__6__result[0U] 
                            = ((0xffffff9fU & __Vfunc_update_global_history__6__result[0U]) 
                               | (((IData)(__Vfunc_update_global_history__6__first_bank_saw_nt) 
                                   << 6U) | (((IData)(__Vfunc_update_global_history__6__cfi_is_br) 
                                              & (IData)(__Vfunc_update_global_history__6__cfi_in_first_bank)) 
                                             << 5U)));
                    } else {
                        __Vfunc_update_global_history__6__result[0U] 
                            = ((0x000000ffU & __Vfunc_update_global_history__6__result[0U]) 
                               | ((IData)(((IData)(__Vfunc_update_global_history__6__first_bank_saw_nt)
                                            ? (__Vfunc_update_global_history__6__base_history 
                                               << 1U)
                                            : __Vfunc_update_global_history__6__base_history)) 
                                  << 8U));
                        __Vfunc_update_global_history__6__result[1U] 
                            = (((IData)(((IData)(__Vfunc_update_global_history__6__first_bank_saw_nt)
                                          ? (__Vfunc_update_global_history__6__base_history 
                                             << 1U)
                                          : __Vfunc_update_global_history__6__base_history)) 
                                >> 0x00000018U) | ((IData)(
                                                           (((IData)(__Vfunc_update_global_history__6__first_bank_saw_nt)
                                                              ? 
                                                             (__Vfunc_update_global_history__6__base_history 
                                                              << 1U)
                                                              : __Vfunc_update_global_history__6__base_history) 
                                                            >> 0x00000020U)) 
                                                   << 8U));
                        __Vfunc_update_global_history__6__result[2U] 
                            = ((IData)((((IData)(__Vfunc_update_global_history__6__first_bank_saw_nt)
                                          ? (__Vfunc_update_global_history__6__base_history 
                                             << 1U)
                                          : __Vfunc_update_global_history__6__base_history) 
                                        >> 0x00000020U)) 
                               >> 0x00000018U);
                        __Vfunc_update_global_history__6__result[0U] 
                            = ((0xffffffbfU & __Vfunc_update_global_history__6__result[0U]) 
                               | ((IData)(__Vfunc_update_global_history__6__second_bank_saw_nt) 
                                  << 6U));
                        __Vfunc_update_global_history__6__result[0U] 
                            = ((0xffffffdfU & __Vfunc_update_global_history__6__result[0U]) 
                               | (((((IData)(__Vfunc_update_global_history__6__cfi_valid) 
                                     & (IData)(__Vfunc_update_global_history__6__cfi_taken)) 
                                    & (IData)(__Vfunc_update_global_history__6__cfi_is_br)) 
                                   & (~ (IData)(__Vfunc_update_global_history__6__cfi_in_first_bank))) 
                                  << 5U));
                    }
                    if (((IData)(__Vfunc_update_global_history__6__cfi_valid) 
                         & (IData)(__Vfunc_update_global_history__6__cfi_is_call))) {
                        __Vfunc_update_global_history__6__result[0U] 
                            = ((0xffffffe0U & __Vfunc_update_global_history__6__result[0U]) 
                               | ((0x1fU == (0x0000001fU 
                                             & __Vfunc_update_global_history__6__snapshot[0U]))
                                   ? 0U : (0x0000001fU 
                                           & ((IData)(1U) 
                                              + __Vfunc_update_global_history__6__snapshot[0U]))));
                    } else if (((IData)(__Vfunc_update_global_history__6__cfi_valid) 
                                & (IData)(__Vfunc_update_global_history__6__cfi_is_ret))) {
                        __Vfunc_update_global_history__6__result[0U] 
                            = ((0xffffffe0U & __Vfunc_update_global_history__6__result[0U]) 
                               | ((0U == (0x0000001fU 
                                          & __Vfunc_update_global_history__6__snapshot[0U]))
                                   ? 0x0000001fU : 
                                  (0x0000001fU & (__Vfunc_update_global_history__6__snapshot[0U] 
                                                  - (IData)(1U)))));
                    }
                    __Vfunc_update_global_history__6__Vfuncout[0U] 
                        = __Vfunc_update_global_history__6__result[0U];
                    __Vfunc_update_global_history__6__Vfuncout[1U] 
                        = __Vfunc_update_global_history__6__result[1U];
                    __Vfunc_update_global_history__6__Vfuncout[2U] 
                        = __Vfunc_update_global_history__6__result[2U];
                    vlSelfRef.ghist_restore[0U] = __Vfunc_update_global_history__6__Vfuncout[0U];
                    vlSelfRef.ghist_restore[1U] = __Vfunc_update_global_history__6__Vfuncout[1U];
                    vlSelfRef.ghist_restore[2U] = __Vfunc_update_global_history__6__Vfuncout[2U];
                }
                vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__enq_ptr_q 
                    = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__5__Vfuncout;
            } else {
                if (vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_busy_q) {
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__9__entry[0U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)
                           : 0U)][0U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__9__entry[1U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)
                           : 0U)][1U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__9__entry[2U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)
                           : 0U)][2U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__9__entry[3U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)
                           : 0U)][3U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__9__entry[4U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)
                           : 0U)][4U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__9__entry[5U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)
                           : 0U)][5U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__9__entry[6U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)
                           : 0U)][6U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__9__entry[7U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)
                           : 0U)][7U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__9__entry[8U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)
                           : 0U)][8U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__9__entry[9U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)
                           : 0U)][9U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__9__entry[10U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)
                           : 0U)][10U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__9__entry[11U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)
                           : 0U)][11U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__9__entry[12U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)
                           : 0U)][12U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__9__entry[13U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)
                           : 0U)][13U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT____VlemCall_2__entry_needs_update 
                        = (IData)((0U != (0x00001f00U 
                                          & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__9__entry[11U])));
                    if (vlSelfRef.ftq_test_top__DOT__dut__DOT____VlemCall_2__entry_needs_update) {
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_valid_q = 1U;
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[0U] 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q) 
                              & (- (IData)((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)))))][0U];
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[1U] 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q) 
                              & (- (IData)((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)))))][1U];
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[2U] 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q) 
                              & (- (IData)((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)))))][2U];
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[3U] 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q) 
                              & (- (IData)((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)))))][3U];
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[4U] 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q) 
                              & (- (IData)((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)))))][4U];
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[5U] 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q) 
                              & (- (IData)((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)))))][5U];
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[6U] 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q) 
                              & (- (IData)((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)))))][6U];
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[7U] 
                            = ((0xffff0000U & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[7U]) 
                               | (0x0000ffffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                  [((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q) 
                                    & (- (IData)((4U 
                                                  >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)))))][7U]));
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[7U] 
                            = ((0x0000ffffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[7U]) 
                               | (0xffff0000U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                 [((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q) 
                                                   & (- (IData)(
                                                                (4U 
                                                                 >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)))))][11U] 
                                                 << 3U)));
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[8U] 
                            = ((0xffff0000U & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[8U]) 
                               | ((0x0000fff8U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                  [
                                                  ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q) 
                                                   & (- (IData)(
                                                                (4U 
                                                                 >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)))))][12U] 
                                                  << 3U)) 
                                  | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                     [((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q) 
                                       & (- (IData)(
                                                    (4U 
                                                     >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)))))][11U] 
                                     >> 0x0000001dU)));
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[8U] 
                            = (0x0000ffffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[8U]);
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[9U] = 0U;
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[10U] 
                            = (0xffff0000U & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[10U]);
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[10U] 
                            = ((0x0000ffffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[10U]) 
                               | (0xffff0000U & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                  [((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q) 
                                    & (- (IData)((4U 
                                                  >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)))))][7U]));
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[11U] 
                            = ((0x0000ffffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                [((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q) 
                                  & (- (IData)((4U 
                                                >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)))))][8U]) 
                               | (0xffff0000U & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                  [((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q) 
                                    & (- (IData)((4U 
                                                  >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)))))][8U]));
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U] 
                            = ((0xff000000U & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U]) 
                               | ((0x0000ffffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                   [((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q) 
                                     & (- (IData)((4U 
                                                   >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)))))][9U]) 
                                  | (0x00ff0000U & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                     [((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q) 
                                       & (- (IData)(
                                                    (4U 
                                                     >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)))))][9U])));
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U] 
                            = ((0xe0ffffffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U]) 
                               | ((((6U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                           [((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q) 
                                             & (- (IData)(
                                                          (4U 
                                                           >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)))))][10U] 
                                           >> 0x0000001dU)) 
                                    | (1U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
                                   << 0x0000001aU) 
                                  | (((2U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                                      << 0x00000019U) 
                                     | ((3U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                                        << 0x00000018U))));
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U] 
                            = ((0x1fffffffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U]) 
                               | (0xe0000000U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                 [((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q) 
                                                   & (- (IData)(
                                                                (4U 
                                                                 >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)))))][11U] 
                                                 << 0x00000017U)));
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[13U] 
                            = ((0xfffffff0U & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[13U]) 
                               | (0x0000000fU & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                 [((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q) 
                                                   & (- (IData)(
                                                                (4U 
                                                                 >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)))))][11U] 
                                                 >> 9U)));
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[13U] 
                            = ((0x0000000fU & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[13U]) 
                               | ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                   [((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q) 
                                     & (- (IData)((4U 
                                                   >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)))))][13U] 
                                   << 0x00000017U) 
                                  | (0x007ffff0U & 
                                     (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                      [((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q) 
                                        & (- (IData)(
                                                     (4U 
                                                      >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)))))][12U] 
                                      >> 9U))));
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[14U] 
                            = ((0x000003f0U & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[14U]) 
                               | (0x0000000fU & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                                 [((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q) 
                                                   & (- (IData)(
                                                                (4U 
                                                                 >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q)))))][13U] 
                                                 >> 9U)));
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[14U] 
                            = (0x00000100U | (0x0000000fU 
                                              & vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[14U]));
                    }
                    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__10__idx 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q;
                    vlSelfRef.ftq_test_top__DOT__dut__DOT____VlemCall_3__wrap_inc 
                        = ((4U == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__10__idx))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__10__idx))));
                    if (((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT____VlemCall_3__wrap_inc) 
                         == (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_end_q))) {
                        vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_busy_q = 0U;
                    } else {
                        __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__11__idx 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q;
                        __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__11__Vfuncout 
                            = ((4U == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__11__idx))
                                ? 0U : (7U & ((IData)(1U) 
                                              + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__11__idx))));
                        vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_ptr_q 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__11__Vfuncout;
                    }
                } else if (vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_busy_q) {
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__12__entry[0U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                           : 0U)][0U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__12__entry[1U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                           : 0U)][1U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__12__entry[2U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                           : 0U)][2U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__12__entry[3U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                           : 0U)][3U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__12__entry[4U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                           : 0U)][4U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__12__entry[5U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                           : 0U)][5U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__12__entry[6U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                           : 0U)][6U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__12__entry[7U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                           : 0U)][7U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__12__entry[8U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                           : 0U)][8U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__12__entry[9U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                           : 0U)][9U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__12__entry[10U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                           : 0U)][10U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__12__entry[11U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                           : 0U)][11U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__12__entry[12U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                           : 0U)][12U];
                    __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__12__entry[13U] 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                           ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                           : 0U)][13U];
                    vlSelfRef.ftq_test_top__DOT__dut__DOT____VlemCall_4__entry_needs_update 
                        = (IData)((0U != (0x00001f00U 
                                          & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_needs_update__12__entry[11U])));
                    if ((((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)) 
                          && (1U & ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__entry_valid_q) 
                                    >> (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)))) 
                         & (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT____VlemCall_4__entry_needs_update))) {
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[0U] 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                               ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                               : 0U)][0U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[1U] 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                               ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                               : 0U)][1U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[2U] 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                               ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                               : 0U)][2U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[3U] 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                               ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                               : 0U)][3U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[4U] 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                               ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                               : 0U)][4U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[5U] 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                               ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                               : 0U)][5U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[6U] 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                               ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                               : 0U)][6U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[7U] 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                               ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                               : 0U)][7U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[8U] 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                               ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                               : 0U)][8U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[9U] 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                               ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                               : 0U)][9U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[10U] 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                               ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                               : 0U)][10U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[11U] 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                               ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                               : 0U)][11U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[12U] 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                               ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                               : 0U)][12U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[13U] 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                            [((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))
                               ? (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q)
                               : 0U)][13U];
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_valid_q = 1U;
                        VL_ASSIGN_W(458, __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result, Vftq_test_top__ConstPool__CONST_hb2c668e2_0);
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[12U] 
                            = ((0x07ffffffU & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[12U]) 
                               | (((0x000001f0U & (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[11U] 
                                                   >> 4U)) 
                                   | ((0x0000000cU 
                                       & (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[11U] 
                                          >> 4U)) | 
                                      (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[10U] 
                                       >> 0x0000001eU))) 
                                  << 0x0000001bU));
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[13U] 
                            = ((0xfffffff0U & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[13U]) 
                               | (((0x000001f0U & (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[11U] 
                                                   >> 4U)) 
                                   | ((0x0000000cU 
                                       & (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[11U] 
                                          >> 4U)) | 
                                      (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[10U] 
                                       >> 0x0000001eU))) 
                                  >> 5U));
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[13U] 
                            = ((0x0000000fU & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[13U]) 
                               | ((__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[13U] 
                                   << 0x00000017U) 
                                  | (0x007ffff0U & 
                                     (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[12U] 
                                      >> 9U))));
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[14U] 
                            = ((0x000003f0U & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[14U]) 
                               | (0x0000000fU & (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[13U] 
                                                 >> 9U)));
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[12U] 
                            = ((0xf9ffffffU & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[12U]) 
                               | (((1U == (7U & (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[11U] 
                                                 >> 3U))) 
                                   << 0x0000001aU) 
                                  | ((2U == (7U & (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[11U] 
                                                   >> 3U))) 
                                     << 0x00000019U)));
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[10U] 
                            = ((0x0000ffffU & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[10U]) 
                               | (0xffff0000U & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[7U]));
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[11U] 
                            = ((0x0000ffffU & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[8U]) 
                               | (0xffff0000U & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[8U]));
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[12U] 
                            = ((0xfe000000U & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[12U]) 
                               | ((0x0000ffffU & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[9U]) 
                                  | (((3U == (7U & 
                                              (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[11U] 
                                               >> 3U))) 
                                      << 0x00000018U) 
                                     | (0x00ff0000U 
                                        & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[9U]))));
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[0U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[0U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[1U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[1U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[2U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[2U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[3U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[3U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[4U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[4U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[5U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[5U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[6U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[6U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[7U] 
                            = ((0xffff0000U & (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[11U] 
                                               << 3U)) 
                               | (0x0000ffffU & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[7U]));
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[8U] 
                            = ((0xffff0000U & __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[8U]) 
                               | ((0x0000fff8U & (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[12U] 
                                                  << 3U)) 
                                  | (__Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__entry[11U] 
                                     >> 0x0000001dU)));
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[0U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[0U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[1U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[1U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[2U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[2U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[3U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[3U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[4U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[4U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[5U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[5U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[6U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[6U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[7U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[7U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[8U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[8U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[9U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[9U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[10U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[10U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[11U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[11U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[12U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[12U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[13U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[13U];
                        __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[14U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__result[14U];
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[0U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[0U];
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[1U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[1U];
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[2U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[2U];
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[3U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[3U];
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[4U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[4U];
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[5U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[5U];
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[6U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[6U];
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[7U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[7U];
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[8U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[8U];
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[9U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[9U];
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[10U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[10U];
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[11U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[11U];
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[12U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[12U];
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[13U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[13U];
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_q[14U] 
                            = __Vfunc_ftq_test_top__DOT__dut__DOT__entry_to_update__13__Vfuncout[14U];
                    }
                    if ((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))) {
                        vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__entry_valid_q 
                            = ((~ ((IData)(1U) << (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q))) 
                               & (IData)(vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__entry_valid_q));
                    }
                    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__14__idx 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q;
                    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__14__Vfuncout 
                        = ((4U == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__14__idx))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__14__idx))));
                    vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__commit_ptr_q 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__14__Vfuncout;
                    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__15__idx 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q;
                    vlSelfRef.ftq_test_top__DOT__dut__DOT____VlemCall_5__wrap_inc 
                        = ((4U == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__15__idx))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__15__idx))));
                    vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__commit_busy_q 
                        = ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT____VlemCall_5__wrap_inc) 
                           != ((IData)(vlSelfRef.commit_valid)
                                ? (IData)(vlSelfRef.commit_ftq_idx)
                                : (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_end_q)));
                }
                if (((IData)(vlSelfRef.enq_valid) & (IData)(vlSelfRef.enq_ready))) {
                    if ((4U >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__enq_ptr_q))) {
                        vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[0U] 
                            = vlSelfRef.enq_meta[0U];
                        vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[1U] 
                            = vlSelfRef.enq_meta[1U];
                        vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[2U] 
                            = vlSelfRef.enq_meta[2U];
                        vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[3U] 
                            = vlSelfRef.enq_meta[3U];
                        vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[4U] 
                            = vlSelfRef.enq_meta[4U];
                        vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[5U] 
                            = vlSelfRef.enq_meta[5U];
                        vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[6U] 
                            = vlSelfRef.enq_meta[6U];
                        vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[7U] 
                            = ((vlSelfRef.enq_ghist[0U] 
                                << 0x00000010U) | vlSelfRef.enq_meta[7U]);
                        vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[8U] 
                            = ((vlSelfRef.enq_ghist[0U] 
                                >> 0x00000010U) | (vlSelfRef.enq_ghist[1U] 
                                                   << 0x00000010U));
                        vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[9U] 
                            = ((vlSelfRef.enq_ras_top 
                                << 0x0000001eU) | (
                                                   (((IData)(vlSelfRef.enq_ras_idx) 
                                                     << 0x00000019U) 
                                                    | ((IData)(vlSelfRef.enq_start_bank) 
                                                       << 0x00000018U)) 
                                                   | ((vlSelfRef.enq_ghist[1U] 
                                                       >> 0x00000010U) 
                                                      | (vlSelfRef.enq_ghist[2U] 
                                                         << 0x00000010U))));
                        vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[10U] 
                            = ((0xc0000000U & vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[10U]) 
                               | (vlSelfRef.enq_ras_top 
                                  >> 2U));
                        vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[10U] 
                            = ((0x3fffffffU & vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[10U]) 
                               | ((IData)(vlSelfRef.enq_cfi_taken) 
                                  << 0x0000001fU));
                        vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[11U] 
                            = ((0xffffe000U & vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[11U]) 
                               | ((((IData)(vlSelfRef.enq_br_mask) 
                                    << 9U) | (((IData)(vlSelfRef.enq_cfi_valid) 
                                               << 8U) 
                                              | ((IData)(vlSelfRef.enq_cfi_idx) 
                                                 << 6U))) 
                                  | (((IData)(vlSelfRef.enq_cfi_type) 
                                      << 3U) | (((IData)(vlSelfRef.enq_cfi_is_call) 
                                                 << 2U) 
                                                | (((IData)(vlSelfRef.enq_cfi_is_ret) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.enq_cfi_npc_plus4))))));
                        vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[11U] 
                            = ((0x00001fffU & vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[11U]) 
                               | ((IData)((((QData)((IData)(vlSelfRef.enq_pc)) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.enq_next_pc)))) 
                                  << 0x0000000dU));
                        vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[12U] 
                            = (((IData)((((QData)((IData)(vlSelfRef.enq_pc)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSelfRef.enq_next_pc)))) 
                                >> 0x00000013U) | ((IData)(
                                                           ((((QData)((IData)(vlSelfRef.enq_pc)) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(vlSelfRef.enq_next_pc))) 
                                                            >> 0x00000020U)) 
                                                   << 0x0000000dU));
                        vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[13U] 
                            = ((IData)(((((QData)((IData)(vlSelfRef.enq_pc)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSelfRef.enq_next_pc))) 
                                        >> 0x00000020U)) 
                               >> 0x00000013U);
                        vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v10 
                            = vlSelfRef.ftq_test_top__DOT__dut__DOT__enq_ptr_q;
                        vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v10 = 1U;
                        vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__entry_valid_q 
                            = ((IData)(vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__entry_valid_q) 
                               | (0x1fU & ((IData)(1U) 
                                           << (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__enq_ptr_q))));
                    }
                    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__16__idx 
                        = vlSelfRef.ftq_test_top__DOT__dut__DOT__enq_ptr_q;
                    __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__16__Vfuncout 
                        = ((4U == (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__16__idx))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(__Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__16__idx))));
                    vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__enq_ptr_q 
                        = __Vfunc_ftq_test_top__DOT__dut__DOT__wrap_inc__16__Vfuncout;
                }
            }
        }
    } else {
        vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__entry_valid_q = 0U;
        vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__enq_ptr_q = 0U;
        vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__commit_ptr_q = 0U;
        vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_ptr_q = 0U;
        vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_end_q = 0U;
        vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__commit_busy_q = 0U;
        vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_busy_q = 0U;
        vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_valid_q = 0U;
        vlSelfRef.ghist_restore_valid = 0U;
        vlSelfRef.ras_repair_valid = 0U;
        vlSelfRef.query_resp_valid = 0U;
        vlSelfRef.query_pc = 0U;
        vlSelfRef.query_next_pc = 0U;
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
        vlSelfRef.exec_query_resp_valid = 0U;
        vlSelfRef.exec_query_next_pc[0U] = 0U;
        vlSelfRef.exec_query_next_pc[1U] = 0U;
        vlSelfRef.exec_query_next_pc[2U] = 0U;
        vlSelfRef.exec_query_cfi_match = 0U;
    }
}
