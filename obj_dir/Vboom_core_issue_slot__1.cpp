// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboom_core.h for the primary calling header

#include "Vboom_core__pch.h"

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__9__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__9__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<12>/*376:0*/ __Vdly__slot_uop;
    VL_ZERO_W(377, __Vdly__slot_uop);
    // Body
    __Vdly__slot_uop[0U] = vlSelfRef.__PVT__slot_uop[0U];
    __Vdly__slot_uop[1U] = vlSelfRef.__PVT__slot_uop[1U];
    __Vdly__slot_uop[2U] = vlSelfRef.__PVT__slot_uop[2U];
    __Vdly__slot_uop[3U] = vlSelfRef.__PVT__slot_uop[3U];
    __Vdly__slot_uop[4U] = vlSelfRef.__PVT__slot_uop[4U];
    __Vdly__slot_uop[5U] = vlSelfRef.__PVT__slot_uop[5U];
    __Vdly__slot_uop[6U] = vlSelfRef.__PVT__slot_uop[6U];
    __Vdly__slot_uop[7U] = vlSelfRef.__PVT__slot_uop[7U];
    __Vdly__slot_uop[8U] = vlSelfRef.__PVT__slot_uop[8U];
    __Vdly__slot_uop[9U] = vlSelfRef.__PVT__slot_uop[9U];
    __Vdly__slot_uop[10U] = vlSelfRef.__PVT__slot_uop[10U];
    __Vdly__slot_uop[11U] = vlSelfRef.__PVT__slot_uop[11U];
    if ((0x00000200U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[107U] 
                                 << 0x0000001fU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[106U] 
                                 >> 1U));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[108U] 
                                 << 0x0000001fU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[107U] 
                                 >> 1U));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[109U] 
                                 << 0x0000001fU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[108U] 
                                 >> 1U));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[110U] 
                                 << 0x0000001fU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[109U] 
                                 >> 1U));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[111U] 
                                 << 0x0000001fU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[110U] 
                                 >> 1U));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[112U] 
                                 << 0x0000001fU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[111U] 
                                 >> 1U));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[113U] 
                                 << 0x0000001fU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[112U] 
                                 >> 1U));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[114U] 
                                 << 0x0000001fU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[113U] 
                                 >> 1U));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[115U] 
                                 << 0x0000001fU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[114U] 
                                 >> 1U));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[116U] 
                                 << 0x0000001fU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[115U] 
                                 >> 1U));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[117U] 
                                  << 0x0000001fU) | 
                                 (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[116U] 
                                  >> 1U));
        __Vdly__slot_uop[11U] = (0x01ffffffU & (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[117U] 
                                                >> 1U));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((0x00000200U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((1U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((2U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                 >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                  << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                            >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                 >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((4U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((8U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((0x00000010U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((0x00000020U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
    }
    vlSelfRef.__PVT__slot_uop[0U] = __Vdly__slot_uop[0U];
    vlSelfRef.__PVT__slot_uop[1U] = __Vdly__slot_uop[1U];
    vlSelfRef.__PVT__slot_uop[2U] = __Vdly__slot_uop[2U];
    vlSelfRef.__PVT__slot_uop[3U] = __Vdly__slot_uop[3U];
    vlSelfRef.__PVT__slot_uop[4U] = __Vdly__slot_uop[4U];
    vlSelfRef.__PVT__slot_uop[5U] = __Vdly__slot_uop[5U];
    vlSelfRef.__PVT__slot_uop[6U] = __Vdly__slot_uop[6U];
    vlSelfRef.__PVT__slot_uop[7U] = __Vdly__slot_uop[7U];
    vlSelfRef.__PVT__slot_uop[8U] = __Vdly__slot_uop[8U];
    vlSelfRef.__PVT__slot_uop[9U] = __Vdly__slot_uop[9U];
    vlSelfRef.__PVT__slot_uop[10U] = __Vdly__slot_uop[10U];
    vlSelfRef.__PVT__slot_uop[11U] = __Vdly__slot_uop[11U];
}

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__9__KET____DOT__slot__1(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__9__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00000200U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((0x00000200U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00000200U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__10__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__10__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_5;
    // Body
    vlSelfRef.iss_uop[0U] = vlSelfRef.__PVT__slot_uop[0U];
    vlSelfRef.iss_uop[1U] = vlSelfRef.__PVT__slot_uop[1U];
    vlSelfRef.iss_uop[2U] = vlSelfRef.__PVT__slot_uop[2U];
    vlSelfRef.iss_uop[3U] = ((0xffff0000U & vlSelfRef.iss_uop[3U]) 
                             | (0x0000ffffU & vlSelfRef.__PVT__slot_uop[3U]));
    vlSelfRef.iss_uop[3U] = ((0xfffcffffU & vlSelfRef.iss_uop[3U]) 
                             | (((2U & (((~ (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                              & ((0U 
                                                  != 
                                                  (0x0000003fU 
                                                   & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__PVT__slot_uop[3U] 
                                                         >> 0x0000001dU)))) 
                                                 & ((0x0000003fU 
                                                     & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                         << 3U) 
                                                        | (vlSelfRef.__PVT__slot_uop[3U] 
                                                           >> 0x0000001dU))) 
                                                    == 
                                                    (0x0000003fU 
                                                     & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                        >> 9U))))) 
                                             | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                 & ((0U 
                                                     != 
                                                     (0x0000003fU 
                                                      & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                          << 3U) 
                                                         | (vlSelfRef.__PVT__slot_uop[3U] 
                                                            >> 0x0000001dU)))) 
                                                    & ((0x0000003fU 
                                                        & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                            << 3U) 
                                                           | (vlSelfRef.__PVT__slot_uop[3U] 
                                                              >> 0x0000001dU))) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                           >> 9U))))) 
                                                | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                    & ((0U 
                                                        != 
                                                        (0x0000003fU 
                                                         & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                             << 3U) 
                                                            | (vlSelfRef.__PVT__slot_uop[3U] 
                                                               >> 0x0000001dU)))) 
                                                       & ((0x0000003fU 
                                                           & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                               << 3U) 
                                                              | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                 >> 0x0000001dU))) 
                                                          == 
                                                          (0x0000003fU 
                                                           & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                              >> 9U))))) 
                                                   | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                                                       & ((0U 
                                                           != 
                                                           (0x0000003fU 
                                                            & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                << 3U) 
                                                               | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                  >> 0x0000001dU)))) 
                                                          & ((0x0000003fU 
                                                              & (vlSymsp->TOP.lsu_resp[5U] 
                                                                 >> 0x00000010U)) 
                                                             == 
                                                             (0x0000003fU 
                                                              & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                  << 3U) 
                                                                 | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                    >> 0x0000001dU)))))) 
                                                      | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                                                           >> 5U) 
                                                          & ((0U 
                                                              != 
                                                              (0x0000003fU 
                                                               & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                   << 3U) 
                                                                  | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x0000001dU)))) 
                                                             & ((0x0000003fU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                                            >> 0x0000001eU))) 
                                                                == 
                                                                (0x0000003fU 
                                                                 & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                     << 3U) 
                                                                    | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x0000001dU)))))) 
                                                         | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                                                            & ((0U 
                                                                != 
                                                                (0x0000003fU 
                                                                 & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                     << 3U) 
                                                                    | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x0000001dU)))) 
                                                               & ((0x0000003fU 
                                                                   & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                       << 3U) 
                                                                      | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                         >> 0x0000001dU))) 
                                                                  == 
                                                                  (0x0000003fU 
                                                                   & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                                      >> 9U))))))))))) 
                                         << 1U) & (vlSelfRef.__PVT__slot_uop[3U] 
                                                   >> 0x00000010U))) 
                                 | (1U & ((~ (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                               & ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.__PVT__slot_uop[3U] 
                                                       >> 0x00000017U))) 
                                                  & ((0x0000003fU 
                                                      & (vlSelfRef.__PVT__slot_uop[3U] 
                                                         >> 0x00000017U)) 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                         >> 9U))))) 
                                              | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.__PVT__slot_uop[3U] 
                                                          >> 0x00000017U))) 
                                                     & ((0x0000003fU 
                                                         & (vlSelfRef.__PVT__slot_uop[3U] 
                                                            >> 0x00000017U)) 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                            >> 9U))))) 
                                                 | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                     & ((0U 
                                                         != 
                                                         (0x0000003fU 
                                                          & (vlSelfRef.__PVT__slot_uop[3U] 
                                                             >> 0x00000017U))) 
                                                        & ((0x0000003fU 
                                                            & (vlSelfRef.__PVT__slot_uop[3U] 
                                                               >> 0x00000017U)) 
                                                           == 
                                                           (0x0000003fU 
                                                            & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                               >> 9U))))) 
                                                    | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                                                        & ((0U 
                                                            != 
                                                            (0x0000003fU 
                                                             & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                >> 0x00000017U))) 
                                                           & ((0x0000003fU 
                                                               & (vlSymsp->TOP.lsu_resp[5U] 
                                                                  >> 0x00000010U)) 
                                                              == 
                                                              (0x0000003fU 
                                                               & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                  >> 0x00000017U))))) 
                                                       | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                                                            >> 5U) 
                                                           & ((0U 
                                                               != 
                                                               (0x0000003fU 
                                                                & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                   >> 0x00000017U))) 
                                                              & ((0x0000003fU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                                             >> 0x0000001eU))) 
                                                                 == 
                                                                 (0x0000003fU 
                                                                  & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x00000017U))))) 
                                                          | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                                                             & ((0U 
                                                                 != 
                                                                 (0x0000003fU 
                                                                  & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x00000017U))) 
                                                                & ((0x0000003fU 
                                                                    & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x00000017U)) 
                                                                   == 
                                                                   (0x0000003fU 
                                                                    & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                                       >> 9U))))))))))) 
                                          & (vlSelfRef.__PVT__slot_uop[3U] 
                                             >> 0x00000010U)))) 
                                << 0x00000010U));
    if ((((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
          & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U))) & ((0x0000003fU 
                                                 & (vlSelfRef.__PVT__slot_uop[4U] 
                                                    >> 3U)) 
                                                == 
                                                (0x0000003fU 
                                                 & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                    >> 9U))))) 
         | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
             & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                       >> 3U))) & (
                                                   (0x0000003fU 
                                                    & (vlSelfRef.__PVT__slot_uop[4U] 
                                                       >> 3U)) 
                                                   == 
                                                   (0x0000003fU 
                                                    & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                       >> 9U))))) 
            | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                          >> 3U))) 
                   & ((0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                      >> 3U)) == (0x0000003fU 
                                                  & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                     >> 9U))))) 
               | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                   & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                             >> 3U))) 
                      & ((0x0000003fU & (vlSymsp->TOP.lsu_resp[5U] 
                                         >> 0x00000010U)) 
                         == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                            >> 3U))))) 
                  | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                       >> 5U) & ((0U != (0x0000003fU 
                                         & (vlSelfRef.__PVT__slot_uop[4U] 
                                            >> 3U))) 
                                 & ((0x0000003fU & (IData)(
                                                           (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                            >> 0x0000001eU))) 
                                    == (0x0000003fU 
                                        & (vlSelfRef.__PVT__slot_uop[4U] 
                                           >> 3U))))) 
                     | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                        & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                                  >> 3U))) 
                           & ((0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                              >> 3U)) 
                              == (0x0000003fU & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                 >> 9U))))))))))) {
        __Vtemp_5[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (0x00003ffeU 
                                             & (vlSelfRef.__PVT__slot_uop[3U] 
                                                >> 0x00000012U)));
        __Vtemp_5[1U] = ((1U & (vlSelfRef.__PVT__slot_uop[4U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[5U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[4U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[2U] = ((1U & (vlSelfRef.__PVT__slot_uop[5U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[6U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[5U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[3U] = ((1U & (vlSelfRef.__PVT__slot_uop[6U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[7U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[6U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[4U] = ((1U & (vlSelfRef.__PVT__slot_uop[7U] 
                                >> 0x00000012U)) | 
                         (0x0000003eU & (vlSelfRef.__PVT__slot_uop[7U] 
                                         >> 0x00000012U)));
    } else {
        __Vtemp_5[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[3U] 
                                             >> 0x00000012U));
        __Vtemp_5[1U] = ((vlSelfRef.__PVT__slot_uop[5U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[4U] 
                                             >> 0x00000012U));
        __Vtemp_5[2U] = ((vlSelfRef.__PVT__slot_uop[6U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[5U] 
                                             >> 0x00000012U));
        __Vtemp_5[3U] = ((vlSelfRef.__PVT__slot_uop[7U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[6U] 
                                             >> 0x00000012U));
        __Vtemp_5[4U] = ((vlSelfRef.__PVT__slot_uop[8U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[7U] 
                                             >> 0x00000012U));
    }
    vlSelfRef.iss_uop[3U] = ((0x0003ffffU & vlSelfRef.iss_uop[3U]) 
                             | (__Vtemp_5[0U] << 0x00000012U));
    vlSelfRef.iss_uop[4U] = ((__Vtemp_5[0U] >> 0x0000000eU) 
                             | (__Vtemp_5[1U] << 0x00000012U));
    vlSelfRef.iss_uop[5U] = ((__Vtemp_5[1U] >> 0x0000000eU) 
                             | (__Vtemp_5[2U] << 0x00000012U));
    vlSelfRef.iss_uop[6U] = ((__Vtemp_5[2U] >> 0x0000000eU) 
                             | (__Vtemp_5[3U] << 0x00000012U));
    vlSelfRef.iss_uop[7U] = ((0xff000000U & vlSelfRef.iss_uop[7U]) 
                             | ((__Vtemp_5[3U] >> 0x0000000eU) 
                                | (0x00fc0000U & (__Vtemp_5[4U] 
                                                  << 0x00000012U))));
    vlSelfRef.iss_uop[7U] = ((0x00ffffffU & vlSelfRef.iss_uop[7U]) 
                             | (((0x0001fff0U & ((vlSelfRef.__PVT__slot_uop[8U] 
                                                  << 8U) 
                                                 | (0x000000f0U 
                                                    & (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U)))) 
                                 | (0x0000000fU & (
                                                   (~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                   & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                       << 8U) 
                                                      | (vlSelfRef.__PVT__slot_uop[7U] 
                                                         >> 0x00000018U))))) 
                                << 0x00000018U));
    vlSelfRef.iss_uop[8U] = ((0xfffffe00U & vlSelfRef.iss_uop[8U]) 
                             | (((0x0001fff0U & ((vlSelfRef.__PVT__slot_uop[8U] 
                                                  << 8U) 
                                                 | (0x000000f0U 
                                                    & (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U)))) 
                                 | (0x0000000fU & (
                                                   (~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                   & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                       << 8U) 
                                                      | (vlSelfRef.__PVT__slot_uop[7U] 
                                                         >> 0x00000018U))))) 
                                >> 8U));
    vlSelfRef.iss_uop[8U] = ((0x000001ffU & vlSelfRef.iss_uop[8U]) 
                             | ((((vlSelfRef.__PVT__slot_uop[9U] 
                                   << 0x00000017U) 
                                  | (0x007ffffeU & 
                                     (vlSelfRef.__PVT__slot_uop[8U] 
                                      >> 9U))) | (1U 
                                                  & ((IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant) 
                                                     >> 0x0000000aU))) 
                                << 9U));
    vlSelfRef.iss_uop[9U] = (((((vlSelfRef.__PVT__slot_uop[9U] 
                                 << 0x00000017U) | 
                                (0x007ffffeU & (vlSelfRef.__PVT__slot_uop[8U] 
                                                >> 9U))) 
                               | (1U & ((IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant) 
                                        >> 0x0000000aU))) 
                              >> 0x00000017U) | (((1U 
                                                   & (vlSelfRef.__PVT__slot_uop[9U] 
                                                      >> 9U)) 
                                                  | ((vlSelfRef.__PVT__slot_uop[10U] 
                                                      << 0x00000017U) 
                                                     | (0x007ffffeU 
                                                        & (vlSelfRef.__PVT__slot_uop[9U] 
                                                           >> 9U)))) 
                                                 << 9U));
    vlSelfRef.iss_uop[10U] = ((((1U & (vlSelfRef.__PVT__slot_uop[9U] 
                                       >> 9U)) | ((vlSelfRef.__PVT__slot_uop[10U] 
                                                   << 0x00000017U) 
                                                  | (0x007ffffeU 
                                                     & (vlSelfRef.__PVT__slot_uop[9U] 
                                                        >> 9U)))) 
                               >> 0x00000017U) | ((
                                                   (1U 
                                                    & (vlSelfRef.__PVT__slot_uop[10U] 
                                                       >> 9U)) 
                                                   | ((vlSelfRef.__PVT__slot_uop[11U] 
                                                       << 0x00000017U) 
                                                      | (0x007ffffeU 
                                                         & (vlSelfRef.__PVT__slot_uop[10U] 
                                                            >> 9U)))) 
                                                  << 9U));
    vlSelfRef.iss_uop[11U] = (0x01ffffffU & ((((1U 
                                                & (vlSelfRef.__PVT__slot_uop[10U] 
                                                   >> 9U)) 
                                               | ((vlSelfRef.__PVT__slot_uop[11U] 
                                                   << 0x00000017U) 
                                                  | (0x007ffffeU 
                                                     & (vlSelfRef.__PVT__slot_uop[10U] 
                                                        >> 9U)))) 
                                              >> 0x00000017U) 
                                             | (((1U 
                                                  & (vlSelfRef.__PVT__slot_uop[11U] 
                                                     >> 9U)) 
                                                 | (0x0000fffeU 
                                                    & (vlSelfRef.__PVT__slot_uop[11U] 
                                                       >> 9U))) 
                                                << 9U)));
    vlSelfRef.request = ((~ ((IData)(vlSelfRef.__PVT__killed) 
                             | ((vlSelfRef.__PVT__slot_uop[8U] 
                                 >> 9U) | (0U != (7U 
                                                  & (vlSelfRef.iss_uop[3U] 
                                                     >> 0x00000010U)))))) 
                         & (IData)(vlSelfRef.__PVT__slot_valid));
}

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__10__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__10__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<12>/*376:0*/ __Vdly__slot_uop;
    VL_ZERO_W(377, __Vdly__slot_uop);
    // Body
    __Vdly__slot_uop[0U] = vlSelfRef.__PVT__slot_uop[0U];
    __Vdly__slot_uop[1U] = vlSelfRef.__PVT__slot_uop[1U];
    __Vdly__slot_uop[2U] = vlSelfRef.__PVT__slot_uop[2U];
    __Vdly__slot_uop[3U] = vlSelfRef.__PVT__slot_uop[3U];
    __Vdly__slot_uop[4U] = vlSelfRef.__PVT__slot_uop[4U];
    __Vdly__slot_uop[5U] = vlSelfRef.__PVT__slot_uop[5U];
    __Vdly__slot_uop[6U] = vlSelfRef.__PVT__slot_uop[6U];
    __Vdly__slot_uop[7U] = vlSelfRef.__PVT__slot_uop[7U];
    __Vdly__slot_uop[8U] = vlSelfRef.__PVT__slot_uop[8U];
    __Vdly__slot_uop[9U] = vlSelfRef.__PVT__slot_uop[9U];
    __Vdly__slot_uop[10U] = vlSelfRef.__PVT__slot_uop[10U];
    __Vdly__slot_uop[11U] = vlSelfRef.__PVT__slot_uop[11U];
    if ((0x00000400U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[118U] 
                                 << 6U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[117U] 
                                           >> 0x0000001aU));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[119U] 
                                 << 6U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[118U] 
                                           >> 0x0000001aU));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[120U] 
                                 << 6U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[119U] 
                                           >> 0x0000001aU));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[121U] 
                                 << 6U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[120U] 
                                           >> 0x0000001aU));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[122U] 
                                 << 6U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[121U] 
                                           >> 0x0000001aU));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[123U] 
                                 << 6U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[122U] 
                                           >> 0x0000001aU));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[124U] 
                                 << 6U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[123U] 
                                           >> 0x0000001aU));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[125U] 
                                 << 6U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[124U] 
                                           >> 0x0000001aU));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[126U] 
                                 << 6U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[125U] 
                                           >> 0x0000001aU));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[127U] 
                                 << 6U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[126U] 
                                           >> 0x0000001aU));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[128U] 
                                  << 6U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[127U] 
                                            >> 0x0000001aU));
        __Vdly__slot_uop[11U] = (0x01ffffffU & ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[129U] 
                                                 << 6U) 
                                                | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[128U] 
                                                   >> 0x0000001aU)));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((0x00000400U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((1U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((2U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                 >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                  << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                            >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                 >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((4U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((8U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((0x00000010U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((0x00000020U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
    }
    vlSelfRef.__PVT__slot_uop[0U] = __Vdly__slot_uop[0U];
    vlSelfRef.__PVT__slot_uop[1U] = __Vdly__slot_uop[1U];
    vlSelfRef.__PVT__slot_uop[2U] = __Vdly__slot_uop[2U];
    vlSelfRef.__PVT__slot_uop[3U] = __Vdly__slot_uop[3U];
    vlSelfRef.__PVT__slot_uop[4U] = __Vdly__slot_uop[4U];
    vlSelfRef.__PVT__slot_uop[5U] = __Vdly__slot_uop[5U];
    vlSelfRef.__PVT__slot_uop[6U] = __Vdly__slot_uop[6U];
    vlSelfRef.__PVT__slot_uop[7U] = __Vdly__slot_uop[7U];
    vlSelfRef.__PVT__slot_uop[8U] = __Vdly__slot_uop[8U];
    vlSelfRef.__PVT__slot_uop[9U] = __Vdly__slot_uop[9U];
    vlSelfRef.__PVT__slot_uop[10U] = __Vdly__slot_uop[10U];
    vlSelfRef.__PVT__slot_uop[11U] = __Vdly__slot_uop[11U];
}

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__10__KET____DOT__slot__1(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__10__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00000400U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((0x00000400U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00000400U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__11__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__11__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_5;
    // Body
    vlSelfRef.iss_uop[0U] = vlSelfRef.__PVT__slot_uop[0U];
    vlSelfRef.iss_uop[1U] = vlSelfRef.__PVT__slot_uop[1U];
    vlSelfRef.iss_uop[2U] = vlSelfRef.__PVT__slot_uop[2U];
    vlSelfRef.iss_uop[3U] = ((0xffff0000U & vlSelfRef.iss_uop[3U]) 
                             | (0x0000ffffU & vlSelfRef.__PVT__slot_uop[3U]));
    vlSelfRef.iss_uop[3U] = ((0xfffcffffU & vlSelfRef.iss_uop[3U]) 
                             | (((2U & (((~ (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                              & ((0U 
                                                  != 
                                                  (0x0000003fU 
                                                   & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__PVT__slot_uop[3U] 
                                                         >> 0x0000001dU)))) 
                                                 & ((0x0000003fU 
                                                     & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                         << 3U) 
                                                        | (vlSelfRef.__PVT__slot_uop[3U] 
                                                           >> 0x0000001dU))) 
                                                    == 
                                                    (0x0000003fU 
                                                     & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                        >> 9U))))) 
                                             | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                 & ((0U 
                                                     != 
                                                     (0x0000003fU 
                                                      & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                          << 3U) 
                                                         | (vlSelfRef.__PVT__slot_uop[3U] 
                                                            >> 0x0000001dU)))) 
                                                    & ((0x0000003fU 
                                                        & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                            << 3U) 
                                                           | (vlSelfRef.__PVT__slot_uop[3U] 
                                                              >> 0x0000001dU))) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                           >> 9U))))) 
                                                | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                    & ((0U 
                                                        != 
                                                        (0x0000003fU 
                                                         & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                             << 3U) 
                                                            | (vlSelfRef.__PVT__slot_uop[3U] 
                                                               >> 0x0000001dU)))) 
                                                       & ((0x0000003fU 
                                                           & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                               << 3U) 
                                                              | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                 >> 0x0000001dU))) 
                                                          == 
                                                          (0x0000003fU 
                                                           & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                              >> 9U))))) 
                                                   | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                                                       & ((0U 
                                                           != 
                                                           (0x0000003fU 
                                                            & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                << 3U) 
                                                               | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                  >> 0x0000001dU)))) 
                                                          & ((0x0000003fU 
                                                              & (vlSymsp->TOP.lsu_resp[5U] 
                                                                 >> 0x00000010U)) 
                                                             == 
                                                             (0x0000003fU 
                                                              & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                  << 3U) 
                                                                 | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                    >> 0x0000001dU)))))) 
                                                      | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                                                           >> 5U) 
                                                          & ((0U 
                                                              != 
                                                              (0x0000003fU 
                                                               & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                   << 3U) 
                                                                  | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x0000001dU)))) 
                                                             & ((0x0000003fU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                                            >> 0x0000001eU))) 
                                                                == 
                                                                (0x0000003fU 
                                                                 & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                     << 3U) 
                                                                    | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x0000001dU)))))) 
                                                         | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                                                            & ((0U 
                                                                != 
                                                                (0x0000003fU 
                                                                 & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                     << 3U) 
                                                                    | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x0000001dU)))) 
                                                               & ((0x0000003fU 
                                                                   & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                       << 3U) 
                                                                      | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                         >> 0x0000001dU))) 
                                                                  == 
                                                                  (0x0000003fU 
                                                                   & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                                      >> 9U))))))))))) 
                                         << 1U) & (vlSelfRef.__PVT__slot_uop[3U] 
                                                   >> 0x00000010U))) 
                                 | (1U & ((~ (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                               & ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.__PVT__slot_uop[3U] 
                                                       >> 0x00000017U))) 
                                                  & ((0x0000003fU 
                                                      & (vlSelfRef.__PVT__slot_uop[3U] 
                                                         >> 0x00000017U)) 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                         >> 9U))))) 
                                              | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.__PVT__slot_uop[3U] 
                                                          >> 0x00000017U))) 
                                                     & ((0x0000003fU 
                                                         & (vlSelfRef.__PVT__slot_uop[3U] 
                                                            >> 0x00000017U)) 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                            >> 9U))))) 
                                                 | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                     & ((0U 
                                                         != 
                                                         (0x0000003fU 
                                                          & (vlSelfRef.__PVT__slot_uop[3U] 
                                                             >> 0x00000017U))) 
                                                        & ((0x0000003fU 
                                                            & (vlSelfRef.__PVT__slot_uop[3U] 
                                                               >> 0x00000017U)) 
                                                           == 
                                                           (0x0000003fU 
                                                            & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                               >> 9U))))) 
                                                    | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                                                        & ((0U 
                                                            != 
                                                            (0x0000003fU 
                                                             & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                >> 0x00000017U))) 
                                                           & ((0x0000003fU 
                                                               & (vlSymsp->TOP.lsu_resp[5U] 
                                                                  >> 0x00000010U)) 
                                                              == 
                                                              (0x0000003fU 
                                                               & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                  >> 0x00000017U))))) 
                                                       | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                                                            >> 5U) 
                                                           & ((0U 
                                                               != 
                                                               (0x0000003fU 
                                                                & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                   >> 0x00000017U))) 
                                                              & ((0x0000003fU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                                             >> 0x0000001eU))) 
                                                                 == 
                                                                 (0x0000003fU 
                                                                  & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x00000017U))))) 
                                                          | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                                                             & ((0U 
                                                                 != 
                                                                 (0x0000003fU 
                                                                  & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x00000017U))) 
                                                                & ((0x0000003fU 
                                                                    & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x00000017U)) 
                                                                   == 
                                                                   (0x0000003fU 
                                                                    & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                                       >> 9U))))))))))) 
                                          & (vlSelfRef.__PVT__slot_uop[3U] 
                                             >> 0x00000010U)))) 
                                << 0x00000010U));
    if ((((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
          & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U))) & ((0x0000003fU 
                                                 & (vlSelfRef.__PVT__slot_uop[4U] 
                                                    >> 3U)) 
                                                == 
                                                (0x0000003fU 
                                                 & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                    >> 9U))))) 
         | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
             & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                       >> 3U))) & (
                                                   (0x0000003fU 
                                                    & (vlSelfRef.__PVT__slot_uop[4U] 
                                                       >> 3U)) 
                                                   == 
                                                   (0x0000003fU 
                                                    & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                       >> 9U))))) 
            | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                          >> 3U))) 
                   & ((0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                      >> 3U)) == (0x0000003fU 
                                                  & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                     >> 9U))))) 
               | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                   & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                             >> 3U))) 
                      & ((0x0000003fU & (vlSymsp->TOP.lsu_resp[5U] 
                                         >> 0x00000010U)) 
                         == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                            >> 3U))))) 
                  | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                       >> 5U) & ((0U != (0x0000003fU 
                                         & (vlSelfRef.__PVT__slot_uop[4U] 
                                            >> 3U))) 
                                 & ((0x0000003fU & (IData)(
                                                           (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                            >> 0x0000001eU))) 
                                    == (0x0000003fU 
                                        & (vlSelfRef.__PVT__slot_uop[4U] 
                                           >> 3U))))) 
                     | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                        & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                                  >> 3U))) 
                           & ((0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                              >> 3U)) 
                              == (0x0000003fU & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                 >> 9U))))))))))) {
        __Vtemp_5[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (0x00003ffeU 
                                             & (vlSelfRef.__PVT__slot_uop[3U] 
                                                >> 0x00000012U)));
        __Vtemp_5[1U] = ((1U & (vlSelfRef.__PVT__slot_uop[4U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[5U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[4U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[2U] = ((1U & (vlSelfRef.__PVT__slot_uop[5U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[6U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[5U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[3U] = ((1U & (vlSelfRef.__PVT__slot_uop[6U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[7U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[6U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[4U] = ((1U & (vlSelfRef.__PVT__slot_uop[7U] 
                                >> 0x00000012U)) | 
                         (0x0000003eU & (vlSelfRef.__PVT__slot_uop[7U] 
                                         >> 0x00000012U)));
    } else {
        __Vtemp_5[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[3U] 
                                             >> 0x00000012U));
        __Vtemp_5[1U] = ((vlSelfRef.__PVT__slot_uop[5U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[4U] 
                                             >> 0x00000012U));
        __Vtemp_5[2U] = ((vlSelfRef.__PVT__slot_uop[6U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[5U] 
                                             >> 0x00000012U));
        __Vtemp_5[3U] = ((vlSelfRef.__PVT__slot_uop[7U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[6U] 
                                             >> 0x00000012U));
        __Vtemp_5[4U] = ((vlSelfRef.__PVT__slot_uop[8U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[7U] 
                                             >> 0x00000012U));
    }
    vlSelfRef.iss_uop[3U] = ((0x0003ffffU & vlSelfRef.iss_uop[3U]) 
                             | (__Vtemp_5[0U] << 0x00000012U));
    vlSelfRef.iss_uop[4U] = ((__Vtemp_5[0U] >> 0x0000000eU) 
                             | (__Vtemp_5[1U] << 0x00000012U));
    vlSelfRef.iss_uop[5U] = ((__Vtemp_5[1U] >> 0x0000000eU) 
                             | (__Vtemp_5[2U] << 0x00000012U));
    vlSelfRef.iss_uop[6U] = ((__Vtemp_5[2U] >> 0x0000000eU) 
                             | (__Vtemp_5[3U] << 0x00000012U));
    vlSelfRef.iss_uop[7U] = ((0xff000000U & vlSelfRef.iss_uop[7U]) 
                             | ((__Vtemp_5[3U] >> 0x0000000eU) 
                                | (0x00fc0000U & (__Vtemp_5[4U] 
                                                  << 0x00000012U))));
    vlSelfRef.iss_uop[7U] = ((0x00ffffffU & vlSelfRef.iss_uop[7U]) 
                             | (((0x0001fff0U & ((vlSelfRef.__PVT__slot_uop[8U] 
                                                  << 8U) 
                                                 | (0x000000f0U 
                                                    & (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U)))) 
                                 | (0x0000000fU & (
                                                   (~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                   & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                       << 8U) 
                                                      | (vlSelfRef.__PVT__slot_uop[7U] 
                                                         >> 0x00000018U))))) 
                                << 0x00000018U));
    vlSelfRef.iss_uop[8U] = ((0xfffffe00U & vlSelfRef.iss_uop[8U]) 
                             | (((0x0001fff0U & ((vlSelfRef.__PVT__slot_uop[8U] 
                                                  << 8U) 
                                                 | (0x000000f0U 
                                                    & (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U)))) 
                                 | (0x0000000fU & (
                                                   (~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                   & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                       << 8U) 
                                                      | (vlSelfRef.__PVT__slot_uop[7U] 
                                                         >> 0x00000018U))))) 
                                >> 8U));
    vlSelfRef.iss_uop[8U] = ((0x000001ffU & vlSelfRef.iss_uop[8U]) 
                             | ((((vlSelfRef.__PVT__slot_uop[9U] 
                                   << 0x00000017U) 
                                  | (0x007ffffeU & 
                                     (vlSelfRef.__PVT__slot_uop[8U] 
                                      >> 9U))) | (1U 
                                                  & ((IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant) 
                                                     >> 0x0000000bU))) 
                                << 9U));
    vlSelfRef.iss_uop[9U] = (((((vlSelfRef.__PVT__slot_uop[9U] 
                                 << 0x00000017U) | 
                                (0x007ffffeU & (vlSelfRef.__PVT__slot_uop[8U] 
                                                >> 9U))) 
                               | (1U & ((IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant) 
                                        >> 0x0000000bU))) 
                              >> 0x00000017U) | (((1U 
                                                   & (vlSelfRef.__PVT__slot_uop[9U] 
                                                      >> 9U)) 
                                                  | ((vlSelfRef.__PVT__slot_uop[10U] 
                                                      << 0x00000017U) 
                                                     | (0x007ffffeU 
                                                        & (vlSelfRef.__PVT__slot_uop[9U] 
                                                           >> 9U)))) 
                                                 << 9U));
    vlSelfRef.iss_uop[10U] = ((((1U & (vlSelfRef.__PVT__slot_uop[9U] 
                                       >> 9U)) | ((vlSelfRef.__PVT__slot_uop[10U] 
                                                   << 0x00000017U) 
                                                  | (0x007ffffeU 
                                                     & (vlSelfRef.__PVT__slot_uop[9U] 
                                                        >> 9U)))) 
                               >> 0x00000017U) | ((
                                                   (1U 
                                                    & (vlSelfRef.__PVT__slot_uop[10U] 
                                                       >> 9U)) 
                                                   | ((vlSelfRef.__PVT__slot_uop[11U] 
                                                       << 0x00000017U) 
                                                      | (0x007ffffeU 
                                                         & (vlSelfRef.__PVT__slot_uop[10U] 
                                                            >> 9U)))) 
                                                  << 9U));
    vlSelfRef.iss_uop[11U] = (0x01ffffffU & ((((1U 
                                                & (vlSelfRef.__PVT__slot_uop[10U] 
                                                   >> 9U)) 
                                               | ((vlSelfRef.__PVT__slot_uop[11U] 
                                                   << 0x00000017U) 
                                                  | (0x007ffffeU 
                                                     & (vlSelfRef.__PVT__slot_uop[10U] 
                                                        >> 9U)))) 
                                              >> 0x00000017U) 
                                             | (((1U 
                                                  & (vlSelfRef.__PVT__slot_uop[11U] 
                                                     >> 9U)) 
                                                 | (0x0000fffeU 
                                                    & (vlSelfRef.__PVT__slot_uop[11U] 
                                                       >> 9U))) 
                                                << 9U)));
    vlSelfRef.request = ((~ ((IData)(vlSelfRef.__PVT__killed) 
                             | ((vlSelfRef.__PVT__slot_uop[8U] 
                                 >> 9U) | (0U != (7U 
                                                  & (vlSelfRef.iss_uop[3U] 
                                                     >> 0x00000010U)))))) 
                         & (IData)(vlSelfRef.__PVT__slot_valid));
}

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__11__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__11__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<12>/*376:0*/ __Vdly__slot_uop;
    VL_ZERO_W(377, __Vdly__slot_uop);
    // Body
    __Vdly__slot_uop[0U] = vlSelfRef.__PVT__slot_uop[0U];
    __Vdly__slot_uop[1U] = vlSelfRef.__PVT__slot_uop[1U];
    __Vdly__slot_uop[2U] = vlSelfRef.__PVT__slot_uop[2U];
    __Vdly__slot_uop[3U] = vlSelfRef.__PVT__slot_uop[3U];
    __Vdly__slot_uop[4U] = vlSelfRef.__PVT__slot_uop[4U];
    __Vdly__slot_uop[5U] = vlSelfRef.__PVT__slot_uop[5U];
    __Vdly__slot_uop[6U] = vlSelfRef.__PVT__slot_uop[6U];
    __Vdly__slot_uop[7U] = vlSelfRef.__PVT__slot_uop[7U];
    __Vdly__slot_uop[8U] = vlSelfRef.__PVT__slot_uop[8U];
    __Vdly__slot_uop[9U] = vlSelfRef.__PVT__slot_uop[9U];
    __Vdly__slot_uop[10U] = vlSelfRef.__PVT__slot_uop[10U];
    __Vdly__slot_uop[11U] = vlSelfRef.__PVT__slot_uop[11U];
    if ((0x00000800U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[130U] 
                                 << 0x0000000dU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[129U] 
                                 >> 0x00000013U));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[131U] 
                                 << 0x0000000dU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[130U] 
                                 >> 0x00000013U));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[132U] 
                                 << 0x0000000dU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[131U] 
                                 >> 0x00000013U));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[133U] 
                                 << 0x0000000dU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[132U] 
                                 >> 0x00000013U));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[134U] 
                                 << 0x0000000dU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[133U] 
                                 >> 0x00000013U));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[135U] 
                                 << 0x0000000dU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[134U] 
                                 >> 0x00000013U));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[136U] 
                                 << 0x0000000dU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[135U] 
                                 >> 0x00000013U));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[137U] 
                                 << 0x0000000dU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[136U] 
                                 >> 0x00000013U));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[138U] 
                                 << 0x0000000dU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[137U] 
                                 >> 0x00000013U));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[139U] 
                                 << 0x0000000dU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[138U] 
                                 >> 0x00000013U));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[140U] 
                                  << 0x0000000dU) | 
                                 (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[139U] 
                                  >> 0x00000013U));
        __Vdly__slot_uop[11U] = (0x01ffffffU & ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[141U] 
                                                 << 0x0000000dU) 
                                                | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[140U] 
                                                   >> 0x00000013U)));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((0x00000800U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((1U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((2U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                 >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                  << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                            >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                 >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((4U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((8U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((0x00000010U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((0x00000020U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
    }
    vlSelfRef.__PVT__slot_uop[0U] = __Vdly__slot_uop[0U];
    vlSelfRef.__PVT__slot_uop[1U] = __Vdly__slot_uop[1U];
    vlSelfRef.__PVT__slot_uop[2U] = __Vdly__slot_uop[2U];
    vlSelfRef.__PVT__slot_uop[3U] = __Vdly__slot_uop[3U];
    vlSelfRef.__PVT__slot_uop[4U] = __Vdly__slot_uop[4U];
    vlSelfRef.__PVT__slot_uop[5U] = __Vdly__slot_uop[5U];
    vlSelfRef.__PVT__slot_uop[6U] = __Vdly__slot_uop[6U];
    vlSelfRef.__PVT__slot_uop[7U] = __Vdly__slot_uop[7U];
    vlSelfRef.__PVT__slot_uop[8U] = __Vdly__slot_uop[8U];
    vlSelfRef.__PVT__slot_uop[9U] = __Vdly__slot_uop[9U];
    vlSelfRef.__PVT__slot_uop[10U] = __Vdly__slot_uop[10U];
    vlSelfRef.__PVT__slot_uop[11U] = __Vdly__slot_uop[11U];
}

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__11__KET____DOT__slot__1(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__11__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00000800U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((0x00000800U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00000800U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__12__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__12__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_5;
    // Body
    vlSelfRef.iss_uop[0U] = vlSelfRef.__PVT__slot_uop[0U];
    vlSelfRef.iss_uop[1U] = vlSelfRef.__PVT__slot_uop[1U];
    vlSelfRef.iss_uop[2U] = vlSelfRef.__PVT__slot_uop[2U];
    vlSelfRef.iss_uop[3U] = ((0xffff0000U & vlSelfRef.iss_uop[3U]) 
                             | (0x0000ffffU & vlSelfRef.__PVT__slot_uop[3U]));
    vlSelfRef.iss_uop[3U] = ((0xfffcffffU & vlSelfRef.iss_uop[3U]) 
                             | (((2U & (((~ (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                              & ((0U 
                                                  != 
                                                  (0x0000003fU 
                                                   & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__PVT__slot_uop[3U] 
                                                         >> 0x0000001dU)))) 
                                                 & ((0x0000003fU 
                                                     & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                         << 3U) 
                                                        | (vlSelfRef.__PVT__slot_uop[3U] 
                                                           >> 0x0000001dU))) 
                                                    == 
                                                    (0x0000003fU 
                                                     & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                        >> 9U))))) 
                                             | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                 & ((0U 
                                                     != 
                                                     (0x0000003fU 
                                                      & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                          << 3U) 
                                                         | (vlSelfRef.__PVT__slot_uop[3U] 
                                                            >> 0x0000001dU)))) 
                                                    & ((0x0000003fU 
                                                        & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                            << 3U) 
                                                           | (vlSelfRef.__PVT__slot_uop[3U] 
                                                              >> 0x0000001dU))) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                           >> 9U))))) 
                                                | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                    & ((0U 
                                                        != 
                                                        (0x0000003fU 
                                                         & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                             << 3U) 
                                                            | (vlSelfRef.__PVT__slot_uop[3U] 
                                                               >> 0x0000001dU)))) 
                                                       & ((0x0000003fU 
                                                           & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                               << 3U) 
                                                              | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                 >> 0x0000001dU))) 
                                                          == 
                                                          (0x0000003fU 
                                                           & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                              >> 9U))))) 
                                                   | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                                                       & ((0U 
                                                           != 
                                                           (0x0000003fU 
                                                            & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                << 3U) 
                                                               | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                  >> 0x0000001dU)))) 
                                                          & ((0x0000003fU 
                                                              & (vlSymsp->TOP.lsu_resp[5U] 
                                                                 >> 0x00000010U)) 
                                                             == 
                                                             (0x0000003fU 
                                                              & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                  << 3U) 
                                                                 | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                    >> 0x0000001dU)))))) 
                                                      | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                                                           >> 5U) 
                                                          & ((0U 
                                                              != 
                                                              (0x0000003fU 
                                                               & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                   << 3U) 
                                                                  | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x0000001dU)))) 
                                                             & ((0x0000003fU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                                            >> 0x0000001eU))) 
                                                                == 
                                                                (0x0000003fU 
                                                                 & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                     << 3U) 
                                                                    | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x0000001dU)))))) 
                                                         | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                                                            & ((0U 
                                                                != 
                                                                (0x0000003fU 
                                                                 & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                     << 3U) 
                                                                    | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x0000001dU)))) 
                                                               & ((0x0000003fU 
                                                                   & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                       << 3U) 
                                                                      | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                         >> 0x0000001dU))) 
                                                                  == 
                                                                  (0x0000003fU 
                                                                   & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                                      >> 9U))))))))))) 
                                         << 1U) & (vlSelfRef.__PVT__slot_uop[3U] 
                                                   >> 0x00000010U))) 
                                 | (1U & ((~ (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                               & ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.__PVT__slot_uop[3U] 
                                                       >> 0x00000017U))) 
                                                  & ((0x0000003fU 
                                                      & (vlSelfRef.__PVT__slot_uop[3U] 
                                                         >> 0x00000017U)) 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                         >> 9U))))) 
                                              | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.__PVT__slot_uop[3U] 
                                                          >> 0x00000017U))) 
                                                     & ((0x0000003fU 
                                                         & (vlSelfRef.__PVT__slot_uop[3U] 
                                                            >> 0x00000017U)) 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                            >> 9U))))) 
                                                 | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                     & ((0U 
                                                         != 
                                                         (0x0000003fU 
                                                          & (vlSelfRef.__PVT__slot_uop[3U] 
                                                             >> 0x00000017U))) 
                                                        & ((0x0000003fU 
                                                            & (vlSelfRef.__PVT__slot_uop[3U] 
                                                               >> 0x00000017U)) 
                                                           == 
                                                           (0x0000003fU 
                                                            & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                               >> 9U))))) 
                                                    | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                                                        & ((0U 
                                                            != 
                                                            (0x0000003fU 
                                                             & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                >> 0x00000017U))) 
                                                           & ((0x0000003fU 
                                                               & (vlSymsp->TOP.lsu_resp[5U] 
                                                                  >> 0x00000010U)) 
                                                              == 
                                                              (0x0000003fU 
                                                               & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                  >> 0x00000017U))))) 
                                                       | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                                                            >> 5U) 
                                                           & ((0U 
                                                               != 
                                                               (0x0000003fU 
                                                                & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                   >> 0x00000017U))) 
                                                              & ((0x0000003fU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                                             >> 0x0000001eU))) 
                                                                 == 
                                                                 (0x0000003fU 
                                                                  & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x00000017U))))) 
                                                          | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                                                             & ((0U 
                                                                 != 
                                                                 (0x0000003fU 
                                                                  & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x00000017U))) 
                                                                & ((0x0000003fU 
                                                                    & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x00000017U)) 
                                                                   == 
                                                                   (0x0000003fU 
                                                                    & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                                       >> 9U))))))))))) 
                                          & (vlSelfRef.__PVT__slot_uop[3U] 
                                             >> 0x00000010U)))) 
                                << 0x00000010U));
    if ((((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
          & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U))) & ((0x0000003fU 
                                                 & (vlSelfRef.__PVT__slot_uop[4U] 
                                                    >> 3U)) 
                                                == 
                                                (0x0000003fU 
                                                 & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                    >> 9U))))) 
         | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
             & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                       >> 3U))) & (
                                                   (0x0000003fU 
                                                    & (vlSelfRef.__PVT__slot_uop[4U] 
                                                       >> 3U)) 
                                                   == 
                                                   (0x0000003fU 
                                                    & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                       >> 9U))))) 
            | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                          >> 3U))) 
                   & ((0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                      >> 3U)) == (0x0000003fU 
                                                  & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                     >> 9U))))) 
               | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                   & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                             >> 3U))) 
                      & ((0x0000003fU & (vlSymsp->TOP.lsu_resp[5U] 
                                         >> 0x00000010U)) 
                         == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                            >> 3U))))) 
                  | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                       >> 5U) & ((0U != (0x0000003fU 
                                         & (vlSelfRef.__PVT__slot_uop[4U] 
                                            >> 3U))) 
                                 & ((0x0000003fU & (IData)(
                                                           (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                            >> 0x0000001eU))) 
                                    == (0x0000003fU 
                                        & (vlSelfRef.__PVT__slot_uop[4U] 
                                           >> 3U))))) 
                     | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                        & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                                  >> 3U))) 
                           & ((0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                              >> 3U)) 
                              == (0x0000003fU & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                 >> 9U))))))))))) {
        __Vtemp_5[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (0x00003ffeU 
                                             & (vlSelfRef.__PVT__slot_uop[3U] 
                                                >> 0x00000012U)));
        __Vtemp_5[1U] = ((1U & (vlSelfRef.__PVT__slot_uop[4U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[5U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[4U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[2U] = ((1U & (vlSelfRef.__PVT__slot_uop[5U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[6U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[5U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[3U] = ((1U & (vlSelfRef.__PVT__slot_uop[6U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[7U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[6U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[4U] = ((1U & (vlSelfRef.__PVT__slot_uop[7U] 
                                >> 0x00000012U)) | 
                         (0x0000003eU & (vlSelfRef.__PVT__slot_uop[7U] 
                                         >> 0x00000012U)));
    } else {
        __Vtemp_5[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[3U] 
                                             >> 0x00000012U));
        __Vtemp_5[1U] = ((vlSelfRef.__PVT__slot_uop[5U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[4U] 
                                             >> 0x00000012U));
        __Vtemp_5[2U] = ((vlSelfRef.__PVT__slot_uop[6U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[5U] 
                                             >> 0x00000012U));
        __Vtemp_5[3U] = ((vlSelfRef.__PVT__slot_uop[7U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[6U] 
                                             >> 0x00000012U));
        __Vtemp_5[4U] = ((vlSelfRef.__PVT__slot_uop[8U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[7U] 
                                             >> 0x00000012U));
    }
    vlSelfRef.iss_uop[3U] = ((0x0003ffffU & vlSelfRef.iss_uop[3U]) 
                             | (__Vtemp_5[0U] << 0x00000012U));
    vlSelfRef.iss_uop[4U] = ((__Vtemp_5[0U] >> 0x0000000eU) 
                             | (__Vtemp_5[1U] << 0x00000012U));
    vlSelfRef.iss_uop[5U] = ((__Vtemp_5[1U] >> 0x0000000eU) 
                             | (__Vtemp_5[2U] << 0x00000012U));
    vlSelfRef.iss_uop[6U] = ((__Vtemp_5[2U] >> 0x0000000eU) 
                             | (__Vtemp_5[3U] << 0x00000012U));
    vlSelfRef.iss_uop[7U] = ((0xff000000U & vlSelfRef.iss_uop[7U]) 
                             | ((__Vtemp_5[3U] >> 0x0000000eU) 
                                | (0x00fc0000U & (__Vtemp_5[4U] 
                                                  << 0x00000012U))));
    vlSelfRef.iss_uop[7U] = ((0x00ffffffU & vlSelfRef.iss_uop[7U]) 
                             | (((0x0001fff0U & ((vlSelfRef.__PVT__slot_uop[8U] 
                                                  << 8U) 
                                                 | (0x000000f0U 
                                                    & (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U)))) 
                                 | (0x0000000fU & (
                                                   (~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                   & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                       << 8U) 
                                                      | (vlSelfRef.__PVT__slot_uop[7U] 
                                                         >> 0x00000018U))))) 
                                << 0x00000018U));
    vlSelfRef.iss_uop[8U] = ((0xfffffe00U & vlSelfRef.iss_uop[8U]) 
                             | (((0x0001fff0U & ((vlSelfRef.__PVT__slot_uop[8U] 
                                                  << 8U) 
                                                 | (0x000000f0U 
                                                    & (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U)))) 
                                 | (0x0000000fU & (
                                                   (~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                   & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                       << 8U) 
                                                      | (vlSelfRef.__PVT__slot_uop[7U] 
                                                         >> 0x00000018U))))) 
                                >> 8U));
    vlSelfRef.iss_uop[8U] = ((0x000001ffU & vlSelfRef.iss_uop[8U]) 
                             | ((((vlSelfRef.__PVT__slot_uop[9U] 
                                   << 0x00000017U) 
                                  | (0x007ffffeU & 
                                     (vlSelfRef.__PVT__slot_uop[8U] 
                                      >> 9U))) | (1U 
                                                  & ((IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant) 
                                                     >> 0x0000000cU))) 
                                << 9U));
    vlSelfRef.iss_uop[9U] = (((((vlSelfRef.__PVT__slot_uop[9U] 
                                 << 0x00000017U) | 
                                (0x007ffffeU & (vlSelfRef.__PVT__slot_uop[8U] 
                                                >> 9U))) 
                               | (1U & ((IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant) 
                                        >> 0x0000000cU))) 
                              >> 0x00000017U) | (((1U 
                                                   & (vlSelfRef.__PVT__slot_uop[9U] 
                                                      >> 9U)) 
                                                  | ((vlSelfRef.__PVT__slot_uop[10U] 
                                                      << 0x00000017U) 
                                                     | (0x007ffffeU 
                                                        & (vlSelfRef.__PVT__slot_uop[9U] 
                                                           >> 9U)))) 
                                                 << 9U));
    vlSelfRef.iss_uop[10U] = ((((1U & (vlSelfRef.__PVT__slot_uop[9U] 
                                       >> 9U)) | ((vlSelfRef.__PVT__slot_uop[10U] 
                                                   << 0x00000017U) 
                                                  | (0x007ffffeU 
                                                     & (vlSelfRef.__PVT__slot_uop[9U] 
                                                        >> 9U)))) 
                               >> 0x00000017U) | ((
                                                   (1U 
                                                    & (vlSelfRef.__PVT__slot_uop[10U] 
                                                       >> 9U)) 
                                                   | ((vlSelfRef.__PVT__slot_uop[11U] 
                                                       << 0x00000017U) 
                                                      | (0x007ffffeU 
                                                         & (vlSelfRef.__PVT__slot_uop[10U] 
                                                            >> 9U)))) 
                                                  << 9U));
    vlSelfRef.iss_uop[11U] = (0x01ffffffU & ((((1U 
                                                & (vlSelfRef.__PVT__slot_uop[10U] 
                                                   >> 9U)) 
                                               | ((vlSelfRef.__PVT__slot_uop[11U] 
                                                   << 0x00000017U) 
                                                  | (0x007ffffeU 
                                                     & (vlSelfRef.__PVT__slot_uop[10U] 
                                                        >> 9U)))) 
                                              >> 0x00000017U) 
                                             | (((1U 
                                                  & (vlSelfRef.__PVT__slot_uop[11U] 
                                                     >> 9U)) 
                                                 | (0x0000fffeU 
                                                    & (vlSelfRef.__PVT__slot_uop[11U] 
                                                       >> 9U))) 
                                                << 9U)));
    vlSelfRef.request = ((~ ((IData)(vlSelfRef.__PVT__killed) 
                             | ((vlSelfRef.__PVT__slot_uop[8U] 
                                 >> 9U) | (0U != (7U 
                                                  & (vlSelfRef.iss_uop[3U] 
                                                     >> 0x00000010U)))))) 
                         & (IData)(vlSelfRef.__PVT__slot_valid));
}

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__12__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__12__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<12>/*376:0*/ __Vdly__slot_uop;
    VL_ZERO_W(377, __Vdly__slot_uop);
    // Body
    __Vdly__slot_uop[0U] = vlSelfRef.__PVT__slot_uop[0U];
    __Vdly__slot_uop[1U] = vlSelfRef.__PVT__slot_uop[1U];
    __Vdly__slot_uop[2U] = vlSelfRef.__PVT__slot_uop[2U];
    __Vdly__slot_uop[3U] = vlSelfRef.__PVT__slot_uop[3U];
    __Vdly__slot_uop[4U] = vlSelfRef.__PVT__slot_uop[4U];
    __Vdly__slot_uop[5U] = vlSelfRef.__PVT__slot_uop[5U];
    __Vdly__slot_uop[6U] = vlSelfRef.__PVT__slot_uop[6U];
    __Vdly__slot_uop[7U] = vlSelfRef.__PVT__slot_uop[7U];
    __Vdly__slot_uop[8U] = vlSelfRef.__PVT__slot_uop[8U];
    __Vdly__slot_uop[9U] = vlSelfRef.__PVT__slot_uop[9U];
    __Vdly__slot_uop[10U] = vlSelfRef.__PVT__slot_uop[10U];
    __Vdly__slot_uop[11U] = vlSelfRef.__PVT__slot_uop[11U];
    if ((0x00001000U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[142U] 
                                 << 0x00000014U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[141U] 
                                 >> 0x0000000cU));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[143U] 
                                 << 0x00000014U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[142U] 
                                 >> 0x0000000cU));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[144U] 
                                 << 0x00000014U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[143U] 
                                 >> 0x0000000cU));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[145U] 
                                 << 0x00000014U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[144U] 
                                 >> 0x0000000cU));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[146U] 
                                 << 0x00000014U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[145U] 
                                 >> 0x0000000cU));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[147U] 
                                 << 0x00000014U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[146U] 
                                 >> 0x0000000cU));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[148U] 
                                 << 0x00000014U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[147U] 
                                 >> 0x0000000cU));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[149U] 
                                 << 0x00000014U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[148U] 
                                 >> 0x0000000cU));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[150U] 
                                 << 0x00000014U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[149U] 
                                 >> 0x0000000cU));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[151U] 
                                 << 0x00000014U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[150U] 
                                 >> 0x0000000cU));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[152U] 
                                  << 0x00000014U) | 
                                 (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[151U] 
                                  >> 0x0000000cU));
        __Vdly__slot_uop[11U] = (0x01ffffffU & ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[153U] 
                                                 << 0x00000014U) 
                                                | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[152U] 
                                                   >> 0x0000000cU)));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((0x00001000U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((1U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((2U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                 >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                  << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                            >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                 >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((4U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((8U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((0x00000010U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((0x00000020U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
    }
    vlSelfRef.__PVT__slot_uop[0U] = __Vdly__slot_uop[0U];
    vlSelfRef.__PVT__slot_uop[1U] = __Vdly__slot_uop[1U];
    vlSelfRef.__PVT__slot_uop[2U] = __Vdly__slot_uop[2U];
    vlSelfRef.__PVT__slot_uop[3U] = __Vdly__slot_uop[3U];
    vlSelfRef.__PVT__slot_uop[4U] = __Vdly__slot_uop[4U];
    vlSelfRef.__PVT__slot_uop[5U] = __Vdly__slot_uop[5U];
    vlSelfRef.__PVT__slot_uop[6U] = __Vdly__slot_uop[6U];
    vlSelfRef.__PVT__slot_uop[7U] = __Vdly__slot_uop[7U];
    vlSelfRef.__PVT__slot_uop[8U] = __Vdly__slot_uop[8U];
    vlSelfRef.__PVT__slot_uop[9U] = __Vdly__slot_uop[9U];
    vlSelfRef.__PVT__slot_uop[10U] = __Vdly__slot_uop[10U];
    vlSelfRef.__PVT__slot_uop[11U] = __Vdly__slot_uop[11U];
}

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__12__KET____DOT__slot__1(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__12__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00001000U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((0x00001000U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00001000U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__13__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__13__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_5;
    // Body
    vlSelfRef.iss_uop[0U] = vlSelfRef.__PVT__slot_uop[0U];
    vlSelfRef.iss_uop[1U] = vlSelfRef.__PVT__slot_uop[1U];
    vlSelfRef.iss_uop[2U] = vlSelfRef.__PVT__slot_uop[2U];
    vlSelfRef.iss_uop[3U] = ((0xffff0000U & vlSelfRef.iss_uop[3U]) 
                             | (0x0000ffffU & vlSelfRef.__PVT__slot_uop[3U]));
    vlSelfRef.iss_uop[3U] = ((0xfffcffffU & vlSelfRef.iss_uop[3U]) 
                             | (((2U & (((~ (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                              & ((0U 
                                                  != 
                                                  (0x0000003fU 
                                                   & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__PVT__slot_uop[3U] 
                                                         >> 0x0000001dU)))) 
                                                 & ((0x0000003fU 
                                                     & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                         << 3U) 
                                                        | (vlSelfRef.__PVT__slot_uop[3U] 
                                                           >> 0x0000001dU))) 
                                                    == 
                                                    (0x0000003fU 
                                                     & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                        >> 9U))))) 
                                             | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                 & ((0U 
                                                     != 
                                                     (0x0000003fU 
                                                      & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                          << 3U) 
                                                         | (vlSelfRef.__PVT__slot_uop[3U] 
                                                            >> 0x0000001dU)))) 
                                                    & ((0x0000003fU 
                                                        & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                            << 3U) 
                                                           | (vlSelfRef.__PVT__slot_uop[3U] 
                                                              >> 0x0000001dU))) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                           >> 9U))))) 
                                                | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                    & ((0U 
                                                        != 
                                                        (0x0000003fU 
                                                         & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                             << 3U) 
                                                            | (vlSelfRef.__PVT__slot_uop[3U] 
                                                               >> 0x0000001dU)))) 
                                                       & ((0x0000003fU 
                                                           & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                               << 3U) 
                                                              | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                 >> 0x0000001dU))) 
                                                          == 
                                                          (0x0000003fU 
                                                           & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                              >> 9U))))) 
                                                   | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                                                       & ((0U 
                                                           != 
                                                           (0x0000003fU 
                                                            & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                << 3U) 
                                                               | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                  >> 0x0000001dU)))) 
                                                          & ((0x0000003fU 
                                                              & (vlSymsp->TOP.lsu_resp[5U] 
                                                                 >> 0x00000010U)) 
                                                             == 
                                                             (0x0000003fU 
                                                              & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                  << 3U) 
                                                                 | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                    >> 0x0000001dU)))))) 
                                                      | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                                                           >> 5U) 
                                                          & ((0U 
                                                              != 
                                                              (0x0000003fU 
                                                               & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                   << 3U) 
                                                                  | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x0000001dU)))) 
                                                             & ((0x0000003fU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                                            >> 0x0000001eU))) 
                                                                == 
                                                                (0x0000003fU 
                                                                 & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                     << 3U) 
                                                                    | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x0000001dU)))))) 
                                                         | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                                                            & ((0U 
                                                                != 
                                                                (0x0000003fU 
                                                                 & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                     << 3U) 
                                                                    | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x0000001dU)))) 
                                                               & ((0x0000003fU 
                                                                   & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                       << 3U) 
                                                                      | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                         >> 0x0000001dU))) 
                                                                  == 
                                                                  (0x0000003fU 
                                                                   & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                                      >> 9U))))))))))) 
                                         << 1U) & (vlSelfRef.__PVT__slot_uop[3U] 
                                                   >> 0x00000010U))) 
                                 | (1U & ((~ (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                               & ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.__PVT__slot_uop[3U] 
                                                       >> 0x00000017U))) 
                                                  & ((0x0000003fU 
                                                      & (vlSelfRef.__PVT__slot_uop[3U] 
                                                         >> 0x00000017U)) 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                         >> 9U))))) 
                                              | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.__PVT__slot_uop[3U] 
                                                          >> 0x00000017U))) 
                                                     & ((0x0000003fU 
                                                         & (vlSelfRef.__PVT__slot_uop[3U] 
                                                            >> 0x00000017U)) 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                            >> 9U))))) 
                                                 | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                     & ((0U 
                                                         != 
                                                         (0x0000003fU 
                                                          & (vlSelfRef.__PVT__slot_uop[3U] 
                                                             >> 0x00000017U))) 
                                                        & ((0x0000003fU 
                                                            & (vlSelfRef.__PVT__slot_uop[3U] 
                                                               >> 0x00000017U)) 
                                                           == 
                                                           (0x0000003fU 
                                                            & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                               >> 9U))))) 
                                                    | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                                                        & ((0U 
                                                            != 
                                                            (0x0000003fU 
                                                             & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                >> 0x00000017U))) 
                                                           & ((0x0000003fU 
                                                               & (vlSymsp->TOP.lsu_resp[5U] 
                                                                  >> 0x00000010U)) 
                                                              == 
                                                              (0x0000003fU 
                                                               & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                  >> 0x00000017U))))) 
                                                       | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                                                            >> 5U) 
                                                           & ((0U 
                                                               != 
                                                               (0x0000003fU 
                                                                & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                   >> 0x00000017U))) 
                                                              & ((0x0000003fU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                                             >> 0x0000001eU))) 
                                                                 == 
                                                                 (0x0000003fU 
                                                                  & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x00000017U))))) 
                                                          | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                                                             & ((0U 
                                                                 != 
                                                                 (0x0000003fU 
                                                                  & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x00000017U))) 
                                                                & ((0x0000003fU 
                                                                    & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x00000017U)) 
                                                                   == 
                                                                   (0x0000003fU 
                                                                    & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                                       >> 9U))))))))))) 
                                          & (vlSelfRef.__PVT__slot_uop[3U] 
                                             >> 0x00000010U)))) 
                                << 0x00000010U));
    if ((((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
          & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U))) & ((0x0000003fU 
                                                 & (vlSelfRef.__PVT__slot_uop[4U] 
                                                    >> 3U)) 
                                                == 
                                                (0x0000003fU 
                                                 & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                    >> 9U))))) 
         | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
             & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                       >> 3U))) & (
                                                   (0x0000003fU 
                                                    & (vlSelfRef.__PVT__slot_uop[4U] 
                                                       >> 3U)) 
                                                   == 
                                                   (0x0000003fU 
                                                    & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                       >> 9U))))) 
            | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                          >> 3U))) 
                   & ((0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                      >> 3U)) == (0x0000003fU 
                                                  & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                     >> 9U))))) 
               | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                   & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                             >> 3U))) 
                      & ((0x0000003fU & (vlSymsp->TOP.lsu_resp[5U] 
                                         >> 0x00000010U)) 
                         == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                            >> 3U))))) 
                  | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                       >> 5U) & ((0U != (0x0000003fU 
                                         & (vlSelfRef.__PVT__slot_uop[4U] 
                                            >> 3U))) 
                                 & ((0x0000003fU & (IData)(
                                                           (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                            >> 0x0000001eU))) 
                                    == (0x0000003fU 
                                        & (vlSelfRef.__PVT__slot_uop[4U] 
                                           >> 3U))))) 
                     | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                        & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                                  >> 3U))) 
                           & ((0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                              >> 3U)) 
                              == (0x0000003fU & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                 >> 9U))))))))))) {
        __Vtemp_5[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (0x00003ffeU 
                                             & (vlSelfRef.__PVT__slot_uop[3U] 
                                                >> 0x00000012U)));
        __Vtemp_5[1U] = ((1U & (vlSelfRef.__PVT__slot_uop[4U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[5U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[4U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[2U] = ((1U & (vlSelfRef.__PVT__slot_uop[5U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[6U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[5U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[3U] = ((1U & (vlSelfRef.__PVT__slot_uop[6U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[7U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[6U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[4U] = ((1U & (vlSelfRef.__PVT__slot_uop[7U] 
                                >> 0x00000012U)) | 
                         (0x0000003eU & (vlSelfRef.__PVT__slot_uop[7U] 
                                         >> 0x00000012U)));
    } else {
        __Vtemp_5[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[3U] 
                                             >> 0x00000012U));
        __Vtemp_5[1U] = ((vlSelfRef.__PVT__slot_uop[5U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[4U] 
                                             >> 0x00000012U));
        __Vtemp_5[2U] = ((vlSelfRef.__PVT__slot_uop[6U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[5U] 
                                             >> 0x00000012U));
        __Vtemp_5[3U] = ((vlSelfRef.__PVT__slot_uop[7U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[6U] 
                                             >> 0x00000012U));
        __Vtemp_5[4U] = ((vlSelfRef.__PVT__slot_uop[8U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[7U] 
                                             >> 0x00000012U));
    }
    vlSelfRef.iss_uop[3U] = ((0x0003ffffU & vlSelfRef.iss_uop[3U]) 
                             | (__Vtemp_5[0U] << 0x00000012U));
    vlSelfRef.iss_uop[4U] = ((__Vtemp_5[0U] >> 0x0000000eU) 
                             | (__Vtemp_5[1U] << 0x00000012U));
    vlSelfRef.iss_uop[5U] = ((__Vtemp_5[1U] >> 0x0000000eU) 
                             | (__Vtemp_5[2U] << 0x00000012U));
    vlSelfRef.iss_uop[6U] = ((__Vtemp_5[2U] >> 0x0000000eU) 
                             | (__Vtemp_5[3U] << 0x00000012U));
    vlSelfRef.iss_uop[7U] = ((0xff000000U & vlSelfRef.iss_uop[7U]) 
                             | ((__Vtemp_5[3U] >> 0x0000000eU) 
                                | (0x00fc0000U & (__Vtemp_5[4U] 
                                                  << 0x00000012U))));
    vlSelfRef.iss_uop[7U] = ((0x00ffffffU & vlSelfRef.iss_uop[7U]) 
                             | (((0x0001fff0U & ((vlSelfRef.__PVT__slot_uop[8U] 
                                                  << 8U) 
                                                 | (0x000000f0U 
                                                    & (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U)))) 
                                 | (0x0000000fU & (
                                                   (~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                   & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                       << 8U) 
                                                      | (vlSelfRef.__PVT__slot_uop[7U] 
                                                         >> 0x00000018U))))) 
                                << 0x00000018U));
    vlSelfRef.iss_uop[8U] = ((0xfffffe00U & vlSelfRef.iss_uop[8U]) 
                             | (((0x0001fff0U & ((vlSelfRef.__PVT__slot_uop[8U] 
                                                  << 8U) 
                                                 | (0x000000f0U 
                                                    & (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U)))) 
                                 | (0x0000000fU & (
                                                   (~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                   & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                       << 8U) 
                                                      | (vlSelfRef.__PVT__slot_uop[7U] 
                                                         >> 0x00000018U))))) 
                                >> 8U));
    vlSelfRef.iss_uop[8U] = ((0x000001ffU & vlSelfRef.iss_uop[8U]) 
                             | ((((vlSelfRef.__PVT__slot_uop[9U] 
                                   << 0x00000017U) 
                                  | (0x007ffffeU & 
                                     (vlSelfRef.__PVT__slot_uop[8U] 
                                      >> 9U))) | (1U 
                                                  & ((IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant) 
                                                     >> 0x0000000dU))) 
                                << 9U));
    vlSelfRef.iss_uop[9U] = (((((vlSelfRef.__PVT__slot_uop[9U] 
                                 << 0x00000017U) | 
                                (0x007ffffeU & (vlSelfRef.__PVT__slot_uop[8U] 
                                                >> 9U))) 
                               | (1U & ((IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant) 
                                        >> 0x0000000dU))) 
                              >> 0x00000017U) | (((1U 
                                                   & (vlSelfRef.__PVT__slot_uop[9U] 
                                                      >> 9U)) 
                                                  | ((vlSelfRef.__PVT__slot_uop[10U] 
                                                      << 0x00000017U) 
                                                     | (0x007ffffeU 
                                                        & (vlSelfRef.__PVT__slot_uop[9U] 
                                                           >> 9U)))) 
                                                 << 9U));
    vlSelfRef.iss_uop[10U] = ((((1U & (vlSelfRef.__PVT__slot_uop[9U] 
                                       >> 9U)) | ((vlSelfRef.__PVT__slot_uop[10U] 
                                                   << 0x00000017U) 
                                                  | (0x007ffffeU 
                                                     & (vlSelfRef.__PVT__slot_uop[9U] 
                                                        >> 9U)))) 
                               >> 0x00000017U) | ((
                                                   (1U 
                                                    & (vlSelfRef.__PVT__slot_uop[10U] 
                                                       >> 9U)) 
                                                   | ((vlSelfRef.__PVT__slot_uop[11U] 
                                                       << 0x00000017U) 
                                                      | (0x007ffffeU 
                                                         & (vlSelfRef.__PVT__slot_uop[10U] 
                                                            >> 9U)))) 
                                                  << 9U));
    vlSelfRef.iss_uop[11U] = (0x01ffffffU & ((((1U 
                                                & (vlSelfRef.__PVT__slot_uop[10U] 
                                                   >> 9U)) 
                                               | ((vlSelfRef.__PVT__slot_uop[11U] 
                                                   << 0x00000017U) 
                                                  | (0x007ffffeU 
                                                     & (vlSelfRef.__PVT__slot_uop[10U] 
                                                        >> 9U)))) 
                                              >> 0x00000017U) 
                                             | (((1U 
                                                  & (vlSelfRef.__PVT__slot_uop[11U] 
                                                     >> 9U)) 
                                                 | (0x0000fffeU 
                                                    & (vlSelfRef.__PVT__slot_uop[11U] 
                                                       >> 9U))) 
                                                << 9U)));
    vlSelfRef.request = ((~ ((IData)(vlSelfRef.__PVT__killed) 
                             | ((vlSelfRef.__PVT__slot_uop[8U] 
                                 >> 9U) | (0U != (7U 
                                                  & (vlSelfRef.iss_uop[3U] 
                                                     >> 0x00000010U)))))) 
                         & (IData)(vlSelfRef.__PVT__slot_valid));
}

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__13__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__13__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<12>/*376:0*/ __Vdly__slot_uop;
    VL_ZERO_W(377, __Vdly__slot_uop);
    // Body
    __Vdly__slot_uop[0U] = vlSelfRef.__PVT__slot_uop[0U];
    __Vdly__slot_uop[1U] = vlSelfRef.__PVT__slot_uop[1U];
    __Vdly__slot_uop[2U] = vlSelfRef.__PVT__slot_uop[2U];
    __Vdly__slot_uop[3U] = vlSelfRef.__PVT__slot_uop[3U];
    __Vdly__slot_uop[4U] = vlSelfRef.__PVT__slot_uop[4U];
    __Vdly__slot_uop[5U] = vlSelfRef.__PVT__slot_uop[5U];
    __Vdly__slot_uop[6U] = vlSelfRef.__PVT__slot_uop[6U];
    __Vdly__slot_uop[7U] = vlSelfRef.__PVT__slot_uop[7U];
    __Vdly__slot_uop[8U] = vlSelfRef.__PVT__slot_uop[8U];
    __Vdly__slot_uop[9U] = vlSelfRef.__PVT__slot_uop[9U];
    __Vdly__slot_uop[10U] = vlSelfRef.__PVT__slot_uop[10U];
    __Vdly__slot_uop[11U] = vlSelfRef.__PVT__slot_uop[11U];
    if ((0x00002000U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[154U] 
                                 << 0x0000001bU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[153U] 
                                 >> 5U));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[155U] 
                                 << 0x0000001bU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[154U] 
                                 >> 5U));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[156U] 
                                 << 0x0000001bU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[155U] 
                                 >> 5U));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[157U] 
                                 << 0x0000001bU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[156U] 
                                 >> 5U));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[158U] 
                                 << 0x0000001bU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[157U] 
                                 >> 5U));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[159U] 
                                 << 0x0000001bU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[158U] 
                                 >> 5U));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[160U] 
                                 << 0x0000001bU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[159U] 
                                 >> 5U));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[161U] 
                                 << 0x0000001bU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[160U] 
                                 >> 5U));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[162U] 
                                 << 0x0000001bU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[161U] 
                                 >> 5U));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[163U] 
                                 << 0x0000001bU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[162U] 
                                 >> 5U));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[164U] 
                                  << 0x0000001bU) | 
                                 (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[163U] 
                                  >> 5U));
        __Vdly__slot_uop[11U] = (0x01ffffffU & (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[164U] 
                                                >> 5U));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((0x00002000U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((1U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((2U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                 >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                  << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                            >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                 >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((4U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((8U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((0x00000010U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((0x00000020U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
    }
    vlSelfRef.__PVT__slot_uop[0U] = __Vdly__slot_uop[0U];
    vlSelfRef.__PVT__slot_uop[1U] = __Vdly__slot_uop[1U];
    vlSelfRef.__PVT__slot_uop[2U] = __Vdly__slot_uop[2U];
    vlSelfRef.__PVT__slot_uop[3U] = __Vdly__slot_uop[3U];
    vlSelfRef.__PVT__slot_uop[4U] = __Vdly__slot_uop[4U];
    vlSelfRef.__PVT__slot_uop[5U] = __Vdly__slot_uop[5U];
    vlSelfRef.__PVT__slot_uop[6U] = __Vdly__slot_uop[6U];
    vlSelfRef.__PVT__slot_uop[7U] = __Vdly__slot_uop[7U];
    vlSelfRef.__PVT__slot_uop[8U] = __Vdly__slot_uop[8U];
    vlSelfRef.__PVT__slot_uop[9U] = __Vdly__slot_uop[9U];
    vlSelfRef.__PVT__slot_uop[10U] = __Vdly__slot_uop[10U];
    vlSelfRef.__PVT__slot_uop[11U] = __Vdly__slot_uop[11U];
}

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__13__KET____DOT__slot__1(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__13__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00002000U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((0x00002000U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00002000U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__14__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__14__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_5;
    // Body
    vlSelfRef.iss_uop[0U] = vlSelfRef.__PVT__slot_uop[0U];
    vlSelfRef.iss_uop[1U] = vlSelfRef.__PVT__slot_uop[1U];
    vlSelfRef.iss_uop[2U] = vlSelfRef.__PVT__slot_uop[2U];
    vlSelfRef.iss_uop[3U] = ((0xffff0000U & vlSelfRef.iss_uop[3U]) 
                             | (0x0000ffffU & vlSelfRef.__PVT__slot_uop[3U]));
    vlSelfRef.iss_uop[3U] = ((0xfffcffffU & vlSelfRef.iss_uop[3U]) 
                             | (((2U & (((~ (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                              & ((0U 
                                                  != 
                                                  (0x0000003fU 
                                                   & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__PVT__slot_uop[3U] 
                                                         >> 0x0000001dU)))) 
                                                 & ((0x0000003fU 
                                                     & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                         << 3U) 
                                                        | (vlSelfRef.__PVT__slot_uop[3U] 
                                                           >> 0x0000001dU))) 
                                                    == 
                                                    (0x0000003fU 
                                                     & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                        >> 9U))))) 
                                             | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                 & ((0U 
                                                     != 
                                                     (0x0000003fU 
                                                      & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                          << 3U) 
                                                         | (vlSelfRef.__PVT__slot_uop[3U] 
                                                            >> 0x0000001dU)))) 
                                                    & ((0x0000003fU 
                                                        & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                            << 3U) 
                                                           | (vlSelfRef.__PVT__slot_uop[3U] 
                                                              >> 0x0000001dU))) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                           >> 9U))))) 
                                                | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                    & ((0U 
                                                        != 
                                                        (0x0000003fU 
                                                         & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                             << 3U) 
                                                            | (vlSelfRef.__PVT__slot_uop[3U] 
                                                               >> 0x0000001dU)))) 
                                                       & ((0x0000003fU 
                                                           & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                               << 3U) 
                                                              | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                 >> 0x0000001dU))) 
                                                          == 
                                                          (0x0000003fU 
                                                           & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                              >> 9U))))) 
                                                   | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                                                       & ((0U 
                                                           != 
                                                           (0x0000003fU 
                                                            & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                << 3U) 
                                                               | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                  >> 0x0000001dU)))) 
                                                          & ((0x0000003fU 
                                                              & (vlSymsp->TOP.lsu_resp[5U] 
                                                                 >> 0x00000010U)) 
                                                             == 
                                                             (0x0000003fU 
                                                              & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                  << 3U) 
                                                                 | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                    >> 0x0000001dU)))))) 
                                                      | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                                                           >> 5U) 
                                                          & ((0U 
                                                              != 
                                                              (0x0000003fU 
                                                               & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                   << 3U) 
                                                                  | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x0000001dU)))) 
                                                             & ((0x0000003fU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                                            >> 0x0000001eU))) 
                                                                == 
                                                                (0x0000003fU 
                                                                 & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                     << 3U) 
                                                                    | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x0000001dU)))))) 
                                                         | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                                                            & ((0U 
                                                                != 
                                                                (0x0000003fU 
                                                                 & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                     << 3U) 
                                                                    | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x0000001dU)))) 
                                                               & ((0x0000003fU 
                                                                   & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                       << 3U) 
                                                                      | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                         >> 0x0000001dU))) 
                                                                  == 
                                                                  (0x0000003fU 
                                                                   & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                                      >> 9U))))))))))) 
                                         << 1U) & (vlSelfRef.__PVT__slot_uop[3U] 
                                                   >> 0x00000010U))) 
                                 | (1U & ((~ (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                               & ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.__PVT__slot_uop[3U] 
                                                       >> 0x00000017U))) 
                                                  & ((0x0000003fU 
                                                      & (vlSelfRef.__PVT__slot_uop[3U] 
                                                         >> 0x00000017U)) 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                         >> 9U))))) 
                                              | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.__PVT__slot_uop[3U] 
                                                          >> 0x00000017U))) 
                                                     & ((0x0000003fU 
                                                         & (vlSelfRef.__PVT__slot_uop[3U] 
                                                            >> 0x00000017U)) 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                            >> 9U))))) 
                                                 | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                     & ((0U 
                                                         != 
                                                         (0x0000003fU 
                                                          & (vlSelfRef.__PVT__slot_uop[3U] 
                                                             >> 0x00000017U))) 
                                                        & ((0x0000003fU 
                                                            & (vlSelfRef.__PVT__slot_uop[3U] 
                                                               >> 0x00000017U)) 
                                                           == 
                                                           (0x0000003fU 
                                                            & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                               >> 9U))))) 
                                                    | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                                                        & ((0U 
                                                            != 
                                                            (0x0000003fU 
                                                             & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                >> 0x00000017U))) 
                                                           & ((0x0000003fU 
                                                               & (vlSymsp->TOP.lsu_resp[5U] 
                                                                  >> 0x00000010U)) 
                                                              == 
                                                              (0x0000003fU 
                                                               & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                  >> 0x00000017U))))) 
                                                       | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                                                            >> 5U) 
                                                           & ((0U 
                                                               != 
                                                               (0x0000003fU 
                                                                & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                   >> 0x00000017U))) 
                                                              & ((0x0000003fU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                                             >> 0x0000001eU))) 
                                                                 == 
                                                                 (0x0000003fU 
                                                                  & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x00000017U))))) 
                                                          | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                                                             & ((0U 
                                                                 != 
                                                                 (0x0000003fU 
                                                                  & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x00000017U))) 
                                                                & ((0x0000003fU 
                                                                    & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x00000017U)) 
                                                                   == 
                                                                   (0x0000003fU 
                                                                    & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                                       >> 9U))))))))))) 
                                          & (vlSelfRef.__PVT__slot_uop[3U] 
                                             >> 0x00000010U)))) 
                                << 0x00000010U));
    if ((((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
          & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U))) & ((0x0000003fU 
                                                 & (vlSelfRef.__PVT__slot_uop[4U] 
                                                    >> 3U)) 
                                                == 
                                                (0x0000003fU 
                                                 & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                    >> 9U))))) 
         | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
             & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                       >> 3U))) & (
                                                   (0x0000003fU 
                                                    & (vlSelfRef.__PVT__slot_uop[4U] 
                                                       >> 3U)) 
                                                   == 
                                                   (0x0000003fU 
                                                    & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                       >> 9U))))) 
            | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                          >> 3U))) 
                   & ((0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                      >> 3U)) == (0x0000003fU 
                                                  & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                     >> 9U))))) 
               | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                   & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                             >> 3U))) 
                      & ((0x0000003fU & (vlSymsp->TOP.lsu_resp[5U] 
                                         >> 0x00000010U)) 
                         == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                            >> 3U))))) 
                  | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                       >> 5U) & ((0U != (0x0000003fU 
                                         & (vlSelfRef.__PVT__slot_uop[4U] 
                                            >> 3U))) 
                                 & ((0x0000003fU & (IData)(
                                                           (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                            >> 0x0000001eU))) 
                                    == (0x0000003fU 
                                        & (vlSelfRef.__PVT__slot_uop[4U] 
                                           >> 3U))))) 
                     | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                        & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                                  >> 3U))) 
                           & ((0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                              >> 3U)) 
                              == (0x0000003fU & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                 >> 9U))))))))))) {
        __Vtemp_5[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (0x00003ffeU 
                                             & (vlSelfRef.__PVT__slot_uop[3U] 
                                                >> 0x00000012U)));
        __Vtemp_5[1U] = ((1U & (vlSelfRef.__PVT__slot_uop[4U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[5U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[4U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[2U] = ((1U & (vlSelfRef.__PVT__slot_uop[5U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[6U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[5U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[3U] = ((1U & (vlSelfRef.__PVT__slot_uop[6U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[7U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[6U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[4U] = ((1U & (vlSelfRef.__PVT__slot_uop[7U] 
                                >> 0x00000012U)) | 
                         (0x0000003eU & (vlSelfRef.__PVT__slot_uop[7U] 
                                         >> 0x00000012U)));
    } else {
        __Vtemp_5[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[3U] 
                                             >> 0x00000012U));
        __Vtemp_5[1U] = ((vlSelfRef.__PVT__slot_uop[5U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[4U] 
                                             >> 0x00000012U));
        __Vtemp_5[2U] = ((vlSelfRef.__PVT__slot_uop[6U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[5U] 
                                             >> 0x00000012U));
        __Vtemp_5[3U] = ((vlSelfRef.__PVT__slot_uop[7U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[6U] 
                                             >> 0x00000012U));
        __Vtemp_5[4U] = ((vlSelfRef.__PVT__slot_uop[8U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[7U] 
                                             >> 0x00000012U));
    }
    vlSelfRef.iss_uop[3U] = ((0x0003ffffU & vlSelfRef.iss_uop[3U]) 
                             | (__Vtemp_5[0U] << 0x00000012U));
    vlSelfRef.iss_uop[4U] = ((__Vtemp_5[0U] >> 0x0000000eU) 
                             | (__Vtemp_5[1U] << 0x00000012U));
    vlSelfRef.iss_uop[5U] = ((__Vtemp_5[1U] >> 0x0000000eU) 
                             | (__Vtemp_5[2U] << 0x00000012U));
    vlSelfRef.iss_uop[6U] = ((__Vtemp_5[2U] >> 0x0000000eU) 
                             | (__Vtemp_5[3U] << 0x00000012U));
    vlSelfRef.iss_uop[7U] = ((0xff000000U & vlSelfRef.iss_uop[7U]) 
                             | ((__Vtemp_5[3U] >> 0x0000000eU) 
                                | (0x00fc0000U & (__Vtemp_5[4U] 
                                                  << 0x00000012U))));
    vlSelfRef.iss_uop[7U] = ((0x00ffffffU & vlSelfRef.iss_uop[7U]) 
                             | (((0x0001fff0U & ((vlSelfRef.__PVT__slot_uop[8U] 
                                                  << 8U) 
                                                 | (0x000000f0U 
                                                    & (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U)))) 
                                 | (0x0000000fU & (
                                                   (~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                   & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                       << 8U) 
                                                      | (vlSelfRef.__PVT__slot_uop[7U] 
                                                         >> 0x00000018U))))) 
                                << 0x00000018U));
    vlSelfRef.iss_uop[8U] = ((0xfffffe00U & vlSelfRef.iss_uop[8U]) 
                             | (((0x0001fff0U & ((vlSelfRef.__PVT__slot_uop[8U] 
                                                  << 8U) 
                                                 | (0x000000f0U 
                                                    & (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U)))) 
                                 | (0x0000000fU & (
                                                   (~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                   & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                       << 8U) 
                                                      | (vlSelfRef.__PVT__slot_uop[7U] 
                                                         >> 0x00000018U))))) 
                                >> 8U));
    vlSelfRef.iss_uop[8U] = ((0x000001ffU & vlSelfRef.iss_uop[8U]) 
                             | ((((vlSelfRef.__PVT__slot_uop[9U] 
                                   << 0x00000017U) 
                                  | (0x007ffffeU & 
                                     (vlSelfRef.__PVT__slot_uop[8U] 
                                      >> 9U))) | (1U 
                                                  & ((IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant) 
                                                     >> 0x0000000eU))) 
                                << 9U));
    vlSelfRef.iss_uop[9U] = (((((vlSelfRef.__PVT__slot_uop[9U] 
                                 << 0x00000017U) | 
                                (0x007ffffeU & (vlSelfRef.__PVT__slot_uop[8U] 
                                                >> 9U))) 
                               | (1U & ((IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant) 
                                        >> 0x0000000eU))) 
                              >> 0x00000017U) | (((1U 
                                                   & (vlSelfRef.__PVT__slot_uop[9U] 
                                                      >> 9U)) 
                                                  | ((vlSelfRef.__PVT__slot_uop[10U] 
                                                      << 0x00000017U) 
                                                     | (0x007ffffeU 
                                                        & (vlSelfRef.__PVT__slot_uop[9U] 
                                                           >> 9U)))) 
                                                 << 9U));
    vlSelfRef.iss_uop[10U] = ((((1U & (vlSelfRef.__PVT__slot_uop[9U] 
                                       >> 9U)) | ((vlSelfRef.__PVT__slot_uop[10U] 
                                                   << 0x00000017U) 
                                                  | (0x007ffffeU 
                                                     & (vlSelfRef.__PVT__slot_uop[9U] 
                                                        >> 9U)))) 
                               >> 0x00000017U) | ((
                                                   (1U 
                                                    & (vlSelfRef.__PVT__slot_uop[10U] 
                                                       >> 9U)) 
                                                   | ((vlSelfRef.__PVT__slot_uop[11U] 
                                                       << 0x00000017U) 
                                                      | (0x007ffffeU 
                                                         & (vlSelfRef.__PVT__slot_uop[10U] 
                                                            >> 9U)))) 
                                                  << 9U));
    vlSelfRef.iss_uop[11U] = (0x01ffffffU & ((((1U 
                                                & (vlSelfRef.__PVT__slot_uop[10U] 
                                                   >> 9U)) 
                                               | ((vlSelfRef.__PVT__slot_uop[11U] 
                                                   << 0x00000017U) 
                                                  | (0x007ffffeU 
                                                     & (vlSelfRef.__PVT__slot_uop[10U] 
                                                        >> 9U)))) 
                                              >> 0x00000017U) 
                                             | (((1U 
                                                  & (vlSelfRef.__PVT__slot_uop[11U] 
                                                     >> 9U)) 
                                                 | (0x0000fffeU 
                                                    & (vlSelfRef.__PVT__slot_uop[11U] 
                                                       >> 9U))) 
                                                << 9U)));
    vlSelfRef.request = ((~ ((IData)(vlSelfRef.__PVT__killed) 
                             | ((vlSelfRef.__PVT__slot_uop[8U] 
                                 >> 9U) | (0U != (7U 
                                                  & (vlSelfRef.iss_uop[3U] 
                                                     >> 0x00000010U)))))) 
                         & (IData)(vlSelfRef.__PVT__slot_valid));
}

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__14__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__14__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<12>/*376:0*/ __Vdly__slot_uop;
    VL_ZERO_W(377, __Vdly__slot_uop);
    // Body
    __Vdly__slot_uop[0U] = vlSelfRef.__PVT__slot_uop[0U];
    __Vdly__slot_uop[1U] = vlSelfRef.__PVT__slot_uop[1U];
    __Vdly__slot_uop[2U] = vlSelfRef.__PVT__slot_uop[2U];
    __Vdly__slot_uop[3U] = vlSelfRef.__PVT__slot_uop[3U];
    __Vdly__slot_uop[4U] = vlSelfRef.__PVT__slot_uop[4U];
    __Vdly__slot_uop[5U] = vlSelfRef.__PVT__slot_uop[5U];
    __Vdly__slot_uop[6U] = vlSelfRef.__PVT__slot_uop[6U];
    __Vdly__slot_uop[7U] = vlSelfRef.__PVT__slot_uop[7U];
    __Vdly__slot_uop[8U] = vlSelfRef.__PVT__slot_uop[8U];
    __Vdly__slot_uop[9U] = vlSelfRef.__PVT__slot_uop[9U];
    __Vdly__slot_uop[10U] = vlSelfRef.__PVT__slot_uop[10U];
    __Vdly__slot_uop[11U] = vlSelfRef.__PVT__slot_uop[11U];
    if ((0x00004000U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[165U] 
                                 << 2U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[164U] 
                                           >> 0x0000001eU));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[166U] 
                                 << 2U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[165U] 
                                           >> 0x0000001eU));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[167U] 
                                 << 2U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[166U] 
                                           >> 0x0000001eU));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[168U] 
                                 << 2U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[167U] 
                                           >> 0x0000001eU));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[169U] 
                                 << 2U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[168U] 
                                           >> 0x0000001eU));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[170U] 
                                 << 2U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[169U] 
                                           >> 0x0000001eU));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[171U] 
                                 << 2U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[170U] 
                                           >> 0x0000001eU));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[172U] 
                                 << 2U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[171U] 
                                           >> 0x0000001eU));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[173U] 
                                 << 2U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[172U] 
                                           >> 0x0000001eU));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[174U] 
                                 << 2U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[173U] 
                                           >> 0x0000001eU));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[175U] 
                                  << 2U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[174U] 
                                            >> 0x0000001eU));
        __Vdly__slot_uop[11U] = (0x01ffffffU & ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[176U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[175U] 
                                                   >> 0x0000001eU)));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((0x00004000U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((1U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((2U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                 >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                  << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                            >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                 >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((4U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((8U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((0x00000010U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((0x00000020U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
    }
    vlSelfRef.__PVT__slot_uop[0U] = __Vdly__slot_uop[0U];
    vlSelfRef.__PVT__slot_uop[1U] = __Vdly__slot_uop[1U];
    vlSelfRef.__PVT__slot_uop[2U] = __Vdly__slot_uop[2U];
    vlSelfRef.__PVT__slot_uop[3U] = __Vdly__slot_uop[3U];
    vlSelfRef.__PVT__slot_uop[4U] = __Vdly__slot_uop[4U];
    vlSelfRef.__PVT__slot_uop[5U] = __Vdly__slot_uop[5U];
    vlSelfRef.__PVT__slot_uop[6U] = __Vdly__slot_uop[6U];
    vlSelfRef.__PVT__slot_uop[7U] = __Vdly__slot_uop[7U];
    vlSelfRef.__PVT__slot_uop[8U] = __Vdly__slot_uop[8U];
    vlSelfRef.__PVT__slot_uop[9U] = __Vdly__slot_uop[9U];
    vlSelfRef.__PVT__slot_uop[10U] = __Vdly__slot_uop[10U];
    vlSelfRef.__PVT__slot_uop[11U] = __Vdly__slot_uop[11U];
}

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__14__KET____DOT__slot__1(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__14__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00004000U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((0x00004000U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00004000U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__15__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__15__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_5;
    // Body
    vlSelfRef.iss_uop[0U] = vlSelfRef.__PVT__slot_uop[0U];
    vlSelfRef.iss_uop[1U] = vlSelfRef.__PVT__slot_uop[1U];
    vlSelfRef.iss_uop[2U] = vlSelfRef.__PVT__slot_uop[2U];
    vlSelfRef.iss_uop[3U] = ((0xffff0000U & vlSelfRef.iss_uop[3U]) 
                             | (0x0000ffffU & vlSelfRef.__PVT__slot_uop[3U]));
    vlSelfRef.iss_uop[3U] = ((0xfffcffffU & vlSelfRef.iss_uop[3U]) 
                             | (((2U & (((~ (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                              & ((0U 
                                                  != 
                                                  (0x0000003fU 
                                                   & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__PVT__slot_uop[3U] 
                                                         >> 0x0000001dU)))) 
                                                 & ((0x0000003fU 
                                                     & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                         << 3U) 
                                                        | (vlSelfRef.__PVT__slot_uop[3U] 
                                                           >> 0x0000001dU))) 
                                                    == 
                                                    (0x0000003fU 
                                                     & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                        >> 9U))))) 
                                             | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                 & ((0U 
                                                     != 
                                                     (0x0000003fU 
                                                      & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                          << 3U) 
                                                         | (vlSelfRef.__PVT__slot_uop[3U] 
                                                            >> 0x0000001dU)))) 
                                                    & ((0x0000003fU 
                                                        & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                            << 3U) 
                                                           | (vlSelfRef.__PVT__slot_uop[3U] 
                                                              >> 0x0000001dU))) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                           >> 9U))))) 
                                                | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                    & ((0U 
                                                        != 
                                                        (0x0000003fU 
                                                         & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                             << 3U) 
                                                            | (vlSelfRef.__PVT__slot_uop[3U] 
                                                               >> 0x0000001dU)))) 
                                                       & ((0x0000003fU 
                                                           & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                               << 3U) 
                                                              | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                 >> 0x0000001dU))) 
                                                          == 
                                                          (0x0000003fU 
                                                           & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                              >> 9U))))) 
                                                   | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                                                       & ((0U 
                                                           != 
                                                           (0x0000003fU 
                                                            & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                << 3U) 
                                                               | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                  >> 0x0000001dU)))) 
                                                          & ((0x0000003fU 
                                                              & (vlSymsp->TOP.lsu_resp[5U] 
                                                                 >> 0x00000010U)) 
                                                             == 
                                                             (0x0000003fU 
                                                              & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                  << 3U) 
                                                                 | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                    >> 0x0000001dU)))))) 
                                                      | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                                                           >> 5U) 
                                                          & ((0U 
                                                              != 
                                                              (0x0000003fU 
                                                               & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                   << 3U) 
                                                                  | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x0000001dU)))) 
                                                             & ((0x0000003fU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                                            >> 0x0000001eU))) 
                                                                == 
                                                                (0x0000003fU 
                                                                 & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                     << 3U) 
                                                                    | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x0000001dU)))))) 
                                                         | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                                                            & ((0U 
                                                                != 
                                                                (0x0000003fU 
                                                                 & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                     << 3U) 
                                                                    | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x0000001dU)))) 
                                                               & ((0x0000003fU 
                                                                   & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                       << 3U) 
                                                                      | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                         >> 0x0000001dU))) 
                                                                  == 
                                                                  (0x0000003fU 
                                                                   & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                                      >> 9U))))))))))) 
                                         << 1U) & (vlSelfRef.__PVT__slot_uop[3U] 
                                                   >> 0x00000010U))) 
                                 | (1U & ((~ (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                               & ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.__PVT__slot_uop[3U] 
                                                       >> 0x00000017U))) 
                                                  & ((0x0000003fU 
                                                      & (vlSelfRef.__PVT__slot_uop[3U] 
                                                         >> 0x00000017U)) 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                         >> 9U))))) 
                                              | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.__PVT__slot_uop[3U] 
                                                          >> 0x00000017U))) 
                                                     & ((0x0000003fU 
                                                         & (vlSelfRef.__PVT__slot_uop[3U] 
                                                            >> 0x00000017U)) 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                            >> 9U))))) 
                                                 | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                     & ((0U 
                                                         != 
                                                         (0x0000003fU 
                                                          & (vlSelfRef.__PVT__slot_uop[3U] 
                                                             >> 0x00000017U))) 
                                                        & ((0x0000003fU 
                                                            & (vlSelfRef.__PVT__slot_uop[3U] 
                                                               >> 0x00000017U)) 
                                                           == 
                                                           (0x0000003fU 
                                                            & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                               >> 9U))))) 
                                                    | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                                                        & ((0U 
                                                            != 
                                                            (0x0000003fU 
                                                             & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                >> 0x00000017U))) 
                                                           & ((0x0000003fU 
                                                               & (vlSymsp->TOP.lsu_resp[5U] 
                                                                  >> 0x00000010U)) 
                                                              == 
                                                              (0x0000003fU 
                                                               & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                  >> 0x00000017U))))) 
                                                       | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                                                            >> 5U) 
                                                           & ((0U 
                                                               != 
                                                               (0x0000003fU 
                                                                & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                   >> 0x00000017U))) 
                                                              & ((0x0000003fU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                                             >> 0x0000001eU))) 
                                                                 == 
                                                                 (0x0000003fU 
                                                                  & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x00000017U))))) 
                                                          | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                                                             & ((0U 
                                                                 != 
                                                                 (0x0000003fU 
                                                                  & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x00000017U))) 
                                                                & ((0x0000003fU 
                                                                    & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x00000017U)) 
                                                                   == 
                                                                   (0x0000003fU 
                                                                    & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                                       >> 9U))))))))))) 
                                          & (vlSelfRef.__PVT__slot_uop[3U] 
                                             >> 0x00000010U)))) 
                                << 0x00000010U));
    if ((((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
          & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U))) & ((0x0000003fU 
                                                 & (vlSelfRef.__PVT__slot_uop[4U] 
                                                    >> 3U)) 
                                                == 
                                                (0x0000003fU 
                                                 & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                    >> 9U))))) 
         | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
             & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                       >> 3U))) & (
                                                   (0x0000003fU 
                                                    & (vlSelfRef.__PVT__slot_uop[4U] 
                                                       >> 3U)) 
                                                   == 
                                                   (0x0000003fU 
                                                    & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                       >> 9U))))) 
            | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                          >> 3U))) 
                   & ((0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                      >> 3U)) == (0x0000003fU 
                                                  & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                     >> 9U))))) 
               | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                   & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                             >> 3U))) 
                      & ((0x0000003fU & (vlSymsp->TOP.lsu_resp[5U] 
                                         >> 0x00000010U)) 
                         == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                            >> 3U))))) 
                  | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                       >> 5U) & ((0U != (0x0000003fU 
                                         & (vlSelfRef.__PVT__slot_uop[4U] 
                                            >> 3U))) 
                                 & ((0x0000003fU & (IData)(
                                                           (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                            >> 0x0000001eU))) 
                                    == (0x0000003fU 
                                        & (vlSelfRef.__PVT__slot_uop[4U] 
                                           >> 3U))))) 
                     | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                        & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                                  >> 3U))) 
                           & ((0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                              >> 3U)) 
                              == (0x0000003fU & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                 >> 9U))))))))))) {
        __Vtemp_5[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (0x00003ffeU 
                                             & (vlSelfRef.__PVT__slot_uop[3U] 
                                                >> 0x00000012U)));
        __Vtemp_5[1U] = ((1U & (vlSelfRef.__PVT__slot_uop[4U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[5U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[4U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[2U] = ((1U & (vlSelfRef.__PVT__slot_uop[5U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[6U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[5U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[3U] = ((1U & (vlSelfRef.__PVT__slot_uop[6U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[7U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[6U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[4U] = ((1U & (vlSelfRef.__PVT__slot_uop[7U] 
                                >> 0x00000012U)) | 
                         (0x0000003eU & (vlSelfRef.__PVT__slot_uop[7U] 
                                         >> 0x00000012U)));
    } else {
        __Vtemp_5[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[3U] 
                                             >> 0x00000012U));
        __Vtemp_5[1U] = ((vlSelfRef.__PVT__slot_uop[5U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[4U] 
                                             >> 0x00000012U));
        __Vtemp_5[2U] = ((vlSelfRef.__PVT__slot_uop[6U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[5U] 
                                             >> 0x00000012U));
        __Vtemp_5[3U] = ((vlSelfRef.__PVT__slot_uop[7U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[6U] 
                                             >> 0x00000012U));
        __Vtemp_5[4U] = ((vlSelfRef.__PVT__slot_uop[8U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[7U] 
                                             >> 0x00000012U));
    }
    vlSelfRef.iss_uop[3U] = ((0x0003ffffU & vlSelfRef.iss_uop[3U]) 
                             | (__Vtemp_5[0U] << 0x00000012U));
    vlSelfRef.iss_uop[4U] = ((__Vtemp_5[0U] >> 0x0000000eU) 
                             | (__Vtemp_5[1U] << 0x00000012U));
    vlSelfRef.iss_uop[5U] = ((__Vtemp_5[1U] >> 0x0000000eU) 
                             | (__Vtemp_5[2U] << 0x00000012U));
    vlSelfRef.iss_uop[6U] = ((__Vtemp_5[2U] >> 0x0000000eU) 
                             | (__Vtemp_5[3U] << 0x00000012U));
    vlSelfRef.iss_uop[7U] = ((0xff000000U & vlSelfRef.iss_uop[7U]) 
                             | ((__Vtemp_5[3U] >> 0x0000000eU) 
                                | (0x00fc0000U & (__Vtemp_5[4U] 
                                                  << 0x00000012U))));
    vlSelfRef.iss_uop[7U] = ((0x00ffffffU & vlSelfRef.iss_uop[7U]) 
                             | (((0x0001fff0U & ((vlSelfRef.__PVT__slot_uop[8U] 
                                                  << 8U) 
                                                 | (0x000000f0U 
                                                    & (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U)))) 
                                 | (0x0000000fU & (
                                                   (~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                   & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                       << 8U) 
                                                      | (vlSelfRef.__PVT__slot_uop[7U] 
                                                         >> 0x00000018U))))) 
                                << 0x00000018U));
    vlSelfRef.iss_uop[8U] = ((0xfffffe00U & vlSelfRef.iss_uop[8U]) 
                             | (((0x0001fff0U & ((vlSelfRef.__PVT__slot_uop[8U] 
                                                  << 8U) 
                                                 | (0x000000f0U 
                                                    & (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U)))) 
                                 | (0x0000000fU & (
                                                   (~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                   & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                       << 8U) 
                                                      | (vlSelfRef.__PVT__slot_uop[7U] 
                                                         >> 0x00000018U))))) 
                                >> 8U));
    vlSelfRef.iss_uop[8U] = ((0x000001ffU & vlSelfRef.iss_uop[8U]) 
                             | ((((vlSelfRef.__PVT__slot_uop[9U] 
                                   << 0x00000017U) 
                                  | (0x007ffffeU & 
                                     (vlSelfRef.__PVT__slot_uop[8U] 
                                      >> 9U))) | (1U 
                                                  & ((IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant) 
                                                     >> 0x0000000fU))) 
                                << 9U));
    vlSelfRef.iss_uop[9U] = (((((vlSelfRef.__PVT__slot_uop[9U] 
                                 << 0x00000017U) | 
                                (0x007ffffeU & (vlSelfRef.__PVT__slot_uop[8U] 
                                                >> 9U))) 
                               | (1U & ((IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant) 
                                        >> 0x0000000fU))) 
                              >> 0x00000017U) | (((1U 
                                                   & (vlSelfRef.__PVT__slot_uop[9U] 
                                                      >> 9U)) 
                                                  | ((vlSelfRef.__PVT__slot_uop[10U] 
                                                      << 0x00000017U) 
                                                     | (0x007ffffeU 
                                                        & (vlSelfRef.__PVT__slot_uop[9U] 
                                                           >> 9U)))) 
                                                 << 9U));
    vlSelfRef.iss_uop[10U] = ((((1U & (vlSelfRef.__PVT__slot_uop[9U] 
                                       >> 9U)) | ((vlSelfRef.__PVT__slot_uop[10U] 
                                                   << 0x00000017U) 
                                                  | (0x007ffffeU 
                                                     & (vlSelfRef.__PVT__slot_uop[9U] 
                                                        >> 9U)))) 
                               >> 0x00000017U) | ((
                                                   (1U 
                                                    & (vlSelfRef.__PVT__slot_uop[10U] 
                                                       >> 9U)) 
                                                   | ((vlSelfRef.__PVT__slot_uop[11U] 
                                                       << 0x00000017U) 
                                                      | (0x007ffffeU 
                                                         & (vlSelfRef.__PVT__slot_uop[10U] 
                                                            >> 9U)))) 
                                                  << 9U));
    vlSelfRef.iss_uop[11U] = (0x01ffffffU & ((((1U 
                                                & (vlSelfRef.__PVT__slot_uop[10U] 
                                                   >> 9U)) 
                                               | ((vlSelfRef.__PVT__slot_uop[11U] 
                                                   << 0x00000017U) 
                                                  | (0x007ffffeU 
                                                     & (vlSelfRef.__PVT__slot_uop[10U] 
                                                        >> 9U)))) 
                                              >> 0x00000017U) 
                                             | (((1U 
                                                  & (vlSelfRef.__PVT__slot_uop[11U] 
                                                     >> 9U)) 
                                                 | (0x0000fffeU 
                                                    & (vlSelfRef.__PVT__slot_uop[11U] 
                                                       >> 9U))) 
                                                << 9U)));
    vlSelfRef.request = ((~ ((IData)(vlSelfRef.__PVT__killed) 
                             | ((vlSelfRef.__PVT__slot_uop[8U] 
                                 >> 9U) | (0U != (7U 
                                                  & (vlSelfRef.iss_uop[3U] 
                                                     >> 0x00000010U)))))) 
                         & (IData)(vlSelfRef.__PVT__slot_valid));
}

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__15__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__15__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<12>/*376:0*/ __Vdly__slot_uop;
    VL_ZERO_W(377, __Vdly__slot_uop);
    // Body
    __Vdly__slot_uop[0U] = vlSelfRef.__PVT__slot_uop[0U];
    __Vdly__slot_uop[1U] = vlSelfRef.__PVT__slot_uop[1U];
    __Vdly__slot_uop[2U] = vlSelfRef.__PVT__slot_uop[2U];
    __Vdly__slot_uop[3U] = vlSelfRef.__PVT__slot_uop[3U];
    __Vdly__slot_uop[4U] = vlSelfRef.__PVT__slot_uop[4U];
    __Vdly__slot_uop[5U] = vlSelfRef.__PVT__slot_uop[5U];
    __Vdly__slot_uop[6U] = vlSelfRef.__PVT__slot_uop[6U];
    __Vdly__slot_uop[7U] = vlSelfRef.__PVT__slot_uop[7U];
    __Vdly__slot_uop[8U] = vlSelfRef.__PVT__slot_uop[8U];
    __Vdly__slot_uop[9U] = vlSelfRef.__PVT__slot_uop[9U];
    __Vdly__slot_uop[10U] = vlSelfRef.__PVT__slot_uop[10U];
    __Vdly__slot_uop[11U] = vlSelfRef.__PVT__slot_uop[11U];
    if ((0x00008000U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[177U] 
                                 << 9U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[176U] 
                                           >> 0x00000017U));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[178U] 
                                 << 9U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[177U] 
                                           >> 0x00000017U));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[179U] 
                                 << 9U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[178U] 
                                           >> 0x00000017U));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[180U] 
                                 << 9U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[179U] 
                                           >> 0x00000017U));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[181U] 
                                 << 9U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[180U] 
                                           >> 0x00000017U));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[182U] 
                                 << 9U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[181U] 
                                           >> 0x00000017U));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[183U] 
                                 << 9U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[182U] 
                                           >> 0x00000017U));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[184U] 
                                 << 9U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[183U] 
                                           >> 0x00000017U));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[185U] 
                                 << 9U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[184U] 
                                           >> 0x00000017U));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[186U] 
                                 << 9U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[185U] 
                                           >> 0x00000017U));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[187U] 
                                  << 9U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[186U] 
                                            >> 0x00000017U));
        __Vdly__slot_uop[11U] = (0x01ffffffU & ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[188U] 
                                                 << 9U) 
                                                | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[187U] 
                                                   >> 0x00000017U)));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((0x00008000U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((1U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((2U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                 >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                  << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                            >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                 >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((4U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((8U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((0x00000010U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((0x00000020U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
    }
    vlSelfRef.__PVT__slot_uop[0U] = __Vdly__slot_uop[0U];
    vlSelfRef.__PVT__slot_uop[1U] = __Vdly__slot_uop[1U];
    vlSelfRef.__PVT__slot_uop[2U] = __Vdly__slot_uop[2U];
    vlSelfRef.__PVT__slot_uop[3U] = __Vdly__slot_uop[3U];
    vlSelfRef.__PVT__slot_uop[4U] = __Vdly__slot_uop[4U];
    vlSelfRef.__PVT__slot_uop[5U] = __Vdly__slot_uop[5U];
    vlSelfRef.__PVT__slot_uop[6U] = __Vdly__slot_uop[6U];
    vlSelfRef.__PVT__slot_uop[7U] = __Vdly__slot_uop[7U];
    vlSelfRef.__PVT__slot_uop[8U] = __Vdly__slot_uop[8U];
    vlSelfRef.__PVT__slot_uop[9U] = __Vdly__slot_uop[9U];
    vlSelfRef.__PVT__slot_uop[10U] = __Vdly__slot_uop[10U];
    vlSelfRef.__PVT__slot_uop[11U] = __Vdly__slot_uop[11U];
}

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__15__KET____DOT__slot__1(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__15__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00008000U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((0x00008000U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00008000U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__unq_iq__DOT__gen_slots__BRA__0__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__unq_iq__DOT__gen_slots__BRA__0__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_5;
    // Body
    vlSelfRef.iss_uop[0U] = vlSelfRef.__PVT__slot_uop[0U];
    vlSelfRef.iss_uop[1U] = vlSelfRef.__PVT__slot_uop[1U];
    vlSelfRef.iss_uop[2U] = vlSelfRef.__PVT__slot_uop[2U];
    vlSelfRef.iss_uop[3U] = ((0xffff0000U & vlSelfRef.iss_uop[3U]) 
                             | (0x0000ffffU & vlSelfRef.__PVT__slot_uop[3U]));
    vlSelfRef.iss_uop[3U] = ((0xfffcffffU & vlSelfRef.iss_uop[3U]) 
                             | (((2U & (((~ (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                              & ((0U 
                                                  != 
                                                  (0x0000003fU 
                                                   & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__PVT__slot_uop[3U] 
                                                         >> 0x0000001dU)))) 
                                                 & ((0x0000003fU 
                                                     & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                         << 3U) 
                                                        | (vlSelfRef.__PVT__slot_uop[3U] 
                                                           >> 0x0000001dU))) 
                                                    == 
                                                    (0x0000003fU 
                                                     & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                        >> 9U))))) 
                                             | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                 & ((0U 
                                                     != 
                                                     (0x0000003fU 
                                                      & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                          << 3U) 
                                                         | (vlSelfRef.__PVT__slot_uop[3U] 
                                                            >> 0x0000001dU)))) 
                                                    & ((0x0000003fU 
                                                        & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                            << 3U) 
                                                           | (vlSelfRef.__PVT__slot_uop[3U] 
                                                              >> 0x0000001dU))) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                           >> 9U))))) 
                                                | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                    & ((0U 
                                                        != 
                                                        (0x0000003fU 
                                                         & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                             << 3U) 
                                                            | (vlSelfRef.__PVT__slot_uop[3U] 
                                                               >> 0x0000001dU)))) 
                                                       & ((0x0000003fU 
                                                           & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                               << 3U) 
                                                              | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                 >> 0x0000001dU))) 
                                                          == 
                                                          (0x0000003fU 
                                                           & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                              >> 9U))))) 
                                                   | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                                                       & ((0U 
                                                           != 
                                                           (0x0000003fU 
                                                            & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                << 3U) 
                                                               | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                  >> 0x0000001dU)))) 
                                                          & ((0x0000003fU 
                                                              & (vlSymsp->TOP.lsu_resp[5U] 
                                                                 >> 0x00000010U)) 
                                                             == 
                                                             (0x0000003fU 
                                                              & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                  << 3U) 
                                                                 | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                    >> 0x0000001dU)))))) 
                                                      | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                                                           >> 5U) 
                                                          & ((0U 
                                                              != 
                                                              (0x0000003fU 
                                                               & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                   << 3U) 
                                                                  | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x0000001dU)))) 
                                                             & ((0x0000003fU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                                            >> 0x0000001eU))) 
                                                                == 
                                                                (0x0000003fU 
                                                                 & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                     << 3U) 
                                                                    | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x0000001dU)))))) 
                                                         | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                                                            & ((0U 
                                                                != 
                                                                (0x0000003fU 
                                                                 & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                     << 3U) 
                                                                    | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x0000001dU)))) 
                                                               & ((0x0000003fU 
                                                                   & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                       << 3U) 
                                                                      | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                         >> 0x0000001dU))) 
                                                                  == 
                                                                  (0x0000003fU 
                                                                   & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                                      >> 9U))))))))))) 
                                         << 1U) & (vlSelfRef.__PVT__slot_uop[3U] 
                                                   >> 0x00000010U))) 
                                 | (1U & ((~ (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                               & ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.__PVT__slot_uop[3U] 
                                                       >> 0x00000017U))) 
                                                  & ((0x0000003fU 
                                                      & (vlSelfRef.__PVT__slot_uop[3U] 
                                                         >> 0x00000017U)) 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                         >> 9U))))) 
                                              | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.__PVT__slot_uop[3U] 
                                                          >> 0x00000017U))) 
                                                     & ((0x0000003fU 
                                                         & (vlSelfRef.__PVT__slot_uop[3U] 
                                                            >> 0x00000017U)) 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                            >> 9U))))) 
                                                 | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                     & ((0U 
                                                         != 
                                                         (0x0000003fU 
                                                          & (vlSelfRef.__PVT__slot_uop[3U] 
                                                             >> 0x00000017U))) 
                                                        & ((0x0000003fU 
                                                            & (vlSelfRef.__PVT__slot_uop[3U] 
                                                               >> 0x00000017U)) 
                                                           == 
                                                           (0x0000003fU 
                                                            & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                               >> 9U))))) 
                                                    | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                                                        & ((0U 
                                                            != 
                                                            (0x0000003fU 
                                                             & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                >> 0x00000017U))) 
                                                           & ((0x0000003fU 
                                                               & (vlSymsp->TOP.lsu_resp[5U] 
                                                                  >> 0x00000010U)) 
                                                              == 
                                                              (0x0000003fU 
                                                               & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                  >> 0x00000017U))))) 
                                                       | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                                                            >> 5U) 
                                                           & ((0U 
                                                               != 
                                                               (0x0000003fU 
                                                                & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                   >> 0x00000017U))) 
                                                              & ((0x0000003fU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                                             >> 0x0000001eU))) 
                                                                 == 
                                                                 (0x0000003fU 
                                                                  & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x00000017U))))) 
                                                          | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                                                             & ((0U 
                                                                 != 
                                                                 (0x0000003fU 
                                                                  & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x00000017U))) 
                                                                & ((0x0000003fU 
                                                                    & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x00000017U)) 
                                                                   == 
                                                                   (0x0000003fU 
                                                                    & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                                       >> 9U))))))))))) 
                                          & (vlSelfRef.__PVT__slot_uop[3U] 
                                             >> 0x00000010U)))) 
                                << 0x00000010U));
    if ((((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
          & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U))) & ((0x0000003fU 
                                                 & (vlSelfRef.__PVT__slot_uop[4U] 
                                                    >> 3U)) 
                                                == 
                                                (0x0000003fU 
                                                 & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                    >> 9U))))) 
         | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
             & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                       >> 3U))) & (
                                                   (0x0000003fU 
                                                    & (vlSelfRef.__PVT__slot_uop[4U] 
                                                       >> 3U)) 
                                                   == 
                                                   (0x0000003fU 
                                                    & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                       >> 9U))))) 
            | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                          >> 3U))) 
                   & ((0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                      >> 3U)) == (0x0000003fU 
                                                  & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                     >> 9U))))) 
               | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                   & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                             >> 3U))) 
                      & ((0x0000003fU & (vlSymsp->TOP.lsu_resp[5U] 
                                         >> 0x00000010U)) 
                         == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                            >> 3U))))) 
                  | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                       >> 5U) & ((0U != (0x0000003fU 
                                         & (vlSelfRef.__PVT__slot_uop[4U] 
                                            >> 3U))) 
                                 & ((0x0000003fU & (IData)(
                                                           (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                            >> 0x0000001eU))) 
                                    == (0x0000003fU 
                                        & (vlSelfRef.__PVT__slot_uop[4U] 
                                           >> 3U))))) 
                     | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                        & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                                  >> 3U))) 
                           & ((0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                              >> 3U)) 
                              == (0x0000003fU & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                 >> 9U))))))))))) {
        __Vtemp_5[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (0x00003ffeU 
                                             & (vlSelfRef.__PVT__slot_uop[3U] 
                                                >> 0x00000012U)));
        __Vtemp_5[1U] = ((1U & (vlSelfRef.__PVT__slot_uop[4U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[5U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[4U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[2U] = ((1U & (vlSelfRef.__PVT__slot_uop[5U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[6U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[5U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[3U] = ((1U & (vlSelfRef.__PVT__slot_uop[6U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[7U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[6U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[4U] = ((1U & (vlSelfRef.__PVT__slot_uop[7U] 
                                >> 0x00000012U)) | 
                         (0x0000003eU & (vlSelfRef.__PVT__slot_uop[7U] 
                                         >> 0x00000012U)));
    } else {
        __Vtemp_5[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[3U] 
                                             >> 0x00000012U));
        __Vtemp_5[1U] = ((vlSelfRef.__PVT__slot_uop[5U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[4U] 
                                             >> 0x00000012U));
        __Vtemp_5[2U] = ((vlSelfRef.__PVT__slot_uop[6U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[5U] 
                                             >> 0x00000012U));
        __Vtemp_5[3U] = ((vlSelfRef.__PVT__slot_uop[7U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[6U] 
                                             >> 0x00000012U));
        __Vtemp_5[4U] = ((vlSelfRef.__PVT__slot_uop[8U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[7U] 
                                             >> 0x00000012U));
    }
    vlSelfRef.iss_uop[3U] = ((0x0003ffffU & vlSelfRef.iss_uop[3U]) 
                             | (__Vtemp_5[0U] << 0x00000012U));
    vlSelfRef.iss_uop[4U] = ((__Vtemp_5[0U] >> 0x0000000eU) 
                             | (__Vtemp_5[1U] << 0x00000012U));
    vlSelfRef.iss_uop[5U] = ((__Vtemp_5[1U] >> 0x0000000eU) 
                             | (__Vtemp_5[2U] << 0x00000012U));
    vlSelfRef.iss_uop[6U] = ((__Vtemp_5[2U] >> 0x0000000eU) 
                             | (__Vtemp_5[3U] << 0x00000012U));
    vlSelfRef.iss_uop[7U] = ((0xff000000U & vlSelfRef.iss_uop[7U]) 
                             | ((__Vtemp_5[3U] >> 0x0000000eU) 
                                | (0x00fc0000U & (__Vtemp_5[4U] 
                                                  << 0x00000012U))));
    vlSelfRef.iss_uop[7U] = ((0x00ffffffU & vlSelfRef.iss_uop[7U]) 
                             | (((0x0001fff0U & ((vlSelfRef.__PVT__slot_uop[8U] 
                                                  << 8U) 
                                                 | (0x000000f0U 
                                                    & (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U)))) 
                                 | (0x0000000fU & (
                                                   (~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                   & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                       << 8U) 
                                                      | (vlSelfRef.__PVT__slot_uop[7U] 
                                                         >> 0x00000018U))))) 
                                << 0x00000018U));
    vlSelfRef.iss_uop[8U] = ((0xfffffe00U & vlSelfRef.iss_uop[8U]) 
                             | (((0x0001fff0U & ((vlSelfRef.__PVT__slot_uop[8U] 
                                                  << 8U) 
                                                 | (0x000000f0U 
                                                    & (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U)))) 
                                 | (0x0000000fU & (
                                                   (~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                   & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                       << 8U) 
                                                      | (vlSelfRef.__PVT__slot_uop[7U] 
                                                         >> 0x00000018U))))) 
                                >> 8U));
    vlSelfRef.iss_uop[8U] = ((0x000001ffU & vlSelfRef.iss_uop[8U]) 
                             | ((((vlSelfRef.__PVT__slot_uop[9U] 
                                   << 0x00000017U) 
                                  | (0x007ffffeU & 
                                     (vlSelfRef.__PVT__slot_uop[8U] 
                                      >> 9U))) | (1U 
                                                  & (IData)(vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_grant))) 
                                << 9U));
    vlSelfRef.iss_uop[9U] = (((((vlSelfRef.__PVT__slot_uop[9U] 
                                 << 0x00000017U) | 
                                (0x007ffffeU & (vlSelfRef.__PVT__slot_uop[8U] 
                                                >> 9U))) 
                               | (1U & (IData)(vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_grant))) 
                              >> 0x00000017U) | (((1U 
                                                   & (vlSelfRef.__PVT__slot_uop[9U] 
                                                      >> 9U)) 
                                                  | ((vlSelfRef.__PVT__slot_uop[10U] 
                                                      << 0x00000017U) 
                                                     | (0x007ffffeU 
                                                        & (vlSelfRef.__PVT__slot_uop[9U] 
                                                           >> 9U)))) 
                                                 << 9U));
    vlSelfRef.iss_uop[10U] = ((((1U & (vlSelfRef.__PVT__slot_uop[9U] 
                                       >> 9U)) | ((vlSelfRef.__PVT__slot_uop[10U] 
                                                   << 0x00000017U) 
                                                  | (0x007ffffeU 
                                                     & (vlSelfRef.__PVT__slot_uop[9U] 
                                                        >> 9U)))) 
                               >> 0x00000017U) | ((
                                                   (1U 
                                                    & (vlSelfRef.__PVT__slot_uop[10U] 
                                                       >> 9U)) 
                                                   | ((vlSelfRef.__PVT__slot_uop[11U] 
                                                       << 0x00000017U) 
                                                      | (0x007ffffeU 
                                                         & (vlSelfRef.__PVT__slot_uop[10U] 
                                                            >> 9U)))) 
                                                  << 9U));
    vlSelfRef.iss_uop[11U] = (0x01ffffffU & ((((1U 
                                                & (vlSelfRef.__PVT__slot_uop[10U] 
                                                   >> 9U)) 
                                               | ((vlSelfRef.__PVT__slot_uop[11U] 
                                                   << 0x00000017U) 
                                                  | (0x007ffffeU 
                                                     & (vlSelfRef.__PVT__slot_uop[10U] 
                                                        >> 9U)))) 
                                              >> 0x00000017U) 
                                             | (((1U 
                                                  & (vlSelfRef.__PVT__slot_uop[11U] 
                                                     >> 9U)) 
                                                 | (0x0000fffeU 
                                                    & (vlSelfRef.__PVT__slot_uop[11U] 
                                                       >> 9U))) 
                                                << 9U)));
    vlSelfRef.request = ((~ ((IData)(vlSelfRef.__PVT__killed) 
                             | ((vlSelfRef.__PVT__slot_uop[8U] 
                                 >> 9U) | (0U != (7U 
                                                  & (vlSelfRef.iss_uop[3U] 
                                                     >> 0x00000010U)))))) 
                         & (IData)(vlSelfRef.__PVT__slot_valid));
}

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__unq_iq__DOT__gen_slots__BRA__0__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__unq_iq__DOT__gen_slots__BRA__0__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<12>/*376:0*/ __Vdly__slot_uop;
    VL_ZERO_W(377, __Vdly__slot_uop);
    // Body
    __Vdly__slot_uop[0U] = vlSelfRef.__PVT__slot_uop[0U];
    __Vdly__slot_uop[1U] = vlSelfRef.__PVT__slot_uop[1U];
    __Vdly__slot_uop[2U] = vlSelfRef.__PVT__slot_uop[2U];
    __Vdly__slot_uop[3U] = vlSelfRef.__PVT__slot_uop[3U];
    __Vdly__slot_uop[4U] = vlSelfRef.__PVT__slot_uop[4U];
    __Vdly__slot_uop[5U] = vlSelfRef.__PVT__slot_uop[5U];
    __Vdly__slot_uop[6U] = vlSelfRef.__PVT__slot_uop[6U];
    __Vdly__slot_uop[7U] = vlSelfRef.__PVT__slot_uop[7U];
    __Vdly__slot_uop[8U] = vlSelfRef.__PVT__slot_uop[8U];
    __Vdly__slot_uop[9U] = vlSelfRef.__PVT__slot_uop[9U];
    __Vdly__slot_uop[10U] = vlSelfRef.__PVT__slot_uop[10U];
    __Vdly__slot_uop[11U] = vlSelfRef.__PVT__slot_uop[11U];
    if ((1U & (IData)(vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[0U];
        __Vdly__slot_uop[1U] = vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[1U];
        __Vdly__slot_uop[2U] = vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[2U];
        __Vdly__slot_uop[3U] = vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[3U];
        __Vdly__slot_uop[4U] = vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[4U];
        __Vdly__slot_uop[5U] = vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[5U];
        __Vdly__slot_uop[6U] = vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[6U];
        __Vdly__slot_uop[7U] = vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[7U];
        __Vdly__slot_uop[8U] = vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[8U];
        __Vdly__slot_uop[9U] = vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[9U];
        __Vdly__slot_uop[10U] = vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[10U];
        __Vdly__slot_uop[11U] = (0x01ffffffU & vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[11U]);
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((1U & (IData)(vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_grant))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((1U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((2U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                 >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                  << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                            >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                 >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((4U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((8U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((0x00000010U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((0x00000020U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
    }
    vlSelfRef.__PVT__slot_uop[0U] = __Vdly__slot_uop[0U];
    vlSelfRef.__PVT__slot_uop[1U] = __Vdly__slot_uop[1U];
    vlSelfRef.__PVT__slot_uop[2U] = __Vdly__slot_uop[2U];
    vlSelfRef.__PVT__slot_uop[3U] = __Vdly__slot_uop[3U];
    vlSelfRef.__PVT__slot_uop[4U] = __Vdly__slot_uop[4U];
    vlSelfRef.__PVT__slot_uop[5U] = __Vdly__slot_uop[5U];
    vlSelfRef.__PVT__slot_uop[6U] = __Vdly__slot_uop[6U];
    vlSelfRef.__PVT__slot_uop[7U] = __Vdly__slot_uop[7U];
    vlSelfRef.__PVT__slot_uop[8U] = __Vdly__slot_uop[8U];
    vlSelfRef.__PVT__slot_uop[9U] = __Vdly__slot_uop[9U];
    vlSelfRef.__PVT__slot_uop[10U] = __Vdly__slot_uop[10U];
    vlSelfRef.__PVT__slot_uop[11U] = __Vdly__slot_uop[11U];
}

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__unq_iq__DOT__gen_slots__BRA__0__KET____DOT__slot__1(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__unq_iq__DOT__gen_slots__BRA__0__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((1U & (IData)(vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((1U & (IData)(vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_grant))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((1U & (IData)(vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__unq_iq__DOT__gen_slots__BRA__1__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__unq_iq__DOT__gen_slots__BRA__1__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_5;
    // Body
    vlSelfRef.iss_uop[0U] = vlSelfRef.__PVT__slot_uop[0U];
    vlSelfRef.iss_uop[1U] = vlSelfRef.__PVT__slot_uop[1U];
    vlSelfRef.iss_uop[2U] = vlSelfRef.__PVT__slot_uop[2U];
    vlSelfRef.iss_uop[3U] = ((0xffff0000U & vlSelfRef.iss_uop[3U]) 
                             | (0x0000ffffU & vlSelfRef.__PVT__slot_uop[3U]));
    vlSelfRef.iss_uop[3U] = ((0xfffcffffU & vlSelfRef.iss_uop[3U]) 
                             | (((2U & (((~ (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                              & ((0U 
                                                  != 
                                                  (0x0000003fU 
                                                   & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__PVT__slot_uop[3U] 
                                                         >> 0x0000001dU)))) 
                                                 & ((0x0000003fU 
                                                     & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                         << 3U) 
                                                        | (vlSelfRef.__PVT__slot_uop[3U] 
                                                           >> 0x0000001dU))) 
                                                    == 
                                                    (0x0000003fU 
                                                     & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                        >> 9U))))) 
                                             | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                 & ((0U 
                                                     != 
                                                     (0x0000003fU 
                                                      & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                          << 3U) 
                                                         | (vlSelfRef.__PVT__slot_uop[3U] 
                                                            >> 0x0000001dU)))) 
                                                    & ((0x0000003fU 
                                                        & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                            << 3U) 
                                                           | (vlSelfRef.__PVT__slot_uop[3U] 
                                                              >> 0x0000001dU))) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                           >> 9U))))) 
                                                | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                    & ((0U 
                                                        != 
                                                        (0x0000003fU 
                                                         & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                             << 3U) 
                                                            | (vlSelfRef.__PVT__slot_uop[3U] 
                                                               >> 0x0000001dU)))) 
                                                       & ((0x0000003fU 
                                                           & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                               << 3U) 
                                                              | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                 >> 0x0000001dU))) 
                                                          == 
                                                          (0x0000003fU 
                                                           & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                              >> 9U))))) 
                                                   | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                                                       & ((0U 
                                                           != 
                                                           (0x0000003fU 
                                                            & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                << 3U) 
                                                               | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                  >> 0x0000001dU)))) 
                                                          & ((0x0000003fU 
                                                              & (vlSymsp->TOP.lsu_resp[5U] 
                                                                 >> 0x00000010U)) 
                                                             == 
                                                             (0x0000003fU 
                                                              & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                  << 3U) 
                                                                 | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                    >> 0x0000001dU)))))) 
                                                      | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                                                           >> 5U) 
                                                          & ((0U 
                                                              != 
                                                              (0x0000003fU 
                                                               & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                   << 3U) 
                                                                  | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x0000001dU)))) 
                                                             & ((0x0000003fU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                                            >> 0x0000001eU))) 
                                                                == 
                                                                (0x0000003fU 
                                                                 & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                     << 3U) 
                                                                    | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x0000001dU)))))) 
                                                         | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                                                            & ((0U 
                                                                != 
                                                                (0x0000003fU 
                                                                 & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                     << 3U) 
                                                                    | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x0000001dU)))) 
                                                               & ((0x0000003fU 
                                                                   & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                       << 3U) 
                                                                      | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                         >> 0x0000001dU))) 
                                                                  == 
                                                                  (0x0000003fU 
                                                                   & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                                      >> 9U))))))))))) 
                                         << 1U) & (vlSelfRef.__PVT__slot_uop[3U] 
                                                   >> 0x00000010U))) 
                                 | (1U & ((~ (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                               & ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.__PVT__slot_uop[3U] 
                                                       >> 0x00000017U))) 
                                                  & ((0x0000003fU 
                                                      & (vlSelfRef.__PVT__slot_uop[3U] 
                                                         >> 0x00000017U)) 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                         >> 9U))))) 
                                              | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.__PVT__slot_uop[3U] 
                                                          >> 0x00000017U))) 
                                                     & ((0x0000003fU 
                                                         & (vlSelfRef.__PVT__slot_uop[3U] 
                                                            >> 0x00000017U)) 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                            >> 9U))))) 
                                                 | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                     & ((0U 
                                                         != 
                                                         (0x0000003fU 
                                                          & (vlSelfRef.__PVT__slot_uop[3U] 
                                                             >> 0x00000017U))) 
                                                        & ((0x0000003fU 
                                                            & (vlSelfRef.__PVT__slot_uop[3U] 
                                                               >> 0x00000017U)) 
                                                           == 
                                                           (0x0000003fU 
                                                            & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                               >> 9U))))) 
                                                    | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                                                        & ((0U 
                                                            != 
                                                            (0x0000003fU 
                                                             & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                >> 0x00000017U))) 
                                                           & ((0x0000003fU 
                                                               & (vlSymsp->TOP.lsu_resp[5U] 
                                                                  >> 0x00000010U)) 
                                                              == 
                                                              (0x0000003fU 
                                                               & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                  >> 0x00000017U))))) 
                                                       | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                                                            >> 5U) 
                                                           & ((0U 
                                                               != 
                                                               (0x0000003fU 
                                                                & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                   >> 0x00000017U))) 
                                                              & ((0x0000003fU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                                             >> 0x0000001eU))) 
                                                                 == 
                                                                 (0x0000003fU 
                                                                  & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x00000017U))))) 
                                                          | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                                                             & ((0U 
                                                                 != 
                                                                 (0x0000003fU 
                                                                  & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x00000017U))) 
                                                                & ((0x0000003fU 
                                                                    & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x00000017U)) 
                                                                   == 
                                                                   (0x0000003fU 
                                                                    & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                                       >> 9U))))))))))) 
                                          & (vlSelfRef.__PVT__slot_uop[3U] 
                                             >> 0x00000010U)))) 
                                << 0x00000010U));
    if ((((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
          & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U))) & ((0x0000003fU 
                                                 & (vlSelfRef.__PVT__slot_uop[4U] 
                                                    >> 3U)) 
                                                == 
                                                (0x0000003fU 
                                                 & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                    >> 9U))))) 
         | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
             & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                       >> 3U))) & (
                                                   (0x0000003fU 
                                                    & (vlSelfRef.__PVT__slot_uop[4U] 
                                                       >> 3U)) 
                                                   == 
                                                   (0x0000003fU 
                                                    & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                       >> 9U))))) 
            | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                          >> 3U))) 
                   & ((0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                      >> 3U)) == (0x0000003fU 
                                                  & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                     >> 9U))))) 
               | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                   & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                             >> 3U))) 
                      & ((0x0000003fU & (vlSymsp->TOP.lsu_resp[5U] 
                                         >> 0x00000010U)) 
                         == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                            >> 3U))))) 
                  | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                       >> 5U) & ((0U != (0x0000003fU 
                                         & (vlSelfRef.__PVT__slot_uop[4U] 
                                            >> 3U))) 
                                 & ((0x0000003fU & (IData)(
                                                           (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                            >> 0x0000001eU))) 
                                    == (0x0000003fU 
                                        & (vlSelfRef.__PVT__slot_uop[4U] 
                                           >> 3U))))) 
                     | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                        & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                                  >> 3U))) 
                           & ((0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                              >> 3U)) 
                              == (0x0000003fU & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                 >> 9U))))))))))) {
        __Vtemp_5[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (0x00003ffeU 
                                             & (vlSelfRef.__PVT__slot_uop[3U] 
                                                >> 0x00000012U)));
        __Vtemp_5[1U] = ((1U & (vlSelfRef.__PVT__slot_uop[4U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[5U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[4U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[2U] = ((1U & (vlSelfRef.__PVT__slot_uop[5U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[6U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[5U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[3U] = ((1U & (vlSelfRef.__PVT__slot_uop[6U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[7U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[6U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[4U] = ((1U & (vlSelfRef.__PVT__slot_uop[7U] 
                                >> 0x00000012U)) | 
                         (0x0000003eU & (vlSelfRef.__PVT__slot_uop[7U] 
                                         >> 0x00000012U)));
    } else {
        __Vtemp_5[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[3U] 
                                             >> 0x00000012U));
        __Vtemp_5[1U] = ((vlSelfRef.__PVT__slot_uop[5U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[4U] 
                                             >> 0x00000012U));
        __Vtemp_5[2U] = ((vlSelfRef.__PVT__slot_uop[6U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[5U] 
                                             >> 0x00000012U));
        __Vtemp_5[3U] = ((vlSelfRef.__PVT__slot_uop[7U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[6U] 
                                             >> 0x00000012U));
        __Vtemp_5[4U] = ((vlSelfRef.__PVT__slot_uop[8U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[7U] 
                                             >> 0x00000012U));
    }
    vlSelfRef.iss_uop[3U] = ((0x0003ffffU & vlSelfRef.iss_uop[3U]) 
                             | (__Vtemp_5[0U] << 0x00000012U));
    vlSelfRef.iss_uop[4U] = ((__Vtemp_5[0U] >> 0x0000000eU) 
                             | (__Vtemp_5[1U] << 0x00000012U));
    vlSelfRef.iss_uop[5U] = ((__Vtemp_5[1U] >> 0x0000000eU) 
                             | (__Vtemp_5[2U] << 0x00000012U));
    vlSelfRef.iss_uop[6U] = ((__Vtemp_5[2U] >> 0x0000000eU) 
                             | (__Vtemp_5[3U] << 0x00000012U));
    vlSelfRef.iss_uop[7U] = ((0xff000000U & vlSelfRef.iss_uop[7U]) 
                             | ((__Vtemp_5[3U] >> 0x0000000eU) 
                                | (0x00fc0000U & (__Vtemp_5[4U] 
                                                  << 0x00000012U))));
    vlSelfRef.iss_uop[7U] = ((0x00ffffffU & vlSelfRef.iss_uop[7U]) 
                             | (((0x0001fff0U & ((vlSelfRef.__PVT__slot_uop[8U] 
                                                  << 8U) 
                                                 | (0x000000f0U 
                                                    & (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U)))) 
                                 | (0x0000000fU & (
                                                   (~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                   & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                       << 8U) 
                                                      | (vlSelfRef.__PVT__slot_uop[7U] 
                                                         >> 0x00000018U))))) 
                                << 0x00000018U));
    vlSelfRef.iss_uop[8U] = ((0xfffffe00U & vlSelfRef.iss_uop[8U]) 
                             | (((0x0001fff0U & ((vlSelfRef.__PVT__slot_uop[8U] 
                                                  << 8U) 
                                                 | (0x000000f0U 
                                                    & (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U)))) 
                                 | (0x0000000fU & (
                                                   (~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                   & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                       << 8U) 
                                                      | (vlSelfRef.__PVT__slot_uop[7U] 
                                                         >> 0x00000018U))))) 
                                >> 8U));
    vlSelfRef.iss_uop[8U] = ((0x000001ffU & vlSelfRef.iss_uop[8U]) 
                             | ((((vlSelfRef.__PVT__slot_uop[9U] 
                                   << 0x00000017U) 
                                  | (0x007ffffeU & 
                                     (vlSelfRef.__PVT__slot_uop[8U] 
                                      >> 9U))) | (1U 
                                                  & ((IData)(vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_grant) 
                                                     >> 1U))) 
                                << 9U));
    vlSelfRef.iss_uop[9U] = (((((vlSelfRef.__PVT__slot_uop[9U] 
                                 << 0x00000017U) | 
                                (0x007ffffeU & (vlSelfRef.__PVT__slot_uop[8U] 
                                                >> 9U))) 
                               | (1U & ((IData)(vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_grant) 
                                        >> 1U))) >> 0x00000017U) 
                             | (((1U & (vlSelfRef.__PVT__slot_uop[9U] 
                                        >> 9U)) | (
                                                   (vlSelfRef.__PVT__slot_uop[10U] 
                                                    << 0x00000017U) 
                                                   | (0x007ffffeU 
                                                      & (vlSelfRef.__PVT__slot_uop[9U] 
                                                         >> 9U)))) 
                                << 9U));
    vlSelfRef.iss_uop[10U] = ((((1U & (vlSelfRef.__PVT__slot_uop[9U] 
                                       >> 9U)) | ((vlSelfRef.__PVT__slot_uop[10U] 
                                                   << 0x00000017U) 
                                                  | (0x007ffffeU 
                                                     & (vlSelfRef.__PVT__slot_uop[9U] 
                                                        >> 9U)))) 
                               >> 0x00000017U) | ((
                                                   (1U 
                                                    & (vlSelfRef.__PVT__slot_uop[10U] 
                                                       >> 9U)) 
                                                   | ((vlSelfRef.__PVT__slot_uop[11U] 
                                                       << 0x00000017U) 
                                                      | (0x007ffffeU 
                                                         & (vlSelfRef.__PVT__slot_uop[10U] 
                                                            >> 9U)))) 
                                                  << 9U));
    vlSelfRef.iss_uop[11U] = (0x01ffffffU & ((((1U 
                                                & (vlSelfRef.__PVT__slot_uop[10U] 
                                                   >> 9U)) 
                                               | ((vlSelfRef.__PVT__slot_uop[11U] 
                                                   << 0x00000017U) 
                                                  | (0x007ffffeU 
                                                     & (vlSelfRef.__PVT__slot_uop[10U] 
                                                        >> 9U)))) 
                                              >> 0x00000017U) 
                                             | (((1U 
                                                  & (vlSelfRef.__PVT__slot_uop[11U] 
                                                     >> 9U)) 
                                                 | (0x0000fffeU 
                                                    & (vlSelfRef.__PVT__slot_uop[11U] 
                                                       >> 9U))) 
                                                << 9U)));
    vlSelfRef.request = ((~ ((IData)(vlSelfRef.__PVT__killed) 
                             | ((vlSelfRef.__PVT__slot_uop[8U] 
                                 >> 9U) | (0U != (7U 
                                                  & (vlSelfRef.iss_uop[3U] 
                                                     >> 0x00000010U)))))) 
                         & (IData)(vlSelfRef.__PVT__slot_valid));
}

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__unq_iq__DOT__gen_slots__BRA__1__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__unq_iq__DOT__gen_slots__BRA__1__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<12>/*376:0*/ __Vdly__slot_uop;
    VL_ZERO_W(377, __Vdly__slot_uop);
    // Body
    __Vdly__slot_uop[0U] = vlSelfRef.__PVT__slot_uop[0U];
    __Vdly__slot_uop[1U] = vlSelfRef.__PVT__slot_uop[1U];
    __Vdly__slot_uop[2U] = vlSelfRef.__PVT__slot_uop[2U];
    __Vdly__slot_uop[3U] = vlSelfRef.__PVT__slot_uop[3U];
    __Vdly__slot_uop[4U] = vlSelfRef.__PVT__slot_uop[4U];
    __Vdly__slot_uop[5U] = vlSelfRef.__PVT__slot_uop[5U];
    __Vdly__slot_uop[6U] = vlSelfRef.__PVT__slot_uop[6U];
    __Vdly__slot_uop[7U] = vlSelfRef.__PVT__slot_uop[7U];
    __Vdly__slot_uop[8U] = vlSelfRef.__PVT__slot_uop[8U];
    __Vdly__slot_uop[9U] = vlSelfRef.__PVT__slot_uop[9U];
    __Vdly__slot_uop[10U] = vlSelfRef.__PVT__slot_uop[10U];
    __Vdly__slot_uop[11U] = vlSelfRef.__PVT__slot_uop[11U];
    if ((2U & (IData)(vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[12U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[11U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[13U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[12U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[14U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[13U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[15U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[14U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[16U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[15U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[17U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[16U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[18U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[17U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[19U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[18U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[20U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[19U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[21U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[20U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[22U] 
                                  << 7U) | (vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[21U] 
                                            >> 0x00000019U));
        __Vdly__slot_uop[11U] = (0x01ffffffU & ((vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[23U] 
                                                 << 7U) 
                                                | (vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[22U] 
                                                   >> 0x00000019U)));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((2U & (IData)(vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_grant))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((1U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((2U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                 >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                  << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                            >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                 >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((4U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((8U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((0x00000010U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((0x00000020U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
    }
    vlSelfRef.__PVT__slot_uop[0U] = __Vdly__slot_uop[0U];
    vlSelfRef.__PVT__slot_uop[1U] = __Vdly__slot_uop[1U];
    vlSelfRef.__PVT__slot_uop[2U] = __Vdly__slot_uop[2U];
    vlSelfRef.__PVT__slot_uop[3U] = __Vdly__slot_uop[3U];
    vlSelfRef.__PVT__slot_uop[4U] = __Vdly__slot_uop[4U];
    vlSelfRef.__PVT__slot_uop[5U] = __Vdly__slot_uop[5U];
    vlSelfRef.__PVT__slot_uop[6U] = __Vdly__slot_uop[6U];
    vlSelfRef.__PVT__slot_uop[7U] = __Vdly__slot_uop[7U];
    vlSelfRef.__PVT__slot_uop[8U] = __Vdly__slot_uop[8U];
    vlSelfRef.__PVT__slot_uop[9U] = __Vdly__slot_uop[9U];
    vlSelfRef.__PVT__slot_uop[10U] = __Vdly__slot_uop[10U];
    vlSelfRef.__PVT__slot_uop[11U] = __Vdly__slot_uop[11U];
}

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__unq_iq__DOT__gen_slots__BRA__1__KET____DOT__slot__1(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__unq_iq__DOT__gen_slots__BRA__1__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((2U & (IData)(vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((2U & (IData)(vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_grant))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((2U & (IData)(vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__unq_iq__DOT__gen_slots__BRA__2__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__unq_iq__DOT__gen_slots__BRA__2__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_5;
    // Body
    vlSelfRef.iss_uop[0U] = vlSelfRef.__PVT__slot_uop[0U];
    vlSelfRef.iss_uop[1U] = vlSelfRef.__PVT__slot_uop[1U];
    vlSelfRef.iss_uop[2U] = vlSelfRef.__PVT__slot_uop[2U];
    vlSelfRef.iss_uop[3U] = ((0xffff0000U & vlSelfRef.iss_uop[3U]) 
                             | (0x0000ffffU & vlSelfRef.__PVT__slot_uop[3U]));
    vlSelfRef.iss_uop[3U] = ((0xfffcffffU & vlSelfRef.iss_uop[3U]) 
                             | (((2U & (((~ (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                              & ((0U 
                                                  != 
                                                  (0x0000003fU 
                                                   & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                       << 3U) 
                                                      | (vlSelfRef.__PVT__slot_uop[3U] 
                                                         >> 0x0000001dU)))) 
                                                 & ((0x0000003fU 
                                                     & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                         << 3U) 
                                                        | (vlSelfRef.__PVT__slot_uop[3U] 
                                                           >> 0x0000001dU))) 
                                                    == 
                                                    (0x0000003fU 
                                                     & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                        >> 9U))))) 
                                             | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                 & ((0U 
                                                     != 
                                                     (0x0000003fU 
                                                      & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                          << 3U) 
                                                         | (vlSelfRef.__PVT__slot_uop[3U] 
                                                            >> 0x0000001dU)))) 
                                                    & ((0x0000003fU 
                                                        & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                            << 3U) 
                                                           | (vlSelfRef.__PVT__slot_uop[3U] 
                                                              >> 0x0000001dU))) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                           >> 9U))))) 
                                                | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                    & ((0U 
                                                        != 
                                                        (0x0000003fU 
                                                         & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                             << 3U) 
                                                            | (vlSelfRef.__PVT__slot_uop[3U] 
                                                               >> 0x0000001dU)))) 
                                                       & ((0x0000003fU 
                                                           & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                               << 3U) 
                                                              | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                 >> 0x0000001dU))) 
                                                          == 
                                                          (0x0000003fU 
                                                           & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                              >> 9U))))) 
                                                   | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                                                       & ((0U 
                                                           != 
                                                           (0x0000003fU 
                                                            & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                << 3U) 
                                                               | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                  >> 0x0000001dU)))) 
                                                          & ((0x0000003fU 
                                                              & (vlSymsp->TOP.lsu_resp[5U] 
                                                                 >> 0x00000010U)) 
                                                             == 
                                                             (0x0000003fU 
                                                              & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                  << 3U) 
                                                                 | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                    >> 0x0000001dU)))))) 
                                                      | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                                                           >> 5U) 
                                                          & ((0U 
                                                              != 
                                                              (0x0000003fU 
                                                               & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                   << 3U) 
                                                                  | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x0000001dU)))) 
                                                             & ((0x0000003fU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                                            >> 0x0000001eU))) 
                                                                == 
                                                                (0x0000003fU 
                                                                 & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                     << 3U) 
                                                                    | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x0000001dU)))))) 
                                                         | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                                                            & ((0U 
                                                                != 
                                                                (0x0000003fU 
                                                                 & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                     << 3U) 
                                                                    | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x0000001dU)))) 
                                                               & ((0x0000003fU 
                                                                   & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                       << 3U) 
                                                                      | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                         >> 0x0000001dU))) 
                                                                  == 
                                                                  (0x0000003fU 
                                                                   & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                                      >> 9U))))))))))) 
                                         << 1U) & (vlSelfRef.__PVT__slot_uop[3U] 
                                                   >> 0x00000010U))) 
                                 | (1U & ((~ (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                               & ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.__PVT__slot_uop[3U] 
                                                       >> 0x00000017U))) 
                                                  & ((0x0000003fU 
                                                      & (vlSelfRef.__PVT__slot_uop[3U] 
                                                         >> 0x00000017U)) 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                         >> 9U))))) 
                                              | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.__PVT__slot_uop[3U] 
                                                          >> 0x00000017U))) 
                                                     & ((0x0000003fU 
                                                         & (vlSelfRef.__PVT__slot_uop[3U] 
                                                            >> 0x00000017U)) 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                            >> 9U))))) 
                                                 | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                     & ((0U 
                                                         != 
                                                         (0x0000003fU 
                                                          & (vlSelfRef.__PVT__slot_uop[3U] 
                                                             >> 0x00000017U))) 
                                                        & ((0x0000003fU 
                                                            & (vlSelfRef.__PVT__slot_uop[3U] 
                                                               >> 0x00000017U)) 
                                                           == 
                                                           (0x0000003fU 
                                                            & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                               >> 9U))))) 
                                                    | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                                                        & ((0U 
                                                            != 
                                                            (0x0000003fU 
                                                             & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                >> 0x00000017U))) 
                                                           & ((0x0000003fU 
                                                               & (vlSymsp->TOP.lsu_resp[5U] 
                                                                  >> 0x00000010U)) 
                                                              == 
                                                              (0x0000003fU 
                                                               & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                  >> 0x00000017U))))) 
                                                       | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                                                            >> 5U) 
                                                           & ((0U 
                                                               != 
                                                               (0x0000003fU 
                                                                & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                   >> 0x00000017U))) 
                                                              & ((0x0000003fU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                                             >> 0x0000001eU))) 
                                                                 == 
                                                                 (0x0000003fU 
                                                                  & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x00000017U))))) 
                                                          | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                                                             & ((0U 
                                                                 != 
                                                                 (0x0000003fU 
                                                                  & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x00000017U))) 
                                                                & ((0x0000003fU 
                                                                    & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x00000017U)) 
                                                                   == 
                                                                   (0x0000003fU 
                                                                    & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                                       >> 9U))))))))))) 
                                          & (vlSelfRef.__PVT__slot_uop[3U] 
                                             >> 0x00000010U)))) 
                                << 0x00000010U));
    if ((((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
          & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U))) & ((0x0000003fU 
                                                 & (vlSelfRef.__PVT__slot_uop[4U] 
                                                    >> 3U)) 
                                                == 
                                                (0x0000003fU 
                                                 & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                    >> 9U))))) 
         | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
             & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                       >> 3U))) & (
                                                   (0x0000003fU 
                                                    & (vlSelfRef.__PVT__slot_uop[4U] 
                                                       >> 3U)) 
                                                   == 
                                                   (0x0000003fU 
                                                    & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                       >> 9U))))) 
            | (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                          >> 3U))) 
                   & ((0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                      >> 3U)) == (0x0000003fU 
                                                  & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                     >> 9U))))) 
               | (((IData)(vlSymsp->TOP.lsu_resp_valid) 
                   & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                             >> 3U))) 
                      & ((0x0000003fU & (vlSymsp->TOP.lsu_resp[5U] 
                                         >> 0x00000010U)) 
                         == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                            >> 3U))))) 
                  | ((((IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w) 
                       >> 5U) & ((0U != (0x0000003fU 
                                         & (vlSelfRef.__PVT__slot_uop[4U] 
                                            >> 3U))) 
                                 & ((0x0000003fU & (IData)(
                                                           (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                            >> 0x0000001eU))) 
                                    == (0x0000003fU 
                                        & (vlSelfRef.__PVT__slot_uop[4U] 
                                           >> 3U))))) 
                     | ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                        & ((0U != (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                                  >> 3U))) 
                           & ((0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                              >> 3U)) 
                              == (0x0000003fU & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                 >> 9U))))))))))) {
        __Vtemp_5[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (0x00003ffeU 
                                             & (vlSelfRef.__PVT__slot_uop[3U] 
                                                >> 0x00000012U)));
        __Vtemp_5[1U] = ((1U & (vlSelfRef.__PVT__slot_uop[4U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[5U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[4U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[2U] = ((1U & (vlSelfRef.__PVT__slot_uop[5U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[6U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[5U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[3U] = ((1U & (vlSelfRef.__PVT__slot_uop[6U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[7U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[6U] 
                                                 >> 0x00000012U))));
        __Vtemp_5[4U] = ((1U & (vlSelfRef.__PVT__slot_uop[7U] 
                                >> 0x00000012U)) | 
                         (0x0000003eU & (vlSelfRef.__PVT__slot_uop[7U] 
                                         >> 0x00000012U)));
    } else {
        __Vtemp_5[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[3U] 
                                             >> 0x00000012U));
        __Vtemp_5[1U] = ((vlSelfRef.__PVT__slot_uop[5U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[4U] 
                                             >> 0x00000012U));
        __Vtemp_5[2U] = ((vlSelfRef.__PVT__slot_uop[6U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[5U] 
                                             >> 0x00000012U));
        __Vtemp_5[3U] = ((vlSelfRef.__PVT__slot_uop[7U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[6U] 
                                             >> 0x00000012U));
        __Vtemp_5[4U] = ((vlSelfRef.__PVT__slot_uop[8U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[7U] 
                                             >> 0x00000012U));
    }
    vlSelfRef.iss_uop[3U] = ((0x0003ffffU & vlSelfRef.iss_uop[3U]) 
                             | (__Vtemp_5[0U] << 0x00000012U));
    vlSelfRef.iss_uop[4U] = ((__Vtemp_5[0U] >> 0x0000000eU) 
                             | (__Vtemp_5[1U] << 0x00000012U));
    vlSelfRef.iss_uop[5U] = ((__Vtemp_5[1U] >> 0x0000000eU) 
                             | (__Vtemp_5[2U] << 0x00000012U));
    vlSelfRef.iss_uop[6U] = ((__Vtemp_5[2U] >> 0x0000000eU) 
                             | (__Vtemp_5[3U] << 0x00000012U));
    vlSelfRef.iss_uop[7U] = ((0xff000000U & vlSelfRef.iss_uop[7U]) 
                             | ((__Vtemp_5[3U] >> 0x0000000eU) 
                                | (0x00fc0000U & (__Vtemp_5[4U] 
                                                  << 0x00000012U))));
    vlSelfRef.iss_uop[7U] = ((0x00ffffffU & vlSelfRef.iss_uop[7U]) 
                             | (((0x0001fff0U & ((vlSelfRef.__PVT__slot_uop[8U] 
                                                  << 8U) 
                                                 | (0x000000f0U 
                                                    & (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U)))) 
                                 | (0x0000000fU & (
                                                   (~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                   & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                       << 8U) 
                                                      | (vlSelfRef.__PVT__slot_uop[7U] 
                                                         >> 0x00000018U))))) 
                                << 0x00000018U));
    vlSelfRef.iss_uop[8U] = ((0xfffffe00U & vlSelfRef.iss_uop[8U]) 
                             | (((0x0001fff0U & ((vlSelfRef.__PVT__slot_uop[8U] 
                                                  << 8U) 
                                                 | (0x000000f0U 
                                                    & (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U)))) 
                                 | (0x0000000fU & (
                                                   (~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                   & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                       << 8U) 
                                                      | (vlSelfRef.__PVT__slot_uop[7U] 
                                                         >> 0x00000018U))))) 
                                >> 8U));
    vlSelfRef.iss_uop[8U] = ((0x000001ffU & vlSelfRef.iss_uop[8U]) 
                             | ((((vlSelfRef.__PVT__slot_uop[9U] 
                                   << 0x00000017U) 
                                  | (0x007ffffeU & 
                                     (vlSelfRef.__PVT__slot_uop[8U] 
                                      >> 9U))) | (1U 
                                                  & ((IData)(vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_grant) 
                                                     >> 2U))) 
                                << 9U));
    vlSelfRef.iss_uop[9U] = (((((vlSelfRef.__PVT__slot_uop[9U] 
                                 << 0x00000017U) | 
                                (0x007ffffeU & (vlSelfRef.__PVT__slot_uop[8U] 
                                                >> 9U))) 
                               | (1U & ((IData)(vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_grant) 
                                        >> 2U))) >> 0x00000017U) 
                             | (((1U & (vlSelfRef.__PVT__slot_uop[9U] 
                                        >> 9U)) | (
                                                   (vlSelfRef.__PVT__slot_uop[10U] 
                                                    << 0x00000017U) 
                                                   | (0x007ffffeU 
                                                      & (vlSelfRef.__PVT__slot_uop[9U] 
                                                         >> 9U)))) 
                                << 9U));
    vlSelfRef.iss_uop[10U] = ((((1U & (vlSelfRef.__PVT__slot_uop[9U] 
                                       >> 9U)) | ((vlSelfRef.__PVT__slot_uop[10U] 
                                                   << 0x00000017U) 
                                                  | (0x007ffffeU 
                                                     & (vlSelfRef.__PVT__slot_uop[9U] 
                                                        >> 9U)))) 
                               >> 0x00000017U) | ((
                                                   (1U 
                                                    & (vlSelfRef.__PVT__slot_uop[10U] 
                                                       >> 9U)) 
                                                   | ((vlSelfRef.__PVT__slot_uop[11U] 
                                                       << 0x00000017U) 
                                                      | (0x007ffffeU 
                                                         & (vlSelfRef.__PVT__slot_uop[10U] 
                                                            >> 9U)))) 
                                                  << 9U));
    vlSelfRef.iss_uop[11U] = (0x01ffffffU & ((((1U 
                                                & (vlSelfRef.__PVT__slot_uop[10U] 
                                                   >> 9U)) 
                                               | ((vlSelfRef.__PVT__slot_uop[11U] 
                                                   << 0x00000017U) 
                                                  | (0x007ffffeU 
                                                     & (vlSelfRef.__PVT__slot_uop[10U] 
                                                        >> 9U)))) 
                                              >> 0x00000017U) 
                                             | (((1U 
                                                  & (vlSelfRef.__PVT__slot_uop[11U] 
                                                     >> 9U)) 
                                                 | (0x0000fffeU 
                                                    & (vlSelfRef.__PVT__slot_uop[11U] 
                                                       >> 9U))) 
                                                << 9U)));
    vlSelfRef.request = ((~ ((IData)(vlSelfRef.__PVT__killed) 
                             | ((vlSelfRef.__PVT__slot_uop[8U] 
                                 >> 9U) | (0U != (7U 
                                                  & (vlSelfRef.iss_uop[3U] 
                                                     >> 0x00000010U)))))) 
                         & (IData)(vlSelfRef.__PVT__slot_valid));
}

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__unq_iq__DOT__gen_slots__BRA__2__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__unq_iq__DOT__gen_slots__BRA__2__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<12>/*376:0*/ __Vdly__slot_uop;
    VL_ZERO_W(377, __Vdly__slot_uop);
    // Body
    __Vdly__slot_uop[0U] = vlSelfRef.__PVT__slot_uop[0U];
    __Vdly__slot_uop[1U] = vlSelfRef.__PVT__slot_uop[1U];
    __Vdly__slot_uop[2U] = vlSelfRef.__PVT__slot_uop[2U];
    __Vdly__slot_uop[3U] = vlSelfRef.__PVT__slot_uop[3U];
    __Vdly__slot_uop[4U] = vlSelfRef.__PVT__slot_uop[4U];
    __Vdly__slot_uop[5U] = vlSelfRef.__PVT__slot_uop[5U];
    __Vdly__slot_uop[6U] = vlSelfRef.__PVT__slot_uop[6U];
    __Vdly__slot_uop[7U] = vlSelfRef.__PVT__slot_uop[7U];
    __Vdly__slot_uop[8U] = vlSelfRef.__PVT__slot_uop[8U];
    __Vdly__slot_uop[9U] = vlSelfRef.__PVT__slot_uop[9U];
    __Vdly__slot_uop[10U] = vlSelfRef.__PVT__slot_uop[10U];
    __Vdly__slot_uop[11U] = vlSelfRef.__PVT__slot_uop[11U];
    if ((4U & (IData)(vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[24U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[23U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[25U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[24U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[26U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[25U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[27U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[26U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[28U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[27U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[29U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[28U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[30U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[29U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[31U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[30U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[32U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[31U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[33U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[32U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[34U] 
                                  << 0x0000000eU) | 
                                 (vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[33U] 
                                  >> 0x00000012U));
        __Vdly__slot_uop[11U] = (0x01ffffffU & ((vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[35U] 
                                                 << 0x0000000eU) 
                                                | (vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_in_uop[34U] 
                                                   >> 0x00000012U)));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((4U & (IData)(vlSymsp->TOP.boom_core__DOT__unq_iq__DOT__slot_grant))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((1U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w)) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((2U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                 >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                  << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                            >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 6U))) == 
                 (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                 >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((4U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x0cU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((8U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x12U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((0x00000010U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x18U))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
        if ((0x00000020U & (IData)(vlSymsp->TOP.boom_core__DOT__wakeup_valid_w))) {
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[4U] 
                                    >> 3U)))) {
                __Vdly__slot_uop[3U] = (0xfffbffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & ((vlSelfRef.__PVT__slot_uop[4U] 
                                     << 3U) | (vlSelfRef.__PVT__slot_uop[3U] 
                                               >> 0x0000001dU))))) {
                __Vdly__slot_uop[3U] = (0xfffdffffU 
                                        & __Vdly__slot_uop[3U]);
            }
            if (((0x0000003fU & (IData)((vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                         >> 0x1eU))) 
                 == (0x0000003fU & (vlSelfRef.__PVT__slot_uop[3U] 
                                    >> 0x00000017U)))) {
                __Vdly__slot_uop[3U] = (0xfffeffffU 
                                        & __Vdly__slot_uop[3U]);
            }
        }
    }
    vlSelfRef.__PVT__slot_uop[0U] = __Vdly__slot_uop[0U];
    vlSelfRef.__PVT__slot_uop[1U] = __Vdly__slot_uop[1U];
    vlSelfRef.__PVT__slot_uop[2U] = __Vdly__slot_uop[2U];
    vlSelfRef.__PVT__slot_uop[3U] = __Vdly__slot_uop[3U];
    vlSelfRef.__PVT__slot_uop[4U] = __Vdly__slot_uop[4U];
    vlSelfRef.__PVT__slot_uop[5U] = __Vdly__slot_uop[5U];
    vlSelfRef.__PVT__slot_uop[6U] = __Vdly__slot_uop[6U];
    vlSelfRef.__PVT__slot_uop[7U] = __Vdly__slot_uop[7U];
    vlSelfRef.__PVT__slot_uop[8U] = __Vdly__slot_uop[8U];
    vlSelfRef.__PVT__slot_uop[9U] = __Vdly__slot_uop[9U];
    vlSelfRef.__PVT__slot_uop[10U] = __Vdly__slot_uop[10U];
    vlSelfRef.__PVT__slot_uop[11U] = __Vdly__slot_uop[11U];
}
