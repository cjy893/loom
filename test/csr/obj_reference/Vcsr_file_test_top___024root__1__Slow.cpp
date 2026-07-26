// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsr_file_test_top.h for the primary calling header

#include "Vcsr_file_test_top__pch.h"

VL_ATTR_COLD bool Vcsr_file_test_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcsr_file_test_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vcsr_file_test_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vcsr_file_test_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vcsr_file_test_top___024root___stl_sequent__TOP__0(Vcsr_file_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___stl_sequent__TOP__0\n"); );
    Vcsr_file_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csr_req_ready = (1U & (~ (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_q)));
    vlSelfRef.csr_resp_rob_idx = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_rob_idx_q;
    vlSelfRef.csr_resp_valid = vlSelfRef.csr_file_test_top__DOT__dut__DOT__resp_valid_q;
    vlSelfRef.csr_rdata = vlSelfRef.csr_file_test_top__DOT__dut__DOT__resp_data_q;
    vlSelfRef.eentry_value = vlSelfRef.csr_file_test_top__DOT__dut__DOT__eentry_q;
    vlSelfRef.tlbrentry_value = vlSelfRef.csr_file_test_top__DOT__dut__DOT__tlbrentry_q;
    vlSelfRef.current_plv = (3U & vlSelfRef.csr_file_test_top__DOT__dut__DOT__crmd_q);
    vlSelfRef.crmd_value = vlSelfRef.csr_file_test_top__DOT__dut__DOT__crmd_q;
    vlSelfRef.ertn_target = vlSelfRef.csr_file_test_top__DOT__dut__DOT__era_q;
    vlSelfRef.era_value = vlSelfRef.csr_file_test_top__DOT__dut__DOT__era_q;
    vlSelfRef.asid_value = vlSelfRef.csr_file_test_top__DOT__dut__DOT__asid_q;
    vlSelfRef.dmw0_value = vlSelfRef.csr_file_test_top__DOT__dut__DOT__dmw0_q;
    vlSelfRef.dmw1_value = vlSelfRef.csr_file_test_top__DOT__dut__DOT__dmw1_q;
    vlSelfRef.csr_file_test_top__DOT__dut__DOT__commit_match 
        = ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_q) 
           & ((IData)(vlSelfRef.csr_commit_valid) & 
              ((IData)(vlSelfRef.csr_commit_rob_idx) 
               == (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_rob_idx_q))));
    vlSelfRef.xcpt_target = (((IData)(vlSelfRef.xcpt_valid) 
                              & (0x3fU == (IData)(vlSelfRef.xcpt_code)))
                              ? vlSelfRef.csr_file_test_top__DOT__dut__DOT__tlbrentry_q
                              : vlSelfRef.csr_file_test_top__DOT__dut__DOT__eentry_q);
    vlSelfRef.current_ie = (1U & (vlSelfRef.csr_file_test_top__DOT__dut__DOT__crmd_q 
                                  >> 2U));
    vlSelfRef.interrupt_pending_bits = ((((IData)(vlSelfRef.ipi_irq) 
                                          << 0x0000000cU) 
                                         | ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__timer_irq_q) 
                                            << 0x0000000bU)) 
                                        | (((IData)(vlSelfRef.hw_irq) 
                                            << 2U) 
                                           | (3U & vlSelfRef.csr_file_test_top__DOT__dut__DOT__estat_q)));
    vlSelfRef.interrupt_pending = ((IData)(vlSelfRef.current_ie) 
                                   & (0U != (vlSelfRef.csr_file_test_top__DOT__dut__DOT__ecfg_q 
                                             & (IData)(vlSelfRef.interrupt_pending_bits))));
}
