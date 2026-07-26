// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsr_file_test_top.h for the primary calling header

#include "Vcsr_file_test_top__pch.h"

void Vcsr_file_test_top___024root___eval_triggers_vec__ico(Vcsr_file_test_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcsr_file_test_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vcsr_file_test_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

bool Vcsr_file_test_top___024root___eval_phase__ico(Vcsr_file_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___eval_phase__ico\n"); );
    Vcsr_file_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcsr_file_test_top___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcsr_file_test_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vcsr_file_test_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_ico
            if ((0x0000000000000600ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__0
                    vlSelfRef.csr_file_test_top__DOT__dut__DOT__commit_match 
                        = ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_q) 
                           & ((IData)(vlSelfRef.csr_commit_valid) 
                              & ((IData)(vlSelfRef.csr_commit_rob_idx) 
                                 == (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_rob_idx_q))));
                }
            }
            if ((0x0000000000005000ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__1
                    vlSelfRef.xcpt_target = (((IData)(vlSelfRef.xcpt_valid) 
                                              & (0x3fU 
                                                 == (IData)(vlSelfRef.xcpt_code)))
                                              ? vlSelfRef.csr_file_test_top__DOT__dut__DOT__tlbrentry_q
                                              : vlSelfRef.csr_file_test_top__DOT__dut__DOT__eentry_q);
                }
            }
            if ((0x00000000000c0000ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__2
                    vlSelfRef.interrupt_pending_bits 
                        = ((((IData)(vlSelfRef.ipi_irq) 
                             << 0x0000000cU) | ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__timer_irq_q) 
                                                << 0x0000000bU)) 
                           | (((IData)(vlSelfRef.hw_irq) 
                               << 2U) | (3U & vlSelfRef.csr_file_test_top__DOT__dut__DOT__estat_q)));
                    vlSelfRef.interrupt_pending = ((IData)(vlSelfRef.current_ie) 
                                                   & (0U 
                                                      != 
                                                      (vlSelfRef.csr_file_test_top__DOT__dut__DOT__ecfg_q 
                                                       & (IData)(vlSelfRef.interrupt_pending_bits))));
                }
            }
        }
    }
    return (__VicoExecute);
}
