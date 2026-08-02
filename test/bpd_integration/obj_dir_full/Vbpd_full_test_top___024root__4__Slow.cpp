// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

VL_ATTR_COLD void Vbpd_full_test_top___024root___stl_sequent__TOP__2(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___stl_sequent__TOP__2\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((~ ((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                   >> 9U)) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx = 9U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                   >> 0x0aU)) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx = 0x0aU;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                   >> 0x0bU)) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx = 0x0bU;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                   >> 0x0cU)) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx = 0x0cU;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                   >> 0x0dU)) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx = 0x0dU;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                   >> 0x0eU)) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx = 0x0eU;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                   >> 0x0fU)) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx = 0x0fU;
    }
    vlSelfRef.btb_f3_preds[0U] = (IData)((0x0000000fffffffffULL 
                                          & (((1U & (IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_hit))
                                               ? (((QData)((IData)(
                                                                   (1U 
                                                                    & ((vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_preds_in[1U] 
                                                                        >> 3U) 
                                                                       | (0U 
                                                                          != 
                                                                          (3U 
                                                                           & vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_entry[0U])))))) 
                                                   << 0x00000023U) 
                                                  | (((QData)((IData)(
                                                                      (7U 
                                                                       & vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_entry[0U]))) 
                                                      << 0x00000020U) 
                                                     | (QData)((IData)(
                                                                       ((vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_entry[1U] 
                                                                         << 0x0000001dU) 
                                                                        | (vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_entry[0U] 
                                                                           >> 3U))))))
                                               : (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_preds_in[1U])) 
                                                   << 0x00000020U) 
                                                  | (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_preds_in[0U])))) 
                                             & (- (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_valid))))));
    vlSelfRef.btb_f3_preds[1U] = ((0xfffffff0U & vlSelfRef.btb_f3_preds[1U]) 
                                  | (IData)(((0x0000000fffffffffULL 
                                              & (((1U 
                                                   & (IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_hit))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (1U 
                                                                     & ((vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_preds_in[1U] 
                                                                         >> 3U) 
                                                                        | (0U 
                                                                           != 
                                                                           (3U 
                                                                            & vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_entry[0U])))))) 
                                                    << 0x00000023U) 
                                                   | (((QData)((IData)(
                                                                       (7U 
                                                                        & vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_entry[0U]))) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(
                                                                        ((vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_entry[1U] 
                                                                          << 0x0000001dU) 
                                                                         | (vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_entry[0U] 
                                                                            >> 3U))))))
                                                   : 
                                                  (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_preds_in[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_preds_in[0U])))) 
                                                 & (- (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_valid))))) 
                                             >> 0x00000020U)));
    vlSelfRef.btb_f3_preds[1U] = ((0x0000000fU & vlSelfRef.btb_f3_preds[1U]) 
                                  | ((IData)((0x0000000fffffffffULL 
                                              & (((2U 
                                                   & (IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_hit))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               ((vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_preds_in[2U] 
                                                                                >> 7U) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_entry[1U]))))))) 
                                                    << 0x00000023U) 
                                                   | (((QData)((IData)(
                                                                       (7U 
                                                                        & (vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_entry[1U] 
                                                                           >> 0x0000001cU)))) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(
                                                                        ((vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_entry[2U] 
                                                                          << 1U) 
                                                                         | (vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_entry[1U] 
                                                                            >> 0x0000001fU))))))
                                                   : 
                                                  (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_preds_in[2U])) 
                                                    << 0x0000003cU) 
                                                   | (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_preds_in[2U])) 
                                                       << 0x0000001cU) 
                                                      | ((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_preds_in[1U])) 
                                                         >> 4U)))) 
                                                 & (- (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_valid)))))) 
                                     << 4U));
    vlSelfRef.btb_f3_preds[2U] = (0x000000ffU & (((IData)(
                                                          (0x0000000fffffffffULL 
                                                           & (((2U 
                                                                & (IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_hit))
                                                                ? 
                                                               (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_preds_in[2U] 
                                                                                >> 7U) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_entry[1U]))))))) 
                                                                 << 0x00000023U) 
                                                                | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_entry[1U] 
                                                                                >> 0x0000001cU)))) 
                                                                    << 0x00000020U) 
                                                                   | (QData)((IData)(
                                                                                ((vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_entry[2U] 
                                                                                << 1U) 
                                                                                | (vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_entry[1U] 
                                                                                >> 0x0000001fU))))))
                                                                : 
                                                               (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_preds_in[2U])) 
                                                                 << 0x0000003cU) 
                                                                | (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_preds_in[2U])) 
                                                                    << 0x0000001cU) 
                                                                   | ((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_preds_in[1U])) 
                                                                      >> 4U)))) 
                                                              & (- (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_valid)))))) 
                                                  >> 0x0000001cU) 
                                                 | ((IData)(
                                                            ((0x0000000fffffffffULL 
                                                              & (((2U 
                                                                   & (IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_hit))
                                                                   ? 
                                                                  (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_preds_in[2U] 
                                                                                >> 7U) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_entry[1U]))))))) 
                                                                    << 0x00000023U) 
                                                                   | (((QData)((IData)(
                                                                                (7U 
                                                                                & (vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_entry[1U] 
                                                                                >> 0x0000001cU)))) 
                                                                       << 0x00000020U) 
                                                                      | (QData)((IData)(
                                                                                ((vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_entry[2U] 
                                                                                << 1U) 
                                                                                | (vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_entry[1U] 
                                                                                >> 0x0000001fU))))))
                                                                   : 
                                                                  (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_preds_in[2U])) 
                                                                    << 0x0000003cU) 
                                                                   | (((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_preds_in[2U])) 
                                                                       << 0x0000001cU) 
                                                                      | ((QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_preds_in[1U])) 
                                                                         >> 4U)))) 
                                                                 & (- (QData)((IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__f3_valid))))) 
                                                             >> 0x00000020U)) 
                                                    << 4U)));
}
