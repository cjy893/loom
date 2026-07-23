// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboom_core.h for the primary calling header

#include "Vboom_core__pch.h"

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__12__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__12__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_166 = (1U 
                                                  & ((~ 
                                                      (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
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
                                                     & (vlSelfRef.__PVT__slot_uop[3U] 
                                                        >> 0x00000011U)));
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
        __Vtemp_2[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (0x00003ffeU 
                                             & (vlSelfRef.__PVT__slot_uop[3U] 
                                                >> 0x00000012U)));
        __Vtemp_2[1U] = ((1U & (vlSelfRef.__PVT__slot_uop[4U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[5U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[4U] 
                                                 >> 0x00000012U))));
        __Vtemp_2[2U] = ((1U & (vlSelfRef.__PVT__slot_uop[5U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[6U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[5U] 
                                                 >> 0x00000012U))));
        __Vtemp_2[3U] = ((1U & (vlSelfRef.__PVT__slot_uop[6U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[7U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[6U] 
                                                 >> 0x00000012U))));
        __Vtemp_2[4U] = ((1U & (vlSelfRef.__PVT__slot_uop[7U] 
                                >> 0x00000012U)) | 
                         (0x0000003eU & (vlSelfRef.__PVT__slot_uop[7U] 
                                         >> 0x00000012U)));
    } else {
        __Vtemp_2[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[3U] 
                                             >> 0x00000012U));
        __Vtemp_2[1U] = ((vlSelfRef.__PVT__slot_uop[5U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[4U] 
                                             >> 0x00000012U));
        __Vtemp_2[2U] = ((vlSelfRef.__PVT__slot_uop[6U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[5U] 
                                             >> 0x00000012U));
        __Vtemp_2[3U] = ((vlSelfRef.__PVT__slot_uop[7U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[6U] 
                                             >> 0x00000012U));
        __Vtemp_2[4U] = ((vlSelfRef.__PVT__slot_uop[8U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[7U] 
                                             >> 0x00000012U));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_166)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__12__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__12__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__next_uop[0U] = vlSelfRef.__PVT__slot_uop[0U];
    vlSelfRef.__PVT__next_uop[1U] = vlSelfRef.__PVT__slot_uop[1U];
    vlSelfRef.__PVT__next_uop[2U] = vlSelfRef.__PVT__slot_uop[2U];
    vlSelfRef.__PVT__next_uop[3U] = ((0xffff0000U & vlSelfRef.__PVT__next_uop[3U]) 
                                     | (0x0000ffffU 
                                        & vlSelfRef.__PVT__slot_uop[3U]));
    vlSelfRef.__PVT__next_uop[3U] = ((0xfffcffffU & vlSelfRef.__PVT__next_uop[3U]) 
                                     | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_166) 
                                         << 0x00000011U) 
                                        | (0x00010000U 
                                           & (((~ (
                                                   ((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
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
                                               << 0x00000010U) 
                                              & vlSelfRef.__PVT__slot_uop[3U]))));
    vlSelfRef.__PVT__next_uop[3U] = ((0x0003ffffU & vlSelfRef.__PVT__next_uop[3U]) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[0U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[0U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[1U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[1U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[2U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[6U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[2U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[3U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[7U] = ((0xf0000000U & vlSelfRef.__PVT__next_uop[7U]) 
                                     | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[3U] 
                                         >> 0x0000000eU) 
                                        | (((0x000003c0U 
                                             & (((~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                 & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                     << 8U) 
                                                    | (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U))) 
                                                << 6U)) 
                                            | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[4U]) 
                                           << 0x00000012U)));
    vlSelfRef.__PVT__next_uop[7U] = ((0x0fffffffU & vlSelfRef.__PVT__next_uop[7U]) 
                                     | (((0xffffc000U 
                                          & (vlSelfRef.__PVT__slot_uop[8U] 
                                             << 4U)) 
                                         | ((0x00002000U 
                                             & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                                                << 1U)) 
                                            | (0x00001fffU 
                                               & ((vlSelfRef.__PVT__slot_uop[8U] 
                                                   << 4U) 
                                                  | (vlSelfRef.__PVT__slot_uop[7U] 
                                                     >> 0x0000001cU))))) 
                                        << 0x0000001cU));
    vlSelfRef.__PVT__next_uop[8U] = ((((0xffffc000U 
                                        & (vlSelfRef.__PVT__slot_uop[8U] 
                                           << 4U)) 
                                       | ((0x00002000U 
                                           & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                                              << 1U)) 
                                          | (0x00001fffU 
                                             & ((vlSelfRef.__PVT__slot_uop[8U] 
                                                 << 4U) 
                                                | (vlSelfRef.__PVT__slot_uop[7U] 
                                                   >> 0x0000001cU))))) 
                                      >> 4U) | ((((0x00003ff0U 
                                                   & (vlSelfRef.__PVT__slot_uop[9U] 
                                                      << 4U)) 
                                                  | (vlSelfRef.__PVT__slot_uop[8U] 
                                                     >> 0x0000001cU)) 
                                                 | (0xffffc000U 
                                                    & (vlSelfRef.__PVT__slot_uop[9U] 
                                                       << 4U))) 
                                                << 0x0000001cU));
    vlSelfRef.__PVT__next_uop[9U] = (((((0x00003ff0U 
                                         & (vlSelfRef.__PVT__slot_uop[9U] 
                                            << 4U)) 
                                        | (vlSelfRef.__PVT__slot_uop[8U] 
                                           >> 0x0000001cU)) 
                                       | (0xffffc000U 
                                          & (vlSelfRef.__PVT__slot_uop[9U] 
                                             << 4U))) 
                                      >> 4U) | ((((0x00003ff0U 
                                                   & (vlSelfRef.__PVT__slot_uop[10U] 
                                                      << 4U)) 
                                                  | (vlSelfRef.__PVT__slot_uop[9U] 
                                                     >> 0x0000001cU)) 
                                                 | (0xffffc000U 
                                                    & (vlSelfRef.__PVT__slot_uop[10U] 
                                                       << 4U))) 
                                                << 0x0000001cU));
    vlSelfRef.__PVT__next_uop[10U] = (((((0x00003ff0U 
                                          & (vlSelfRef.__PVT__slot_uop[10U] 
                                             << 4U)) 
                                         | (vlSelfRef.__PVT__slot_uop[9U] 
                                            >> 0x0000001cU)) 
                                        | (0xffffc000U 
                                           & (vlSelfRef.__PVT__slot_uop[10U] 
                                              << 4U))) 
                                       >> 4U) | (((
                                                   (0x00003ff0U 
                                                    & (vlSelfRef.__PVT__slot_uop[11U] 
                                                       << 4U)) 
                                                   | (vlSelfRef.__PVT__slot_uop[10U] 
                                                      >> 0x0000001cU)) 
                                                  | (0x1fffc000U 
                                                     & (vlSelfRef.__PVT__slot_uop[11U] 
                                                        << 4U))) 
                                                 << 0x0000001cU));
    vlSelfRef.__PVT__next_uop[11U] = (0x01ffffffU & 
                                      ((((0x00003ff0U 
                                          & (vlSelfRef.__PVT__slot_uop[11U] 
                                             << 4U)) 
                                         | (vlSelfRef.__PVT__slot_uop[10U] 
                                            >> 0x0000001cU)) 
                                        | (0x1fffc000U 
                                           & (vlSelfRef.__PVT__slot_uop[11U] 
                                              << 4U))) 
                                       >> 4U));
    vlSelfRef.request = ((IData)(vlSelfRef.__PVT__slot_valid) 
                         & ((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                            & ((~ (vlSelfRef.__PVT__slot_uop[8U] 
                                   >> 9U)) & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_215)) 
                                              & ((~ 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelfRef.__PVT__next_uop[3U] 
                                                       >> 0x00000010U)))) 
                                                 | ((IData)(vlSelfRef.__PVT__dgen_ready) 
                                                    | (IData)(vlSelfRef.__PVT__agen_ready)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164[0U] 
        = ((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[0U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164[1U] 
        = ((vlSelfRef.__PVT__next_uop[2U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164[2U] 
        = ((vlSelfRef.__PVT__next_uop[3U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164[3U] 
        = ((vlSelfRef.__PVT__next_uop[4U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[3U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164[4U] 
        = ((vlSelfRef.__PVT__next_uop[5U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[4U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164[5U] 
        = ((vlSelfRef.__PVT__next_uop[6U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[5U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164[6U] 
        = ((vlSelfRef.__PVT__next_uop[7U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[6U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164[7U] 
        = (0x0007ffffU & ((vlSelfRef.__PVT__next_uop[8U] 
                           << 7U) | (vlSelfRef.__PVT__next_uop[7U] 
                                     >> 0x00000019U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_165[0U] 
        = (((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
            (0x0000007cU & (vlSelfRef.__PVT__next_uop[0U] 
                            >> 0x00000019U))) | (3U 
                                                 & (vlSelfRef.__PVT__slot_uop[0U] 
                                                    >> 0x00000017U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_165[1U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[2U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[1U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_165[2U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[3U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[2U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_165[3U] 
        = ((0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_165[3U]) 
           | ((0x0000fc00U & ((vlSelfRef.__PVT__slot_uop[4U] 
                               << 0x0000000dU) | (0x00001c00U 
                                                  & (vlSelfRef.__PVT__slot_uop[3U] 
                                                     >> 0x00000013U)))) 
              | ((3U & (vlSelfRef.__PVT__next_uop[3U] 
                        >> 0x00000019U)) | (0x000003fcU 
                                            & ((vlSelfRef.__PVT__next_uop[4U] 
                                                << 7U) 
                                               | (0x0000007cU 
                                                  & (vlSelfRef.__PVT__next_uop[3U] 
                                                     >> 0x00000019U)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_165[3U] 
        = ((0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_165[3U]) 
           | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[1U] 
               << 0x00000019U) | (0x01ff0000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[0U] 
                                                 >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_165[4U] 
        = ((0x0000ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[1U] 
                           >> 7U)) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[2U] 
                                       << 0x00000019U) 
                                      | (0x01ff0000U 
                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[1U] 
                                            >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_165[5U] 
        = (0x1fffffffU & (0x18000000U | ((0x0000ffffU 
                                          & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[2U] 
                                             >> 7U)) 
                                         | (0x03ff0000U 
                                            & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[3U] 
                                                << 0x00000019U) 
                                               | (0x01ff0000U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[2U] 
                                                     >> 7U)))))));
}

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__12__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__12__KET____DOT__slot__0\n"); );
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
    if ((0x00001000U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[142U] 
                                 << 0x00000014U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[141U] 
                                 >> 0x0000000cU));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[143U] 
                                 << 0x00000014U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[142U] 
                                 >> 0x0000000cU));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[144U] 
                                 << 0x00000014U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[143U] 
                                 >> 0x0000000cU));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[145U] 
                                 << 0x00000014U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[144U] 
                                 >> 0x0000000cU));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[146U] 
                                 << 0x00000014U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[145U] 
                                 >> 0x0000000cU));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[147U] 
                                 << 0x00000014U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[146U] 
                                 >> 0x0000000cU));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[148U] 
                                 << 0x00000014U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[147U] 
                                 >> 0x0000000cU));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[149U] 
                                 << 0x00000014U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[148U] 
                                 >> 0x0000000cU));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[150U] 
                                 << 0x00000014U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[149U] 
                                 >> 0x0000000cU));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[151U] 
                                 << 0x00000014U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[150U] 
                                 >> 0x0000000cU));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[152U] 
                                  << 0x00000014U) | 
                                 (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[151U] 
                                  >> 0x0000000cU));
        __Vdly__slot_uop[11U] = (0x01ffffffU & ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[153U] 
                                                 << 0x00000014U) 
                                                | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[152U] 
                                                   >> 0x0000000cU)));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((0x00001000U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 0x0000000cU) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                     & (0x00001800U == (0x00001980U 
                                        & vlSelfRef.__PVT__slot_uop[8U]))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 0x0000000cU) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (0x00001000U == (0x00001080U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__dgen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 0x0000000cU) & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                      & (0x00000800U == (0x00000900U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__agen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000080U | __Vdly__slot_uop[8U]);
            __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 8U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 0x0000000cU)) & (IData)(vlSelfRef.__PVT__dgen_ready))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 7U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 0x0000000cU)) & (IData)(vlSelfRef.__PVT__agen_ready))) {
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

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__12__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__12__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00001000U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((0x00001000U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__12__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__12__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_215 = ((0U 
                                                   != 
                                                   (((vlSelfRef.__PVT__slot_uop[7U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__slot_uop[7U] 
                                                        >> 0x00000018U)) 
                                                    & (IData)(vlSymsp->TOP.boom_core__DOT__mispredict_mask))) 
                                                  & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_136[2U] 
                                                     >> 8U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_166 = (1U 
                                                  & ((~ 
                                                      (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
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
                                                     & (vlSelfRef.__PVT__slot_uop[3U] 
                                                        >> 0x00000011U)));
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
        __Vtemp_2[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (0x00003ffeU 
                                             & (vlSelfRef.__PVT__slot_uop[3U] 
                                                >> 0x00000012U)));
        __Vtemp_2[1U] = ((1U & (vlSelfRef.__PVT__slot_uop[4U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[5U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[4U] 
                                                 >> 0x00000012U))));
        __Vtemp_2[2U] = ((1U & (vlSelfRef.__PVT__slot_uop[5U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[6U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[5U] 
                                                 >> 0x00000012U))));
        __Vtemp_2[3U] = ((1U & (vlSelfRef.__PVT__slot_uop[6U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[7U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[6U] 
                                                 >> 0x00000012U))));
        __Vtemp_2[4U] = ((1U & (vlSelfRef.__PVT__slot_uop[7U] 
                                >> 0x00000012U)) | 
                         (0x0000003eU & (vlSelfRef.__PVT__slot_uop[7U] 
                                         >> 0x00000012U)));
    } else {
        __Vtemp_2[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[3U] 
                                             >> 0x00000012U));
        __Vtemp_2[1U] = ((vlSelfRef.__PVT__slot_uop[5U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[4U] 
                                             >> 0x00000012U));
        __Vtemp_2[2U] = ((vlSelfRef.__PVT__slot_uop[6U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[5U] 
                                             >> 0x00000012U));
        __Vtemp_2[3U] = ((vlSelfRef.__PVT__slot_uop[7U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[6U] 
                                             >> 0x00000012U));
        __Vtemp_2[4U] = ((vlSelfRef.__PVT__slot_uop[8U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[7U] 
                                             >> 0x00000012U));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__killed = ((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_215));
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_166)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__13__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__13__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163 = (1U 
                                                  & ((~ 
                                                      (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
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
                                                     & (vlSelfRef.__PVT__slot_uop[3U] 
                                                        >> 0x00000011U)));
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
        __Vtemp_2[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (0x00003ffeU 
                                             & (vlSelfRef.__PVT__slot_uop[3U] 
                                                >> 0x00000012U)));
        __Vtemp_2[1U] = ((1U & (vlSelfRef.__PVT__slot_uop[4U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[5U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[4U] 
                                                 >> 0x00000012U))));
        __Vtemp_2[2U] = ((1U & (vlSelfRef.__PVT__slot_uop[5U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[6U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[5U] 
                                                 >> 0x00000012U))));
        __Vtemp_2[3U] = ((1U & (vlSelfRef.__PVT__slot_uop[6U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[7U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[6U] 
                                                 >> 0x00000012U))));
        __Vtemp_2[4U] = ((1U & (vlSelfRef.__PVT__slot_uop[7U] 
                                >> 0x00000012U)) | 
                         (0x0000003eU & (vlSelfRef.__PVT__slot_uop[7U] 
                                         >> 0x00000012U)));
    } else {
        __Vtemp_2[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[3U] 
                                             >> 0x00000012U));
        __Vtemp_2[1U] = ((vlSelfRef.__PVT__slot_uop[5U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[4U] 
                                             >> 0x00000012U));
        __Vtemp_2[2U] = ((vlSelfRef.__PVT__slot_uop[6U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[5U] 
                                             >> 0x00000012U));
        __Vtemp_2[3U] = ((vlSelfRef.__PVT__slot_uop[7U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[6U] 
                                             >> 0x00000012U));
        __Vtemp_2[4U] = ((vlSelfRef.__PVT__slot_uop[8U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[7U] 
                                             >> 0x00000012U));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__13__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__13__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__next_uop[0U] = vlSelfRef.__PVT__slot_uop[0U];
    vlSelfRef.__PVT__next_uop[1U] = vlSelfRef.__PVT__slot_uop[1U];
    vlSelfRef.__PVT__next_uop[2U] = vlSelfRef.__PVT__slot_uop[2U];
    vlSelfRef.__PVT__next_uop[3U] = ((0xffff0000U & vlSelfRef.__PVT__next_uop[3U]) 
                                     | (0x0000ffffU 
                                        & vlSelfRef.__PVT__slot_uop[3U]));
    vlSelfRef.__PVT__next_uop[3U] = ((0xfffcffffU & vlSelfRef.__PVT__next_uop[3U]) 
                                     | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163) 
                                         << 0x00000011U) 
                                        | (0x00010000U 
                                           & (((~ (
                                                   ((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
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
                                               << 0x00000010U) 
                                              & vlSelfRef.__PVT__slot_uop[3U]))));
    vlSelfRef.__PVT__next_uop[3U] = ((0x0003ffffU & vlSelfRef.__PVT__next_uop[3U]) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[0U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[0U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[1U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[1U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[2U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[6U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[2U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[3U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[7U] = ((0xf0000000U & vlSelfRef.__PVT__next_uop[7U]) 
                                     | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[3U] 
                                         >> 0x0000000eU) 
                                        | (((0x000003c0U 
                                             & (((~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                 & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                     << 8U) 
                                                    | (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U))) 
                                                << 6U)) 
                                            | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[4U]) 
                                           << 0x00000012U)));
    vlSelfRef.__PVT__next_uop[7U] = ((0x0fffffffU & vlSelfRef.__PVT__next_uop[7U]) 
                                     | (((0xffffc000U 
                                          & (vlSelfRef.__PVT__slot_uop[8U] 
                                             << 4U)) 
                                         | ((0x00002000U 
                                             & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant)) 
                                            | (0x00001fffU 
                                               & ((vlSelfRef.__PVT__slot_uop[8U] 
                                                   << 4U) 
                                                  | (vlSelfRef.__PVT__slot_uop[7U] 
                                                     >> 0x0000001cU))))) 
                                        << 0x0000001cU));
    vlSelfRef.__PVT__next_uop[8U] = ((((0xffffc000U 
                                        & (vlSelfRef.__PVT__slot_uop[8U] 
                                           << 4U)) 
                                       | ((0x00002000U 
                                           & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant)) 
                                          | (0x00001fffU 
                                             & ((vlSelfRef.__PVT__slot_uop[8U] 
                                                 << 4U) 
                                                | (vlSelfRef.__PVT__slot_uop[7U] 
                                                   >> 0x0000001cU))))) 
                                      >> 4U) | ((((0x00003ff0U 
                                                   & (vlSelfRef.__PVT__slot_uop[9U] 
                                                      << 4U)) 
                                                  | (vlSelfRef.__PVT__slot_uop[8U] 
                                                     >> 0x0000001cU)) 
                                                 | (0xffffc000U 
                                                    & (vlSelfRef.__PVT__slot_uop[9U] 
                                                       << 4U))) 
                                                << 0x0000001cU));
    vlSelfRef.__PVT__next_uop[9U] = (((((0x00003ff0U 
                                         & (vlSelfRef.__PVT__slot_uop[9U] 
                                            << 4U)) 
                                        | (vlSelfRef.__PVT__slot_uop[8U] 
                                           >> 0x0000001cU)) 
                                       | (0xffffc000U 
                                          & (vlSelfRef.__PVT__slot_uop[9U] 
                                             << 4U))) 
                                      >> 4U) | ((((0x00003ff0U 
                                                   & (vlSelfRef.__PVT__slot_uop[10U] 
                                                      << 4U)) 
                                                  | (vlSelfRef.__PVT__slot_uop[9U] 
                                                     >> 0x0000001cU)) 
                                                 | (0xffffc000U 
                                                    & (vlSelfRef.__PVT__slot_uop[10U] 
                                                       << 4U))) 
                                                << 0x0000001cU));
    vlSelfRef.__PVT__next_uop[10U] = (((((0x00003ff0U 
                                          & (vlSelfRef.__PVT__slot_uop[10U] 
                                             << 4U)) 
                                         | (vlSelfRef.__PVT__slot_uop[9U] 
                                            >> 0x0000001cU)) 
                                        | (0xffffc000U 
                                           & (vlSelfRef.__PVT__slot_uop[10U] 
                                              << 4U))) 
                                       >> 4U) | (((
                                                   (0x00003ff0U 
                                                    & (vlSelfRef.__PVT__slot_uop[11U] 
                                                       << 4U)) 
                                                   | (vlSelfRef.__PVT__slot_uop[10U] 
                                                      >> 0x0000001cU)) 
                                                  | (0x1fffc000U 
                                                     & (vlSelfRef.__PVT__slot_uop[11U] 
                                                        << 4U))) 
                                                 << 0x0000001cU));
    vlSelfRef.__PVT__next_uop[11U] = (0x01ffffffU & 
                                      ((((0x00003ff0U 
                                          & (vlSelfRef.__PVT__slot_uop[11U] 
                                             << 4U)) 
                                         | (vlSelfRef.__PVT__slot_uop[10U] 
                                            >> 0x0000001cU)) 
                                        | (0x1fffc000U 
                                           & (vlSelfRef.__PVT__slot_uop[11U] 
                                              << 4U))) 
                                       >> 4U));
    vlSelfRef.request = ((IData)(vlSelfRef.__PVT__slot_valid) 
                         & ((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                            & ((~ (vlSelfRef.__PVT__slot_uop[8U] 
                                   >> 9U)) & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_216)) 
                                              & ((~ 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelfRef.__PVT__next_uop[3U] 
                                                       >> 0x00000010U)))) 
                                                 | ((IData)(vlSelfRef.__PVT__dgen_ready) 
                                                    | (IData)(vlSelfRef.__PVT__agen_ready)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_161[0U] 
        = ((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[0U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_161[1U] 
        = ((vlSelfRef.__PVT__next_uop[2U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_161[2U] 
        = ((vlSelfRef.__PVT__next_uop[3U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_161[3U] 
        = ((vlSelfRef.__PVT__next_uop[4U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[3U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_161[4U] 
        = ((vlSelfRef.__PVT__next_uop[5U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[4U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_161[5U] 
        = ((vlSelfRef.__PVT__next_uop[6U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[5U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_161[6U] 
        = ((vlSelfRef.__PVT__next_uop[7U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[6U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_161[7U] 
        = (0x0007ffffU & ((vlSelfRef.__PVT__next_uop[8U] 
                           << 7U) | (vlSelfRef.__PVT__next_uop[7U] 
                                     >> 0x00000019U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162[0U] 
        = (((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
            (0x0000007cU & (vlSelfRef.__PVT__next_uop[0U] 
                            >> 0x00000019U))) | (3U 
                                                 & (vlSelfRef.__PVT__slot_uop[0U] 
                                                    >> 0x00000017U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162[1U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[2U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[1U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162[2U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[3U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[2U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162[3U] 
        = ((0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162[3U]) 
           | ((0x0000fc00U & ((vlSelfRef.__PVT__slot_uop[4U] 
                               << 0x0000000dU) | (0x00001c00U 
                                                  & (vlSelfRef.__PVT__slot_uop[3U] 
                                                     >> 0x00000013U)))) 
              | ((3U & (vlSelfRef.__PVT__next_uop[3U] 
                        >> 0x00000019U)) | (0x000003fcU 
                                            & ((vlSelfRef.__PVT__next_uop[4U] 
                                                << 7U) 
                                               | (0x0000007cU 
                                                  & (vlSelfRef.__PVT__next_uop[3U] 
                                                     >> 0x00000019U)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162[3U] 
        = ((0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162[3U]) 
           | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[1U] 
               << 0x00000019U) | (0x01ff0000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[0U] 
                                                 >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162[4U] 
        = ((0x0000ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[1U] 
                           >> 7U)) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[2U] 
                                       << 0x00000019U) 
                                      | (0x01ff0000U 
                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[1U] 
                                            >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162[5U] 
        = (0x1fffffffU & (0x18000000U | ((0x0000ffffU 
                                          & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[2U] 
                                             >> 7U)) 
                                         | (0x03ff0000U 
                                            & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[3U] 
                                                << 0x00000019U) 
                                               | (0x01ff0000U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[2U] 
                                                     >> 7U)))))));
}

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__13__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__13__KET____DOT__slot__0\n"); );
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
    if ((0x00002000U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[154U] 
                                 << 0x0000001bU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[153U] 
                                 >> 5U));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[155U] 
                                 << 0x0000001bU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[154U] 
                                 >> 5U));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[156U] 
                                 << 0x0000001bU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[155U] 
                                 >> 5U));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[157U] 
                                 << 0x0000001bU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[156U] 
                                 >> 5U));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[158U] 
                                 << 0x0000001bU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[157U] 
                                 >> 5U));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[159U] 
                                 << 0x0000001bU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[158U] 
                                 >> 5U));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[160U] 
                                 << 0x0000001bU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[159U] 
                                 >> 5U));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[161U] 
                                 << 0x0000001bU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[160U] 
                                 >> 5U));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[162U] 
                                 << 0x0000001bU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[161U] 
                                 >> 5U));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[163U] 
                                 << 0x0000001bU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[162U] 
                                 >> 5U));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[164U] 
                                  << 0x0000001bU) | 
                                 (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[163U] 
                                  >> 5U));
        __Vdly__slot_uop[11U] = (0x01ffffffU & (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[164U] 
                                                >> 5U));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((0x00002000U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 0x0000000dU) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                     & (0x00001800U == (0x00001980U 
                                        & vlSelfRef.__PVT__slot_uop[8U]))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 0x0000000dU) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (0x00001000U == (0x00001080U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__dgen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 0x0000000dU) & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                      & (0x00000800U == (0x00000900U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__agen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000080U | __Vdly__slot_uop[8U]);
            __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 8U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 0x0000000dU)) & (IData)(vlSelfRef.__PVT__dgen_ready))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 7U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 0x0000000dU)) & (IData)(vlSelfRef.__PVT__agen_ready))) {
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

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__13__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__13__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00002000U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((0x00002000U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__13__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__13__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_216 = ((0U 
                                                   != 
                                                   (((vlSelfRef.__PVT__slot_uop[7U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__slot_uop[7U] 
                                                        >> 0x00000018U)) 
                                                    & (IData)(vlSymsp->TOP.boom_core__DOT__mispredict_mask))) 
                                                  & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_136[2U] 
                                                     >> 8U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163 = (1U 
                                                  & ((~ 
                                                      (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
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
                                                     & (vlSelfRef.__PVT__slot_uop[3U] 
                                                        >> 0x00000011U)));
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
        __Vtemp_2[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (0x00003ffeU 
                                             & (vlSelfRef.__PVT__slot_uop[3U] 
                                                >> 0x00000012U)));
        __Vtemp_2[1U] = ((1U & (vlSelfRef.__PVT__slot_uop[4U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[5U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[4U] 
                                                 >> 0x00000012U))));
        __Vtemp_2[2U] = ((1U & (vlSelfRef.__PVT__slot_uop[5U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[6U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[5U] 
                                                 >> 0x00000012U))));
        __Vtemp_2[3U] = ((1U & (vlSelfRef.__PVT__slot_uop[6U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[7U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[6U] 
                                                 >> 0x00000012U))));
        __Vtemp_2[4U] = ((1U & (vlSelfRef.__PVT__slot_uop[7U] 
                                >> 0x00000012U)) | 
                         (0x0000003eU & (vlSelfRef.__PVT__slot_uop[7U] 
                                         >> 0x00000012U)));
    } else {
        __Vtemp_2[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[3U] 
                                             >> 0x00000012U));
        __Vtemp_2[1U] = ((vlSelfRef.__PVT__slot_uop[5U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[4U] 
                                             >> 0x00000012U));
        __Vtemp_2[2U] = ((vlSelfRef.__PVT__slot_uop[6U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[5U] 
                                             >> 0x00000012U));
        __Vtemp_2[3U] = ((vlSelfRef.__PVT__slot_uop[7U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[6U] 
                                             >> 0x00000012U));
        __Vtemp_2[4U] = ((vlSelfRef.__PVT__slot_uop[8U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[7U] 
                                             >> 0x00000012U));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__killed = ((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_216));
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__14__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__14__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160 = (1U 
                                                  & ((~ 
                                                      (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
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
                                                     & (vlSelfRef.__PVT__slot_uop[3U] 
                                                        >> 0x00000011U)));
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
        __Vtemp_2[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (0x00003ffeU 
                                             & (vlSelfRef.__PVT__slot_uop[3U] 
                                                >> 0x00000012U)));
        __Vtemp_2[1U] = ((1U & (vlSelfRef.__PVT__slot_uop[4U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[5U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[4U] 
                                                 >> 0x00000012U))));
        __Vtemp_2[2U] = ((1U & (vlSelfRef.__PVT__slot_uop[5U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[6U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[5U] 
                                                 >> 0x00000012U))));
        __Vtemp_2[3U] = ((1U & (vlSelfRef.__PVT__slot_uop[6U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[7U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[6U] 
                                                 >> 0x00000012U))));
        __Vtemp_2[4U] = ((1U & (vlSelfRef.__PVT__slot_uop[7U] 
                                >> 0x00000012U)) | 
                         (0x0000003eU & (vlSelfRef.__PVT__slot_uop[7U] 
                                         >> 0x00000012U)));
    } else {
        __Vtemp_2[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[3U] 
                                             >> 0x00000012U));
        __Vtemp_2[1U] = ((vlSelfRef.__PVT__slot_uop[5U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[4U] 
                                             >> 0x00000012U));
        __Vtemp_2[2U] = ((vlSelfRef.__PVT__slot_uop[6U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[5U] 
                                             >> 0x00000012U));
        __Vtemp_2[3U] = ((vlSelfRef.__PVT__slot_uop[7U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[6U] 
                                             >> 0x00000012U));
        __Vtemp_2[4U] = ((vlSelfRef.__PVT__slot_uop[8U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[7U] 
                                             >> 0x00000012U));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__14__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__14__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__next_uop[0U] = vlSelfRef.__PVT__slot_uop[0U];
    vlSelfRef.__PVT__next_uop[1U] = vlSelfRef.__PVT__slot_uop[1U];
    vlSelfRef.__PVT__next_uop[2U] = vlSelfRef.__PVT__slot_uop[2U];
    vlSelfRef.__PVT__next_uop[3U] = ((0xffff0000U & vlSelfRef.__PVT__next_uop[3U]) 
                                     | (0x0000ffffU 
                                        & vlSelfRef.__PVT__slot_uop[3U]));
    vlSelfRef.__PVT__next_uop[3U] = ((0xfffcffffU & vlSelfRef.__PVT__next_uop[3U]) 
                                     | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160) 
                                         << 0x00000011U) 
                                        | (0x00010000U 
                                           & (((~ (
                                                   ((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
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
                                               << 0x00000010U) 
                                              & vlSelfRef.__PVT__slot_uop[3U]))));
    vlSelfRef.__PVT__next_uop[3U] = ((0x0003ffffU & vlSelfRef.__PVT__next_uop[3U]) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[0U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[0U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[1U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[1U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[2U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[6U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[2U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[3U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[7U] = ((0xf0000000U & vlSelfRef.__PVT__next_uop[7U]) 
                                     | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[3U] 
                                         >> 0x0000000eU) 
                                        | (((0x000003c0U 
                                             & (((~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                 & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                     << 8U) 
                                                    | (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U))) 
                                                << 6U)) 
                                            | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[4U]) 
                                           << 0x00000012U)));
    vlSelfRef.__PVT__next_uop[7U] = ((0x0fffffffU & vlSelfRef.__PVT__next_uop[7U]) 
                                     | (((0xffffc000U 
                                          & (vlSelfRef.__PVT__slot_uop[8U] 
                                             << 4U)) 
                                         | ((0x00002000U 
                                             & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                                                >> 1U)) 
                                            | (0x00001fffU 
                                               & ((vlSelfRef.__PVT__slot_uop[8U] 
                                                   << 4U) 
                                                  | (vlSelfRef.__PVT__slot_uop[7U] 
                                                     >> 0x0000001cU))))) 
                                        << 0x0000001cU));
    vlSelfRef.__PVT__next_uop[8U] = ((((0xffffc000U 
                                        & (vlSelfRef.__PVT__slot_uop[8U] 
                                           << 4U)) 
                                       | ((0x00002000U 
                                           & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                                              >> 1U)) 
                                          | (0x00001fffU 
                                             & ((vlSelfRef.__PVT__slot_uop[8U] 
                                                 << 4U) 
                                                | (vlSelfRef.__PVT__slot_uop[7U] 
                                                   >> 0x0000001cU))))) 
                                      >> 4U) | ((((0x00003ff0U 
                                                   & (vlSelfRef.__PVT__slot_uop[9U] 
                                                      << 4U)) 
                                                  | (vlSelfRef.__PVT__slot_uop[8U] 
                                                     >> 0x0000001cU)) 
                                                 | (0xffffc000U 
                                                    & (vlSelfRef.__PVT__slot_uop[9U] 
                                                       << 4U))) 
                                                << 0x0000001cU));
    vlSelfRef.__PVT__next_uop[9U] = (((((0x00003ff0U 
                                         & (vlSelfRef.__PVT__slot_uop[9U] 
                                            << 4U)) 
                                        | (vlSelfRef.__PVT__slot_uop[8U] 
                                           >> 0x0000001cU)) 
                                       | (0xffffc000U 
                                          & (vlSelfRef.__PVT__slot_uop[9U] 
                                             << 4U))) 
                                      >> 4U) | ((((0x00003ff0U 
                                                   & (vlSelfRef.__PVT__slot_uop[10U] 
                                                      << 4U)) 
                                                  | (vlSelfRef.__PVT__slot_uop[9U] 
                                                     >> 0x0000001cU)) 
                                                 | (0xffffc000U 
                                                    & (vlSelfRef.__PVT__slot_uop[10U] 
                                                       << 4U))) 
                                                << 0x0000001cU));
    vlSelfRef.__PVT__next_uop[10U] = (((((0x00003ff0U 
                                          & (vlSelfRef.__PVT__slot_uop[10U] 
                                             << 4U)) 
                                         | (vlSelfRef.__PVT__slot_uop[9U] 
                                            >> 0x0000001cU)) 
                                        | (0xffffc000U 
                                           & (vlSelfRef.__PVT__slot_uop[10U] 
                                              << 4U))) 
                                       >> 4U) | (((
                                                   (0x00003ff0U 
                                                    & (vlSelfRef.__PVT__slot_uop[11U] 
                                                       << 4U)) 
                                                   | (vlSelfRef.__PVT__slot_uop[10U] 
                                                      >> 0x0000001cU)) 
                                                  | (0x1fffc000U 
                                                     & (vlSelfRef.__PVT__slot_uop[11U] 
                                                        << 4U))) 
                                                 << 0x0000001cU));
    vlSelfRef.__PVT__next_uop[11U] = (0x01ffffffU & 
                                      ((((0x00003ff0U 
                                          & (vlSelfRef.__PVT__slot_uop[11U] 
                                             << 4U)) 
                                         | (vlSelfRef.__PVT__slot_uop[10U] 
                                            >> 0x0000001cU)) 
                                        | (0x1fffc000U 
                                           & (vlSelfRef.__PVT__slot_uop[11U] 
                                              << 4U))) 
                                       >> 4U));
    vlSelfRef.request = ((IData)(vlSelfRef.__PVT__slot_valid) 
                         & ((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                            & ((~ (vlSelfRef.__PVT__slot_uop[8U] 
                                   >> 9U)) & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_217)) 
                                              & ((~ 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelfRef.__PVT__next_uop[3U] 
                                                       >> 0x00000010U)))) 
                                                 | ((IData)(vlSelfRef.__PVT__dgen_ready) 
                                                    | (IData)(vlSelfRef.__PVT__agen_ready)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_158[0U] 
        = ((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[0U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_158[1U] 
        = ((vlSelfRef.__PVT__next_uop[2U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_158[2U] 
        = ((vlSelfRef.__PVT__next_uop[3U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_158[3U] 
        = ((vlSelfRef.__PVT__next_uop[4U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[3U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_158[4U] 
        = ((vlSelfRef.__PVT__next_uop[5U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[4U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_158[5U] 
        = ((vlSelfRef.__PVT__next_uop[6U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[5U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_158[6U] 
        = ((vlSelfRef.__PVT__next_uop[7U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[6U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_158[7U] 
        = (0x0007ffffU & ((vlSelfRef.__PVT__next_uop[8U] 
                           << 7U) | (vlSelfRef.__PVT__next_uop[7U] 
                                     >> 0x00000019U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_159[0U] 
        = (((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
            (0x0000007cU & (vlSelfRef.__PVT__next_uop[0U] 
                            >> 0x00000019U))) | (3U 
                                                 & (vlSelfRef.__PVT__slot_uop[0U] 
                                                    >> 0x00000017U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_159[1U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[2U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[1U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_159[2U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[3U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[2U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_159[3U] 
        = ((0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_159[3U]) 
           | ((0x0000fc00U & ((vlSelfRef.__PVT__slot_uop[4U] 
                               << 0x0000000dU) | (0x00001c00U 
                                                  & (vlSelfRef.__PVT__slot_uop[3U] 
                                                     >> 0x00000013U)))) 
              | ((3U & (vlSelfRef.__PVT__next_uop[3U] 
                        >> 0x00000019U)) | (0x000003fcU 
                                            & ((vlSelfRef.__PVT__next_uop[4U] 
                                                << 7U) 
                                               | (0x0000007cU 
                                                  & (vlSelfRef.__PVT__next_uop[3U] 
                                                     >> 0x00000019U)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_159[3U] 
        = ((0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_159[3U]) 
           | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[1U] 
               << 0x00000019U) | (0x01ff0000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[0U] 
                                                 >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_159[4U] 
        = ((0x0000ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[1U] 
                           >> 7U)) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[2U] 
                                       << 0x00000019U) 
                                      | (0x01ff0000U 
                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[1U] 
                                            >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_159[5U] 
        = (0x1fffffffU & (0x18000000U | ((0x0000ffffU 
                                          & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[2U] 
                                             >> 7U)) 
                                         | (0x03ff0000U 
                                            & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[3U] 
                                                << 0x00000019U) 
                                               | (0x01ff0000U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[2U] 
                                                     >> 7U)))))));
}

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__14__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__14__KET____DOT__slot__0\n"); );
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
    if ((0x00004000U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[165U] 
                                 << 2U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[164U] 
                                           >> 0x0000001eU));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[166U] 
                                 << 2U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[165U] 
                                           >> 0x0000001eU));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[167U] 
                                 << 2U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[166U] 
                                           >> 0x0000001eU));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[168U] 
                                 << 2U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[167U] 
                                           >> 0x0000001eU));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[169U] 
                                 << 2U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[168U] 
                                           >> 0x0000001eU));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[170U] 
                                 << 2U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[169U] 
                                           >> 0x0000001eU));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[171U] 
                                 << 2U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[170U] 
                                           >> 0x0000001eU));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[172U] 
                                 << 2U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[171U] 
                                           >> 0x0000001eU));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[173U] 
                                 << 2U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[172U] 
                                           >> 0x0000001eU));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[174U] 
                                 << 2U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[173U] 
                                           >> 0x0000001eU));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[175U] 
                                  << 2U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[174U] 
                                            >> 0x0000001eU));
        __Vdly__slot_uop[11U] = (0x01ffffffU & ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[176U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[175U] 
                                                   >> 0x0000001eU)));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((0x00004000U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 0x0000000eU) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                     & (0x00001800U == (0x00001980U 
                                        & vlSelfRef.__PVT__slot_uop[8U]))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 0x0000000eU) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (0x00001000U == (0x00001080U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__dgen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 0x0000000eU) & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                      & (0x00000800U == (0x00000900U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__agen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000080U | __Vdly__slot_uop[8U]);
            __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 8U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 0x0000000eU)) & (IData)(vlSelfRef.__PVT__dgen_ready))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 7U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 0x0000000eU)) & (IData)(vlSelfRef.__PVT__agen_ready))) {
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

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__14__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__14__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00004000U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((0x00004000U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__14__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__14__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_217 = ((0U 
                                                   != 
                                                   (((vlSelfRef.__PVT__slot_uop[7U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__slot_uop[7U] 
                                                        >> 0x00000018U)) 
                                                    & (IData)(vlSymsp->TOP.boom_core__DOT__mispredict_mask))) 
                                                  & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_136[2U] 
                                                     >> 8U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160 = (1U 
                                                  & ((~ 
                                                      (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
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
                                                     & (vlSelfRef.__PVT__slot_uop[3U] 
                                                        >> 0x00000011U)));
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
        __Vtemp_2[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (0x00003ffeU 
                                             & (vlSelfRef.__PVT__slot_uop[3U] 
                                                >> 0x00000012U)));
        __Vtemp_2[1U] = ((1U & (vlSelfRef.__PVT__slot_uop[4U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[5U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[4U] 
                                                 >> 0x00000012U))));
        __Vtemp_2[2U] = ((1U & (vlSelfRef.__PVT__slot_uop[5U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[6U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[5U] 
                                                 >> 0x00000012U))));
        __Vtemp_2[3U] = ((1U & (vlSelfRef.__PVT__slot_uop[6U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[7U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[6U] 
                                                 >> 0x00000012U))));
        __Vtemp_2[4U] = ((1U & (vlSelfRef.__PVT__slot_uop[7U] 
                                >> 0x00000012U)) | 
                         (0x0000003eU & (vlSelfRef.__PVT__slot_uop[7U] 
                                         >> 0x00000012U)));
    } else {
        __Vtemp_2[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[3U] 
                                             >> 0x00000012U));
        __Vtemp_2[1U] = ((vlSelfRef.__PVT__slot_uop[5U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[4U] 
                                             >> 0x00000012U));
        __Vtemp_2[2U] = ((vlSelfRef.__PVT__slot_uop[6U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[5U] 
                                             >> 0x00000012U));
        __Vtemp_2[3U] = ((vlSelfRef.__PVT__slot_uop[7U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[6U] 
                                             >> 0x00000012U));
        __Vtemp_2[4U] = ((vlSelfRef.__PVT__slot_uop[8U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[7U] 
                                             >> 0x00000012U));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__killed = ((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_217));
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__15__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__15__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157 = (1U 
                                                  & ((~ 
                                                      (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
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
                                                     & (vlSelfRef.__PVT__slot_uop[3U] 
                                                        >> 0x00000011U)));
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
        __Vtemp_2[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (0x00003ffeU 
                                             & (vlSelfRef.__PVT__slot_uop[3U] 
                                                >> 0x00000012U)));
        __Vtemp_2[1U] = ((1U & (vlSelfRef.__PVT__slot_uop[4U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[5U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[4U] 
                                                 >> 0x00000012U))));
        __Vtemp_2[2U] = ((1U & (vlSelfRef.__PVT__slot_uop[5U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[6U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[5U] 
                                                 >> 0x00000012U))));
        __Vtemp_2[3U] = ((1U & (vlSelfRef.__PVT__slot_uop[6U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[7U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[6U] 
                                                 >> 0x00000012U))));
        __Vtemp_2[4U] = ((1U & (vlSelfRef.__PVT__slot_uop[7U] 
                                >> 0x00000012U)) | 
                         (0x0000003eU & (vlSelfRef.__PVT__slot_uop[7U] 
                                         >> 0x00000012U)));
    } else {
        __Vtemp_2[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[3U] 
                                             >> 0x00000012U));
        __Vtemp_2[1U] = ((vlSelfRef.__PVT__slot_uop[5U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[4U] 
                                             >> 0x00000012U));
        __Vtemp_2[2U] = ((vlSelfRef.__PVT__slot_uop[6U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[5U] 
                                             >> 0x00000012U));
        __Vtemp_2[3U] = ((vlSelfRef.__PVT__slot_uop[7U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[6U] 
                                             >> 0x00000012U));
        __Vtemp_2[4U] = ((vlSelfRef.__PVT__slot_uop[8U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[7U] 
                                             >> 0x00000012U));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__15__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__15__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__next_uop[0U] = vlSelfRef.__PVT__slot_uop[0U];
    vlSelfRef.__PVT__next_uop[1U] = vlSelfRef.__PVT__slot_uop[1U];
    vlSelfRef.__PVT__next_uop[2U] = vlSelfRef.__PVT__slot_uop[2U];
    vlSelfRef.__PVT__next_uop[3U] = ((0xffff0000U & vlSelfRef.__PVT__next_uop[3U]) 
                                     | (0x0000ffffU 
                                        & vlSelfRef.__PVT__slot_uop[3U]));
    vlSelfRef.__PVT__next_uop[3U] = ((0xfffcffffU & vlSelfRef.__PVT__next_uop[3U]) 
                                     | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157) 
                                         << 0x00000011U) 
                                        | (0x00010000U 
                                           & (((~ (
                                                   ((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
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
                                               << 0x00000010U) 
                                              & vlSelfRef.__PVT__slot_uop[3U]))));
    vlSelfRef.__PVT__next_uop[3U] = ((0x0003ffffU & vlSelfRef.__PVT__next_uop[3U]) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[0U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[0U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[1U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[1U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[2U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[6U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[2U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[3U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[7U] = ((0xf0000000U & vlSelfRef.__PVT__next_uop[7U]) 
                                     | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[3U] 
                                         >> 0x0000000eU) 
                                        | (((0x000003c0U 
                                             & (((~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                 & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                     << 8U) 
                                                    | (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U))) 
                                                << 6U)) 
                                            | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[4U]) 
                                           << 0x00000012U)));
    vlSelfRef.__PVT__next_uop[7U] = ((0x0fffffffU & vlSelfRef.__PVT__next_uop[7U]) 
                                     | (((0xffffc000U 
                                          & (vlSelfRef.__PVT__slot_uop[8U] 
                                             << 4U)) 
                                         | ((0x00002000U 
                                             & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                                                >> 2U)) 
                                            | (0x00001fffU 
                                               & ((vlSelfRef.__PVT__slot_uop[8U] 
                                                   << 4U) 
                                                  | (vlSelfRef.__PVT__slot_uop[7U] 
                                                     >> 0x0000001cU))))) 
                                        << 0x0000001cU));
    vlSelfRef.__PVT__next_uop[8U] = ((((0xffffc000U 
                                        & (vlSelfRef.__PVT__slot_uop[8U] 
                                           << 4U)) 
                                       | ((0x00002000U 
                                           & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                                              >> 2U)) 
                                          | (0x00001fffU 
                                             & ((vlSelfRef.__PVT__slot_uop[8U] 
                                                 << 4U) 
                                                | (vlSelfRef.__PVT__slot_uop[7U] 
                                                   >> 0x0000001cU))))) 
                                      >> 4U) | ((((0x00003ff0U 
                                                   & (vlSelfRef.__PVT__slot_uop[9U] 
                                                      << 4U)) 
                                                  | (vlSelfRef.__PVT__slot_uop[8U] 
                                                     >> 0x0000001cU)) 
                                                 | (0xffffc000U 
                                                    & (vlSelfRef.__PVT__slot_uop[9U] 
                                                       << 4U))) 
                                                << 0x0000001cU));
    vlSelfRef.__PVT__next_uop[9U] = (((((0x00003ff0U 
                                         & (vlSelfRef.__PVT__slot_uop[9U] 
                                            << 4U)) 
                                        | (vlSelfRef.__PVT__slot_uop[8U] 
                                           >> 0x0000001cU)) 
                                       | (0xffffc000U 
                                          & (vlSelfRef.__PVT__slot_uop[9U] 
                                             << 4U))) 
                                      >> 4U) | ((((0x00003ff0U 
                                                   & (vlSelfRef.__PVT__slot_uop[10U] 
                                                      << 4U)) 
                                                  | (vlSelfRef.__PVT__slot_uop[9U] 
                                                     >> 0x0000001cU)) 
                                                 | (0xffffc000U 
                                                    & (vlSelfRef.__PVT__slot_uop[10U] 
                                                       << 4U))) 
                                                << 0x0000001cU));
    vlSelfRef.__PVT__next_uop[10U] = (((((0x00003ff0U 
                                          & (vlSelfRef.__PVT__slot_uop[10U] 
                                             << 4U)) 
                                         | (vlSelfRef.__PVT__slot_uop[9U] 
                                            >> 0x0000001cU)) 
                                        | (0xffffc000U 
                                           & (vlSelfRef.__PVT__slot_uop[10U] 
                                              << 4U))) 
                                       >> 4U) | (((
                                                   (0x00003ff0U 
                                                    & (vlSelfRef.__PVT__slot_uop[11U] 
                                                       << 4U)) 
                                                   | (vlSelfRef.__PVT__slot_uop[10U] 
                                                      >> 0x0000001cU)) 
                                                  | (0x1fffc000U 
                                                     & (vlSelfRef.__PVT__slot_uop[11U] 
                                                        << 4U))) 
                                                 << 0x0000001cU));
    vlSelfRef.__PVT__next_uop[11U] = (0x01ffffffU & 
                                      ((((0x00003ff0U 
                                          & (vlSelfRef.__PVT__slot_uop[11U] 
                                             << 4U)) 
                                         | (vlSelfRef.__PVT__slot_uop[10U] 
                                            >> 0x0000001cU)) 
                                        | (0x1fffc000U 
                                           & (vlSelfRef.__PVT__slot_uop[11U] 
                                              << 4U))) 
                                       >> 4U));
    vlSelfRef.request = ((IData)(vlSelfRef.__PVT__slot_valid) 
                         & ((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                            & ((~ (vlSelfRef.__PVT__slot_uop[8U] 
                                   >> 9U)) & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_218)) 
                                              & ((~ 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelfRef.__PVT__next_uop[3U] 
                                                       >> 0x00000010U)))) 
                                                 | ((IData)(vlSelfRef.__PVT__dgen_ready) 
                                                    | (IData)(vlSelfRef.__PVT__agen_ready)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_155[0U] 
        = ((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[0U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_155[1U] 
        = ((vlSelfRef.__PVT__next_uop[2U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_155[2U] 
        = ((vlSelfRef.__PVT__next_uop[3U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_155[3U] 
        = ((vlSelfRef.__PVT__next_uop[4U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[3U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_155[4U] 
        = ((vlSelfRef.__PVT__next_uop[5U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[4U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_155[5U] 
        = ((vlSelfRef.__PVT__next_uop[6U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[5U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_155[6U] 
        = ((vlSelfRef.__PVT__next_uop[7U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[6U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_155[7U] 
        = (0x0007ffffU & ((vlSelfRef.__PVT__next_uop[8U] 
                           << 7U) | (vlSelfRef.__PVT__next_uop[7U] 
                                     >> 0x00000019U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_156[0U] 
        = (((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
            (0x0000007cU & (vlSelfRef.__PVT__next_uop[0U] 
                            >> 0x00000019U))) | (3U 
                                                 & (vlSelfRef.__PVT__slot_uop[0U] 
                                                    >> 0x00000017U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_156[1U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[2U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[1U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_156[2U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[3U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[2U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_156[3U] 
        = ((0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_156[3U]) 
           | ((0x0000fc00U & ((vlSelfRef.__PVT__slot_uop[4U] 
                               << 0x0000000dU) | (0x00001c00U 
                                                  & (vlSelfRef.__PVT__slot_uop[3U] 
                                                     >> 0x00000013U)))) 
              | ((3U & (vlSelfRef.__PVT__next_uop[3U] 
                        >> 0x00000019U)) | (0x000003fcU 
                                            & ((vlSelfRef.__PVT__next_uop[4U] 
                                                << 7U) 
                                               | (0x0000007cU 
                                                  & (vlSelfRef.__PVT__next_uop[3U] 
                                                     >> 0x00000019U)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_156[3U] 
        = ((0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_156[3U]) 
           | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[1U] 
               << 0x00000019U) | (0x01ff0000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[0U] 
                                                 >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_156[4U] 
        = ((0x0000ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[1U] 
                           >> 7U)) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[2U] 
                                       << 0x00000019U) 
                                      | (0x01ff0000U 
                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[1U] 
                                            >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_156[5U] 
        = (0x1fffffffU & (0x18000000U | ((0x0000ffffU 
                                          & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[2U] 
                                             >> 7U)) 
                                         | (0x03ff0000U 
                                            & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[3U] 
                                                << 0x00000019U) 
                                               | (0x01ff0000U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[2U] 
                                                     >> 7U)))))));
}

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__15__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__15__KET____DOT__slot__0\n"); );
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
    if ((0x00008000U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[177U] 
                                 << 9U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[176U] 
                                           >> 0x00000017U));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[178U] 
                                 << 9U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[177U] 
                                           >> 0x00000017U));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[179U] 
                                 << 9U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[178U] 
                                           >> 0x00000017U));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[180U] 
                                 << 9U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[179U] 
                                           >> 0x00000017U));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[181U] 
                                 << 9U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[180U] 
                                           >> 0x00000017U));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[182U] 
                                 << 9U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[181U] 
                                           >> 0x00000017U));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[183U] 
                                 << 9U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[182U] 
                                           >> 0x00000017U));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[184U] 
                                 << 9U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[183U] 
                                           >> 0x00000017U));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[185U] 
                                 << 9U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[184U] 
                                           >> 0x00000017U));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[186U] 
                                 << 9U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[185U] 
                                           >> 0x00000017U));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[187U] 
                                  << 9U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[186U] 
                                            >> 0x00000017U));
        __Vdly__slot_uop[11U] = (0x01ffffffU & ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[188U] 
                                                 << 9U) 
                                                | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[187U] 
                                                   >> 0x00000017U)));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((0x00008000U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 0x0000000fU) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                     & (0x00001800U == (0x00001980U 
                                        & vlSelfRef.__PVT__slot_uop[8U]))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 0x0000000fU) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (0x00001000U == (0x00001080U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__dgen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 0x0000000fU) & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                      & (0x00000800U == (0x00000900U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__agen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000080U | __Vdly__slot_uop[8U]);
            __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 8U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 0x0000000fU)) & (IData)(vlSelfRef.__PVT__dgen_ready))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 7U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 0x0000000fU)) & (IData)(vlSelfRef.__PVT__agen_ready))) {
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

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__15__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__15__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00008000U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((0x00008000U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__15__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__15__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_218 = ((0U 
                                                   != 
                                                   (((vlSelfRef.__PVT__slot_uop[7U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__slot_uop[7U] 
                                                        >> 0x00000018U)) 
                                                    & (IData)(vlSymsp->TOP.boom_core__DOT__mispredict_mask))) 
                                                  & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_136[2U] 
                                                     >> 8U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157 = (1U 
                                                  & ((~ 
                                                      (((IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
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
                                                     & (vlSelfRef.__PVT__slot_uop[3U] 
                                                        >> 0x00000011U)));
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
        __Vtemp_2[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (0x00003ffeU 
                                             & (vlSelfRef.__PVT__slot_uop[3U] 
                                                >> 0x00000012U)));
        __Vtemp_2[1U] = ((1U & (vlSelfRef.__PVT__slot_uop[4U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[5U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[4U] 
                                                 >> 0x00000012U))));
        __Vtemp_2[2U] = ((1U & (vlSelfRef.__PVT__slot_uop[5U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[6U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[5U] 
                                                 >> 0x00000012U))));
        __Vtemp_2[3U] = ((1U & (vlSelfRef.__PVT__slot_uop[6U] 
                                >> 0x00000012U)) | 
                         ((vlSelfRef.__PVT__slot_uop[7U] 
                           << 0x0000000eU) | (0x00003ffeU 
                                              & (vlSelfRef.__PVT__slot_uop[6U] 
                                                 >> 0x00000012U))));
        __Vtemp_2[4U] = ((1U & (vlSelfRef.__PVT__slot_uop[7U] 
                                >> 0x00000012U)) | 
                         (0x0000003eU & (vlSelfRef.__PVT__slot_uop[7U] 
                                         >> 0x00000012U)));
    } else {
        __Vtemp_2[0U] = ((vlSelfRef.__PVT__slot_uop[4U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[3U] 
                                             >> 0x00000012U));
        __Vtemp_2[1U] = ((vlSelfRef.__PVT__slot_uop[5U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[4U] 
                                             >> 0x00000012U));
        __Vtemp_2[2U] = ((vlSelfRef.__PVT__slot_uop[6U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[5U] 
                                             >> 0x00000012U));
        __Vtemp_2[3U] = ((vlSelfRef.__PVT__slot_uop[7U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[6U] 
                                             >> 0x00000012U));
        __Vtemp_2[4U] = ((vlSelfRef.__PVT__slot_uop[8U] 
                          << 0x0000000eU) | (vlSelfRef.__PVT__slot_uop[7U] 
                                             >> 0x00000012U));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__killed = ((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_218));
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}
