// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vicache_test_top.h for the primary calling header

#include "Vicache_test_top__pch.h"

bool Vicache_test_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vicache_test_top___024root___nba_sequent__TOP__0(Vicache_test_top___024root* vlSelf);
void Vicache_test_top___024root___nba_sequent__TOP__1(Vicache_test_top___024root* vlSelf);
void Vicache_test_top___024root___nba_sequent__TOP__2(Vicache_test_top___024root* vlSelf);
void Vicache_test_top___024root___nba_sequent__TOP__3(Vicache_test_top___024root* vlSelf);
void Vicache_test_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vicache_test_top___024root___eval_phase__nba(Vicache_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_test_top___024root___eval_phase__nba\n"); );
    Vicache_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vicache_test_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vicache_test_top___024root___nba_sequent__TOP__0(vlSelf);
                Vicache_test_top___024root___nba_sequent__TOP__1(vlSelf);
                Vicache_test_top___024root___nba_sequent__TOP__2(vlSelf);
                Vicache_test_top___024root___nba_sequent__TOP__3(vlSelf);
                {
                    // Inlined CFunc: _nba_sequent__TOP__4
                    CData/*0:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__4_icache_test_top__DOT__dut__DOT__unnamedblk1__DOT__victim_found;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__4_icache_test_top__DOT__dut__DOT__unnamedblk1__DOT__victim_found = 0;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__4_icache_test_top__DOT__dut__DOT__unnamedblk1__DOT__victim_found = 0U;
                    if ((1U & (~ (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array
                                         [vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_set][0U])))) {
                        vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_victim_way = 0U;
                        __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__4_icache_test_top__DOT__dut__DOT__unnamedblk1__DOT__victim_found = 1U;
                    }
                    if ((1U & ((~ (IData)(__Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__4_icache_test_top__DOT__dut__DOT__unnamedblk1__DOT__victim_found)) 
                               & (~ (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array
                                            [vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_set][1U]))))) {
                        vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_victim_way = 1U;
                        __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__4_icache_test_top__DOT__dut__DOT__unnamedblk1__DOT__victim_found = 1U;
                    }
                    vlSelfRef.req_ready = ((~ (IData)(vlSelfRef.maint_valid)) 
                                           & (IData)(vlSelfRef.maint_ready));
                }
            }
        }
        Vicache_test_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vicache_test_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vicache_test_top___024root___eval_phase__ico(Vicache_test_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vicache_test_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vicache_test_top___024root___eval_phase__act(Vicache_test_top___024root* vlSelf);

void Vicache_test_top___024root___eval(Vicache_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_test_top___024root___eval\n"); );
    Vicache_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vicache_test_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/icache/icache_test_top.sv", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vicache_test_top___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vicache_test_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/icache/icache_test_top.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vicache_test_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/icache/icache_test_top.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vicache_test_top___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vicache_test_top___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}
