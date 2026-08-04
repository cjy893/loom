// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

bool Vmem_issue_test_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vmem_issue_test_top___024root___nba_sequent__TOP__0(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___nba_sequent__TOP__1(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___nba_sequent__TOP__2(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___nba_sequent__TOP__3(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___nba_sequent__TOP__4(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___nba_sequent__TOP__5(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___nba_sequent__TOP__6(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___nba_sequent__TOP__7(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___nba_sequent__TOP__8(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___nba_sequent__TOP__9(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___ico_comb__TOP__9(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___nba_sequent__TOP__11(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___nba_sequent__TOP__12(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___ico_comb__TOP__12(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___ico_comb__TOP__13(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___ico_comb__TOP__14(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

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
                Vmem_issue_test_top___024root___nba_sequent__TOP__6(vlSelf);
                Vmem_issue_test_top___024root___nba_sequent__TOP__7(vlSelf);
                Vmem_issue_test_top___024root___nba_sequent__TOP__8(vlSelf);
                Vmem_issue_test_top___024root___nba_sequent__TOP__9(vlSelf);
                Vmem_issue_test_top___024root___ico_comb__TOP__9(vlSelf);
                Vmem_issue_test_top___024root___nba_sequent__TOP__11(vlSelf);
                Vmem_issue_test_top___024root___nba_sequent__TOP__12(vlSelf);
                Vmem_issue_test_top___024root___ico_comb__TOP__12(vlSelf);
                Vmem_issue_test_top___024root___ico_comb__TOP__13(vlSelf);
                Vmem_issue_test_top___024root___ico_comb__TOP__14(vlSelf);
                {
                    // Inlined CFunc: _nba_sequent__TOP__16
                    vlSelfRef.agen_valid = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                            & (IData)(vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_agen_valid));
                    vlSelfRef.dgen_valid = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                               & (vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[8U] 
                                                  >> 0x00000015U)));
                }
            }
        }
        Vmem_issue_test_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem_issue_test_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vmem_issue_test_top___024root___eval_phase__ico(Vmem_issue_test_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem_issue_test_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vmem_issue_test_top___024root___eval_phase__act(Vmem_issue_test_top___024root* vlSelf);

void Vmem_issue_test_top___024root___eval(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___eval\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vmem_issue_test_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/mem/mem_issue_test_top.sv", 5, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vmem_issue_test_top___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmem_issue_test_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/mem/mem_issue_test_top.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmem_issue_test_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/mem/mem_issue_test_top.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vmem_issue_test_top___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vmem_issue_test_top___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}
