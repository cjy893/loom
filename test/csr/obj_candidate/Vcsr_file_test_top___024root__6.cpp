// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsr_file_test_top.h for the primary calling header

#include "Vcsr_file_test_top__pch.h"

void Vcsr_file_test_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcsr_file_test_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vcsr_file_test_top___024root___eval_phase__act(Vcsr_file_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___eval_phase__act\n"); );
    Vcsr_file_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        {
            // Inlined CFunc: _eval_triggers_vec__act__0
            vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                            ((((~ (IData)(vlSelfRef.rst_n)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__1)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1))))));
        }
        {
            // Inlined CFunc: _eval_triggers_vec__act__1
            vlSelfRef.__Vtrigprevexpr___TOP__clk__1 
                = vlSelfRef.clk;
            vlSelfRef.__Vtrigprevexpr___TOP__rst_n__1 
                = vlSelfRef.rst_n;
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcsr_file_test_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vcsr_file_test_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vcsr_file_test_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}
