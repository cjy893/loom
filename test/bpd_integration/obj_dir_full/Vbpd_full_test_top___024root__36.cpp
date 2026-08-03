// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

bool Vbpd_full_test_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vbpd_full_test_top___024root___nba_sequent__TOP__0(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__1(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__2(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__3(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__4(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__5(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__6(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__7(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__8(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__9(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__10(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__12(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__13(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__14(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__15(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_sequent__TOP__16(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_comb__TOP__0(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_comb__TOP__1(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_comb__TOP__2(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_comb__TOP__3(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_comb__TOP__4(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_comb__TOP__5(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_comb__TOP__6(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_comb__TOP__7(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_comb__TOP__8(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_comb__TOP__9(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_comb__TOP__10(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vbpd_full_test_top___024root___eval_phase__nba(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___eval_phase__nba\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vbpd_full_test_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vbpd_full_test_top___024root___nba_sequent__TOP__0(vlSelf);
                Vbpd_full_test_top___024root___nba_sequent__TOP__1(vlSelf);
                Vbpd_full_test_top___024root___nba_sequent__TOP__2(vlSelf);
                Vbpd_full_test_top___024root___nba_sequent__TOP__3(vlSelf);
                Vbpd_full_test_top___024root___nba_sequent__TOP__4(vlSelf);
                Vbpd_full_test_top___024root___nba_sequent__TOP__5(vlSelf);
                Vbpd_full_test_top___024root___nba_sequent__TOP__6(vlSelf);
            }
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vbpd_full_test_top___024root___nba_sequent__TOP__7(vlSelf);
                Vbpd_full_test_top___024root___nba_sequent__TOP__8(vlSelf);
                Vbpd_full_test_top___024root___nba_sequent__TOP__9(vlSelf);
                Vbpd_full_test_top___024root___nba_sequent__TOP__10(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vbpd_full_test_top___024root___nba_sequent__TOP__12(vlSelf);
                Vbpd_full_test_top___024root___nba_sequent__TOP__13(vlSelf);
                Vbpd_full_test_top___024root___nba_sequent__TOP__14(vlSelf);
                Vbpd_full_test_top___024root___nba_sequent__TOP__15(vlSelf);
                Vbpd_full_test_top___024root___nba_sequent__TOP__16(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vbpd_full_test_top___024root___nba_comb__TOP__0(vlSelf);
                Vbpd_full_test_top___024root___nba_comb__TOP__1(vlSelf);
                Vbpd_full_test_top___024root___nba_comb__TOP__2(vlSelf);
                Vbpd_full_test_top___024root___nba_comb__TOP__3(vlSelf);
                Vbpd_full_test_top___024root___nba_comb__TOP__4(vlSelf);
                Vbpd_full_test_top___024root___nba_comb__TOP__5(vlSelf);
                Vbpd_full_test_top___024root___nba_comb__TOP__6(vlSelf);
                Vbpd_full_test_top___024root___nba_comb__TOP__7(vlSelf);
                Vbpd_full_test_top___024root___nba_comb__TOP__8(vlSelf);
                Vbpd_full_test_top___024root___nba_comb__TOP__9(vlSelf);
                Vbpd_full_test_top___024root___nba_comb__TOP__10(vlSelf);
            }
        }
        Vbpd_full_test_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbpd_full_test_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vbpd_full_test_top___024root___eval_phase__ico(Vbpd_full_test_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbpd_full_test_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vbpd_full_test_top___024root___eval_phase__act(Vbpd_full_test_top___024root* vlSelf);

void Vbpd_full_test_top___024root___eval(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___eval\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vbpd_full_test_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/bpd_integration/bpd_full_test_top.sv", 5, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vbpd_full_test_top___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vbpd_full_test_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/bpd_integration/bpd_full_test_top.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vbpd_full_test_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/bpd_integration/bpd_full_test_top.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vbpd_full_test_top___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vbpd_full_test_top___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}
