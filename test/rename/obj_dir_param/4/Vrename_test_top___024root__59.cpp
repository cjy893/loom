// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

bool Vrename_test_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vrename_test_top___024root___nba_sequent__TOP__0(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__1(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__2(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__3(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__4(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__5(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__6(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__7(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__8(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__9(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__10(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__11(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__12(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__13(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__14(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__15(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__16(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__17(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__18(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__19(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__20(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__21(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__22(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__23(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__24(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_comb__TOP__19(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__26(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_comb__TOP__22(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__28(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__29(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__30(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__31(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__32(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__33(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__34(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__35(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__36(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__37(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__38(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vrename_test_top___024root___eval_phase__nba(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___eval_phase__nba\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vrename_test_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vrename_test_top___024root___nba_sequent__TOP__0(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__1(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__2(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__3(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__4(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__5(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__6(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__7(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__8(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__9(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__10(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__11(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__12(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__13(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__14(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__15(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__16(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__17(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__18(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__19(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__20(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__21(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__22(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__23(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__24(vlSelf);
                Vrename_test_top___024root___ico_comb__TOP__19(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__26(vlSelf);
                Vrename_test_top___024root___ico_comb__TOP__22(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__28(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__29(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__30(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__31(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__32(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__33(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__34(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__35(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__36(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__37(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__38(vlSelf);
            }
        }
        Vrename_test_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrename_test_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vrename_test_top___024root___eval_phase__ico(Vrename_test_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrename_test_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vrename_test_top___024root___eval_phase__act(Vrename_test_top___024root* vlSelf);

void Vrename_test_top___024root___eval(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___eval\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vrename_test_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/rename/rename_test_top.sv", 5, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vrename_test_top___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vrename_test_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/rename/rename_test_top.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vrename_test_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/rename/rename_test_top.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vrename_test_top___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vrename_test_top___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}
