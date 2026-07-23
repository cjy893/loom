// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboom_core.h for the primary calling header

#include "Vboom_core__pch.h"

void Vboom_core___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vboom_core___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vboom_core___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vboom_core___024root___act_sequent__TOP__0(Vboom_core___024root* vlSelf);

bool Vboom_core___024root___eval_phase__act(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___eval_phase__act\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((~ (IData)(vlSelfRef.rst_n)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__1)) 
                                                          << 2U) 
                                                         | ((((IData)(vlSelfRef.clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1))) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.boom_core__DOT__dec_fire) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__boom_core__DOT__dec_fire__1))))));
        vlSelfRef.__Vtrigprevexpr___TOP__boom_core__DOT__dec_fire__1 
            = vlSelfRef.boom_core__DOT__dec_fire;
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rst_n__1 = vlSelfRef.rst_n;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
            vlSelfRef.__VactDidInit = 1U;
            vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vboom_core___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vboom_core___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vboom_core___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        {
            // Inlined CFunc: _eval_act
            if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
                Vboom_core___024root___act_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[8U] = 1U;
            }
        }
    }
    return (__VactExecute);
}

void Vboom_core___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vboom_core___024root___nba_sequent__TOP__0(Vboom_core___024root* vlSelf);
void Vboom_core___024root___nba_sequent__TOP__1(Vboom_core___024root* vlSelf);
void Vboom_core_decode___nba_sequent__TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst__0(Vboom_core_decode* vlSelf);
void Vboom_core___024root___nba_sequent__TOP__2(Vboom_core___024root* vlSelf);
void Vboom_core___024root___nba_sequent__TOP__3(Vboom_core___024root* vlSelf);
void Vboom_core___024root___nba_comb__TOP__0(Vboom_core___024root* vlSelf);
void Vboom_core___024root___nba_sequent__TOP__4(Vboom_core___024root* vlSelf);
void Vboom_core___024root___nba_comb__TOP__1(Vboom_core___024root* vlSelf);
void Vboom_core___024root___nba_comb__TOP__2(Vboom_core___024root* vlSelf);

bool Vboom_core___024root___eval_phase__nba(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___eval_phase__nba\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vboom_core___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vboom_core___024root___nba_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[9U] = 1U;
                Vboom_core___024root___nba_sequent__TOP__1(vlSelf);
                Vboom_core_decode___nba_sequent__TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst__0((&vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst));
                Vboom_core___024root___nba_sequent__TOP__2(vlSelf);
            }
            if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vboom_core___024root___nba_sequent__TOP__3(vlSelf);
                vlSelfRef.__Vm_traceActivity[10U] = 1U;
            }
            if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vboom_core___024root___nba_comb__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[11U] = 1U;
            }
            if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vboom_core___024root___nba_sequent__TOP__4(vlSelf);
                vlSelfRef.__Vm_traceActivity[12U] = 1U;
            }
            if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vboom_core___024root___nba_comb__TOP__1(vlSelf);
                vlSelfRef.__Vm_traceActivity[13U] = 1U;
            }
            if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vboom_core___024root___nba_comb__TOP__2(vlSelf);
                vlSelfRef.__Vm_traceActivity[14U] = 1U;
            }
        }
        Vboom_core___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vboom_core___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vboom_core___024root___eval_phase__ico(Vboom_core___024root* vlSelf);

void Vboom_core___024root___eval(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___eval\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vboom_core___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("boom_core.sv", 5, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vboom_core___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vboom_core___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("boom_core.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vboom_core___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("boom_core.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vboom_core___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vboom_core___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vboom_core___024root___eval_debug_assertions(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___eval_debug_assertions\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.fe_valid & 0xf0U)))) {
        Verilated::overWidthError("fe_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.lsu_resp_valid & 0xfeU)))) {
        Verilated::overWidthError("lsu_resp_valid");
    }
}
#endif  // VL_DEBUG
