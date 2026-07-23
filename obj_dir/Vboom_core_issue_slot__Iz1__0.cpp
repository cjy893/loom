// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboom_core.h for the primary calling header

#include "Vboom_core__pch.h"

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__0__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__0__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_202 = (1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_202)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__0__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__0__KET____DOT__slot__1\n"); );
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
                                     | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_202) 
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
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[0U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[0U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[1U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[1U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[2U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[6U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[2U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[3U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[7U] = ((0xf0000000U & vlSelfRef.__PVT__next_uop[7U]) 
                                     | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[3U] 
                                         >> 0x0000000eU) 
                                        | (((0x000003c0U 
                                             & (((~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                 & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                     << 8U) 
                                                    | (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U))) 
                                                << 6U)) 
                                            | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[4U]) 
                                           << 0x00000012U)));
    vlSelfRef.__PVT__next_uop[7U] = ((0x0fffffffU & vlSelfRef.__PVT__next_uop[7U]) 
                                     | (((0xffffc000U 
                                          & (vlSelfRef.__PVT__slot_uop[8U] 
                                             << 4U)) 
                                         | ((0x00002000U 
                                             & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                                                << 0x0000000dU)) 
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
                                              << 0x0000000dU)) 
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
                                   >> 9U)) & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_203)) 
                                              & ((~ 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelfRef.__PVT__next_uop[3U] 
                                                       >> 0x00000010U)))) 
                                                 | ((IData)(vlSelfRef.__PVT__dgen_ready) 
                                                    | (IData)(vlSelfRef.__PVT__agen_ready)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_200[0U] 
        = ((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[0U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_200[1U] 
        = ((vlSelfRef.__PVT__next_uop[2U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_200[2U] 
        = ((vlSelfRef.__PVT__next_uop[3U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_200[3U] 
        = ((vlSelfRef.__PVT__next_uop[4U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[3U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_200[4U] 
        = ((vlSelfRef.__PVT__next_uop[5U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[4U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_200[5U] 
        = ((vlSelfRef.__PVT__next_uop[6U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[5U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_200[6U] 
        = ((vlSelfRef.__PVT__next_uop[7U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[6U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_200[7U] 
        = (0x0007ffffU & ((vlSelfRef.__PVT__next_uop[8U] 
                           << 7U) | (vlSelfRef.__PVT__next_uop[7U] 
                                     >> 0x00000019U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_201[0U] 
        = (((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
            (0x0000007cU & (vlSelfRef.__PVT__next_uop[0U] 
                            >> 0x00000019U))) | (3U 
                                                 & (vlSelfRef.__PVT__slot_uop[0U] 
                                                    >> 0x00000017U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_201[1U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[2U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[1U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_201[2U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[3U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[2U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_201[3U] 
        = ((0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_201[3U]) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_201[3U] 
        = ((0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_201[3U]) 
           | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[1U] 
               << 0x00000019U) | (0x01ff0000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[0U] 
                                                 >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_201[4U] 
        = ((0x0000ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[1U] 
                           >> 7U)) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[2U] 
                                       << 0x00000019U) 
                                      | (0x01ff0000U 
                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[1U] 
                                            >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_201[5U] 
        = (0x1fffffffU & (0x18000000U | ((0x0000ffffU 
                                          & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[2U] 
                                             >> 7U)) 
                                         | (0x03ff0000U 
                                            & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[3U] 
                                                << 0x00000019U) 
                                               | (0x01ff0000U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[2U] 
                                                     >> 7U)))))));
}

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__0__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__0__KET____DOT__slot__0\n"); );
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
    if ((1U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[0U];
        __Vdly__slot_uop[1U] = vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[1U];
        __Vdly__slot_uop[2U] = vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[2U];
        __Vdly__slot_uop[3U] = vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[3U];
        __Vdly__slot_uop[4U] = vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[4U];
        __Vdly__slot_uop[5U] = vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[5U];
        __Vdly__slot_uop[6U] = vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[6U];
        __Vdly__slot_uop[7U] = vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[7U];
        __Vdly__slot_uop[8U] = vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[8U];
        __Vdly__slot_uop[9U] = vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[9U];
        __Vdly__slot_uop[10U] = vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[10U];
        __Vdly__slot_uop[11U] = (0x01ffffffU & vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[11U]);
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((1U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if (((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
               & (IData)(vlSelfRef.__PVT__agen_ready)) 
              & (IData)(vlSelfRef.__PVT__dgen_ready)) 
             & (0x00001800U == (0x00001980U & vlSelfRef.__PVT__slot_uop[8U])))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if (((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
               & (IData)(vlSelfRef.__PVT__agen_ready)) 
              & (0x00001000U == (0x00001080U & vlSelfRef.__PVT__slot_uop[8U]))) 
             & (~ (IData)(vlSelfRef.__PVT__dgen_ready)))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if (((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
               & (IData)(vlSelfRef.__PVT__dgen_ready)) 
              & (0x00000800U == (0x00000900U & vlSelfRef.__PVT__slot_uop[8U]))) 
             & (~ (IData)(vlSelfRef.__PVT__agen_ready)))) {
            __Vdly__slot_uop[8U] = (0x00000080U | __Vdly__slot_uop[8U]);
            __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 8U) 
              & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant)) 
             & (IData)(vlSelfRef.__PVT__dgen_ready))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 7U) 
              & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant)) 
             & (IData)(vlSelfRef.__PVT__agen_ready))) {
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

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__0__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__0__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((1U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((1U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__0__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__0__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_203 = ((0U 
                                                   != 
                                                   (((vlSelfRef.__PVT__slot_uop[7U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__slot_uop[7U] 
                                                        >> 0x00000018U)) 
                                                    & (IData)(vlSymsp->TOP.boom_core__DOT__mispredict_mask))) 
                                                  & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_136[2U] 
                                                     >> 8U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_202 = (1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__killed = ((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_203));
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_202)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__1__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__1__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_199 = (1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_199)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__1__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__1__KET____DOT__slot__1\n"); );
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
                                     | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_199) 
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
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[0U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[0U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[1U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[1U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[2U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[6U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[2U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[3U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[7U] = ((0xf0000000U & vlSelfRef.__PVT__next_uop[7U]) 
                                     | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[3U] 
                                         >> 0x0000000eU) 
                                        | (((0x000003c0U 
                                             & (((~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                 & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                     << 8U) 
                                                    | (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U))) 
                                                << 6U)) 
                                            | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[4U]) 
                                           << 0x00000012U)));
    vlSelfRef.__PVT__next_uop[7U] = ((0x0fffffffU & vlSelfRef.__PVT__next_uop[7U]) 
                                     | (((0xffffc000U 
                                          & (vlSelfRef.__PVT__slot_uop[8U] 
                                             << 4U)) 
                                         | ((0x00002000U 
                                             & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                                                << 0x0000000cU)) 
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
                                              << 0x0000000cU)) 
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
                                   >> 9U)) & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_204)) 
                                              & ((~ 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelfRef.__PVT__next_uop[3U] 
                                                       >> 0x00000010U)))) 
                                                 | ((IData)(vlSelfRef.__PVT__dgen_ready) 
                                                    | (IData)(vlSelfRef.__PVT__agen_ready)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197[0U] 
        = ((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[0U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197[1U] 
        = ((vlSelfRef.__PVT__next_uop[2U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197[2U] 
        = ((vlSelfRef.__PVT__next_uop[3U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197[3U] 
        = ((vlSelfRef.__PVT__next_uop[4U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[3U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197[4U] 
        = ((vlSelfRef.__PVT__next_uop[5U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[4U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197[5U] 
        = ((vlSelfRef.__PVT__next_uop[6U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[5U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197[6U] 
        = ((vlSelfRef.__PVT__next_uop[7U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[6U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_197[7U] 
        = (0x0007ffffU & ((vlSelfRef.__PVT__next_uop[8U] 
                           << 7U) | (vlSelfRef.__PVT__next_uop[7U] 
                                     >> 0x00000019U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_198[0U] 
        = (((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
            (0x0000007cU & (vlSelfRef.__PVT__next_uop[0U] 
                            >> 0x00000019U))) | (3U 
                                                 & (vlSelfRef.__PVT__slot_uop[0U] 
                                                    >> 0x00000017U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_198[1U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[2U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[1U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_198[2U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[3U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[2U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_198[3U] 
        = ((0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_198[3U]) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_198[3U] 
        = ((0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_198[3U]) 
           | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[1U] 
               << 0x00000019U) | (0x01ff0000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[0U] 
                                                 >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_198[4U] 
        = ((0x0000ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[1U] 
                           >> 7U)) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[2U] 
                                       << 0x00000019U) 
                                      | (0x01ff0000U 
                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[1U] 
                                            >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_198[5U] 
        = (0x1fffffffU & (0x18000000U | ((0x0000ffffU 
                                          & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[2U] 
                                             >> 7U)) 
                                         | (0x03ff0000U 
                                            & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[3U] 
                                                << 0x00000019U) 
                                               | (0x01ff0000U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[2U] 
                                                     >> 7U)))))));
}

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__1__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__1__KET____DOT__slot__0\n"); );
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
    if ((2U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[12U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[11U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[13U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[12U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[14U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[13U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[15U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[14U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[16U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[15U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[17U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[16U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[18U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[17U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[19U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[18U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[20U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[19U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[21U] 
                                 << 7U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[20U] 
                                           >> 0x00000019U));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[22U] 
                                  << 7U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[21U] 
                                            >> 0x00000019U));
        __Vdly__slot_uop[11U] = (0x01ffffffU & ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[23U] 
                                                 << 7U) 
                                                | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[22U] 
                                                   >> 0x00000019U)));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((2U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 1U) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                     & (0x00001800U == (0x00001980U 
                                        & vlSelfRef.__PVT__slot_uop[8U]))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 1U) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (0x00001000U == (0x00001080U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__dgen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 1U) & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                      & (0x00000800U == (0x00000900U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__agen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000080U | __Vdly__slot_uop[8U]);
            __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 8U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 1U)) & (IData)(vlSelfRef.__PVT__dgen_ready))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 7U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 1U)) & (IData)(vlSelfRef.__PVT__agen_ready))) {
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

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__1__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__1__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((2U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((2U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__1__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__1__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_204 = ((0U 
                                                   != 
                                                   (((vlSelfRef.__PVT__slot_uop[7U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__slot_uop[7U] 
                                                        >> 0x00000018U)) 
                                                    & (IData)(vlSymsp->TOP.boom_core__DOT__mispredict_mask))) 
                                                  & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_136[2U] 
                                                     >> 8U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_199 = (1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__killed = ((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_204));
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_199)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__2__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__2__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_196 = (1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_196)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__2__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__2__KET____DOT__slot__1\n"); );
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
                                     | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_196) 
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
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[0U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[0U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[1U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[1U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[2U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[6U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[2U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[3U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[7U] = ((0xf0000000U & vlSelfRef.__PVT__next_uop[7U]) 
                                     | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[3U] 
                                         >> 0x0000000eU) 
                                        | (((0x000003c0U 
                                             & (((~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                 & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                     << 8U) 
                                                    | (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U))) 
                                                << 6U)) 
                                            | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[4U]) 
                                           << 0x00000012U)));
    vlSelfRef.__PVT__next_uop[7U] = ((0x0fffffffU & vlSelfRef.__PVT__next_uop[7U]) 
                                     | (((0xffffc000U 
                                          & (vlSelfRef.__PVT__slot_uop[8U] 
                                             << 4U)) 
                                         | ((0x00002000U 
                                             & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                                                << 0x0000000bU)) 
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
                                              << 0x0000000bU)) 
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
                                   >> 9U)) & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_205)) 
                                              & ((~ 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelfRef.__PVT__next_uop[3U] 
                                                       >> 0x00000010U)))) 
                                                 | ((IData)(vlSelfRef.__PVT__dgen_ready) 
                                                    | (IData)(vlSelfRef.__PVT__agen_ready)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_194[0U] 
        = ((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[0U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_194[1U] 
        = ((vlSelfRef.__PVT__next_uop[2U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_194[2U] 
        = ((vlSelfRef.__PVT__next_uop[3U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_194[3U] 
        = ((vlSelfRef.__PVT__next_uop[4U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[3U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_194[4U] 
        = ((vlSelfRef.__PVT__next_uop[5U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[4U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_194[5U] 
        = ((vlSelfRef.__PVT__next_uop[6U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[5U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_194[6U] 
        = ((vlSelfRef.__PVT__next_uop[7U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[6U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_194[7U] 
        = (0x0007ffffU & ((vlSelfRef.__PVT__next_uop[8U] 
                           << 7U) | (vlSelfRef.__PVT__next_uop[7U] 
                                     >> 0x00000019U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_195[0U] 
        = (((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
            (0x0000007cU & (vlSelfRef.__PVT__next_uop[0U] 
                            >> 0x00000019U))) | (3U 
                                                 & (vlSelfRef.__PVT__slot_uop[0U] 
                                                    >> 0x00000017U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_195[1U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[2U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[1U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_195[2U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[3U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[2U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_195[3U] 
        = ((0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_195[3U]) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_195[3U] 
        = ((0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_195[3U]) 
           | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[1U] 
               << 0x00000019U) | (0x01ff0000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[0U] 
                                                 >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_195[4U] 
        = ((0x0000ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[1U] 
                           >> 7U)) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[2U] 
                                       << 0x00000019U) 
                                      | (0x01ff0000U 
                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[1U] 
                                            >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_195[5U] 
        = (0x1fffffffU & (0x18000000U | ((0x0000ffffU 
                                          & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[2U] 
                                             >> 7U)) 
                                         | (0x03ff0000U 
                                            & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[3U] 
                                                << 0x00000019U) 
                                               | (0x01ff0000U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[2U] 
                                                     >> 7U)))))));
}

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__2__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__2__KET____DOT__slot__0\n"); );
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
    if ((4U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[24U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[23U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[25U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[24U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[26U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[25U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[27U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[26U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[28U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[27U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[29U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[28U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[30U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[29U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[31U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[30U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[32U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[31U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[33U] 
                                 << 0x0000000eU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[32U] 
                                 >> 0x00000012U));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[34U] 
                                  << 0x0000000eU) | 
                                 (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[33U] 
                                  >> 0x00000012U));
        __Vdly__slot_uop[11U] = (0x01ffffffU & ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[35U] 
                                                 << 0x0000000eU) 
                                                | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[34U] 
                                                   >> 0x00000012U)));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((4U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 2U) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                     & (0x00001800U == (0x00001980U 
                                        & vlSelfRef.__PVT__slot_uop[8U]))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 2U) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (0x00001000U == (0x00001080U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__dgen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 2U) & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                      & (0x00000800U == (0x00000900U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__agen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000080U | __Vdly__slot_uop[8U]);
            __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 8U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 2U)) & (IData)(vlSelfRef.__PVT__dgen_ready))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 7U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 2U)) & (IData)(vlSelfRef.__PVT__agen_ready))) {
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

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__2__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__2__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((4U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((4U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__2__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__2__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_205 = ((0U 
                                                   != 
                                                   (((vlSelfRef.__PVT__slot_uop[7U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__slot_uop[7U] 
                                                        >> 0x00000018U)) 
                                                    & (IData)(vlSymsp->TOP.boom_core__DOT__mispredict_mask))) 
                                                  & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_136[2U] 
                                                     >> 8U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_196 = (1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__killed = ((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_205));
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_196)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__3__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__3__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193 = (1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__3__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__3__KET____DOT__slot__1\n"); );
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
                                     | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193) 
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
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[0U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[0U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[1U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[1U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[2U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[6U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[2U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[3U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[7U] = ((0xf0000000U & vlSelfRef.__PVT__next_uop[7U]) 
                                     | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[3U] 
                                         >> 0x0000000eU) 
                                        | (((0x000003c0U 
                                             & (((~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                 & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                     << 8U) 
                                                    | (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U))) 
                                                << 6U)) 
                                            | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[4U]) 
                                           << 0x00000012U)));
    vlSelfRef.__PVT__next_uop[7U] = ((0x0fffffffU & vlSelfRef.__PVT__next_uop[7U]) 
                                     | (((0xffffc000U 
                                          & (vlSelfRef.__PVT__slot_uop[8U] 
                                             << 4U)) 
                                         | ((0x00002000U 
                                             & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                                                << 0x0000000aU)) 
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
                                              << 0x0000000aU)) 
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
                                   >> 9U)) & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_206)) 
                                              & ((~ 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelfRef.__PVT__next_uop[3U] 
                                                       >> 0x00000010U)))) 
                                                 | ((IData)(vlSelfRef.__PVT__dgen_ready) 
                                                    | (IData)(vlSelfRef.__PVT__agen_ready)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_191[0U] 
        = ((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[0U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_191[1U] 
        = ((vlSelfRef.__PVT__next_uop[2U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_191[2U] 
        = ((vlSelfRef.__PVT__next_uop[3U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_191[3U] 
        = ((vlSelfRef.__PVT__next_uop[4U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[3U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_191[4U] 
        = ((vlSelfRef.__PVT__next_uop[5U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[4U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_191[5U] 
        = ((vlSelfRef.__PVT__next_uop[6U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[5U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_191[6U] 
        = ((vlSelfRef.__PVT__next_uop[7U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[6U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_191[7U] 
        = (0x0007ffffU & ((vlSelfRef.__PVT__next_uop[8U] 
                           << 7U) | (vlSelfRef.__PVT__next_uop[7U] 
                                     >> 0x00000019U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_192[0U] 
        = (((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
            (0x0000007cU & (vlSelfRef.__PVT__next_uop[0U] 
                            >> 0x00000019U))) | (3U 
                                                 & (vlSelfRef.__PVT__slot_uop[0U] 
                                                    >> 0x00000017U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_192[1U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[2U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[1U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_192[2U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[3U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[2U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_192[3U] 
        = ((0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_192[3U]) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_192[3U] 
        = ((0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_192[3U]) 
           | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[1U] 
               << 0x00000019U) | (0x01ff0000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[0U] 
                                                 >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_192[4U] 
        = ((0x0000ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[1U] 
                           >> 7U)) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[2U] 
                                       << 0x00000019U) 
                                      | (0x01ff0000U 
                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[1U] 
                                            >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_192[5U] 
        = (0x1fffffffU & (0x18000000U | ((0x0000ffffU 
                                          & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[2U] 
                                             >> 7U)) 
                                         | (0x03ff0000U 
                                            & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[3U] 
                                                << 0x00000019U) 
                                               | (0x01ff0000U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[2U] 
                                                     >> 7U)))))));
}

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__3__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__3__KET____DOT__slot__0\n"); );
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
    if ((8U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[36U] 
                                 << 0x00000015U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[35U] 
                                 >> 0x0000000bU));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[37U] 
                                 << 0x00000015U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[36U] 
                                 >> 0x0000000bU));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[38U] 
                                 << 0x00000015U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[37U] 
                                 >> 0x0000000bU));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[39U] 
                                 << 0x00000015U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[38U] 
                                 >> 0x0000000bU));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[40U] 
                                 << 0x00000015U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[39U] 
                                 >> 0x0000000bU));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[41U] 
                                 << 0x00000015U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[40U] 
                                 >> 0x0000000bU));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[42U] 
                                 << 0x00000015U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[41U] 
                                 >> 0x0000000bU));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[43U] 
                                 << 0x00000015U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[42U] 
                                 >> 0x0000000bU));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[44U] 
                                 << 0x00000015U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[43U] 
                                 >> 0x0000000bU));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[45U] 
                                 << 0x00000015U) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[44U] 
                                 >> 0x0000000bU));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[46U] 
                                  << 0x00000015U) | 
                                 (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[45U] 
                                  >> 0x0000000bU));
        __Vdly__slot_uop[11U] = (0x01ffffffU & ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[47U] 
                                                 << 0x00000015U) 
                                                | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[46U] 
                                                   >> 0x0000000bU)));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((8U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 3U) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                     & (0x00001800U == (0x00001980U 
                                        & vlSelfRef.__PVT__slot_uop[8U]))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 3U) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (0x00001000U == (0x00001080U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__dgen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 3U) & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                      & (0x00000800U == (0x00000900U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__agen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000080U | __Vdly__slot_uop[8U]);
            __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 8U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 3U)) & (IData)(vlSelfRef.__PVT__dgen_ready))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 7U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 3U)) & (IData)(vlSelfRef.__PVT__agen_ready))) {
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

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__3__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__3__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((8U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((8U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__3__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__3__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_206 = ((0U 
                                                   != 
                                                   (((vlSelfRef.__PVT__slot_uop[7U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__slot_uop[7U] 
                                                        >> 0x00000018U)) 
                                                    & (IData)(vlSymsp->TOP.boom_core__DOT__mispredict_mask))) 
                                                  & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_136[2U] 
                                                     >> 8U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193 = (1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__killed = ((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_206));
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_193)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__4__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__4__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_190 = (1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_190)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__4__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__4__KET____DOT__slot__1\n"); );
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
                                     | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_190) 
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
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[0U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[0U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[1U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[1U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[2U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[6U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[2U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[3U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[7U] = ((0xf0000000U & vlSelfRef.__PVT__next_uop[7U]) 
                                     | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[3U] 
                                         >> 0x0000000eU) 
                                        | (((0x000003c0U 
                                             & (((~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                 & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                     << 8U) 
                                                    | (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U))) 
                                                << 6U)) 
                                            | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[4U]) 
                                           << 0x00000012U)));
    vlSelfRef.__PVT__next_uop[7U] = ((0x0fffffffU & vlSelfRef.__PVT__next_uop[7U]) 
                                     | (((0xffffc000U 
                                          & (vlSelfRef.__PVT__slot_uop[8U] 
                                             << 4U)) 
                                         | ((0x00002000U 
                                             & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                                                << 9U)) 
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
                                              << 9U)) 
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
                                   >> 9U)) & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_207)) 
                                              & ((~ 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelfRef.__PVT__next_uop[3U] 
                                                       >> 0x00000010U)))) 
                                                 | ((IData)(vlSelfRef.__PVT__dgen_ready) 
                                                    | (IData)(vlSelfRef.__PVT__agen_ready)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_188[0U] 
        = ((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[0U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_188[1U] 
        = ((vlSelfRef.__PVT__next_uop[2U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_188[2U] 
        = ((vlSelfRef.__PVT__next_uop[3U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_188[3U] 
        = ((vlSelfRef.__PVT__next_uop[4U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[3U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_188[4U] 
        = ((vlSelfRef.__PVT__next_uop[5U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[4U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_188[5U] 
        = ((vlSelfRef.__PVT__next_uop[6U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[5U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_188[6U] 
        = ((vlSelfRef.__PVT__next_uop[7U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[6U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_188[7U] 
        = (0x0007ffffU & ((vlSelfRef.__PVT__next_uop[8U] 
                           << 7U) | (vlSelfRef.__PVT__next_uop[7U] 
                                     >> 0x00000019U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_189[0U] 
        = (((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
            (0x0000007cU & (vlSelfRef.__PVT__next_uop[0U] 
                            >> 0x00000019U))) | (3U 
                                                 & (vlSelfRef.__PVT__slot_uop[0U] 
                                                    >> 0x00000017U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_189[1U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[2U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[1U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_189[2U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[3U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[2U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_189[3U] 
        = ((0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_189[3U]) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_189[3U] 
        = ((0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_189[3U]) 
           | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[1U] 
               << 0x00000019U) | (0x01ff0000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[0U] 
                                                 >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_189[4U] 
        = ((0x0000ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[1U] 
                           >> 7U)) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[2U] 
                                       << 0x00000019U) 
                                      | (0x01ff0000U 
                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[1U] 
                                            >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_189[5U] 
        = (0x1fffffffU & (0x18000000U | ((0x0000ffffU 
                                          & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[2U] 
                                             >> 7U)) 
                                         | (0x03ff0000U 
                                            & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[3U] 
                                                << 0x00000019U) 
                                               | (0x01ff0000U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[2U] 
                                                     >> 7U)))))));
}

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__4__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__4__KET____DOT__slot__0\n"); );
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
    if ((0x00000010U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[48U] 
                                 << 0x0000001cU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[47U] 
                                 >> 4U));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[49U] 
                                 << 0x0000001cU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[48U] 
                                 >> 4U));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[50U] 
                                 << 0x0000001cU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[49U] 
                                 >> 4U));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[51U] 
                                 << 0x0000001cU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[50U] 
                                 >> 4U));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[52U] 
                                 << 0x0000001cU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[51U] 
                                 >> 4U));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[53U] 
                                 << 0x0000001cU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[52U] 
                                 >> 4U));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[54U] 
                                 << 0x0000001cU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[53U] 
                                 >> 4U));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[55U] 
                                 << 0x0000001cU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[54U] 
                                 >> 4U));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[56U] 
                                 << 0x0000001cU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[55U] 
                                 >> 4U));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[57U] 
                                 << 0x0000001cU) | 
                                (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[56U] 
                                 >> 4U));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[58U] 
                                  << 0x0000001cU) | 
                                 (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[57U] 
                                  >> 4U));
        __Vdly__slot_uop[11U] = (0x01ffffffU & (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[58U] 
                                                >> 4U));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((0x00000010U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 4U) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                     & (0x00001800U == (0x00001980U 
                                        & vlSelfRef.__PVT__slot_uop[8U]))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 4U) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (0x00001000U == (0x00001080U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__dgen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 4U) & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                      & (0x00000800U == (0x00000900U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__agen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000080U | __Vdly__slot_uop[8U]);
            __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 8U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 4U)) & (IData)(vlSelfRef.__PVT__dgen_ready))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 7U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 4U)) & (IData)(vlSelfRef.__PVT__agen_ready))) {
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

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__4__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__4__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00000010U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((0x00000010U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__4__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__4__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_207 = ((0U 
                                                   != 
                                                   (((vlSelfRef.__PVT__slot_uop[7U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__slot_uop[7U] 
                                                        >> 0x00000018U)) 
                                                    & (IData)(vlSymsp->TOP.boom_core__DOT__mispredict_mask))) 
                                                  & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_136[2U] 
                                                     >> 8U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_190 = (1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__killed = ((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_207));
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_190)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__5__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__5__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_187 = (1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_187)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}

void Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__5__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___ico_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__5__KET____DOT__slot__1\n"); );
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
                                     | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_187) 
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
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[0U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[0U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[1U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[1U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[2U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[6U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[2U] 
                                      >> 0x0000000eU) 
                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[3U] 
                                        << 0x00000012U));
    vlSelfRef.__PVT__next_uop[7U] = ((0xf0000000U & vlSelfRef.__PVT__next_uop[7U]) 
                                     | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[3U] 
                                         >> 0x0000000eU) 
                                        | (((0x000003c0U 
                                             & (((~ (IData)(vlSymsp->TOP.boom_core__DOT__resolve_mask)) 
                                                 & ((vlSelfRef.__PVT__slot_uop[7U] 
                                                     << 8U) 
                                                    | (vlSelfRef.__PVT__slot_uop[7U] 
                                                       >> 0x00000018U))) 
                                                << 6U)) 
                                            | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[4U]) 
                                           << 0x00000012U)));
    vlSelfRef.__PVT__next_uop[7U] = ((0x0fffffffU & vlSelfRef.__PVT__next_uop[7U]) 
                                     | (((0xffffc000U 
                                          & (vlSelfRef.__PVT__slot_uop[8U] 
                                             << 4U)) 
                                         | ((0x00002000U 
                                             & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                                                << 8U)) 
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
                                              << 8U)) 
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
                                   >> 9U)) & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_208)) 
                                              & ((~ 
                                                  (0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelfRef.__PVT__next_uop[3U] 
                                                       >> 0x00000010U)))) 
                                                 | ((IData)(vlSelfRef.__PVT__dgen_ready) 
                                                    | (IData)(vlSelfRef.__PVT__agen_ready)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185[0U] 
        = ((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[0U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185[1U] 
        = ((vlSelfRef.__PVT__next_uop[2U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185[2U] 
        = ((vlSelfRef.__PVT__next_uop[3U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185[3U] 
        = ((vlSelfRef.__PVT__next_uop[4U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[3U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185[4U] 
        = ((vlSelfRef.__PVT__next_uop[5U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[4U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185[5U] 
        = ((vlSelfRef.__PVT__next_uop[6U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[5U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185[6U] 
        = ((vlSelfRef.__PVT__next_uop[7U] << 7U) | 
           (vlSelfRef.__PVT__next_uop[6U] >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185[7U] 
        = (0x0007ffffU & ((vlSelfRef.__PVT__next_uop[8U] 
                           << 7U) | (vlSelfRef.__PVT__next_uop[7U] 
                                     >> 0x00000019U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_186[0U] 
        = (((vlSelfRef.__PVT__next_uop[1U] << 7U) | 
            (0x0000007cU & (vlSelfRef.__PVT__next_uop[0U] 
                            >> 0x00000019U))) | (3U 
                                                 & (vlSelfRef.__PVT__slot_uop[0U] 
                                                    >> 0x00000017U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_186[1U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[1U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[2U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[1U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_186[2U] 
        = ((3U & (vlSelfRef.__PVT__next_uop[2U] >> 0x00000019U)) 
           | ((vlSelfRef.__PVT__next_uop[3U] << 7U) 
              | (0x0000007cU & (vlSelfRef.__PVT__next_uop[2U] 
                                >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_186[3U] 
        = ((0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_186[3U]) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_186[3U] 
        = ((0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_186[3U]) 
           | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[1U] 
               << 0x00000019U) | (0x01ff0000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[0U] 
                                                 >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_186[4U] 
        = ((0x0000ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[1U] 
                           >> 7U)) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[2U] 
                                       << 0x00000019U) 
                                      | (0x01ff0000U 
                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[1U] 
                                            >> 7U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_186[5U] 
        = (0x1fffffffU & (0x18000000U | ((0x0000ffffU 
                                          & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[2U] 
                                             >> 7U)) 
                                         | (0x03ff0000U 
                                            & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[3U] 
                                                << 0x00000019U) 
                                               | (0x01ff0000U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[2U] 
                                                     >> 7U)))))));
}

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__5__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__5__KET____DOT__slot__0\n"); );
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
    if ((0x00000020U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
        __Vdly__slot_uop[0U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[59U] 
                                 << 3U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[58U] 
                                           >> 0x0000001dU));
        __Vdly__slot_uop[1U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[60U] 
                                 << 3U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[59U] 
                                           >> 0x0000001dU));
        __Vdly__slot_uop[2U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[61U] 
                                 << 3U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[60U] 
                                           >> 0x0000001dU));
        __Vdly__slot_uop[3U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[62U] 
                                 << 3U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[61U] 
                                           >> 0x0000001dU));
        __Vdly__slot_uop[4U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[63U] 
                                 << 3U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[62U] 
                                           >> 0x0000001dU));
        __Vdly__slot_uop[5U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[64U] 
                                 << 3U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[63U] 
                                           >> 0x0000001dU));
        __Vdly__slot_uop[6U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[65U] 
                                 << 3U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[64U] 
                                           >> 0x0000001dU));
        __Vdly__slot_uop[7U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[66U] 
                                 << 3U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[65U] 
                                           >> 0x0000001dU));
        __Vdly__slot_uop[8U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[67U] 
                                 << 3U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[66U] 
                                           >> 0x0000001dU));
        __Vdly__slot_uop[9U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[68U] 
                                 << 3U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[67U] 
                                           >> 0x0000001dU));
        __Vdly__slot_uop[10U] = ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[69U] 
                                  << 3U) | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[68U] 
                                            >> 0x0000001dU));
        __Vdly__slot_uop[11U] = (0x01ffffffU & ((vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[70U] 
                                                 << 3U) 
                                                | (vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_uop[69U] 
                                                   >> 0x0000001dU)));
        __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
    } else if (((2U != (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                & (~ (IData)(vlSelfRef.__PVT__killed)))) {
        if ((0x00000020U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 5U) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                     & (0x00001800U == (0x00001980U 
                                        & vlSelfRef.__PVT__slot_uop[8U]))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 5U) & (IData)(vlSelfRef.__PVT__agen_ready)) 
                      & (0x00001000U == (0x00001080U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__dgen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000100U | (0xfffffcffU 
                                                   & __Vdly__slot_uop[8U]));
        }
        if ((IData)((((((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                        >> 5U) & (IData)(vlSelfRef.__PVT__dgen_ready)) 
                      & (0x00000800U == (0x00000900U 
                                         & vlSelfRef.__PVT__slot_uop[8U]))) 
                     & (~ (IData)(vlSelfRef.__PVT__agen_ready))))) {
            __Vdly__slot_uop[8U] = (0x00000080U | __Vdly__slot_uop[8U]);
            __Vdly__slot_uop[8U] = (0xfffffdffU & __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 8U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 5U)) & (IData)(vlSelfRef.__PVT__dgen_ready))) {
            __Vdly__slot_uop[8U] = (0x00000200U | __Vdly__slot_uop[8U]);
        }
        if ((((vlSelfRef.__PVT__slot_uop[8U] >> 7U) 
              & ((IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_grant) 
                 >> 5U)) & (IData)(vlSelfRef.__PVT__agen_ready))) {
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

void Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__5__KET____DOT__slot__1(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_sequent__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__5__KET____DOT__slot__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
             | (IData)(vlSelfRef.__PVT__killed))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        } else if ((0x00000020U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_in_valid))) {
            vlSelfRef.__PVT__slot_valid = 1U;
        } else if ((0x00000020U & (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq__DOT__slot_clear))) {
            vlSelfRef.__PVT__slot_valid = 0U;
        }
    } else {
        vlSelfRef.__PVT__slot_valid = 0U;
    }
}

void Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__5__KET____DOT__slot__0(Vboom_core_issue_slot__Iz1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot__Iz1___nba_comb__TOP__boom_core__DOT__mem_iq__DOT__gen_slots__BRA__5__KET____DOT__slot__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_208 = ((0U 
                                                   != 
                                                   (((vlSelfRef.__PVT__slot_uop[7U] 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__slot_uop[7U] 
                                                        >> 0x00000018U)) 
                                                    & (IData)(vlSymsp->TOP.boom_core__DOT__mispredict_mask))) 
                                                  & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_136[2U] 
                                                     >> 8U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_187 = (1U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[3U] 
        = __Vtemp_2[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[4U] 
        = (0x0000003fU & __Vtemp_2[4U]);
    vlSelfRef.__PVT__killed = ((2U == (IData)(vlSymsp->TOP.boom_core__DOT__rob_inst__DOT__rob_state)) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_208));
    vlSelfRef.__PVT__dgen_ready = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_187)) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000cU)));
    vlSelfRef.__PVT__agen_ready = (1U & ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112[0U]) 
                                         & (vlSelfRef.__PVT__slot_uop[8U] 
                                            >> 0x0000000bU)));
}
