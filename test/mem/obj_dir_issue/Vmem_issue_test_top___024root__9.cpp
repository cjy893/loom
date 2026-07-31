// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

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
            = ((0x0fffffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[7U]) 
               | ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[7U] 
                     << 4U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[7U] 
                               >> 0x0000001cU)) & (~ 
                                                   ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                                     << 0x00000015U) 
                                                    | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                                       >> 0x0000000bU)))) 
                  << 0x0000001cU));
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
            = ((0xc3ffffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[20U]) 
               | (0x3c000000U & ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[20U] 
                                    << 6U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[20U] 
                                              >> 0x0000001aU)) 
                                  & (~ ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                         << 0x00000015U) 
                                        | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                           >> 0x0000000bU)))) 
                                 << 0x0000001aU)));
        if ((1U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[17U] 
                                  >> 4U)) == (0x0000003fU 
                                              & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                    = (0xfff7ffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U]);
            }
            if ((((0x0000003fU & ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[17U] 
                                   << 2U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                                             >> 0x0000001eU))) 
                  == (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                    = (0xfffbffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U]);
            }
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                                  >> 0x00000018U)) 
                  == (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                    = (0xfffdffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U]);
            }
        }
        if ((2U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[17U] 
                                  >> 4U)) == (0x0000003fU 
                                              & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                 >> 6U))) 
                 & (0U != (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                          >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                    = (0xfff7ffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U]);
            }
            if ((((0x0000003fU & ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[17U] 
                                   << 2U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                                             >> 0x0000001eU))) 
                  == (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                     >> 6U))) & (0U 
                                                 != 
                                                 (0x0000003fU 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                     >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                    = (0xfffbffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U]);
            }
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                                  >> 0x00000018U)) 
                  == (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                     >> 6U))) & (0U 
                                                 != 
                                                 (0x0000003fU 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                     >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                    = (0xfffdffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U]);
            }
        }
        vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[33U] 
            = ((0xf0ffffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[33U]) 
               | (0x0f000000U & ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[33U] 
                                    << 8U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[33U] 
                                              >> 0x00000018U)) 
                                  & (~ ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                         << 0x00000015U) 
                                        | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                           >> 0x0000000bU)))) 
                                 << 0x00000018U)));
        if ((1U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[30U] 
                                  >> 2U)) == (0x0000003fU 
                                              & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                    = (0xfffdffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U]);
            }
            if ((((0x0000003fU & ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[30U] 
                                   << 4U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                                             >> 0x0000001cU))) 
                  == (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                    = (0xfffeffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U]);
            }
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                                  >> 0x00000016U)) 
                  == (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                    = (0xffff7fffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U]);
            }
        }
        if ((2U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[30U] 
                                  >> 2U)) == (0x0000003fU 
                                              & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                 >> 6U))) 
                 & (0U != (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                          >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                    = (0xfffdffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U]);
            }
            if ((((0x0000003fU & ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[30U] 
                                   << 4U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                                             >> 0x0000001cU))) 
                  == (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                     >> 6U))) & (0U 
                                                 != 
                                                 (0x0000003fU 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                     >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                    = (0xfffeffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U]);
            }
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                                  >> 0x00000016U)) 
                  == (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                     >> 6U))) & (0U 
                                                 != 
                                                 (0x0000003fU 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                     >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                    = (0xffff7fffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U]);
            }
        }
        vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[46U] 
            = ((0xfc3fffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[46U]) 
               | (0x03c00000U & ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[46U] 
                                    << 0x0000000aU) 
                                   | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[46U] 
                                      >> 0x00000016U)) 
                                  & (~ ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                         << 0x00000015U) 
                                        | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                           >> 0x0000000bU)))) 
                                 << 0x00000016U)));
        if ((1U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
            if ((((0x0000003fU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[43U]) 
                  == (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                    = (0xffff7fffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U]);
            }
            if ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                   >> 0x0000001aU) == (0x0000003fU 
                                       & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                    = (0xffffbfffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U]);
            }
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                                  >> 0x00000014U)) 
                  == (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                    = (0xffffdfffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U]);
            }
        }
        if ((2U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
            if ((((0x0000003fU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[43U]) 
                  == (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                     >> 6U))) & (0U 
                                                 != 
                                                 (0x0000003fU 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                     >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                    = (0xffff7fffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U]);
            }
            if ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                   >> 0x0000001aU) == (0x0000003fU 
                                       & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                          >> 6U))) 
                 & (0U != (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                          >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                    = (0xffffbfffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U]);
            }
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                                  >> 0x00000014U)) 
                  == (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                     >> 6U))) & (0U 
                                                 != 
                                                 (0x0000003fU 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                     >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                    = (0xffffdfffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U]);
            }
        }
        if (((IData)(vlSelfRef.dis_valid) & (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec))) {
            if ((0x0677U >= (0x000007ffU & ((IData)(0x0000019eU) 
                                            * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))))) {
                VL_ASSIGNSEL_WW(1656, 414, (0x000007ffU 
                                            & ((IData)(0x0000019eU) 
                                               * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))), vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop, vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated);
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
                                                                                & ((IData)(0x0000019eU) 
                                                                                * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))) 
                                                                                >> 5U)] 
                        = ((~ ((IData)(1U) << (0x0000001fU 
                                               & ((IData)(0x00000075U) 
                                                  + 
                                                  (0x000007ffU 
                                                   & ((IData)(0x0000019eU) 
                                                      * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))))))) 
                           & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                           [(((IData)(0x00000075U) 
                              + (0x000007ffU & ((IData)(0x0000019eU) 
                                                * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))) 
                             >> 5U)]);
                }
                if ((((0x0000003fU & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[4U]) 
                      == (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                     & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                    vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[(
                                                                                ((IData)(0x00000074U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x0000019eU) 
                                                                                * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))) 
                                                                                >> 5U)] 
                        = ((~ ((IData)(1U) << (0x0000001fU 
                                               & ((IData)(0x00000074U) 
                                                  + 
                                                  (0x000007ffU 
                                                   & ((IData)(0x0000019eU) 
                                                      * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))))))) 
                           & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                           [(((IData)(0x00000074U) 
                              + (0x000007ffU & ((IData)(0x0000019eU) 
                                                * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))) 
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
                                                                                & ((IData)(0x0000019eU) 
                                                                                * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))) 
                                                                                >> 5U)] 
                        = ((~ ((IData)(1U) << (0x0000001fU 
                                               & ((IData)(0x00000073U) 
                                                  + 
                                                  (0x000007ffU 
                                                   & ((IData)(0x0000019eU) 
                                                      * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))))))) 
                           & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                           [(((IData)(0x00000073U) 
                              + (0x000007ffU & ((IData)(0x0000019eU) 
                                                * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))) 
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
                                                                                & ((IData)(0x0000019eU) 
                                                                                * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))) 
                                                                                >> 5U)] 
                        = ((~ ((IData)(1U) << (0x0000001fU 
                                               & ((IData)(0x00000075U) 
                                                  + 
                                                  (0x000007ffU 
                                                   & ((IData)(0x0000019eU) 
                                                      * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))))))) 
                           & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                           [(((IData)(0x00000075U) 
                              + (0x000007ffU & ((IData)(0x0000019eU) 
                                                * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))) 
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
                                                                                & ((IData)(0x0000019eU) 
                                                                                * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))) 
                                                                                >> 5U)] 
                        = ((~ ((IData)(1U) << (0x0000001fU 
                                               & ((IData)(0x00000074U) 
                                                  + 
                                                  (0x000007ffU 
                                                   & ((IData)(0x0000019eU) 
                                                      * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))))))) 
                           & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                           [(((IData)(0x00000074U) 
                              + (0x000007ffU & ((IData)(0x0000019eU) 
                                                * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))) 
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
                                                                                & ((IData)(0x0000019eU) 
                                                                                * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))) 
                                                                                >> 5U)] 
                        = ((~ ((IData)(1U) << (0x0000001fU 
                                               & ((IData)(0x00000073U) 
                                                  + 
                                                  (0x000007ffU 
                                                   & ((IData)(0x0000019eU) 
                                                      * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))))))) 
                           & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                           [(((IData)(0x00000073U) 
                              + (0x000007ffU & ((IData)(0x0000019eU) 
                                                * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))) 
                             >> 5U)]);
                }
            }
        }
    }
}
