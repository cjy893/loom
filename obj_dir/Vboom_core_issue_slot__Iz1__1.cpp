// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboom_core.h for the primary calling header

#include "Vboom_core__pch.h"

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__6__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__6__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_184 = (1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_184)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__6__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__6__KET____DOT__slot__1\n"); );
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
                                     | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_184) 
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
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[0U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[0U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[1U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[1U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[2U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[6U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[2U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[3U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[7U] = ((0xf0000000U & vlSelfRef.__PVT__next_uop[7U]) 
                                     | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[3U] 
                                         >> 0x0000000eU) 
                                        | (((0x000003c0U 
                                             & (((~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                 & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                     << 8U) 
                                                    | (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U))) 
                                                << 6U)) 
                                            | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[4U]) 
                                           << 0x00000012U)));
    vlSelfRef.__PVT__next_uop[7U] = ((0x0fffffffU & vlSelfRef.__PVT__next_uop[7U]) 
                                     | (((0xffffc000U 
                                          & (vlSelfRef.__PVT__slot_uop[8U] 
                                             << 4U)) 
                                         | ((0x00002000U 
                                             & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                                                << 7U)) 
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
                                              << 7U)) 
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
                                   >> 9U)) & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_209)) 
                                              & ((~ 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelfRef.__PVT__next_uop[3U] 
                                                       >> 0x00000010U)))) 
                                                 | ((IData)(vlSelfRef.__PVT__dgen_ready) 
                                                    | (IData)(vlSelfRef.__PVT__agen_ready)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182[0U] 
        = ((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[0U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182[1U] 
        = ((vlSelfRef.__PVT__next_uop[2U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182[2U] 
        = ((vlSelfRef.__PVT__next_uop[3U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182[3U] 
        = ((vlSelfRef.__PVT__next_uop[4U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[3U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182[4U] 
        = ((vlSelfRef.__PVT__next_uop[5U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[4U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182[5U] 
        = ((vlSelfRef.__PVT__next_uop[6U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[5U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182[6U] 
        = ((vlSelfRef.__PVT__next_uop[7U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[6U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182[7U] 
        = (0x0007ffffU & ((vlSelfRef.__PVT__next_uop[8U] 
                           << 7U) | (vlSelfRef.__PVT__next_uop[7U] 
                                     >> 0x00000019U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183[0U] 
        = (((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
            (0x0000007cU & (vlSelfRef.__PVT__next_uop[0U] 
                            >> 0x00000019U))) | (3U 
                                                 & (vlSelfRef.__PVT__slot_uop[0U] 
                                                    >> 0x00000017U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183[1U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[2U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[1U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183[2U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[3U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[2U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183[3U] 
        = ((0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183[3U]) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183[3U] 
        = ((0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183[3U]) 
           | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[1U] 
               << 0x00000019U) | (0x01ff0000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[0U] 
                                                 >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183[4U] 
        = ((0x0000ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[1U] 
                           >> 7U)) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[2U] 
                                       << 0x00000019U) 
                                      | (0x01ff0000U 
                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[1U] 
                                            >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183[5U] 
        = (0x1fffffffU & (0x18000000U | ((0x0000ffffU 
                                          & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[2U] 
                                             >> 7U)) 
                                         | (0x03ff0000U 
                                            & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[3U] 
                                                << 0x00000019U) 
                                               | (0x01ff0000U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[2U] 
                                                     >> 7U)))))));
}

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__6__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__6__KET____DOT__slot__0\n"); );
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
    if ((0x00000040U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[71U] 
                                 << 0x0000000aU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[70U] 
                                 >> 0x00000016U));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[72U] 
                                 << 0x0000000aU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[71U] 
                                 >> 0x00000016U));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[73U] 
                                 << 0x0000000aU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[72U] 
                                 >> 0x00000016U));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[74U] 
                                 << 0x0000000aU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[73U] 
                                 >> 0x00000016U));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[75U] 
                                 << 0x0000000aU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[74U] 
                                 >> 0x00000016U));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[76U] 
                                 << 0x0000000aU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[75U] 
                                 >> 0x00000016U));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[77U] 
                                 << 0x0000000aU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[76U] 
                                 >> 0x00000016U));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[78U] 
                                 << 0x0000000aU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[77U] 
                                 >> 0x00000016U));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[79U] 
                                 << 0x0000000aU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[78U] 
                                 >> 0x00000016U));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[80U] 
                                 << 0x0000000aU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[79U] 
                                 >> 0x00000016U));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[81U] 
                                  << 0x0000000aU) | 
                                 (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[80U] 
                                  >> 0x00000016U));
        __Vdly__slot_uop[11U] = (0x01ffffffU & ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[82U] 
                                                 << 0x0000000aU) 
                                                | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[81U] 
                                                   >> 0x00000016U)));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((0x00000040U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 6U) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                     & (0x00001800U == (0x00001980U 
                                        & vlSelfRef.__PVT__slot_uop[8U]))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 6U) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (0x00001000U == (0x00001080U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__dgen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 6U) & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                      & (0x00000800U == (0x00000900U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__agen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000080U | __Vdly__slot_uop[8U]);
            __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 8U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 6U)) & (IData)(vlSelfRef.__PVT__dgen_ready))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 7U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 6U)) & (IData)(vlSelfRef.__PVT__agen_ready))) {
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

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__6__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__6__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00000040U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((0x00000040U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__6__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__6__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_209 = ((0U 
                                                   != 
                                                   (((vlSelfRef.__PVT__slot_uop[7U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__slot_uop[7U] 
                                                        >> 0x00000018U)) 
                                                    & (IData)(vlSymsp->TOP.boom_core__DOT__mispredict_mask))) 
                                                  & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_136[2U] 
                                                     >> 8U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_184 = (1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__killed = ((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_209));
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_184)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__7__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__7__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181 = (1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__7__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__7__KET____DOT__slot__1\n"); );
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
                                     | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181) 
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
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[0U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[0U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[1U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[1U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[2U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[6U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[2U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[3U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[7U] = ((0xf0000000U & vlSelfRef.__PVT__next_uop[7U]) 
                                     | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[3U] 
                                         >> 0x0000000eU) 
                                        | (((0x000003c0U 
                                             & (((~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                 & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                     << 8U) 
                                                    | (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U))) 
                                                << 6U)) 
                                            | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[4U]) 
                                           << 0x00000012U)));
    vlSelfRef.__PVT__next_uop[7U] = ((0x0fffffffU & vlSelfRef.__PVT__next_uop[7U]) 
                                     | (((0xffffc000U 
                                          & (vlSelfRef.__PVT__slot_uop[8U] 
                                             << 4U)) 
                                         | ((0x00002000U 
                                             & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                                                << 6U)) 
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
                                              << 6U)) 
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
                                   >> 9U)) & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_210)) 
                                              & ((~ 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelfRef.__PVT__next_uop[3U] 
                                                       >> 0x00000010U)))) 
                                                 | ((IData)(vlSelfRef.__PVT__dgen_ready) 
                                                    | (IData)(vlSelfRef.__PVT__agen_ready)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179[0U] 
        = ((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[0U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179[1U] 
        = ((vlSelfRef.__PVT__next_uop[2U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179[2U] 
        = ((vlSelfRef.__PVT__next_uop[3U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179[3U] 
        = ((vlSelfRef.__PVT__next_uop[4U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[3U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179[4U] 
        = ((vlSelfRef.__PVT__next_uop[5U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[4U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179[5U] 
        = ((vlSelfRef.__PVT__next_uop[6U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[5U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179[6U] 
        = ((vlSelfRef.__PVT__next_uop[7U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[6U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179[7U] 
        = (0x0007ffffU & ((vlSelfRef.__PVT__next_uop[8U] 
                           << 7U) | (vlSelfRef.__PVT__next_uop[7U] 
                                     >> 0x00000019U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180[0U] 
        = (((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
            (0x0000007cU & (vlSelfRef.__PVT__next_uop[0U] 
                            >> 0x00000019U))) | (3U 
                                                 & (vlSelfRef.__PVT__slot_uop[0U] 
                                                    >> 0x00000017U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180[1U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[2U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[1U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180[2U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[3U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[2U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180[3U] 
        = ((0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180[3U]) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180[3U] 
        = ((0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180[3U]) 
           | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[1U] 
               << 0x00000019U) | (0x01ff0000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[0U] 
                                                 >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180[4U] 
        = ((0x0000ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[1U] 
                           >> 7U)) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[2U] 
                                       << 0x00000019U) 
                                      | (0x01ff0000U 
                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[1U] 
                                            >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180[5U] 
        = (0x1fffffffU & (0x18000000U | ((0x0000ffffU 
                                          & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[2U] 
                                             >> 7U)) 
                                         | (0x03ff0000U 
                                            & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[3U] 
                                                << 0x00000019U) 
                                               | (0x01ff0000U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[2U] 
                                                     >> 7U)))))));
}

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__7__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__7__KET____DOT__slot__0\n"); );
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
    if ((0x00000080U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[83U] 
                                 << 0x00000011U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[82U] 
                                 >> 0x0000000fU));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[84U] 
                                 << 0x00000011U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[83U] 
                                 >> 0x0000000fU));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[85U] 
                                 << 0x00000011U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[84U] 
                                 >> 0x0000000fU));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[86U] 
                                 << 0x00000011U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[85U] 
                                 >> 0x0000000fU));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[87U] 
                                 << 0x00000011U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[86U] 
                                 >> 0x0000000fU));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[88U] 
                                 << 0x00000011U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[87U] 
                                 >> 0x0000000fU));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[89U] 
                                 << 0x00000011U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[88U] 
                                 >> 0x0000000fU));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[90U] 
                                 << 0x00000011U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[89U] 
                                 >> 0x0000000fU));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[91U] 
                                 << 0x00000011U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[90U] 
                                 >> 0x0000000fU));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[92U] 
                                 << 0x00000011U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[91U] 
                                 >> 0x0000000fU));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[93U] 
                                  << 0x00000011U) | 
                                 (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[92U] 
                                  >> 0x0000000fU));
        __Vdly__slot_uop[11U] = (0x01ffffffU & ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[94U] 
                                                 << 0x00000011U) 
                                                | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[93U] 
                                                   >> 0x0000000fU)));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((0x00000080U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 7U) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                     & (0x00001800U == (0x00001980U 
                                        & vlSelfRef.__PVT__slot_uop[8U]))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 7U) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (0x00001000U == (0x00001080U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__dgen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 7U) & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                      & (0x00000800U == (0x00000900U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__agen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000080U | __Vdly__slot_uop[8U]);
            __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 8U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 7U)) & (IData)(vlSelfRef.__PVT__dgen_ready))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant)) 
              >> 7U) & (IData)(vlSelfRef.__PVT__agen_ready))) {
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

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__7__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__7__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00000080U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((0x00000080U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__7__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__7__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_210 = ((0U 
                                                   != 
                                                   (((vlSelfRef.__PVT__slot_uop[7U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__slot_uop[7U] 
                                                        >> 0x00000018U)) 
                                                    & (IData)(vlSymsp->TOP.boom_core__DOT__mispredict_mask))) 
                                                  & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_136[2U] 
                                                     >> 8U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181 = (1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__killed = ((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_210));
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__8__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__8__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_178 = (1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_178)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__8__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__8__KET____DOT__slot__1\n"); );
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
                                     | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_178) 
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
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[0U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[0U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[1U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[1U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[2U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[6U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[2U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[3U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[7U] = ((0xf0000000U & vlSelfRef.__PVT__next_uop[7U]) 
                                     | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[3U] 
                                         >> 0x0000000eU) 
                                        | (((0x000003c0U 
                                             & (((~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                 & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                     << 8U) 
                                                    | (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U))) 
                                                << 6U)) 
                                            | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[4U]) 
                                           << 0x00000012U)));
    vlSelfRef.__PVT__next_uop[7U] = ((0x0fffffffU & vlSelfRef.__PVT__next_uop[7U]) 
                                     | (((0xffffc000U 
                                          & (vlSelfRef.__PVT__slot_uop[8U] 
                                             << 4U)) 
                                         | ((0x00002000U 
                                             & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                                                << 5U)) 
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
                                              << 5U)) 
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
                                   >> 9U)) & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_211)) 
                                              & ((~ 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelfRef.__PVT__next_uop[3U] 
                                                       >> 0x00000010U)))) 
                                                 | ((IData)(vlSelfRef.__PVT__dgen_ready) 
                                                    | (IData)(vlSelfRef.__PVT__agen_ready)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_176[0U] 
        = ((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[0U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_176[1U] 
        = ((vlSelfRef.__PVT__next_uop[2U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_176[2U] 
        = ((vlSelfRef.__PVT__next_uop[3U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_176[3U] 
        = ((vlSelfRef.__PVT__next_uop[4U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[3U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_176[4U] 
        = ((vlSelfRef.__PVT__next_uop[5U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[4U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_176[5U] 
        = ((vlSelfRef.__PVT__next_uop[6U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[5U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_176[6U] 
        = ((vlSelfRef.__PVT__next_uop[7U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[6U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_176[7U] 
        = (0x0007ffffU & ((vlSelfRef.__PVT__next_uop[8U] 
                           << 7U) | (vlSelfRef.__PVT__next_uop[7U] 
                                     >> 0x00000019U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_177[0U] 
        = (((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
            (0x0000007cU & (vlSelfRef.__PVT__next_uop[0U] 
                            >> 0x00000019U))) | (3U 
                                                 & (vlSelfRef.__PVT__slot_uop[0U] 
                                                    >> 0x00000017U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_177[1U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[2U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[1U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_177[2U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[3U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[2U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_177[3U] 
        = ((0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_177[3U]) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_177[3U] 
        = ((0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_177[3U]) 
           | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[1U] 
               << 0x00000019U) | (0x01ff0000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[0U] 
                                                 >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_177[4U] 
        = ((0x0000ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[1U] 
                           >> 7U)) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[2U] 
                                       << 0x00000019U) 
                                      | (0x01ff0000U 
                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[1U] 
                                            >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_177[5U] 
        = (0x1fffffffU & (0x18000000U | ((0x0000ffffU 
                                          & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[2U] 
                                             >> 7U)) 
                                         | (0x03ff0000U 
                                            & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[3U] 
                                                << 0x00000019U) 
                                               | (0x01ff0000U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[2U] 
                                                     >> 7U)))))));
}

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__8__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__8__KET____DOT__slot__0\n"); );
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
    if ((0x00000100U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[95U] 
                                 << 0x00000018U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[94U] 
                                 >> 8U));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[96U] 
                                 << 0x00000018U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[95U] 
                                 >> 8U));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[97U] 
                                 << 0x00000018U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[96U] 
                                 >> 8U));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[98U] 
                                 << 0x00000018U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[97U] 
                                 >> 8U));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[99U] 
                                 << 0x00000018U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[98U] 
                                 >> 8U));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[100U] 
                                 << 0x00000018U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[99U] 
                                 >> 8U));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[101U] 
                                 << 0x00000018U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[100U] 
                                 >> 8U));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[102U] 
                                 << 0x00000018U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[101U] 
                                 >> 8U));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[103U] 
                                 << 0x00000018U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[102U] 
                                 >> 8U));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[104U] 
                                 << 0x00000018U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[103U] 
                                 >> 8U));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[105U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[104U] 
                                  >> 8U));
        __Vdly__slot_uop[11U] = (0x01ffffffU & ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[106U] 
                                                 << 0x00000018U) 
                                                | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[105U] 
                                                   >> 8U)));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((0x00000100U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 8U) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                     & (0x00001800U == (0x00001980U 
                                        & vlSelfRef.__PVT__slot_uop[8U]))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 8U) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (0x00001000U == (0x00001080U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__dgen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 8U) & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                      & (0x00000800U == (0x00000900U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__agen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000080U | __Vdly__slot_uop[8U]);
            __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant)) 
              >> 8U) & (IData)(vlSelfRef.__PVT__dgen_ready))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 7U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 8U)) & (IData)(vlSelfRef.__PVT__agen_ready))) {
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

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__8__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__8__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00000100U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((0x00000100U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__8__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__8__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_211 = ((0U 
                                                   != 
                                                   (((vlSelfRef.__PVT__slot_uop[7U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__slot_uop[7U] 
                                                        >> 0x00000018U)) 
                                                    & (IData)(vlSymsp->TOP.boom_core__DOT__mispredict_mask))) 
                                                  & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_136[2U] 
                                                     >> 8U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_178 = (1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__killed = ((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_211));
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_178)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__9__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__9__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_175 = (1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_175)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__9__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__9__KET____DOT__slot__1\n"); );
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
                                     | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_175) 
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
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[0U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[0U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[1U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[1U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[2U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[6U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[2U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[3U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[7U] = ((0xf0000000U & vlSelfRef.__PVT__next_uop[7U]) 
                                     | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[3U] 
                                         >> 0x0000000eU) 
                                        | (((0x000003c0U 
                                             & (((~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                 & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                     << 8U) 
                                                    | (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U))) 
                                                << 6U)) 
                                            | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[4U]) 
                                           << 0x00000012U)));
    vlSelfRef.__PVT__next_uop[7U] = ((0x0fffffffU & vlSelfRef.__PVT__next_uop[7U]) 
                                     | (((0xffffc000U 
                                          & (vlSelfRef.__PVT__slot_uop[8U] 
                                             << 4U)) 
                                         | ((0x00002000U 
                                             & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                                                << 4U)) 
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
                                              << 4U)) 
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
                                   >> 9U)) & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_212)) 
                                              & ((~ 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelfRef.__PVT__next_uop[3U] 
                                                       >> 0x00000010U)))) 
                                                 | ((IData)(vlSelfRef.__PVT__dgen_ready) 
                                                    | (IData)(vlSelfRef.__PVT__agen_ready)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_173[0U] 
        = ((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[0U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_173[1U] 
        = ((vlSelfRef.__PVT__next_uop[2U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_173[2U] 
        = ((vlSelfRef.__PVT__next_uop[3U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_173[3U] 
        = ((vlSelfRef.__PVT__next_uop[4U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[3U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_173[4U] 
        = ((vlSelfRef.__PVT__next_uop[5U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[4U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_173[5U] 
        = ((vlSelfRef.__PVT__next_uop[6U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[5U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_173[6U] 
        = ((vlSelfRef.__PVT__next_uop[7U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[6U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_173[7U] 
        = (0x0007ffffU & ((vlSelfRef.__PVT__next_uop[8U] 
                           << 7U) | (vlSelfRef.__PVT__next_uop[7U] 
                                     >> 0x00000019U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_174[0U] 
        = (((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
            (0x0000007cU & (vlSelfRef.__PVT__next_uop[0U] 
                            >> 0x00000019U))) | (3U 
                                                 & (vlSelfRef.__PVT__slot_uop[0U] 
                                                    >> 0x00000017U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_174[1U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[2U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[1U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_174[2U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[3U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[2U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_174[3U] 
        = ((0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_174[3U]) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_174[3U] 
        = ((0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_174[3U]) 
           | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[1U] 
               << 0x00000019U) | (0x01ff0000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[0U] 
                                                 >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_174[4U] 
        = ((0x0000ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[1U] 
                           >> 7U)) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[2U] 
                                       << 0x00000019U) 
                                      | (0x01ff0000U 
                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[1U] 
                                            >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_174[5U] 
        = (0x1fffffffU & (0x18000000U | ((0x0000ffffU 
                                          & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[2U] 
                                             >> 7U)) 
                                         | (0x03ff0000U 
                                            & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[3U] 
                                                << 0x00000019U) 
                                               | (0x01ff0000U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[2U] 
                                                     >> 7U)))))));
}

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__9__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__9__KET____DOT__slot__0\n"); );
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
    if ((0x00000200U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[107U] 
                                 << 0x0000001fU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[106U] 
                                 >> 1U));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[108U] 
                                 << 0x0000001fU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[107U] 
                                 >> 1U));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[109U] 
                                 << 0x0000001fU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[108U] 
                                 >> 1U));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[110U] 
                                 << 0x0000001fU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[109U] 
                                 >> 1U));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[111U] 
                                 << 0x0000001fU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[110U] 
                                 >> 1U));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[112U] 
                                 << 0x0000001fU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[111U] 
                                 >> 1U));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[113U] 
                                 << 0x0000001fU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[112U] 
                                 >> 1U));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[114U] 
                                 << 0x0000001fU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[113U] 
                                 >> 1U));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[115U] 
                                 << 0x0000001fU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[114U] 
                                 >> 1U));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[116U] 
                                 << 0x0000001fU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[115U] 
                                 >> 1U));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[117U] 
                                  << 0x0000001fU) | 
                                 (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[116U] 
                                  >> 1U));
        __Vdly__slot_uop[11U] = (0x01ffffffU & (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[117U] 
                                                >> 1U));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((0x00000200U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 9U) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                     & (0x00001800U == (0x00001980U 
                                        & vlSelfRef.__PVT__slot_uop[8U]))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 9U) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (0x00001000U == (0x00001080U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__dgen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 9U) & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                      & (0x00000800U == (0x00000900U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__agen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000080U | __Vdly__slot_uop[8U]);
            __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 8U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 9U)) & (IData)(vlSelfRef.__PVT__dgen_ready))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 7U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 9U)) & (IData)(vlSelfRef.__PVT__agen_ready))) {
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

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__9__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__9__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00000200U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((0x00000200U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__9__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__9__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_212 = ((0U 
                                                   != 
                                                   (((vlSelfRef.__PVT__slot_uop[7U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__slot_uop[7U] 
                                                        >> 0x00000018U)) 
                                                    & (IData)(vlSymsp->TOP.boom_core__DOT__mispredict_mask))) 
                                                  & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_136[2U] 
                                                     >> 8U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_175 = (1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__killed = ((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_212));
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_175)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__10__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__10__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_172 = (1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_172)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__10__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__10__KET____DOT__slot__1\n"); );
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
                                     | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_172) 
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
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[0U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[0U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[1U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[1U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[2U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[6U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[2U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[3U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[7U] = ((0xf0000000U & vlSelfRef.__PVT__next_uop[7U]) 
                                     | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[3U] 
                                         >> 0x0000000eU) 
                                        | (((0x000003c0U 
                                             & (((~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                 & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                     << 8U) 
                                                    | (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U))) 
                                                << 6U)) 
                                            | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[4U]) 
                                           << 0x00000012U)));
    vlSelfRef.__PVT__next_uop[7U] = ((0x0fffffffU & vlSelfRef.__PVT__next_uop[7U]) 
                                     | (((0xffffc000U 
                                          & (vlSelfRef.__PVT__slot_uop[8U] 
                                             << 4U)) 
                                         | ((0x00002000U 
                                             & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                                                << 3U)) 
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
                                              << 3U)) 
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
                                   >> 9U)) & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_213)) 
                                              & ((~ 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelfRef.__PVT__next_uop[3U] 
                                                       >> 0x00000010U)))) 
                                                 | ((IData)(vlSelfRef.__PVT__dgen_ready) 
                                                    | (IData)(vlSelfRef.__PVT__agen_ready)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[0U] 
        = ((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[0U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[1U] 
        = ((vlSelfRef.__PVT__next_uop[2U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[2U] 
        = ((vlSelfRef.__PVT__next_uop[3U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[3U] 
        = ((vlSelfRef.__PVT__next_uop[4U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[3U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[4U] 
        = ((vlSelfRef.__PVT__next_uop[5U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[4U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[5U] 
        = ((vlSelfRef.__PVT__next_uop[6U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[5U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[6U] 
        = ((vlSelfRef.__PVT__next_uop[7U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[6U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170[7U] 
        = (0x0007ffffU & ((vlSelfRef.__PVT__next_uop[8U] 
                           << 7U) | (vlSelfRef.__PVT__next_uop[7U] 
                                     >> 0x00000019U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[0U] 
        = (((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
            (0x0000007cU & (vlSelfRef.__PVT__next_uop[0U] 
                            >> 0x00000019U))) | (3U 
                                                 & (vlSelfRef.__PVT__slot_uop[0U] 
                                                    >> 0x00000017U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[1U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[2U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[1U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[2U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[3U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[2U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[3U] 
        = ((0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[3U]) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[3U] 
        = ((0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[3U]) 
           | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[1U] 
               << 0x00000019U) | (0x01ff0000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[0U] 
                                                 >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[4U] 
        = ((0x0000ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[1U] 
                           >> 7U)) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[2U] 
                                       << 0x00000019U) 
                                      | (0x01ff0000U 
                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[1U] 
                                            >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[5U] 
        = (0x1fffffffU & (0x18000000U | ((0x0000ffffU 
                                          & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[2U] 
                                             >> 7U)) 
                                         | (0x03ff0000U 
                                            & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[3U] 
                                                << 0x00000019U) 
                                               | (0x01ff0000U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[2U] 
                                                     >> 7U)))))));
}

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__10__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__10__KET____DOT__slot__0\n"); );
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
    if ((0x00000400U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[118U] 
                                 << 6U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[117U] 
                                           >> 0x0000001aU));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[119U] 
                                 << 6U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[118U] 
                                           >> 0x0000001aU));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[120U] 
                                 << 6U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[119U] 
                                           >> 0x0000001aU));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[121U] 
                                 << 6U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[120U] 
                                           >> 0x0000001aU));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[122U] 
                                 << 6U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[121U] 
                                           >> 0x0000001aU));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[123U] 
                                 << 6U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[122U] 
                                           >> 0x0000001aU));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[124U] 
                                 << 6U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[123U] 
                                           >> 0x0000001aU));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[125U] 
                                 << 6U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[124U] 
                                           >> 0x0000001aU));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[126U] 
                                 << 6U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[125U] 
                                           >> 0x0000001aU));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[127U] 
                                 << 6U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[126U] 
                                           >> 0x0000001aU));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[128U] 
                                  << 6U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[127U] 
                                            >> 0x0000001aU));
        __Vdly__slot_uop[11U] = (0x01ffffffU & ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[129U] 
                                                 << 6U) 
                                                | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[128U] 
                                                   >> 0x0000001aU)));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((0x00000400U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 0x0000000aU) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                     & (0x00001800U == (0x00001980U 
                                        & vlSelfRef.__PVT__slot_uop[8U]))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 0x0000000aU) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (0x00001000U == (0x00001080U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__dgen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 0x0000000aU) & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                      & (0x00000800U == (0x00000900U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__agen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000080U | __Vdly__slot_uop[8U]);
            __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 8U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__dgen_ready))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 7U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__agen_ready))) {
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

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__10__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__10__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00000400U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((0x00000400U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__10__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__10__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_213 = ((0U 
                                                   != 
                                                   (((vlSelfRef.__PVT__slot_uop[7U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__slot_uop[7U] 
                                                        >> 0x00000018U)) 
                                                    & (IData)(vlSymsp->TOP.boom_core__DOT__mispredict_mask))) 
                                                  & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_136[2U] 
                                                     >> 8U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_172 = (1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__killed = ((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_213));
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_172)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__11__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__11__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_169 = (1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_169)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__11__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__11__KET____DOT__slot__1\n"); );
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
                                     | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_169) 
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
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[0U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[0U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[1U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[1U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[2U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[6U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[2U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[3U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[7U] = ((0xf0000000U & vlSelfRef.__PVT__next_uop[7U]) 
                                     | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[3U] 
                                         >> 0x0000000eU) 
                                        | (((0x000003c0U 
                                             & (((~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                 & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                     << 8U) 
                                                    | (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U))) 
                                                << 6U)) 
                                            | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[4U]) 
                                           << 0x00000012U)));
    vlSelfRef.__PVT__next_uop[7U] = ((0x0fffffffU & vlSelfRef.__PVT__next_uop[7U]) 
                                     | (((0xffffc000U 
                                          & (vlSelfRef.__PVT__slot_uop[8U] 
                                             << 4U)) 
                                         | ((0x00002000U 
                                             & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                                                << 2U)) 
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
                                              << 2U)) 
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
                                   >> 9U)) & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_214)) 
                                              & ((~ 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelfRef.__PVT__next_uop[3U] 
                                                       >> 0x00000010U)))) 
                                                 | ((IData)(vlSelfRef.__PVT__dgen_ready) 
                                                    | (IData)(vlSelfRef.__PVT__agen_ready)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_167[0U] 
        = ((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[0U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_167[1U] 
        = ((vlSelfRef.__PVT__next_uop[2U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_167[2U] 
        = ((vlSelfRef.__PVT__next_uop[3U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_167[3U] 
        = ((vlSelfRef.__PVT__next_uop[4U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[3U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_167[4U] 
        = ((vlSelfRef.__PVT__next_uop[5U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[4U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_167[5U] 
        = ((vlSelfRef.__PVT__next_uop[6U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[5U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_167[6U] 
        = ((vlSelfRef.__PVT__next_uop[7U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[6U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_167[7U] 
        = (0x0007ffffU & ((vlSelfRef.__PVT__next_uop[8U] 
                           << 7U) | (vlSelfRef.__PVT__next_uop[7U] 
                                     >> 0x00000019U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_168[0U] 
        = (((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
            (0x0000007cU & (vlSelfRef.__PVT__next_uop[0U] 
                            >> 0x00000019U))) | (3U 
                                                 & (vlSelfRef.__PVT__slot_uop[0U] 
                                                    >> 0x00000017U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_168[1U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[2U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[1U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_168[2U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[3U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[2U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_168[3U] 
        = ((0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_168[3U]) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_168[3U] 
        = ((0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_168[3U]) 
           | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[1U] 
               << 0x00000019U) | (0x01ff0000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[0U] 
                                                 >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_168[4U] 
        = ((0x0000ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[1U] 
                           >> 7U)) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[2U] 
                                       << 0x00000019U) 
                                      | (0x01ff0000U 
                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[1U] 
                                            >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_168[5U] 
        = (0x1fffffffU & (0x18000000U | ((0x0000ffffU 
                                          & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[2U] 
                                             >> 7U)) 
                                         | (0x03ff0000U 
                                            & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[3U] 
                                                << 0x00000019U) 
                                               | (0x01ff0000U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[2U] 
                                                     >> 7U)))))));
}

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__11__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__11__KET____DOT__slot__0\n"); );
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
    if ((0x00000800U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[130U] 
                                 << 0x0000000dU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[129U] 
                                 >> 0x00000013U));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[131U] 
                                 << 0x0000000dU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[130U] 
                                 >> 0x00000013U));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[132U] 
                                 << 0x0000000dU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[131U] 
                                 >> 0x00000013U));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[133U] 
                                 << 0x0000000dU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[132U] 
                                 >> 0x00000013U));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[134U] 
                                 << 0x0000000dU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[133U] 
                                 >> 0x00000013U));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[135U] 
                                 << 0x0000000dU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[134U] 
                                 >> 0x00000013U));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[136U] 
                                 << 0x0000000dU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[135U] 
                                 >> 0x00000013U));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[137U] 
                                 << 0x0000000dU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[136U] 
                                 >> 0x00000013U));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[138U] 
                                 << 0x0000000dU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[137U] 
                                 >> 0x00000013U));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[139U] 
                                 << 0x0000000dU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[138U] 
                                 >> 0x00000013U));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[140U] 
                                  << 0x0000000dU) | 
                                 (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[139U] 
                                  >> 0x00000013U));
        __Vdly__slot_uop[11U] = (0x01ffffffU & ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[141U] 
                                                 << 0x0000000dU) 
                                                | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[140U] 
                                                   >> 0x00000013U)));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((0x00000800U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 0x0000000bU) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                     & (0x00001800U == (0x00001980U 
                                        & vlSelfRef.__PVT__slot_uop[8U]))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 0x0000000bU) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (0x00001000U == (0x00001080U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__dgen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 0x0000000bU) & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                      & (0x00000800U == (0x00000900U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__agen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000080U | __Vdly__slot_uop[8U]);
            __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 8U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 0x0000000bU)) & (IData)(vlSelfRef.__PVT__dgen_ready))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 7U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 0x0000000bU)) & (IData)(vlSelfRef.__PVT__agen_ready))) {
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

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__11__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__11__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00000800U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((0x00000800U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__11__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__11__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_214 = ((0U 
                                                   != 
                                                   (((vlSelfRef.__PVT__slot_uop[7U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__slot_uop[7U] 
                                                        >> 0x00000018U)) 
                                                    & (IData)(vlSymsp->TOP.boom_core__DOT__mispredict_mask))) 
                                                  & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_136[2U] 
                                                     >> 8U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_169 = (1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__killed = ((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_214));
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_169)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}
