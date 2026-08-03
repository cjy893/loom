// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem_issue_test_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
void Vmem_issue_test_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vmem_issue_test_top___024root___eval_phase__act(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___eval_phase__act\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vmem_issue_test_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vmem_issue_test_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vmem_issue_test_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vmem_issue_test_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vmem_issue_test_top___024root___nba_sequent__TOP__0(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___nba_sequent__TOP__1(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___nba_sequent__TOP__2(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___nba_sequent__TOP__3(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___nba_sequent__TOP__4(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___nba_sequent__TOP__5(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___ico_comb__TOP__5(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___nba_sequent__TOP__7(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___nba_sequent__TOP__8(Vmem_issue_test_top___024root* vlSelf);

bool Vmem_issue_test_top___024root___eval_phase__nba(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___eval_phase__nba\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vmem_issue_test_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vmem_issue_test_top___024root___nba_sequent__TOP__0(vlSelf);
                Vmem_issue_test_top___024root___nba_sequent__TOP__1(vlSelf);
                Vmem_issue_test_top___024root___nba_sequent__TOP__2(vlSelf);
                Vmem_issue_test_top___024root___nba_sequent__TOP__3(vlSelf);
                Vmem_issue_test_top___024root___nba_sequent__TOP__4(vlSelf);
                Vmem_issue_test_top___024root___nba_sequent__TOP__5(vlSelf);
                Vmem_issue_test_top___024root___ico_comb__TOP__5(vlSelf);
                Vmem_issue_test_top___024root___nba_sequent__TOP__7(vlSelf);
                Vmem_issue_test_top___024root___nba_sequent__TOP__8(vlSelf);
            }
        }
        Vmem_issue_test_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}
