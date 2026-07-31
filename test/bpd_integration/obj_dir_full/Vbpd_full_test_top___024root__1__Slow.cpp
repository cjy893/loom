// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

VL_ATTR_COLD void Vbpd_full_test_top___024root___eval_initial(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___eval_initial\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vbpd_full_test_top___024root___eval_final(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___eval_final\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbpd_full_test_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vbpd_full_test_top___024root___eval_phase__stl(Vbpd_full_test_top___024root* vlSelf);

VL_ATTR_COLD void Vbpd_full_test_top___024root___eval_settle(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___eval_settle\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vbpd_full_test_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/bpd_integration/bpd_full_test_top.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vbpd_full_test_top___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vbpd_full_test_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbpd_full_test_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vbpd_full_test_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vbpd_full_test_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vbpd_full_test_top___024root___stl_sequent__TOP__0(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___stl_sequent__TOP__0\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bim_ready = (1U & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__doing_reset)));
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
    vlSelfRef.current_ghist[0U] = (((IData)(vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__hist) 
                                    << 8U) | (((IData)(vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__saw_nt) 
                                               << 7U) 
                                              | (IData)(vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__ras_idx)));
    vlSelfRef.current_ghist[1U] = (((IData)(vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__hist) 
                                    >> 0x00000018U) 
                                   | ((IData)((vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__hist 
                                               >> 0x00000020U)) 
                                      << 8U));
    vlSelfRef.current_ghist[2U] = ((IData)((vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__hist 
                                            >> 0x00000020U)) 
                                   >> 0x00000018U);
    vlSelfRef.bpd_full_test_top__DOT__restore_packed[0U] 
        = (((IData)(vlSelfRef.restore_old_history) 
            << 8U) | (((IData)(vlSelfRef.restore_saw_nt) 
                       << 7U) | (IData)(vlSelfRef.restore_ras_idx)));
    vlSelfRef.bpd_full_test_top__DOT__restore_packed[1U] 
        = (((IData)(vlSelfRef.restore_old_history) 
            >> 0x00000018U) | ((IData)((vlSelfRef.restore_old_history 
                                        >> 0x00000020U)) 
                               << 8U));
    vlSelfRef.bpd_full_test_top__DOT__restore_packed[2U] 
        = ((IData)((vlSelfRef.restore_old_history >> 0x00000020U)) 
           >> 0x00000018U);
    vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty = 0U;
    vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx 
        = vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__repl_ptr;
    if ((1U & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid)))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx = 0U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                   >> 1U)) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx = 1U;
    }
}
