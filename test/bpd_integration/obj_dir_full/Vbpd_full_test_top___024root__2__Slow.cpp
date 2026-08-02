// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

VL_ATTR_COLD void Vbpd_full_test_top___024root___stl_sequent__TOP__0(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___stl_sequent__TOP__0\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.current_ghist[0U] = vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[0U];
    vlSelfRef.current_ghist[1U] = vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[1U];
    vlSelfRef.current_ghist[2U] = vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[2U];
    vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__invalidate_set 
        = ((0x000003e0U & (((IData)(4U) + vlSelfRef.update_pc) 
                           << 3U)) | (0x0000001fU & 
                                      (vlSelfRef.update_pc 
                                       >> 2U)));
    vlSelfRef.bim_ready = (1U & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__doing_reset)));
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
    vlSelfRef.bim_f2_meta[0U] = ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_valid)
                                  ? (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_ctrs)
                                  : 0U);
    vlSelfRef.bim_f2_meta[1U] = 0U;
    vlSelfRef.bim_f2_meta[2U] = 0U;
    vlSelfRef.bim_f2_meta[3U] = 0U;
    vlSelfRef.ras_read_addr = vlSelfRef.bpd_full_test_top__DOT__ras_inst__DOT__stack
        [vlSelfRef.ras_read_idx];
    vlSelfRef.bim_f2_preds[0U] = (IData)(((- (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_valid))) 
                                          & (((QData)((IData)(
                                                              (1U 
                                                               & ((4U 
                                                                   & vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[1U])
                                                                   ? 
                                                                  ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_ctrs) 
                                                                   >> 1U)
                                                                   : 
                                                                  (vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[1U] 
                                                                   >> 3U))))) 
                                              << 0x00000023U) 
                                             | (0x00000007ffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[0U])))))));
    vlSelfRef.bim_f2_preds[1U] = ((0xfffffff0U & vlSelfRef.bim_f2_preds[1U]) 
                                  | (IData)((((- (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_valid))) 
                                              & (((QData)((IData)(
                                                                  (1U 
                                                                   & ((4U 
                                                                       & vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[1U])
                                                                       ? 
                                                                      ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_ctrs) 
                                                                       >> 1U)
                                                                       : 
                                                                      (vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[1U] 
                                                                       >> 3U))))) 
                                                  << 0x00000023U) 
                                                 | (0x00000007ffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[0U])))))) 
                                             >> 0x00000020U)));
    vlSelfRef.bim_f2_preds[1U] = ((0x0000000fU & vlSelfRef.bim_f2_preds[1U]) 
                                  | ((IData)((0x0000000fffffffffULL 
                                              & (((0x00000040U 
                                                   & vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[2U])
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_ctrs) 
                                                                        >> 3U)))) 
                                                    << 0x00000023U) 
                                                   | (0x00000007ffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[2U])) 
                                                          << 0x0000001cU) 
                                                         | ((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[1U])) 
                                                            >> 4U))))
                                                   : 
                                                  (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[2U])) 
                                                    << 0x0000003cU) 
                                                   | (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[2U])) 
                                                       << 0x0000001cU) 
                                                      | ((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[1U])) 
                                                         >> 4U)))) 
                                                 & (- (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_valid)))))) 
                                     << 4U));
    vlSelfRef.bim_f2_preds[2U] = (0x000000ffU & (((IData)(
                                                          (0x0000000fffffffffULL 
                                                           & (((0x00000040U 
                                                                & vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[2U])
                                                                ? 
                                                               (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_ctrs) 
                                                                                >> 3U)))) 
                                                                 << 0x00000023U) 
                                                                | (0x00000007ffffffffULL 
                                                                   & (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[2U])) 
                                                                       << 0x0000001cU) 
                                                                      | ((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[1U])) 
                                                                         >> 4U))))
                                                                : 
                                                               (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[2U])) 
                                                                 << 0x0000003cU) 
                                                                | (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[2U])) 
                                                                    << 0x0000001cU) 
                                                                   | ((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[1U])) 
                                                                      >> 4U)))) 
                                                              & (- (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_valid)))))) 
                                                  >> 0x0000001cU) 
                                                 | ((IData)(
                                                            ((0x0000000fffffffffULL 
                                                              & (((0x00000040U 
                                                                   & vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[2U])
                                                                   ? 
                                                                  (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_ctrs) 
                                                                                >> 3U)))) 
                                                                    << 0x00000023U) 
                                                                   | (0x00000007ffffffffULL 
                                                                      & (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[2U])) 
                                                                          << 0x0000001cU) 
                                                                         | ((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[1U])) 
                                                                            >> 4U))))
                                                                   : 
                                                                  (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[2U])) 
                                                                    << 0x0000003cU) 
                                                                   | (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[2U])) 
                                                                       << 0x0000001cU) 
                                                                      | ((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_preds_in[1U])) 
                                                                         >> 4U)))) 
                                                                 & (- (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s2_valid))))) 
                                                             >> 0x00000020U)) 
                                                    << 4U)));
    vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty = 0U;
    vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx 
        = vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__repl_ptr;
    if ((1U & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid)))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx = 0U;
    }
}
