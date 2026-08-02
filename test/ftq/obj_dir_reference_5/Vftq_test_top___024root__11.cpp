// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vftq_test_top.h for the primary calling header

#include "Vftq_test_top__pch.h"

bool Vftq_test_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vftq_test_top___024root___nba_sequent__TOP__0(Vftq_test_top___024root* vlSelf);
void Vftq_test_top___024root___nba_sequent__TOP__1(Vftq_test_top___024root* vlSelf);
void Vftq_test_top___024root___nba_sequent__TOP__3(Vftq_test_top___024root* vlSelf);
void Vftq_test_top___024root___nba_sequent__TOP__4(Vftq_test_top___024root* vlSelf);
void Vftq_test_top___024root___nba_sequent__TOP__5(Vftq_test_top___024root* vlSelf);
void Vftq_test_top___024root___ico_comb__TOP__2(Vftq_test_top___024root* vlSelf);
void Vftq_test_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vftq_test_top___024root___eval_phase__nba(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___eval_phase__nba\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vftq_test_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vftq_test_top___024root___nba_sequent__TOP__0(vlSelf);
                Vftq_test_top___024root___nba_sequent__TOP__1(vlSelf);
                {
                    // Inlined CFunc: _nba_sequent__TOP__2
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q 
                        = vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__commit_ptr_q;
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_end_q 
                        = vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_end_q;
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_busy_q 
                        = vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__commit_busy_q;
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q 
                        = vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_ptr_q;
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__entry_valid_q 
                        = vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__entry_valid_q;
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_busy_q 
                        = vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_busy_q;
                    vlSelfRef.ftq_test_top__DOT__dut__DOT__enq_ptr_q 
                        = vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__enq_ptr_q;
                    if (vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v0) {
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v0][11U] 
                            = ((0x00001fffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                [vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v0][11U]) 
                               | (vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v0 
                                  << 0x0000000dU));
                        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v0][12U] 
                            = ((0xffffe000U & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                [vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v0][12U]) 
                               | (vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v0 
                                  >> 0x00000013U));
                    }
                }
                Vftq_test_top___024root___nba_sequent__TOP__3(vlSelf);
                Vftq_test_top___024root___nba_sequent__TOP__4(vlSelf);
                Vftq_test_top___024root___nba_sequent__TOP__5(vlSelf);
                Vftq_test_top___024root___ico_comb__TOP__2(vlSelf);
            }
        }
        Vftq_test_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vftq_test_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vftq_test_top___024root___eval_phase__ico(Vftq_test_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vftq_test_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vftq_test_top___024root___eval_phase__act(Vftq_test_top___024root* vlSelf);

void Vftq_test_top___024root___eval(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___eval\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vftq_test_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/ftq/ftq_test_top.sv", 5, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vftq_test_top___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vftq_test_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/ftq/ftq_test_top.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vftq_test_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/ftq/ftq_test_top.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vftq_test_top___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vftq_test_top___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}
