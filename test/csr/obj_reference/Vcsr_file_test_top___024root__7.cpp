// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsr_file_test_top.h for the primary calling header

#include "Vcsr_file_test_top__pch.h"

bool Vcsr_file_test_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vcsr_file_test_top___024root___eval_nba(Vcsr_file_test_top___024root* vlSelf);
void Vcsr_file_test_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vcsr_file_test_top___024root___eval_phase__nba(Vcsr_file_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___eval_phase__nba\n"); );
    Vcsr_file_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcsr_file_test_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vcsr_file_test_top___024root___eval_nba(vlSelf);
        Vcsr_file_test_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcsr_file_test_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vcsr_file_test_top___024root___eval_phase__ico(Vcsr_file_test_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcsr_file_test_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vcsr_file_test_top___024root___eval_phase__act(Vcsr_file_test_top___024root* vlSelf);

void Vcsr_file_test_top___024root___eval(Vcsr_file_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___eval\n"); );
    Vcsr_file_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vcsr_file_test_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("test/csr/csr_file_test_top.sv", 11, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vcsr_file_test_top___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcsr_file_test_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("test/csr/csr_file_test_top.sv", 11, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcsr_file_test_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("test/csr/csr_file_test_top.sv", 11, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vcsr_file_test_top___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vcsr_file_test_top___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}
