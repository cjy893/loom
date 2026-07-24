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
            = ((0xf0ffffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[7U]) 
               | (0x0f000000U & ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[7U] 
                                    << 8U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[7U] 
                                              >> 0x00000018U)) 
                                  & (~ ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                         << 0x00000019U) 
                                        | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                           >> 7U)))) 
                                 << 0x00000018U)));
        if ((1U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[4U] 
                                  >> 3U)) == (0x0000003fU 
                                              & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U] 
                    = (0xfffbffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U]);
            }
            if ((((0x0000003fU & ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[4U] 
                                   << 3U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U] 
                                             >> 0x0000001dU))) 
                  == (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U] 
                    = (0xfffdffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U]);
            }
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U] 
                                  >> 0x00000017U)) 
                  == (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U] 
                    = (0xfffeffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U]);
            }
        }
        if ((2U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[4U] 
                                  >> 3U)) == (0x0000003fU 
                                              & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                 >> 6U))) 
                 & (0U != (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                          >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U] 
                    = (0xfffbffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U]);
            }
            if ((((0x0000003fU & ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[4U] 
                                   << 3U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U] 
                                             >> 0x0000001dU))) 
                  == (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                     >> 6U))) & (0U 
                                                 != 
                                                 (0x0000003fU 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                     >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U] 
                    = (0xfffdffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U]);
            }
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U] 
                                  >> 0x00000017U)) 
                  == (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                     >> 6U))) & (0U 
                                                 != 
                                                 (0x0000003fU 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                     >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U] 
                    = (0xfffeffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U]);
            }
        }
        vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[20U] 
            = ((0xffc3ffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[20U]) 
               | (0x003c0000U & ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[20U] 
                                    << 0x0000000eU) 
                                   | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[20U] 
                                      >> 0x00000012U)) 
                                  & (~ ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                         << 0x00000019U) 
                                        | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                           >> 7U)))) 
                                 << 0x00000012U)));
        if ((1U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
            if ((((0x0000003fU & ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[17U] 
                                   << 3U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                                             >> 0x0000001dU))) 
                  == (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                    = (0xffffefffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U]);
            }
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                                  >> 0x00000017U)) 
                  == (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                    = (0xfffff7ffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U]);
            }
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                                  >> 0x00000011U)) 
                  == (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                    = (0xfffffbffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U]);
            }
        }
        if ((2U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
            if ((((0x0000003fU & ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[17U] 
                                   << 3U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                                             >> 0x0000001dU))) 
                  == (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                     >> 6U))) & (0U 
                                                 != 
                                                 (0x0000003fU 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                     >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                    = (0xffffefffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U]);
            }
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                                  >> 0x00000017U)) 
                  == (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                     >> 6U))) & (0U 
                                                 != 
                                                 (0x0000003fU 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                     >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                    = (0xfffff7ffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U]);
            }
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                                  >> 0x00000011U)) 
                  == (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                     >> 6U))) & (0U 
                                                 != 
                                                 (0x0000003fU 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                     >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                    = (0xfffffbffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U]);
            }
        }
        vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[33U] 
            = ((0xffff0fffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[33U]) 
               | (0x0000f000U & ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[33U] 
                                    << 0x00000014U) 
                                   | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[33U] 
                                      >> 0x0000000cU)) 
                                  & (~ ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                         << 0x00000019U) 
                                        | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                           >> 7U)))) 
                                 << 0x0000000cU)));
        if ((1U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                                  >> 0x00000017U)) 
                  == (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                    = (0xffffffbfU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U]);
            }
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                                  >> 0x00000011U)) 
                  == (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                    = (0xffffffdfU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U]);
            }
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                                  >> 0x0000000bU)) 
                  == (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                    = (0xffffffefU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U]);
            }
        }
        if ((2U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                                  >> 0x00000017U)) 
                  == (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                     >> 6U))) & (0U 
                                                 != 
                                                 (0x0000003fU 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                     >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                    = (0xffffffbfU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U]);
            }
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                                  >> 0x00000011U)) 
                  == (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                     >> 6U))) & (0U 
                                                 != 
                                                 (0x0000003fU 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                     >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                    = (0xffffffdfU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U]);
            }
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                                  >> 0x0000000bU)) 
                  == (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                     >> 6U))) & (0U 
                                                 != 
                                                 (0x0000003fU 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                     >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                    = (0xffffffefU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U]);
            }
        }
        vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[46U] 
            = ((0xfffffc3fU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[46U]) 
               | (0x000003c0U & ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[46U] 
                                    << 0x0000001aU) 
                                   | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[46U] 
                                      >> 6U)) & (~ 
                                                 ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                                   << 0x00000019U) 
                                                  | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                                     >> 7U)))) 
                                 << 6U)));
        if ((1U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                                  >> 0x00000011U)) 
                  == (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                    = (0xfffffffeU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U]);
            }
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                                  >> 0x0000000bU)) 
                  == (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[41U] 
                    = (0x7fffffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[41U]);
            }
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                                  >> 5U)) == (0x0000003fU 
                                              & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[41U] 
                    = (0xbfffffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[41U]);
            }
        }
        if ((2U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                                  >> 0x00000011U)) 
                  == (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                     >> 6U))) & (0U 
                                                 != 
                                                 (0x0000003fU 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                     >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                    = (0xfffffffeU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U]);
            }
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                                  >> 0x0000000bU)) 
                  == (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                     >> 6U))) & (0U 
                                                 != 
                                                 (0x0000003fU 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                     >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[41U] 
                    = (0x7fffffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[41U]);
            }
            if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                                  >> 5U)) == (0x0000003fU 
                                              & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                 >> 6U))) 
                 & (0U != (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                          >> 6U))))) {
                vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[41U] 
                    = (0xbfffffffU & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[41U]);
            }
        }
        if (((IData)(vlSelfRef.dis_valid) & (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec))) {
            if ((0x0667U >= (0x000007ffU & ((IData)(0x0000019aU) 
                                            * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))))) {
                VL_ASSIGNSEL_WW(1640, 410, (0x000007ffU 
                                            & ((IData)(0x0000019aU) 
                                               * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))), vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop, vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated);
            }
            if ((1U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
                if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[4U] 
                                      >> 3U)) == (0x0000003fU 
                                                  & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                     & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                    vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[(
                                                                                ((IData)(0x00000072U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x0000019aU) 
                                                                                * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))) 
                                                                                >> 5U)] 
                        = ((~ ((IData)(1U) << (0x0000001fU 
                                               & ((IData)(0x00000072U) 
                                                  + 
                                                  (0x000007ffU 
                                                   & ((IData)(0x0000019aU) 
                                                      * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))))))) 
                           & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                           [(((IData)(0x00000072U) 
                              + (0x000007ffU & ((IData)(0x0000019aU) 
                                                * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))) 
                             >> 5U)]);
                }
                if ((((0x0000003fU & ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[4U] 
                                       << 3U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[3U] 
                                                 >> 0x0000001dU))) 
                      == (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                     & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                    vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[(
                                                                                ((IData)(0x00000071U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x0000019aU) 
                                                                                * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))) 
                                                                                >> 5U)] 
                        = ((~ ((IData)(1U) << (0x0000001fU 
                                               & ((IData)(0x00000071U) 
                                                  + 
                                                  (0x000007ffU 
                                                   & ((IData)(0x0000019aU) 
                                                      * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))))))) 
                           & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                           [(((IData)(0x00000071U) 
                              + (0x000007ffU & ((IData)(0x0000019aU) 
                                                * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))) 
                             >> 5U)]);
                }
                if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[3U] 
                                      >> 0x00000017U)) 
                      == (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))) 
                     & (0U != (0x0000003fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst))))) {
                    vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[(
                                                                                ((IData)(0x00000070U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x0000019aU) 
                                                                                * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))) 
                                                                                >> 5U)] 
                        = ((~ ((IData)(1U) << (0x0000001fU 
                                               & ((IData)(0x00000070U) 
                                                  + 
                                                  (0x000007ffU 
                                                   & ((IData)(0x0000019aU) 
                                                      * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))))))) 
                           & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                           [(((IData)(0x00000070U) 
                              + (0x000007ffU & ((IData)(0x0000019aU) 
                                                * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))) 
                             >> 5U)]);
                }
            }
            if ((2U & (IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_valid))) {
                if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[4U] 
                                      >> 3U)) == (0x0000003fU 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                                     >> 6U))) 
                     & (0U != (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                              >> 6U))))) {
                    vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[(
                                                                                ((IData)(0x00000072U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x0000019aU) 
                                                                                * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))) 
                                                                                >> 5U)] 
                        = ((~ ((IData)(1U) << (0x0000001fU 
                                               & ((IData)(0x00000072U) 
                                                  + 
                                                  (0x000007ffU 
                                                   & ((IData)(0x0000019aU) 
                                                      * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))))))) 
                           & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                           [(((IData)(0x00000072U) 
                              + (0x000007ffU & ((IData)(0x0000019aU) 
                                                * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))) 
                             >> 5U)]);
                }
                if ((((0x0000003fU & ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[4U] 
                                       << 3U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[3U] 
                                                 >> 0x0000001dU))) 
                      == (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                         >> 6U))) & 
                     (0U != (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                            >> 6U))))) {
                    vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[(
                                                                                ((IData)(0x00000071U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x0000019aU) 
                                                                                * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))) 
                                                                                >> 5U)] 
                        = ((~ ((IData)(1U) << (0x0000001fU 
                                               & ((IData)(0x00000071U) 
                                                  + 
                                                  (0x000007ffU 
                                                   & ((IData)(0x0000019aU) 
                                                      * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))))))) 
                           & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                           [(((IData)(0x00000071U) 
                              + (0x000007ffU & ((IData)(0x0000019aU) 
                                                * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))) 
                             >> 5U)]);
                }
                if ((((0x0000003fU & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated[3U] 
                                      >> 0x00000017U)) 
                      == (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                         >> 6U))) & 
                     (0U != (0x0000003fU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst) 
                                            >> 6U))))) {
                    vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[(
                                                                                ((IData)(0x00000070U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x0000019aU) 
                                                                                * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))) 
                                                                                >> 5U)] 
                        = ((~ ((IData)(1U) << (0x0000001fU 
                                               & ((IData)(0x00000070U) 
                                                  + 
                                                  (0x000007ffU 
                                                   & ((IData)(0x0000019aU) 
                                                      * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot))))))) 
                           & vlSelfRef.__Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                           [(((IData)(0x00000070U) 
                              + (0x000007ffU & ((IData)(0x0000019aU) 
                                                * (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))) 
                             >> 5U)]);
                }
            }
        }
    }
}
