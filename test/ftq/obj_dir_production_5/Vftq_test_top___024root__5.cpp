// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vftq_test_top.h for the primary calling header

#include "Vftq_test_top__pch.h"

void Vftq_test_top___024root___eval_triggers_vec__ico__0(Vftq_test_top___024root* vlSelf);
void Vftq_test_top___024root___eval_triggers_vec__ico__1(Vftq_test_top___024root* vlSelf);
void Vftq_test_top___024root___eval_triggers_vec__ico__3(Vftq_test_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vftq_test_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vftq_test_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);
void Vftq_test_top___024root___ico_comb__TOP__1(Vftq_test_top___024root* vlSelf);
void Vftq_test_top___024root___ico_comb__TOP__2(Vftq_test_top___024root* vlSelf);

bool Vftq_test_top___024root___eval_phase__ico(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___eval_phase__ico\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        Vftq_test_top___024root___eval_triggers_vec__ico__0(vlSelf);
        Vftq_test_top___024root___eval_triggers_vec__ico__1(vlSelf);
        {
            // Inlined CFunc: _eval_triggers_vec__ico__2
            vlSelfRef.__Vtrigprevexpr___TOP__flush_valid__0 
                = vlSelfRef.flush_valid;
        }
        Vftq_test_top___024root___eval_triggers_vec__ico__3(vlSelf);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vftq_test_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vftq_test_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_ico
            if ((0x0000000200100002ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__0
                    vlSelfRef.enq_ready = ((~ ((IData)(vlSelfRef.flush_valid) 
                                               | ((IData)(vlSelfRef.redirect_valid) 
                                                  | ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_busy_q) 
                                                     | ((4U 
                                                         >= (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__enq_ptr_q)) 
                                                        && (1U 
                                                            & ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__entry_valid_q) 
                                                               >> (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__enq_ptr_q)))))))) 
                                           & (IData)(vlSelfRef.rst_n));
                }
            }
            if ((0x000000000c800000ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vftq_test_top___024root___ico_comb__TOP__1(vlSelf);
                Vftq_test_top___024root___ico_comb__TOP__2(vlSelf);
            }
        }
    }
    return (__VicoExecute);
}

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
