// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

void Vbpd_full_test_top___024root___eval_triggers_vec__ico__0(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___eval_triggers_vec__ico__1(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___eval_triggers_vec__ico__2(Vbpd_full_test_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbpd_full_test_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vbpd_full_test_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);
void Vbpd_full_test_top___024root___eval_ico(Vbpd_full_test_top___024root* vlSelf);

bool Vbpd_full_test_top___024root___eval_phase__ico(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___eval_phase__ico\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        Vbpd_full_test_top___024root___eval_triggers_vec__ico__0(vlSelf);
        Vbpd_full_test_top___024root___eval_triggers_vec__ico__1(vlSelf);
        Vbpd_full_test_top___024root___eval_triggers_vec__ico__2(vlSelf);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbpd_full_test_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vbpd_full_test_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vbpd_full_test_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

bool Vbpd_full_test_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___trigger_anySet__act\n"); );
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

void Vbpd_full_test_top___024root___nba_sequent__TOP__0(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___nba_sequent__TOP__0\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__bpd_full_test_top__DOT__ras_inst__DOT__stack__v0 = 0U;
    vlSelfRef.__VdlySet__bpd_full_test_top__DOT__ras_inst__DOT__stack__v1 = 0U;
    vlSelfRef.__VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__repl_ptr__v0 = 0U;
    vlSelfRef.__VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__repl_ptr__v1 = 0U;
    vlSelfRef.__Vdly__bpd_full_test_top__DOT__ghist_inst__DOT__history_q[0U] 
        = vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[0U];
    vlSelfRef.__Vdly__bpd_full_test_top__DOT__ghist_inst__DOT__history_q[1U] 
        = vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[1U];
    vlSelfRef.__Vdly__bpd_full_test_top__DOT__ghist_inst__DOT__history_q[2U] 
        = vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[2U];
    vlSelfRef.__Vdly__bpd_full_test_top__DOT__bim_inst__DOT__rst_set 
        = vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__rst_set;
    vlSelfRef.__Vdly__bpd_full_test_top__DOT__bim_inst__DOT__doing_reset 
        = vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__doing_reset;
    vlSelfRef.__VdlySet__bpd_full_test_top__DOT__bim_inst__DOT__ram__v0 = 0U;
    vlSelfRef.__VdlySet__bpd_full_test_top__DOT__bim_inst__DOT__ram__v1 = 0U;
    vlSelfRef.__VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v0 = 0U;
    vlSelfRef.__VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v1 = 0U;
    vlSelfRef.__VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v2 = 0U;
    vlSelfRef.__VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v3 = 0U;
    vlSelfRef.__VdlySet__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_data__v0 = 0U;
    vlSelfRef.__VdlySet__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_idx__v0 = 0U;
    vlSelfRef.__VdlySet__bpd_full_test_top__DOT__bim_inst__DOT__wrbypass_idx__v1 = 0U;
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__do_allocate) {
            if ((1U & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty)))) {
                vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__repl_ptr 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__repl_ptr)));
            }
        }
        if (((IData)(vlSelfRef.f1_update_valid) & (IData)(vlSelfRef.f1_is_call))) {
            vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__ras_inst__DOT__stack__v0 
                = ((IData)(4U) + vlSelfRef.f0_pc);
            vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__ras_inst__DOT__stack__v0 
                = (0x0000001fU & vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[0U]);
            vlSelfRef.__VdlySet__bpd_full_test_top__DOT__ras_inst__DOT__stack__v0 = 1U;
        }
    } else {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__repl_ptr = 0U;
        vlSelfRef.__VdlySet__bpd_full_test_top__DOT__ras_inst__DOT__stack__v1 = 1U;
    }
}
