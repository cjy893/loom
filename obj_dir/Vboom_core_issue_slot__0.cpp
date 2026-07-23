// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboom_core.h for the primary calling header

#include "Vboom_core__pch.h"

void Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__0__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__0__KET____DOT__slot__0\n"); );
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
                                                                 & ((vlSelfRef.__PVT__slot_uop[4U] 
                                                                     << 3U) 
                                                                    | (vlSelfRef.__PVT__slot_uop[3U] 
                                                                       >> 0x0000001dU))) 
                                                                == 
                                                                (0x0000003fU 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                                            >> 0x0000001eU)))))) 
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
                                                                  & (vlSelfRef.__PVT__slot_uop[3U] 
                                                                     >> 0x00000017U)) 
                                                                 == 
                                                                 (0x0000003fU 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                                             >> 0x0000001eU)))))) 
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
                                 & ((0x0000003fU & 
                                     (vlSelfRef.__PVT__slot_uop[4U] 
                                      >> 3U)) == (0x0000003fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.boom_core__DOT__wakeup_pdst_w 
                                                             >> 0x0000001eU)))))) 
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
                                                  & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) 
                                << 9U));
    vlSelfRef.iss_uop[9U] = (((((vlSelfRef.__PVT__slot_uop[9U] 
                                 << 0x00000017U) | 
                                (0x007ffffeU & (vlSelfRef.__PVT__slot_uop[8U] 
                                                >> 9U))) 
                               | (1U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) 
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

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__0__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__0__KET____DOT__slot__0\n"); );
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
    if ((1U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[0U];
        __Vdly__slot_uop[1U] = vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[1U];
        __Vdly__slot_uop[2U] = vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[2U];
        __Vdly__slot_uop[3U] = vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[3U];
        __Vdly__slot_uop[4U] = vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[4U];
        __Vdly__slot_uop[5U] = vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[5U];
        __Vdly__slot_uop[6U] = vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[6U];
        __Vdly__slot_uop[7U] = vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[7U];
        __Vdly__slot_uop[8U] = vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[8U];
        __Vdly__slot_uop[9U] = vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[9U];
        __Vdly__slot_uop[10U] = vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[10U];
        __Vdly__slot_uop[11U] = (0x01ffffffU & vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[11U]);
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((1U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
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

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__0__KET____DOT__slot__1(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__0__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((1U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((1U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((1U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot___nba_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__0__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__0__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__killed = ((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                               | ((0U != (((vlSelfRef.__PVT__slot_uop[7U] 
                                            << 8U) 
                                           | (vlSelfRef.__PVT__slot_uop[7U] 
                                              >> 0x00000018U)) 
                                          & (IData)(vlSymsp->TOP.boom_core__DOT__mispredict_mask))) 
                                  & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_136[2U] 
                                     >> 8U)));
}

void Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__1__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__1__KET____DOT__slot__0\n"); );
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
                                                     >> 1U))) 
                                << 9U));
    vlSelfRef.iss_uop[9U] = (((((vlSelfRef.__PVT__slot_uop[9U] 
                                 << 0x00000017U) | 
                                (0x007ffffeU & (vlSelfRef.__PVT__slot_uop[8U] 
                                                >> 9U))) 
                               | (1U & ((IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant) 
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

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__1__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__1__KET____DOT__slot__0\n"); );
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
    if ((2U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[12U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[11U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[13U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[12U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[14U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[13U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[15U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[14U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[16U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[15U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[17U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[16U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[18U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[17U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[19U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[18U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[20U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[19U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[21U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[20U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[22U] 
                                  << 7U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[21U] 
                                            >> 0x00000019U));
        __Vdly__slot_uop[11U] = (0x01ffffffU & ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[23U] 
                                                 << 7U) 
                                                | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[22U] 
                                                   >> 0x00000019U)));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((2U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
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

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__1__KET____DOT__slot__1(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__1__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((2U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((2U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((2U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__2__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__2__KET____DOT__slot__0\n"); );
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
                                                     >> 2U))) 
                                << 9U));
    vlSelfRef.iss_uop[9U] = (((((vlSelfRef.__PVT__slot_uop[9U] 
                                 << 0x00000017U) | 
                                (0x007ffffeU & (vlSelfRef.__PVT__slot_uop[8U] 
                                                >> 9U))) 
                               | (1U & ((IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant) 
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

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__2__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__2__KET____DOT__slot__0\n"); );
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
    if ((4U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[24U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[23U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[25U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[24U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[26U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[25U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[27U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[26U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[28U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[27U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[29U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[28U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[30U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[29U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[31U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[30U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[32U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[31U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[33U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[32U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[34U] 
                                  << 0x0000000eU) | 
                                 (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[33U] 
                                  >> 0x00000012U));
        __Vdly__slot_uop[11U] = (0x01ffffffU & ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[35U] 
                                                 << 0x0000000eU) 
                                                | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[34U] 
                                                   >> 0x00000012U)));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((4U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
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

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__2__KET____DOT__slot__1(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__2__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((4U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((4U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((4U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__3__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__3__KET____DOT__slot__0\n"); );
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
                                                     >> 3U))) 
                                << 9U));
    vlSelfRef.iss_uop[9U] = (((((vlSelfRef.__PVT__slot_uop[9U] 
                                 << 0x00000017U) | 
                                (0x007ffffeU & (vlSelfRef.__PVT__slot_uop[8U] 
                                                >> 9U))) 
                               | (1U & ((IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant) 
                                        >> 3U))) >> 0x00000017U) 
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

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__3__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__3__KET____DOT__slot__0\n"); );
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
    if ((8U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[36U] 
                                 << 0x00000015U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[35U] 
                                 >> 0x0000000bU));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[37U] 
                                 << 0x00000015U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[36U] 
                                 >> 0x0000000bU));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[38U] 
                                 << 0x00000015U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[37U] 
                                 >> 0x0000000bU));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[39U] 
                                 << 0x00000015U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[38U] 
                                 >> 0x0000000bU));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[40U] 
                                 << 0x00000015U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[39U] 
                                 >> 0x0000000bU));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[41U] 
                                 << 0x00000015U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[40U] 
                                 >> 0x0000000bU));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[42U] 
                                 << 0x00000015U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[41U] 
                                 >> 0x0000000bU));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[43U] 
                                 << 0x00000015U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[42U] 
                                 >> 0x0000000bU));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[44U] 
                                 << 0x00000015U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[43U] 
                                 >> 0x0000000bU));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[45U] 
                                 << 0x00000015U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[44U] 
                                 >> 0x0000000bU));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[46U] 
                                  << 0x00000015U) | 
                                 (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[45U] 
                                  >> 0x0000000bU));
        __Vdly__slot_uop[11U] = (0x01ffffffU & ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[47U] 
                                                 << 0x00000015U) 
                                                | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[46U] 
                                                   >> 0x0000000bU)));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((8U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
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

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__3__KET____DOT__slot__1(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__3__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((8U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((8U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((8U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__4__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__4__KET____DOT__slot__0\n"); );
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
                                                     >> 4U))) 
                                << 9U));
    vlSelfRef.iss_uop[9U] = (((((vlSelfRef.__PVT__slot_uop[9U] 
                                 << 0x00000017U) | 
                                (0x007ffffeU & (vlSelfRef.__PVT__slot_uop[8U] 
                                                >> 9U))) 
                               | (1U & ((IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant) 
                                        >> 4U))) >> 0x00000017U) 
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

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__4__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__4__KET____DOT__slot__0\n"); );
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
    if ((0x00000010U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[48U] 
                                 << 0x0000001cU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[47U] 
                                 >> 4U));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[49U] 
                                 << 0x0000001cU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[48U] 
                                 >> 4U));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[50U] 
                                 << 0x0000001cU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[49U] 
                                 >> 4U));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[51U] 
                                 << 0x0000001cU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[50U] 
                                 >> 4U));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[52U] 
                                 << 0x0000001cU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[51U] 
                                 >> 4U));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[53U] 
                                 << 0x0000001cU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[52U] 
                                 >> 4U));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[54U] 
                                 << 0x0000001cU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[53U] 
                                 >> 4U));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[55U] 
                                 << 0x0000001cU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[54U] 
                                 >> 4U));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[56U] 
                                 << 0x0000001cU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[55U] 
                                 >> 4U));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[57U] 
                                 << 0x0000001cU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[56U] 
                                 >> 4U));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[58U] 
                                  << 0x0000001cU) | 
                                 (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[57U] 
                                  >> 4U));
        __Vdly__slot_uop[11U] = (0x01ffffffU & (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[58U] 
                                                >> 4U));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((0x00000010U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
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

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__4__KET____DOT__slot__1(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__4__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00000010U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((0x00000010U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00000010U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__5__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__5__KET____DOT__slot__0\n"); );
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
                                                     >> 5U))) 
                                << 9U));
    vlSelfRef.iss_uop[9U] = (((((vlSelfRef.__PVT__slot_uop[9U] 
                                 << 0x00000017U) | 
                                (0x007ffffeU & (vlSelfRef.__PVT__slot_uop[8U] 
                                                >> 9U))) 
                               | (1U & ((IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant) 
                                        >> 5U))) >> 0x00000017U) 
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

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__5__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__5__KET____DOT__slot__0\n"); );
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
    if ((0x00000020U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[59U] 
                                 << 3U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[58U] 
                                           >> 0x0000001dU));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[60U] 
                                 << 3U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[59U] 
                                           >> 0x0000001dU));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[61U] 
                                 << 3U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[60U] 
                                           >> 0x0000001dU));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[62U] 
                                 << 3U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[61U] 
                                           >> 0x0000001dU));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[63U] 
                                 << 3U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[62U] 
                                           >> 0x0000001dU));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[64U] 
                                 << 3U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[63U] 
                                           >> 0x0000001dU));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[65U] 
                                 << 3U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[64U] 
                                           >> 0x0000001dU));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[66U] 
                                 << 3U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[65U] 
                                           >> 0x0000001dU));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[67U] 
                                 << 3U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[66U] 
                                           >> 0x0000001dU));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[68U] 
                                 << 3U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[67U] 
                                           >> 0x0000001dU));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[69U] 
                                  << 3U) | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[68U] 
                                            >> 0x0000001dU));
        __Vdly__slot_uop[11U] = (0x01ffffffU & ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[70U] 
                                                 << 3U) 
                                                | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[69U] 
                                                   >> 0x0000001dU)));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((0x00000020U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
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

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__5__KET____DOT__slot__1(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__5__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00000020U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((0x00000020U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00000020U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__6__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__6__KET____DOT__slot__0\n"); );
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
                                                     >> 6U))) 
                                << 9U));
    vlSelfRef.iss_uop[9U] = (((((vlSelfRef.__PVT__slot_uop[9U] 
                                 << 0x00000017U) | 
                                (0x007ffffeU & (vlSelfRef.__PVT__slot_uop[8U] 
                                                >> 9U))) 
                               | (1U & ((IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant) 
                                        >> 6U))) >> 0x00000017U) 
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

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__6__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__6__KET____DOT__slot__0\n"); );
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
    if ((0x00000040U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[71U] 
                                 << 0x0000000aU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[70U] 
                                 >> 0x00000016U));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[72U] 
                                 << 0x0000000aU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[71U] 
                                 >> 0x00000016U));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[73U] 
                                 << 0x0000000aU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[72U] 
                                 >> 0x00000016U));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[74U] 
                                 << 0x0000000aU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[73U] 
                                 >> 0x00000016U));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[75U] 
                                 << 0x0000000aU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[74U] 
                                 >> 0x00000016U));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[76U] 
                                 << 0x0000000aU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[75U] 
                                 >> 0x00000016U));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[77U] 
                                 << 0x0000000aU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[76U] 
                                 >> 0x00000016U));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[78U] 
                                 << 0x0000000aU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[77U] 
                                 >> 0x00000016U));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[79U] 
                                 << 0x0000000aU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[78U] 
                                 >> 0x00000016U));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[80U] 
                                 << 0x0000000aU) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[79U] 
                                 >> 0x00000016U));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[81U] 
                                  << 0x0000000aU) | 
                                 (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[80U] 
                                  >> 0x00000016U));
        __Vdly__slot_uop[11U] = (0x01ffffffU & ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[82U] 
                                                 << 0x0000000aU) 
                                                | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[81U] 
                                                   >> 0x00000016U)));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((0x00000040U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
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

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__6__KET____DOT__slot__1(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__6__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00000040U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((0x00000040U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00000040U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__7__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__7__KET____DOT__slot__0\n"); );
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
                                                     >> 7U))) 
                                << 9U));
    vlSelfRef.iss_uop[9U] = (((((vlSelfRef.__PVT__slot_uop[9U] 
                                 << 0x00000017U) | 
                                (0x007ffffeU & (vlSelfRef.__PVT__slot_uop[8U] 
                                                >> 9U))) 
                               | (1U & ((IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant) 
                                        >> 7U))) >> 0x00000017U) 
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

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__7__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__7__KET____DOT__slot__0\n"); );
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
    if ((0x00000080U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[83U] 
                                 << 0x00000011U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[82U] 
                                 >> 0x0000000fU));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[84U] 
                                 << 0x00000011U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[83U] 
                                 >> 0x0000000fU));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[85U] 
                                 << 0x00000011U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[84U] 
                                 >> 0x0000000fU));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[86U] 
                                 << 0x00000011U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[85U] 
                                 >> 0x0000000fU));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[87U] 
                                 << 0x00000011U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[86U] 
                                 >> 0x0000000fU));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[88U] 
                                 << 0x00000011U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[87U] 
                                 >> 0x0000000fU));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[89U] 
                                 << 0x00000011U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[88U] 
                                 >> 0x0000000fU));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[90U] 
                                 << 0x00000011U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[89U] 
                                 >> 0x0000000fU));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[91U] 
                                 << 0x00000011U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[90U] 
                                 >> 0x0000000fU));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[92U] 
                                 << 0x00000011U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[91U] 
                                 >> 0x0000000fU));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[93U] 
                                  << 0x00000011U) | 
                                 (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[92U] 
                                  >> 0x0000000fU));
        __Vdly__slot_uop[11U] = (0x01ffffffU & ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[94U] 
                                                 << 0x00000011U) 
                                                | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[93U] 
                                                   >> 0x0000000fU)));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((0x00000080U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
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

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__7__KET____DOT__slot__1(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__7__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00000080U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((0x00000080U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00000080U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__8__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__8__KET____DOT__slot__0\n"); );
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
                                                     >> 8U))) 
                                << 9U));
    vlSelfRef.iss_uop[9U] = (((((vlSelfRef.__PVT__slot_uop[9U] 
                                 << 0x00000017U) | 
                                (0x007ffffeU & (vlSelfRef.__PVT__slot_uop[8U] 
                                                >> 9U))) 
                               | (1U & ((IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant) 
                                        >> 8U))) >> 0x00000017U) 
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

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__8__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__8__KET____DOT__slot__0\n"); );
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
    if ((0x00000100U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[95U] 
                                 << 0x00000018U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[94U] 
                                 >> 8U));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[96U] 
                                 << 0x00000018U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[95U] 
                                 >> 8U));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[97U] 
                                 << 0x00000018U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[96U] 
                                 >> 8U));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[98U] 
                                 << 0x00000018U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[97U] 
                                 >> 8U));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[99U] 
                                 << 0x00000018U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[98U] 
                                 >> 8U));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[100U] 
                                 << 0x00000018U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[99U] 
                                 >> 8U));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[101U] 
                                 << 0x00000018U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[100U] 
                                 >> 8U));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[102U] 
                                 << 0x00000018U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[101U] 
                                 >> 8U));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[103U] 
                                 << 0x00000018U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[102U] 
                                 >> 8U));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[104U] 
                                 << 0x00000018U) | 
                                (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[103U] 
                                 >> 8U));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[105U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[104U] 
                                  >> 8U));
        __Vdly__slot_uop[11U] = (0x01ffffffU & ((vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[106U] 
                                                 << 0x00000018U) 
                                                | (vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_uop[105U] 
                                                   >> 8U)));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((0x00000100U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
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

void Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__8__KET____DOT__slot__1(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___nba_sequent__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__8__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00000100U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((0x00000100U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00000100U & (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__9__KET____DOT__slot__0(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___ico_comb__TOP__boom_core__DOT__alu_iq__DOT__gen_slots__BRA__9__KET____DOT__slot__0\n"); );
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
                                                     >> 9U))) 
                                << 9U));
    vlSelfRef.iss_uop[9U] = (((((vlSelfRef.__PVT__slot_uop[9U] 
                                 << 0x00000017U) | 
                                (0x007ffffeU & (vlSelfRef.__PVT__slot_uop[8U] 
                                                >> 9U))) 
                               | (1U & ((IData)(vlSymsp->TOP.boom_core__DOT__alu_iq__DOT__slot_grant) 
                                        >> 9U))) >> 0x00000017U) 
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
