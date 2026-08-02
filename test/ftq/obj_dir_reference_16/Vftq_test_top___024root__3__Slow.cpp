// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vftq_test_top.h for the primary calling header

#include "Vftq_test_top__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vftq_test_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vftq_test_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vftq_test_top___024root___stl_sequent__TOP__0(Vftq_test_top___024root* vlSelf);
VL_ATTR_COLD void Vftq_test_top___024root___stl_sequent__TOP__1(Vftq_test_top___024root* vlSelf);

VL_ATTR_COLD bool Vftq_test_top___024root___eval_phase__stl(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___eval_phase__stl\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vftq_test_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vftq_test_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vftq_test_top___024root___stl_sequent__TOP__0(vlSelf);
                Vftq_test_top___024root___stl_sequent__TOP__1(vlSelf);
                {
                    // Inlined CFunc: _stl_sequent__TOP__2
                    if (VL_LTES_III(32, 2U, (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_idx_d))) {
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d 
                            = ((0x0bU & (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d)) 
                               | (4U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                        [vlSelfRef.brupdate_b2_ftq_idx][11U] 
                                        >> 9U)));
                    }
                    if (VL_LTES_III(32, 3U, (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_idx_d))) {
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d 
                            = ((7U & (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d)) 
                               | (8U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                        [vlSelfRef.brupdate_b2_ftq_idx][11U] 
                                        >> 9U)));
                    }
                    if (vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_br_d) {
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d 
                            = ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d) 
                               | (0x0fU & ((IData)(1U) 
                                           << (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_idx_d))));
                    }
                }
            }
        }
    }
    return (__VstlExecute);
}
