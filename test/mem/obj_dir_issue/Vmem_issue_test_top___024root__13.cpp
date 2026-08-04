// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

void Vmem_issue_test_top___024root___eval_triggers_vec__ico__0(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___eval_triggers_vec__ico__1(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___eval_triggers_vec__ico__2(Vmem_issue_test_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem_issue_test_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vmem_issue_test_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);
void Vmem_issue_test_top___024root___eval_ico(Vmem_issue_test_top___024root* vlSelf);

bool Vmem_issue_test_top___024root___eval_phase__ico(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___eval_phase__ico\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        Vmem_issue_test_top___024root___eval_triggers_vec__ico__0(vlSelf);
        Vmem_issue_test_top___024root___eval_triggers_vec__ico__1(vlSelf);
        Vmem_issue_test_top___024root___eval_triggers_vec__ico__2(vlSelf);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmem_issue_test_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vmem_issue_test_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vmem_issue_test_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

bool Vmem_issue_test_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___trigger_anySet__act\n"); );
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

void Vmem_issue_test_top___024root___nba_sequent__TOP__0(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___nba_sequent__TOP__0\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<13>/*415:0*/ __Vtemp_1;
    VlWide<13>/*415:0*/ __Vtemp_2;
    IData/*31:0*/ __Vilp1;
    // Body
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x00000033U)) {
        vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[__Vilp1] 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    if ((1U & (~ ((~ (IData)(vlSelfRef.rst_n)) | (IData)(vlSelfRef.flush_pipeline))))) {
        vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[7U] 
            = ((0x3fffffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[7U]) 
               | ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[8U] 
                     << 2U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[7U] 
                               >> 0x0000001eU)) & (~ 
                                                   ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                                     << 0x00000013U) 
                                                    | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                                       >> 0x0000000dU)))) 
                  << 0x0000001eU));
        vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[8U] 
            = ((0xfffffffcU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[8U]) 
               | (3U & ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[8U] 
                           << 2U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[7U] 
                                     >> 0x0000001eU)) 
                         & (~ ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                << 0x00000013U) | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                                   >> 0x0000000dU)))) 
                        >> 2U)));
        if ((1U & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant) 
                   & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_complete))))) {
            if ((1U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__issue_agen))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[8U] 
                    = (0x00004000U | vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[8U]);
            }
            if ((1U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__issue_dgen))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[8U] 
                    = (0x00002000U | vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[8U]);
            }
        }
        if ((1U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[4U] 
                                  >> 6U)) == (0x0000003fU 
                                              & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U] 
                    = (0xffdfffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U]);
            }
            if ((((0x0000003fU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[4U]) 
                  == (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U] 
                    = (0xffefffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U]);
            }
            if ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U] 
                   >> 0x0000001aU) == (0x0000003fU 
                                       & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U] 
                    = (0xfff7ffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U]);
            }
        }
        if ((2U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[4U] 
                                  >> 6U)) == (0x0000003fU 
                                              & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                 >> 6U))) 
                 & (0U != (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                          >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U] 
                    = (0xffdfffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U]);
            }
            if ((((0x0000003fU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[4U]) 
                  == (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                     >> 6U))) & (0U 
                                                 != 
                                                 (0x0000003fU 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                     >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U] 
                    = (0xffefffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U]);
            }
            if ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U] 
                   >> 0x0000001aU) == (0x0000003fU 
                                       & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                          >> 6U))) 
                 & (0U != (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                          >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U] 
                    = (0xfff7ffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U]);
            }
        }
        vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[20U] 
            = ((0x3fffffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[20U]) 
               | ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[21U] 
                     << 2U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[20U] 
                               >> 0x0000001eU)) & (~ 
                                                   ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                                     << 0x00000013U) 
                                                    | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                                       >> 0x0000000dU)))) 
                  << 0x0000001eU));
        vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[21U] 
            = ((0xfffffffcU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[21U]) 
               | (3U & ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[21U] 
                           << 2U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[20U] 
                                     >> 0x0000001eU)) 
                         & (~ ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                << 0x00000013U) | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                                   >> 0x0000000dU)))) 
                        >> 2U)));
        if ((1U & (((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant) 
                    >> 1U) & (~ ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_complete) 
                                 >> 1U))))) {
            if ((2U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__issue_agen))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[21U] 
                    = (0x00004000U | vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[21U]);
            }
            if ((2U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__issue_dgen))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[21U] 
                    = (0x00002000U | vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[21U]);
            }
        }
        if ((1U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[17U] 
                                  >> 6U)) == (0x0000003fU 
                                              & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                    = (0xffdfffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U]);
            }
            if ((((0x0000003fU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[17U]) 
                  == (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                    = (0xffefffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U]);
            }
            if ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                   >> 0x0000001aU) == (0x0000003fU 
                                       & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                    = (0xfff7ffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U]);
            }
        }
        if ((2U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[17U] 
                                  >> 6U)) == (0x0000003fU 
                                              & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                 >> 6U))) 
                 & (0U != (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                          >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                    = (0xffdfffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U]);
            }
            if ((((0x0000003fU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[17U]) 
                  == (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                     >> 6U))) & (0U 
                                                 != 
                                                 (0x0000003fU 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                     >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                    = (0xffefffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U]);
            }
            if ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                   >> 0x0000001aU) == (0x0000003fU 
                                       & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                          >> 6U))) 
                 & (0U != (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                          >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                    = (0xfff7ffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U]);
            }
        }
        vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[33U] 
            = ((0x3fffffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[33U]) 
               | ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[34U] 
                     << 2U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[33U] 
                               >> 0x0000001eU)) & (~ 
                                                   ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                                     << 0x00000013U) 
                                                    | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                                       >> 0x0000000dU)))) 
                  << 0x0000001eU));
        vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[34U] 
            = ((0xfffffffcU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[34U]) 
               | (3U & ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[34U] 
                           << 2U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[33U] 
                                     >> 0x0000001eU)) 
                         & (~ ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                << 0x00000013U) | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                                   >> 0x0000000dU)))) 
                        >> 2U)));
        if ((1U & (((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant) 
                    >> 2U) & (~ ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_complete) 
                                 >> 2U))))) {
            if ((4U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__issue_agen))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[34U] 
                    = (0x00004000U | vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[34U]);
            }
            if ((4U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__issue_dgen))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[34U] 
                    = (0x00002000U | vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[34U]);
            }
        }
        if ((1U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[30U] 
                                  >> 6U)) == (0x0000003fU 
                                              & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                    = (0xffdfffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U]);
            }
            if ((((0x0000003fU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[30U]) 
                  == (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                    = (0xffefffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U]);
            }
            if ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                   >> 0x0000001aU) == (0x0000003fU 
                                       & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                    = (0xfff7ffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U]);
            }
        }
        if ((2U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[30U] 
                                  >> 6U)) == (0x0000003fU 
                                              & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                 >> 6U))) 
                 & (0U != (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                          >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                    = (0xffdfffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U]);
            }
            if ((((0x0000003fU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[30U]) 
                  == (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                     >> 6U))) & (0U 
                                                 != 
                                                 (0x0000003fU 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                     >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                    = (0xffefffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U]);
            }
            if ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                   >> 0x0000001aU) == (0x0000003fU 
                                       & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                          >> 6U))) 
                 & (0U != (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                          >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                    = (0xfff7ffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U]);
            }
        }
        vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[46U] 
            = ((0x3fffffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[46U]) 
               | ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[47U] 
                     << 2U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[46U] 
                               >> 0x0000001eU)) & (~ 
                                                   ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                                     << 0x00000013U) 
                                                    | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                                       >> 0x0000000dU)))) 
                  << 0x0000001eU));
        vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[47U] 
            = ((0xfffffffcU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[47U]) 
               | (3U & ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[47U] 
                           << 2U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[46U] 
                                     >> 0x0000001eU)) 
                         & (~ ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                << 0x00000013U) | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                                   >> 0x0000000dU)))) 
                        >> 2U)));
        if ((IData)((((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant) 
                      >> 3U) & (~ ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_complete) 
                                   >> 3U))))) {
            if ((8U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__issue_agen))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[47U] 
                    = (0x00004000U | vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[47U]);
            }
            if ((8U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__issue_dgen))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[47U] 
                    = (0x00002000U | vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[47U]);
            }
        }
        if ((1U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[43U] 
                                  >> 6U)) == (0x0000003fU 
                                              & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                    = (0xffdfffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U]);
            }
            if ((((0x0000003fU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[43U]) 
                  == (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                    = (0xffefffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U]);
            }
            if ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                   >> 0x0000001aU) == (0x0000003fU 
                                       & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                    = (0xfff7ffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U]);
            }
        }
        if ((2U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[43U] 
                                  >> 6U)) == (0x0000003fU 
                                              & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                 >> 6U))) 
                 & (0U != (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                          >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                    = (0xffdfffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U]);
            }
            if ((((0x0000003fU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[43U]) 
                  == (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                     >> 6U))) & (0U 
                                                 != 
                                                 (0x0000003fU 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                     >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                    = (0xffefffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U]);
            }
            if ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                   >> 0x0000001aU) == (0x0000003fU 
                                       & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                          >> 6U))) 
                 & (0U != (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                          >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                    = (0xfff7ffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U]);
            }
        }
        if ((1U & (((IData)(vlSelfRef.mem_issue_test_top__DOT__dis_valid_vec) 
                    & (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec)) 
                   & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_br_killed))))) {
            if ((0x067fU >= (0x000007ffU & ((IData)(0x000001a0U) 
                                            * (3U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))))) {
                __Vtemp_1[0U] = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[0U];
                __Vtemp_1[1U] = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[1U];
                __Vtemp_1[2U] = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[2U];
                __Vtemp_1[3U] = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[3U];
                __Vtemp_1[4U] = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[4U];
                __Vtemp_1[5U] = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[5U];
                __Vtemp_1[6U] = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[6U];
                __Vtemp_1[7U] = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[7U];
                __Vtemp_1[8U] = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[8U];
                __Vtemp_1[9U] = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[9U];
                __Vtemp_1[10U] = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[10U];
                __Vtemp_1[11U] = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[11U];
                __Vtemp_1[12U] = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[12U];
                VL_ASSIGNSEL_WW(1664, 416, (0x000007ffU 
                                            & ((IData)(0x000001a0U) 
                                               * (3U 
                                                  & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))), vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop, __Vtemp_1);
            }
            if ((1U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
                if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[4U] 
                                      >> 6U)) == (0x0000003fU 
                                                  & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                     & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                    vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[(
                                                                                ((IData)(0x00000075U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x000001a0U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))))) 
                                                                                >> 5U)] 
                        = ((~ ((IData)(1U) << (0x0000001fU 
                                               & ((IData)(0x00000075U) 
                                                  + 
                                                  (0x000007ffU 
                                                   & ((IData)(0x000001a0U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))))))) 
                           & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                           [(((IData)(0x00000075U) 
                              + (0x000007ffU & ((IData)(0x000001a0U) 
                                                * (3U 
                                                   & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))))) 
                             >> 5U)]);
                }
                if ((((0x0000003fU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[4U]) 
                      == (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                     & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                    vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[(
                                                                                ((IData)(0x00000074U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x000001a0U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))))) 
                                                                                >> 5U)] 
                        = ((~ ((IData)(1U) << (0x0000001fU 
                                               & ((IData)(0x00000074U) 
                                                  + 
                                                  (0x000007ffU 
                                                   & ((IData)(0x000001a0U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))))))) 
                           & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                           [(((IData)(0x00000074U) 
                              + (0x000007ffU & ((IData)(0x000001a0U) 
                                                * (3U 
                                                   & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))))) 
                             >> 5U)]);
                }
                if ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[3U] 
                       >> 0x0000001aU) == (0x0000003fU 
                                           & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                     & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                    vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[(
                                                                                ((IData)(0x00000073U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x000001a0U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))))) 
                                                                                >> 5U)] 
                        = ((~ ((IData)(1U) << (0x0000001fU 
                                               & ((IData)(0x00000073U) 
                                                  + 
                                                  (0x000007ffU 
                                                   & ((IData)(0x000001a0U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))))))) 
                           & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                           [(((IData)(0x00000073U) 
                              + (0x000007ffU & ((IData)(0x000001a0U) 
                                                * (3U 
                                                   & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))))) 
                             >> 5U)]);
                }
            }
            if ((2U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
                if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[4U] 
                                      >> 6U)) == (0x0000003fU 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                     >> 6U))) 
                     & (0U != (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                              >> 6U))))) {
                    vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[(
                                                                                ((IData)(0x00000075U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x000001a0U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))))) 
                                                                                >> 5U)] 
                        = ((~ ((IData)(1U) << (0x0000001fU 
                                               & ((IData)(0x00000075U) 
                                                  + 
                                                  (0x000007ffU 
                                                   & ((IData)(0x000001a0U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))))))) 
                           & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                           [(((IData)(0x00000075U) 
                              + (0x000007ffU & ((IData)(0x000001a0U) 
                                                * (3U 
                                                   & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))))) 
                             >> 5U)]);
                }
                if ((((0x0000003fU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[4U]) 
                      == (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                         >> 6U))) & 
                     (0U != (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                            >> 6U))))) {
                    vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[(
                                                                                ((IData)(0x00000074U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x000001a0U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))))) 
                                                                                >> 5U)] 
                        = ((~ ((IData)(1U) << (0x0000001fU 
                                               & ((IData)(0x00000074U) 
                                                  + 
                                                  (0x000007ffU 
                                                   & ((IData)(0x000001a0U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))))))) 
                           & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                           [(((IData)(0x00000074U) 
                              + (0x000007ffU & ((IData)(0x000001a0U) 
                                                * (3U 
                                                   & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))))) 
                             >> 5U)]);
                }
                if ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[3U] 
                       >> 0x0000001aU) == (0x0000003fU 
                                           & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                              >> 6U))) 
                     & (0U != (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                              >> 6U))))) {
                    vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[(
                                                                                ((IData)(0x00000073U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x000001a0U) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))))) 
                                                                                >> 5U)] 
                        = ((~ ((IData)(1U) << (0x0000001fU 
                                               & ((IData)(0x00000073U) 
                                                  + 
                                                  (0x000007ffU 
                                                   & ((IData)(0x000001a0U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))))))) 
                           & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                           [(((IData)(0x00000073U) 
                              + (0x000007ffU & ((IData)(0x000001a0U) 
                                                * (3U 
                                                   & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))))) 
                             >> 5U)]);
                }
            }
        }
        if ((1U & ((((IData)(vlSelfRef.mem_issue_test_top__DOT__dis_valid_vec) 
                     & (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec)) 
                    >> 1U) & (~ ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_br_killed) 
                                 >> 1U))))) {
            if ((0x067fU >= (0x000007ffU & ((IData)(0x000001a0U) 
                                            * (3U & 
                                               ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                >> 2U)))))) {
                __Vtemp_2[0U] = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[13U];
                __Vtemp_2[1U] = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[14U];
                __Vtemp_2[2U] = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[15U];
                __Vtemp_2[3U] = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[16U];
                __Vtemp_2[4U] = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[17U];
                __Vtemp_2[5U] = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[18U];
                __Vtemp_2[6U] = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[19U];
                __Vtemp_2[7U] = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[20U];
                __Vtemp_2[8U] = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[21U];
                __Vtemp_2[9U] = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[22U];
                __Vtemp_2[10U] = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[23U];
                __Vtemp_2[11U] = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[24U];
                __Vtemp_2[12U] = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[25U];
                VL_ASSIGNSEL_WW(1664, 416, (0x000007ffU 
                                            & ((IData)(0x000001a0U) 
                                               * (3U 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                     >> 2U)))), vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop, __Vtemp_2);
            }
            if ((1U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
                if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[17U] 
                                      >> 6U)) == (0x0000003fU 
                                                  & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                     & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                    vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[(
                                                                                ((IData)(0x00000075U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x000001a0U) 
                                                                                * 
                                                                                (3U 
                                                                                & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                                                >> 2U))))) 
                                                                                >> 5U)] 
                        = ((~ ((IData)(1U) << (0x0000001fU 
                                               & ((IData)(0x00000075U) 
                                                  + 
                                                  (0x000007ffU 
                                                   & ((IData)(0x000001a0U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                          >> 2U)))))))) 
                           & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                           [(((IData)(0x00000075U) 
                              + (0x000007ffU & ((IData)(0x000001a0U) 
                                                * (3U 
                                                   & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                      >> 2U))))) 
                             >> 5U)]);
                }
                if ((((0x0000003fU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[17U]) 
                      == (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                     & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                    vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[(
                                                                                ((IData)(0x00000074U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x000001a0U) 
                                                                                * 
                                                                                (3U 
                                                                                & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                                                >> 2U))))) 
                                                                                >> 5U)] 
                        = ((~ ((IData)(1U) << (0x0000001fU 
                                               & ((IData)(0x00000074U) 
                                                  + 
                                                  (0x000007ffU 
                                                   & ((IData)(0x000001a0U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                          >> 2U)))))))) 
                           & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                           [(((IData)(0x00000074U) 
                              + (0x000007ffU & ((IData)(0x000001a0U) 
                                                * (3U 
                                                   & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                      >> 2U))))) 
                             >> 5U)]);
                }
                if ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[16U] 
                       >> 0x0000001aU) == (0x0000003fU 
                                           & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                     & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                    vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[(
                                                                                ((IData)(0x00000073U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x000001a0U) 
                                                                                * 
                                                                                (3U 
                                                                                & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                                                >> 2U))))) 
                                                                                >> 5U)] 
                        = ((~ ((IData)(1U) << (0x0000001fU 
                                               & ((IData)(0x00000073U) 
                                                  + 
                                                  (0x000007ffU 
                                                   & ((IData)(0x000001a0U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                          >> 2U)))))))) 
                           & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                           [(((IData)(0x00000073U) 
                              + (0x000007ffU & ((IData)(0x000001a0U) 
                                                * (3U 
                                                   & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                      >> 2U))))) 
                             >> 5U)]);
                }
            }
            if ((2U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
                if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[17U] 
                                      >> 6U)) == (0x0000003fU 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                     >> 6U))) 
                     & (0U != (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                              >> 6U))))) {
                    vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[(
                                                                                ((IData)(0x00000075U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x000001a0U) 
                                                                                * 
                                                                                (3U 
                                                                                & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                                                >> 2U))))) 
                                                                                >> 5U)] 
                        = ((~ ((IData)(1U) << (0x0000001fU 
                                               & ((IData)(0x00000075U) 
                                                  + 
                                                  (0x000007ffU 
                                                   & ((IData)(0x000001a0U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                          >> 2U)))))))) 
                           & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                           [(((IData)(0x00000075U) 
                              + (0x000007ffU & ((IData)(0x000001a0U) 
                                                * (3U 
                                                   & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                      >> 2U))))) 
                             >> 5U)]);
                }
                if ((((0x0000003fU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[17U]) 
                      == (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                         >> 6U))) & 
                     (0U != (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                            >> 6U))))) {
                    vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[(
                                                                                ((IData)(0x00000074U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x000001a0U) 
                                                                                * 
                                                                                (3U 
                                                                                & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                                                >> 2U))))) 
                                                                                >> 5U)] 
                        = ((~ ((IData)(1U) << (0x0000001fU 
                                               & ((IData)(0x00000074U) 
                                                  + 
                                                  (0x000007ffU 
                                                   & ((IData)(0x000001a0U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                          >> 2U)))))))) 
                           & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                           [(((IData)(0x00000074U) 
                              + (0x000007ffU & ((IData)(0x000001a0U) 
                                                * (3U 
                                                   & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                      >> 2U))))) 
                             >> 5U)]);
                }
                if ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[16U] 
                       >> 0x0000001aU) == (0x0000003fU 
                                           & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                              >> 6U))) 
                     & (0U != (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                              >> 6U))))) {
                    vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[(
                                                                                ((IData)(0x00000073U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x000001a0U) 
                                                                                * 
                                                                                (3U 
                                                                                & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                                                >> 2U))))) 
                                                                                >> 5U)] 
                        = ((~ ((IData)(1U) << (0x0000001fU 
                                               & ((IData)(0x00000073U) 
                                                  + 
                                                  (0x000007ffU 
                                                   & ((IData)(0x000001a0U) 
                                                      * 
                                                      (3U 
                                                       & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                          >> 2U)))))))) 
                           & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                           [(((IData)(0x00000073U) 
                              + (0x000007ffU & ((IData)(0x000001a0U) 
                                                * (3U 
                                                   & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                      >> 2U))))) 
                             >> 5U)]);
                }
            }
        }
    }
}
