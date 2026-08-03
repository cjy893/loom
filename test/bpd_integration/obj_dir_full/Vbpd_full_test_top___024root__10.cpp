// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

void Vbpd_full_test_top___024root___nba_sequent__TOP__1(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___nba_sequent__TOP__1\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    if (vlSelfRef.rst_n) {
        if (((IData)(vlSelfRef.f1_update_valid) & (IData)(vlSelfRef.f1_is_call))) {
            vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__ras_inst__DOT__stack__v0 
                = ((IData)(4U) + vlSelfRef.f0_pc);
            vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__ras_inst__DOT__stack__v0 
                = (0x0000001fU & vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[0U]);
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
        }
        if (vlSelfRef.ghist_restore_valid) {
            vlSelfRef.__Vdly__bpd_full_test_top__DOT__ghist_inst__DOT__history_q[0U] 
                = (((IData)(vlSelfRef.restore_old_history) 
                    << 8U) | (((IData)(vlSelfRef.restore_saw_nt) 
                               << 7U) | (IData)(vlSelfRef.restore_ras_idx)));
            vlSelfRef.__Vdly__bpd_full_test_top__DOT__ghist_inst__DOT__history_q[1U] 
                = (((IData)(vlSelfRef.restore_old_history) 
                    >> 0x00000018U) | ((IData)((vlSelfRef.restore_old_history 
                                                >> 0x00000020U)) 
                                       << 8U));
            vlSelfRef.__Vdly__bpd_full_test_top__DOT__ghist_inst__DOT__history_q[2U] 
                = ((IData)((vlSelfRef.restore_old_history 
                            >> 0x00000020U)) >> 0x00000018U);
        } else if (vlSelfRef.f1_update_valid) {
            vlSelfRef.__Vdly__bpd_full_test_top__DOT__ghist_inst__DOT__history_q[0U] 
                = ((0xffffffe0U & vlSelfRef.__Vdly__bpd_full_test_top__DOT__ghist_inst__DOT__history_q[0U]) 
                   | (0x0000001fU & (((IData)(vlSelfRef.f1_is_call) 
                                      & (IData)(vlSelfRef.bpd_full_test_top__DOT__ghist_cfi_valid))
                                      ? (((IData)(1U) 
                                          + vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[0U]) 
                                         & (- (IData)(
                                                      (0x1fU 
                                                       != 
                                                       (0x0000001fU 
                                                        & vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[0U])))))
                                      : (((IData)(vlSelfRef.f1_is_ret) 
                                          & (IData)(vlSelfRef.bpd_full_test_top__DOT__ghist_cfi_valid))
                                          ? ((vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[0U] 
                                              - (IData)(1U)) 
                                             | (- (IData)(
                                                          (0U 
                                                           == 
                                                           (0x0000001fU 
                                                            & vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[0U])))))
                                          : vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[0U]))));
            if (((7U == (7U & (vlSelfRef.f0_pc >> 3U))) 
                 | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31))) {
                __Vtemp_1[0U] = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                  << 3U) | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28)));
                __Vtemp_1[1U] = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                  >> 0x0000001dU) | 
                                 ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 
                                           >> 0x00000020U)) 
                                  << 3U));
                __Vtemp_1[2U] = ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 
                                          >> 0x00000020U)) 
                                 >> 0x0000001dU);
            } else {
                __Vtemp_1[0U] = (((IData)(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30)
                                            ? (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 
                                               << 1U)
                                            : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)) 
                                  << 3U) | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x0cU 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))) 
                                            << 1U));
                __Vtemp_1[1U] = (((IData)(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30)
                                            ? (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 
                                               << 1U)
                                            : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)) 
                                  >> 0x0000001dU) | 
                                 ((IData)((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30)
                                             ? (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 
                                                << 1U)
                                             : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                           >> 0x00000020U)) 
                                  << 3U));
                __Vtemp_1[2U] = ((IData)((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30)
                                            ? (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 
                                               << 1U)
                                            : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                          >> 0x00000020U)) 
                                 >> 0x0000001dU);
            }
            vlSelfRef.__Vdly__bpd_full_test_top__DOT__ghist_inst__DOT__history_q[0U] 
                = ((0x0000001fU & vlSelfRef.__Vdly__bpd_full_test_top__DOT__ghist_inst__DOT__history_q[0U]) 
                   | (__Vtemp_1[0U] << 5U));
            vlSelfRef.__Vdly__bpd_full_test_top__DOT__ghist_inst__DOT__history_q[1U] 
                = ((__Vtemp_1[0U] >> 0x0000001bU) | 
                   (__Vtemp_1[1U] << 5U));
            vlSelfRef.__Vdly__bpd_full_test_top__DOT__ghist_inst__DOT__history_q[2U] 
                = (0x000000ffU & ((__Vtemp_1[1U] >> 0x0000001bU) 
                                  | (__Vtemp_1[2U] 
                                     << 5U)));
        }
    } else {
        vlSelfRef.__VdlySet__bpd_full_test_top__DOT__ras_inst__DOT__stack__v1 = 1U;
        vlSelfRef.__VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__repl_ptr__v1 = 1U;
        vlSelfRef.__Vdly__bpd_full_test_top__DOT__ghist_inst__DOT__history_q[0U] = 0U;
        vlSelfRef.__Vdly__bpd_full_test_top__DOT__ghist_inst__DOT__history_q[1U] = 0U;
        vlSelfRef.__Vdly__bpd_full_test_top__DOT__ghist_inst__DOT__history_q[2U] = 0U;
    }
}
