// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboom_core.h for the primary calling header

#include "Vboom_core__pch.h"

void Vboom_core___024root___nba_sequent__TOP__2(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___nba_sequent__TOP__2\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<20>/*616:0*/ __VdfgRegularize_h6e95ff9d_0_173;
    VL_ZERO_W(617, __VdfgRegularize_h6e95ff9d_0_173);
    VlWide<20>/*622:0*/ __VdfgRegularize_h6e95ff9d_0_219;
    VL_ZERO_W(623, __VdfgRegularize_h6e95ff9d_0_219);
    // Body
    vlSelfRef.boom_core__DOT__brmask__DOT__br_tag = 
        ((0x0000000cU & ((((4U & (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_15))
                            ? (1U & (- (IData)((1U 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_15) 
                                                    >> 1U))))))
                            : 2U) | (- (IData)((1U 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_15) 
                                                    >> 3U)))))) 
                         << 2U)) | (3U & ((- (IData)(
                                                     (1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.boom_core__DOT__brmask__DOT__br_mask_q) 
                                                          >> 3U))))) 
                                          | ((4U & (IData)(vlSelfRef.boom_core__DOT__brmask__DOT__br_mask_q))
                                              ? (1U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (~ 
                                                                  ((IData)(vlSelfRef.boom_core__DOT__brmask__DOT__br_mask_q) 
                                                                   >> 1U))))))
                                              : 2U))));
    __VdfgRegularize_h6e95ff9d_0_219[0U] = vlSelfRef.boom_core__DOT__dec_uops_raw[0U];
    __VdfgRegularize_h6e95ff9d_0_219[1U] = vlSelfRef.boom_core__DOT__dec_uops_raw[1U];
    __VdfgRegularize_h6e95ff9d_0_219[2U] = vlSelfRef.boom_core__DOT__dec_uops_raw[2U];
    __VdfgRegularize_h6e95ff9d_0_219[3U] = vlSelfRef.boom_core__DOT__dec_uops_raw[3U];
    __VdfgRegularize_h6e95ff9d_0_219[4U] = vlSelfRef.boom_core__DOT__dec_uops_raw[4U];
    __VdfgRegularize_h6e95ff9d_0_219[5U] = vlSelfRef.boom_core__DOT__dec_uops_raw[5U];
    __VdfgRegularize_h6e95ff9d_0_219[6U] = vlSelfRef.boom_core__DOT__dec_uops_raw[6U];
    __VdfgRegularize_h6e95ff9d_0_219[7U] = ((0xf0000000U 
                                             & __VdfgRegularize_h6e95ff9d_0_219[7U]) 
                                            | ((0x0f000000U 
                                                & ((IData)(vlSelfRef.__VdfgSynthAssign_boom_core__DOT__bm_br_mask_h6e95ff9d_0_0) 
                                                   << 0x00000018U)) 
                                               | ((0x00c00000U 
                                                   & ((IData)(vlSelfRef.boom_core__DOT__brmask__DOT__br_tag) 
                                                      << 0x00000016U)) 
                                                  | (0x003fffffU 
                                                     & vlSelfRef.boom_core__DOT__dec_uops_raw[7U]))));
    __VdfgRegularize_h6e95ff9d_0_219[7U] = ((0x0fffffffU 
                                             & __VdfgRegularize_h6e95ff9d_0_219[7U]) 
                                            | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[0U] 
                                               << 0x0000001cU));
    __VdfgRegularize_h6e95ff9d_0_219[8U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[0U] 
                                             >> 4U) 
                                            | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[1U] 
                                               << 0x0000001cU));
    __VdfgRegularize_h6e95ff9d_0_219[9U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[1U] 
                                             >> 4U) 
                                            | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[2U] 
                                               << 0x0000001cU));
    __VdfgRegularize_h6e95ff9d_0_219[10U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[2U] 
                                              >> 4U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[3U] 
                                                << 0x0000001cU));
    __VdfgRegularize_h6e95ff9d_0_219[11U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[3U] 
                                              >> 4U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[4U] 
                                                << 0x0000001cU));
    __VdfgRegularize_h6e95ff9d_0_219[12U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[4U] 
                                              >> 4U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[5U] 
                                                << 0x0000001cU));
    __VdfgRegularize_h6e95ff9d_0_219[13U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[5U] 
                                              >> 4U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[6U] 
                                                << 0x0000001cU));
    __VdfgRegularize_h6e95ff9d_0_219[14U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[6U] 
                                              >> 4U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[7U] 
                                                << 0x0000001cU));
    __VdfgRegularize_h6e95ff9d_0_219[15U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[7U] 
                                              >> 4U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[8U] 
                                                << 0x0000001cU));
    __VdfgRegularize_h6e95ff9d_0_219[16U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[8U] 
                                              >> 4U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[9U] 
                                                << 0x0000001cU));
    __VdfgRegularize_h6e95ff9d_0_219[17U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[9U] 
                                              >> 4U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[10U] 
                                                << 0x0000001cU));
    __VdfgRegularize_h6e95ff9d_0_219[18U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[10U] 
                                              >> 4U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[11U] 
                                                << 0x0000001cU));
    __VdfgRegularize_h6e95ff9d_0_219[19U] = (0x00007fffU 
                                             & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171[11U] 
                                                >> 4U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220[0U] 
        = __VdfgRegularize_h6e95ff9d_0_219[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220[1U] 
        = __VdfgRegularize_h6e95ff9d_0_219[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220[2U] 
        = __VdfgRegularize_h6e95ff9d_0_219[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220[3U] 
        = __VdfgRegularize_h6e95ff9d_0_219[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220[4U] 
        = __VdfgRegularize_h6e95ff9d_0_219[4U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220[5U] 
        = __VdfgRegularize_h6e95ff9d_0_219[5U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220[6U] 
        = __VdfgRegularize_h6e95ff9d_0_219[6U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220[7U] 
        = __VdfgRegularize_h6e95ff9d_0_219[7U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220[8U] 
        = __VdfgRegularize_h6e95ff9d_0_219[8U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220[9U] 
        = __VdfgRegularize_h6e95ff9d_0_219[9U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220[10U] 
        = __VdfgRegularize_h6e95ff9d_0_219[10U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220[11U] 
        = __VdfgRegularize_h6e95ff9d_0_219[11U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220[12U] 
        = __VdfgRegularize_h6e95ff9d_0_219[12U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220[13U] 
        = __VdfgRegularize_h6e95ff9d_0_219[13U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220[14U] 
        = __VdfgRegularize_h6e95ff9d_0_219[14U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220[15U] 
        = __VdfgRegularize_h6e95ff9d_0_219[15U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220[16U] 
        = __VdfgRegularize_h6e95ff9d_0_219[16U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220[17U] 
        = __VdfgRegularize_h6e95ff9d_0_219[17U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220[18U] 
        = __VdfgRegularize_h6e95ff9d_0_219[18U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220[19U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[0U] 
            << 0x00000015U) | __VdfgRegularize_h6e95ff9d_0_219[19U]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220[20U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[0U] 
            >> 0x0000000bU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[1U] 
                               << 0x00000015U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220[21U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[1U] 
            >> 0x0000000bU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[2U] 
                               << 0x00000015U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220[22U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[2U] 
            >> 0x0000000bU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[3U] 
                               << 0x00000015U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_220[23U] 
        = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[3U] 
           >> 0x0000000bU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U] = __VdfgRegularize_h6e95ff9d_0_219[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U] = __VdfgRegularize_h6e95ff9d_0_219[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U] = __VdfgRegularize_h6e95ff9d_0_219[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U] = __VdfgRegularize_h6e95ff9d_0_219[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U] = __VdfgRegularize_h6e95ff9d_0_219[4U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U] = __VdfgRegularize_h6e95ff9d_0_219[5U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U] = __VdfgRegularize_h6e95ff9d_0_219[6U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U] = __VdfgRegularize_h6e95ff9d_0_219[7U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U] = __VdfgRegularize_h6e95ff9d_0_219[8U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[9U] = __VdfgRegularize_h6e95ff9d_0_219[9U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[10U] = __VdfgRegularize_h6e95ff9d_0_219[10U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[11U] = __VdfgRegularize_h6e95ff9d_0_219[11U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[12U] = __VdfgRegularize_h6e95ff9d_0_219[12U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[13U] = __VdfgRegularize_h6e95ff9d_0_219[13U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[14U] = __VdfgRegularize_h6e95ff9d_0_219[14U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[15U] = __VdfgRegularize_h6e95ff9d_0_219[15U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[16U] = __VdfgRegularize_h6e95ff9d_0_219[16U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[17U] = __VdfgRegularize_h6e95ff9d_0_219[17U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[18U] = __VdfgRegularize_h6e95ff9d_0_219[18U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[19U] = 
        ((0x00018000U & ((IData)(vlSelfRef.boom_core__DOT__brmask__DOT__br_tag) 
                         << 0x0000000dU)) | __VdfgRegularize_h6e95ff9d_0_219[19U]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[0U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[12U] 
          << 7U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[11U] 
                    >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[1U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[13U] 
          << 7U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[12U] 
                    >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[2U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[14U] 
          << 7U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[13U] 
                    >> 0x00000019U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[3U] = 
        (0x1fffffffU & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[15U] 
                         << 7U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[14U] 
                                   >> 0x00000019U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_236[0U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[17U] 
            << 0x0000001eU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[16U] 
                               >> 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_236[1U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[18U] 
            << 0x0000001eU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[17U] 
                               >> 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_236[2U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[19U] 
            << 0x0000001eU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[18U] 
                               >> 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_236[3U] 
        = (0x00007fffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[19U] 
                          >> 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[3U] 
        = (0x1fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[4U] 
        = (0xfffffe00U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[5U] 
        = ((0x000001ffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U]) 
           | (0xfffffe00U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[6U] 
        = ((0x000001ffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U]) 
           | (0xfffffe00U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[7U] 
        = ((0x000001ffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U]) 
           | (0xfffffe00U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[8U] 
        = ((0x000001ffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U]) 
           | (0xfffffe00U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[9U] 
        = ((0x000001ffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[9U]) 
           | (0xfffffe00U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[9U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[10U] 
        = ((0x000001ffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[10U]) 
           | (0xfffffe00U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[10U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[11U] 
        = ((0xfe000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[11U]) 
           | ((0x000001ffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[11U]) 
              | (0x01fffe00U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[11U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[11U] 
        = (0x01ffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[11U]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[12U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[13U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[14U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[15U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[16U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[17U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[18U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[19U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[20U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[21U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[22U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[23U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_235 = ((
                                                   (0U 
                                                    != 
                                                    (0x0000003fU 
                                                     & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[13U] 
                                                        >> 8U))) 
                                                   & (2U 
                                                      != 
                                                      (3U 
                                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[12U] 
                                                          >> 0x00000014U)))) 
                                                  << 1U);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_234 = ((0x000003e0U 
                                                   & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[13U] 
                                                       << 9U) 
                                                      | (0x000001e0U 
                                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[12U] 
                                                            >> 0x00000017U)))) 
                                                  | (0x0000001fU 
                                                     & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[13U] 
                                                        >> 2U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57 = ((0U 
                                                  != 
                                                  (0x0000003fU 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U] 
                                                      >> 0x0000000fU))) 
                                                 & (2U 
                                                    != 
                                                    (3U 
                                                     & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U] 
                                                        >> 0x0000001bU))));
    vlSelfRef.boom_core__DOT____Vcellinp__rename__dec_uops[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U];
    vlSelfRef.boom_core__DOT____Vcellinp__rename__dec_uops[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U];
    vlSelfRef.boom_core__DOT____Vcellinp__rename__dec_uops[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U];
    vlSelfRef.boom_core__DOT____Vcellinp__rename__dec_uops[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U];
    vlSelfRef.boom_core__DOT____Vcellinp__rename__dec_uops[4U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U];
    vlSelfRef.boom_core__DOT____Vcellinp__rename__dec_uops[5U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U];
    vlSelfRef.boom_core__DOT____Vcellinp__rename__dec_uops[6U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U];
    vlSelfRef.boom_core__DOT____Vcellinp__rename__dec_uops[7U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U];
    vlSelfRef.boom_core__DOT____Vcellinp__rename__dec_uops[8U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U];
    vlSelfRef.boom_core__DOT____Vcellinp__rename__dec_uops[9U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[9U];
    vlSelfRef.boom_core__DOT____Vcellinp__rename__dec_uops[10U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[10U];
    vlSelfRef.boom_core__DOT____Vcellinp__rename__dec_uops[11U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[11U];
    vlSelfRef.boom_core__DOT____Vcellinp__rename__dec_uops[12U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[12U];
    vlSelfRef.boom_core__DOT____Vcellinp__rename__dec_uops[13U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[13U];
    vlSelfRef.boom_core__DOT____Vcellinp__rename__dec_uops[14U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[14U];
    vlSelfRef.boom_core__DOT____Vcellinp__rename__dec_uops[15U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[15U];
    vlSelfRef.boom_core__DOT____Vcellinp__rename__dec_uops[16U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[16U];
    vlSelfRef.boom_core__DOT____Vcellinp__rename__dec_uops[17U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[17U];
    vlSelfRef.boom_core__DOT____Vcellinp__rename__dec_uops[18U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[18U];
    vlSelfRef.boom_core__DOT____Vcellinp__rename__dec_uops[19U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[0U] 
            << 0x00000015U) | (((IData)(vlSelfRef.__VdfgSynthJoin_boom_core__DOT__brmask__DOT__curr_mask_h6e95ff9d_0_2) 
                                << 0x00000011U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[19U]));
    vlSelfRef.boom_core__DOT____Vcellinp__rename__dec_uops[20U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[0U] 
            >> 0x0000000bU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[1U] 
                               << 0x00000015U));
    vlSelfRef.boom_core__DOT____Vcellinp__rename__dec_uops[21U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[1U] 
            >> 0x0000000bU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[2U] 
                               << 0x00000015U));
    vlSelfRef.boom_core__DOT____Vcellinp__rename__dec_uops[22U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[2U] 
            >> 0x0000000bU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[3U] 
                               << 0x00000015U));
    vlSelfRef.boom_core__DOT____Vcellinp__rename__dec_uops[23U] 
        = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[3U] 
           >> 0x0000000bU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_225 = ((0x000003e0U 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U] 
                                                      << 2U)) 
                                                  | (0x0000001fU 
                                                     & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U] 
                                                        >> 9U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238[0U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_236[1U] 
            << 0x0000001aU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_236[0U] 
                               >> 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238[1U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_236[2U] 
            << 0x0000001aU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_236[1U] 
                               >> 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238[2U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_236[3U] 
            << 0x0000001aU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_236[2U] 
                               >> 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238[3U] 
        = (0x000001ffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_236[3U] 
                          >> 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31[3U] = 
        ((0x1fff8000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[3U]) 
         | (0x000001ffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[3U]));
    __VdfgRegularize_h6e95ff9d_0_173[0U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[5U] 
                                             << 0x00000017U) 
                                            | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[4U] 
                                               >> 9U));
    __VdfgRegularize_h6e95ff9d_0_173[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[6U] 
                                             << 0x00000017U) 
                                            | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[5U] 
                                               >> 9U));
    __VdfgRegularize_h6e95ff9d_0_173[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[7U] 
                                             << 0x00000017U) 
                                            | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[6U] 
                                               >> 9U));
    __VdfgRegularize_h6e95ff9d_0_173[3U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[8U] 
                                             << 0x00000017U) 
                                            | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[7U] 
                                               >> 9U));
    __VdfgRegularize_h6e95ff9d_0_173[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[9U] 
                                             << 0x00000017U) 
                                            | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[8U] 
                                               >> 9U));
    __VdfgRegularize_h6e95ff9d_0_173[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[10U] 
                                             << 0x00000017U) 
                                            | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[9U] 
                                               >> 9U));
    __VdfgRegularize_h6e95ff9d_0_173[6U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[11U] 
                                             << 0x00000017U) 
                                            | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[10U] 
                                               >> 9U));
    __VdfgRegularize_h6e95ff9d_0_173[7U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[12U] 
                                             << 0x00000017U) 
                                            | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[11U] 
                                               >> 9U));
    __VdfgRegularize_h6e95ff9d_0_173[8U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[13U] 
                                             << 0x00000017U) 
                                            | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[12U] 
                                               >> 9U));
    __VdfgRegularize_h6e95ff9d_0_173[9U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[14U] 
                                             << 0x00000017U) 
                                            | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[13U] 
                                               >> 9U));
    __VdfgRegularize_h6e95ff9d_0_173[10U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[15U] 
                                              << 0x00000017U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[14U] 
                                                >> 9U));
    __VdfgRegularize_h6e95ff9d_0_173[11U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[16U] 
                                              << 0x00000017U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[15U] 
                                                >> 9U));
    __VdfgRegularize_h6e95ff9d_0_173[12U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[17U] 
                                              << 0x00000017U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[16U] 
                                                >> 9U));
    __VdfgRegularize_h6e95ff9d_0_173[13U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[18U] 
                                              << 0x00000017U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[17U] 
                                                >> 9U));
    __VdfgRegularize_h6e95ff9d_0_173[14U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[19U] 
                                              << 0x00000017U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[18U] 
                                                >> 9U));
    __VdfgRegularize_h6e95ff9d_0_173[15U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[20U] 
                                              << 0x00000017U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[19U] 
                                                >> 9U));
    __VdfgRegularize_h6e95ff9d_0_173[16U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[21U] 
                                              << 0x00000017U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[20U] 
                                                >> 9U));
    __VdfgRegularize_h6e95ff9d_0_173[17U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[22U] 
                                              << 0x00000017U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[21U] 
                                                >> 9U));
    __VdfgRegularize_h6e95ff9d_0_173[18U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[23U] 
                                              << 0x00000017U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[22U] 
                                                >> 9U));
    __VdfgRegularize_h6e95ff9d_0_173[19U] = (0x000001ffU 
                                             & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[23U] 
                                                >> 9U));
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U];
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U];
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U];
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U];
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[4U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U];
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[5U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U];
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[6U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U];
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[7U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U];
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[8U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U];
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[9U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[9U];
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[10U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[10U];
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[11U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[11U];
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[12U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[12U];
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[13U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[13U];
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[14U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[14U];
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[15U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[15U];
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[16U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[16U];
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[17U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[17U];
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[18U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[18U];
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[19U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[0U] 
            << 0x00000015U) | ((0x001e0000U & vlSelfRef.boom_core__DOT____Vcellinp__rename__dec_uops[19U]) 
                               | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[19U]));
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[20U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[0U] 
            >> 0x0000000bU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[1U] 
                               << 0x00000015U));
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[21U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[1U] 
            >> 0x0000000bU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[2U] 
                               << 0x00000015U));
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[22U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[2U] 
            >> 0x0000000bU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[3U] 
                               << 0x00000015U));
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[23U] 
        = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[3U] 
           >> 0x0000000bU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[0U] 
        = ((__VdfgRegularize_h6e95ff9d_0_173[1U] << 0x0000001aU) 
           | (__VdfgRegularize_h6e95ff9d_0_173[0U] 
              >> 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[1U] 
        = ((__VdfgRegularize_h6e95ff9d_0_173[2U] << 0x0000001aU) 
           | (__VdfgRegularize_h6e95ff9d_0_173[1U] 
              >> 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[2U] 
        = ((__VdfgRegularize_h6e95ff9d_0_173[3U] << 0x0000001aU) 
           | (__VdfgRegularize_h6e95ff9d_0_173[2U] 
              >> 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[3U] 
        = ((__VdfgRegularize_h6e95ff9d_0_173[4U] << 0x0000001aU) 
           | (__VdfgRegularize_h6e95ff9d_0_173[3U] 
              >> 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[4U] 
        = ((__VdfgRegularize_h6e95ff9d_0_173[5U] << 0x0000001aU) 
           | (__VdfgRegularize_h6e95ff9d_0_173[4U] 
              >> 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[5U] 
        = ((__VdfgRegularize_h6e95ff9d_0_173[6U] << 0x0000001aU) 
           | (__VdfgRegularize_h6e95ff9d_0_173[5U] 
              >> 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[6U] 
        = ((__VdfgRegularize_h6e95ff9d_0_173[7U] << 0x0000001aU) 
           | (__VdfgRegularize_h6e95ff9d_0_173[6U] 
              >> 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[7U] 
        = ((__VdfgRegularize_h6e95ff9d_0_173[8U] << 0x0000001aU) 
           | (__VdfgRegularize_h6e95ff9d_0_173[7U] 
              >> 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[8U] 
        = ((__VdfgRegularize_h6e95ff9d_0_173[9U] << 0x0000001aU) 
           | (__VdfgRegularize_h6e95ff9d_0_173[8U] 
              >> 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[9U] 
        = ((__VdfgRegularize_h6e95ff9d_0_173[10U] << 0x0000001aU) 
           | (__VdfgRegularize_h6e95ff9d_0_173[9U] 
              >> 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[10U] 
        = ((__VdfgRegularize_h6e95ff9d_0_173[11U] << 0x0000001aU) 
           | (__VdfgRegularize_h6e95ff9d_0_173[10U] 
              >> 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[11U] 
        = ((__VdfgRegularize_h6e95ff9d_0_173[12U] << 0x0000001aU) 
           | (__VdfgRegularize_h6e95ff9d_0_173[11U] 
              >> 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[12U] 
        = ((__VdfgRegularize_h6e95ff9d_0_173[13U] << 0x0000001aU) 
           | (__VdfgRegularize_h6e95ff9d_0_173[12U] 
              >> 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[13U] 
        = ((__VdfgRegularize_h6e95ff9d_0_173[14U] << 0x0000001aU) 
           | (__VdfgRegularize_h6e95ff9d_0_173[13U] 
              >> 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[14U] 
        = ((__VdfgRegularize_h6e95ff9d_0_173[15U] << 0x0000001aU) 
           | (__VdfgRegularize_h6e95ff9d_0_173[14U] 
              >> 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[15U] 
        = ((__VdfgRegularize_h6e95ff9d_0_173[16U] << 0x0000001aU) 
           | (__VdfgRegularize_h6e95ff9d_0_173[15U] 
              >> 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[16U] 
        = ((__VdfgRegularize_h6e95ff9d_0_173[17U] << 0x0000001aU) 
           | (__VdfgRegularize_h6e95ff9d_0_173[16U] 
              >> 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[17U] 
        = ((__VdfgRegularize_h6e95ff9d_0_173[18U] << 0x0000001aU) 
           | (__VdfgRegularize_h6e95ff9d_0_173[17U] 
              >> 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[18U] 
        = ((__VdfgRegularize_h6e95ff9d_0_173[19U] << 0x0000001aU) 
           | (__VdfgRegularize_h6e95ff9d_0_173[18U] 
              >> 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[19U] 
        = (7U & (__VdfgRegularize_h6e95ff9d_0_173[19U] 
                 >> 6U));
}

void Vboom_core___024root___nba_sequent__TOP__3(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___nba_sequent__TOP__3\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__boom_core__DOT__iregfile__DOT__rf__v0;
    __VdlyVal__boom_core__DOT__iregfile__DOT__rf__v0 = 0;
    CData/*5:0*/ __VdlyDim0__boom_core__DOT__iregfile__DOT__rf__v0;
    __VdlyDim0__boom_core__DOT__iregfile__DOT__rf__v0 = 0;
    CData/*0:0*/ __VdlySet__boom_core__DOT__iregfile__DOT__rf__v0;
    __VdlySet__boom_core__DOT__iregfile__DOT__rf__v0 = 0;
    IData/*31:0*/ __VdlyVal__boom_core__DOT__iregfile__DOT__rf__v1;
    __VdlyVal__boom_core__DOT__iregfile__DOT__rf__v1 = 0;
    CData/*5:0*/ __VdlyDim0__boom_core__DOT__iregfile__DOT__rf__v1;
    __VdlyDim0__boom_core__DOT__iregfile__DOT__rf__v1 = 0;
    CData/*0:0*/ __VdlySet__boom_core__DOT__iregfile__DOT__rf__v1;
    __VdlySet__boom_core__DOT__iregfile__DOT__rf__v1 = 0;
    IData/*31:0*/ __VdlyVal__boom_core__DOT__iregfile__DOT__rf__v2;
    __VdlyVal__boom_core__DOT__iregfile__DOT__rf__v2 = 0;
    CData/*5:0*/ __VdlyDim0__boom_core__DOT__iregfile__DOT__rf__v2;
    __VdlyDim0__boom_core__DOT__iregfile__DOT__rf__v2 = 0;
    CData/*0:0*/ __VdlySet__boom_core__DOT__iregfile__DOT__rf__v2;
    __VdlySet__boom_core__DOT__iregfile__DOT__rf__v2 = 0;
    IData/*31:0*/ __VdlyVal__boom_core__DOT__iregfile__DOT__rf__v3;
    __VdlyVal__boom_core__DOT__iregfile__DOT__rf__v3 = 0;
    CData/*5:0*/ __VdlyDim0__boom_core__DOT__iregfile__DOT__rf__v3;
    __VdlyDim0__boom_core__DOT__iregfile__DOT__rf__v3 = 0;
    CData/*0:0*/ __VdlySet__boom_core__DOT__iregfile__DOT__rf__v3;
    __VdlySet__boom_core__DOT__iregfile__DOT__rf__v3 = 0;
    IData/*31:0*/ __VdlyVal__boom_core__DOT__iregfile__DOT__rf__v4;
    __VdlyVal__boom_core__DOT__iregfile__DOT__rf__v4 = 0;
    CData/*5:0*/ __VdlyDim0__boom_core__DOT__iregfile__DOT__rf__v4;
    __VdlyDim0__boom_core__DOT__iregfile__DOT__rf__v4 = 0;
    CData/*0:0*/ __VdlySet__boom_core__DOT__iregfile__DOT__rf__v4;
    __VdlySet__boom_core__DOT__iregfile__DOT__rf__v4 = 0;
    // Body
    __VdlySet__boom_core__DOT__iregfile__DOT__rf__v0 = 0U;
    __VdlySet__boom_core__DOT__iregfile__DOT__rf__v1 = 0U;
    __VdlySet__boom_core__DOT__iregfile__DOT__rf__v2 = 0U;
    __VdlySet__boom_core__DOT__iregfile__DOT__rf__v3 = 0U;
    __VdlySet__boom_core__DOT__iregfile__DOT__rf__v4 = 0U;
    if (((IData)(vlSelfRef.boom_core__DOT__iregfile__DOT__write_en) 
         & (0U != (0x0000003fU & vlSelfRef.boom_core__DOT__iregfile__DOT__write_addr)))) {
        if ((0x2fU >= (0x0000003fU & vlSelfRef.boom_core__DOT__iregfile__DOT__write_addr))) {
            __VdlyVal__boom_core__DOT__iregfile__DOT__rf__v0 
                = vlSelfRef.boom_core__DOT__iregfile__DOT__write_data[0U];
            __VdlyDim0__boom_core__DOT__iregfile__DOT__rf__v0 
                = (0x0000003fU & vlSelfRef.boom_core__DOT__iregfile__DOT__write_addr);
            __VdlySet__boom_core__DOT__iregfile__DOT__rf__v0 = 1U;
        }
    }
    if ((((IData)(vlSelfRef.boom_core__DOT__iregfile__DOT__write_en) 
          >> 1U) & (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__iregfile__DOT__write_addr 
                                          >> 6U))))) {
        if ((0x2fU >= (0x0000003fU & (vlSelfRef.boom_core__DOT__iregfile__DOT__write_addr 
                                      >> 6U)))) {
            __VdlyVal__boom_core__DOT__iregfile__DOT__rf__v1 
                = vlSelfRef.boom_core__DOT__iregfile__DOT__write_data[1U];
            __VdlyDim0__boom_core__DOT__iregfile__DOT__rf__v1 
                = (0x0000003fU & (vlSelfRef.boom_core__DOT__iregfile__DOT__write_addr 
                                  >> 6U));
            __VdlySet__boom_core__DOT__iregfile__DOT__rf__v1 = 1U;
        }
    }
    if ((((IData)(vlSelfRef.boom_core__DOT__iregfile__DOT__write_en) 
          >> 2U) & (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__iregfile__DOT__write_addr 
                                          >> 0x0cU))))) {
        if ((0x2fU >= (0x0000003fU & (vlSelfRef.boom_core__DOT__iregfile__DOT__write_addr 
                                      >> 0x0cU)))) {
            __VdlyVal__boom_core__DOT__iregfile__DOT__rf__v2 
                = vlSelfRef.boom_core__DOT__iregfile__DOT__write_data[2U];
            __VdlyDim0__boom_core__DOT__iregfile__DOT__rf__v2 
                = (0x0000003fU & (vlSelfRef.boom_core__DOT__iregfile__DOT__write_addr 
                                  >> 0x0cU));
            __VdlySet__boom_core__DOT__iregfile__DOT__rf__v2 = 1U;
        }
    }
    if ((((IData)(vlSelfRef.boom_core__DOT__iregfile__DOT__write_en) 
          >> 3U) & (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__iregfile__DOT__write_addr 
                                          >> 0x12U))))) {
        if ((0x2fU >= (0x0000003fU & (vlSelfRef.boom_core__DOT__iregfile__DOT__write_addr 
                                      >> 0x12U)))) {
            __VdlyVal__boom_core__DOT__iregfile__DOT__rf__v3 
                = vlSelfRef.boom_core__DOT__iregfile__DOT__write_data[3U];
            __VdlyDim0__boom_core__DOT__iregfile__DOT__rf__v3 
                = (0x0000003fU & (vlSelfRef.boom_core__DOT__iregfile__DOT__write_addr 
                                  >> 0x12U));
            __VdlySet__boom_core__DOT__iregfile__DOT__rf__v3 = 1U;
        }
    }
    if ((((IData)(vlSelfRef.boom_core__DOT__iregfile__DOT__write_en) 
          >> 4U) & (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__iregfile__DOT__write_addr 
                                          >> 0x18U))))) {
        if ((0x2fU >= (0x0000003fU & (vlSelfRef.boom_core__DOT__iregfile__DOT__write_addr 
                                      >> 0x18U)))) {
            __VdlyVal__boom_core__DOT__iregfile__DOT__rf__v4 
                = vlSelfRef.boom_core__DOT__iregfile__DOT__write_data[4U];
            __VdlyDim0__boom_core__DOT__iregfile__DOT__rf__v4 
                = (0x0000003fU & (vlSelfRef.boom_core__DOT__iregfile__DOT__write_addr 
                                  >> 0x18U));
            __VdlySet__boom_core__DOT__iregfile__DOT__rf__v4 = 1U;
        }
    }
    if (((IData)(vlSelfRef.boom_core__DOT__unq_iss_valid) 
         & (0U == (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state)))) {
        vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_rs1 
            = vlSelfRef.csr_wdata;
        vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_rs2 
            = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_92)
                ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_95)
                    ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94)
                        ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                        : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_93)
                            ? ((vlSelfRef.lsu_resp[1U] 
                                << 0x00000019U) | (vlSelfRef.lsu_resp[0U] 
                                                   >> 7U))
                            : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_91))));
        vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[0U] 
            = vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[0U];
        vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[1U] 
            = vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U];
        vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[2U] 
            = vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[2U];
        vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[3U] 
            = vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U];
        vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
            = vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U];
        vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[5U] 
            = vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U];
        vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[6U] 
            = vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U];
        vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[7U] 
            = vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[7U];
        vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[8U] 
            = vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U];
        vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[9U] 
            = vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[9U];
        vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[10U] 
            = vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[10U];
        vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[11U] 
            = vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[11U];
    }
    vlSelfRef.boom_core__DOT__rob_inst__DOT__exception_throw_d2 
        = vlSelfRef.boom_core__DOT__rob_inst__DOT__exception_throw_d1;
    if (__VdlySet__boom_core__DOT__iregfile__DOT__rf__v0) {
        vlSelfRef.boom_core__DOT__iregfile__DOT__rf[__VdlyDim0__boom_core__DOT__iregfile__DOT__rf__v0] 
            = __VdlyVal__boom_core__DOT__iregfile__DOT__rf__v0;
    }
    if (__VdlySet__boom_core__DOT__iregfile__DOT__rf__v1) {
        vlSelfRef.boom_core__DOT__iregfile__DOT__rf[__VdlyDim0__boom_core__DOT__iregfile__DOT__rf__v1] 
            = __VdlyVal__boom_core__DOT__iregfile__DOT__rf__v1;
    }
    if (__VdlySet__boom_core__DOT__iregfile__DOT__rf__v2) {
        vlSelfRef.boom_core__DOT__iregfile__DOT__rf[__VdlyDim0__boom_core__DOT__iregfile__DOT__rf__v2] 
            = __VdlyVal__boom_core__DOT__iregfile__DOT__rf__v2;
    }
    if (__VdlySet__boom_core__DOT__iregfile__DOT__rf__v3) {
        vlSelfRef.boom_core__DOT__iregfile__DOT__rf[__VdlyDim0__boom_core__DOT__iregfile__DOT__rf__v3] 
            = __VdlyVal__boom_core__DOT__iregfile__DOT__rf__v3;
    }
    if (__VdlySet__boom_core__DOT__iregfile__DOT__rf__v4) {
        vlSelfRef.boom_core__DOT__iregfile__DOT__rf[__VdlyDim0__boom_core__DOT__iregfile__DOT__rf__v4] 
            = __VdlyVal__boom_core__DOT__iregfile__DOT__rf__v4;
    }
    vlSelfRef.boom_core__DOT__rob_inst__DOT__exception_throw_d1 
        = ((~ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_140) 
               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_142))) 
           & (0U != (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__can_throw_exception)));
}

void Vboom_core___024root___nba_comb__TOP__0(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___nba_comb__TOP__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*47:0*/ __Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec;
    __Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec = 0;
    VlWide<24>/*753:0*/ __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4;
    VL_ZERO_W(754, __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4);
    QData/*35:0*/ __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_read_preg_h6e95ff9d_0_3;
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_read_preg_h6e95ff9d_0_3 = 0;
    CData/*1:0*/ __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_write_en_h6e95ff9d_0_2;
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_write_en_h6e95ff9d_0_2 = 0;
    SData/*11:0*/ __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_write_preg_h6e95ff9d_0_2;
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_write_preg_h6e95ff9d_0_2 = 0;
    CData/*1:0*/ __VdfgSynthJoin_boom_core__DOT__rename__DOT__fl_alloc_en_h6e95ff9d_0_2;
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__fl_alloc_en_h6e95ff9d_0_2 = 0;
    IData/*29:0*/ __VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_lreg_h6e95ff9d_0_4;
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_lreg_h6e95ff9d_0_4 = 0;
    CData/*1:0*/ __VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_write_en_h6e95ff9d_0_2;
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_write_en_h6e95ff9d_0_2 = 0;
    SData/*9:0*/ __VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_write_lreg_h6e95ff9d_0_2;
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_write_lreg_h6e95ff9d_0_2 = 0;
    SData/*11:0*/ __VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_write_preg_h6e95ff9d_0_2;
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_write_preg_h6e95ff9d_0_2 = 0;
    IData/*29:0*/ __VdfgSynthAssign_boom_core__DOT__rename__DOT__mt_lreg_h6e95ff9d_0_5;
    __VdfgSynthAssign_boom_core__DOT__rename__DOT__mt_lreg_h6e95ff9d_0_5 = 0;
    QData/*35:0*/ __VdfgSynthAssign_boom_core__DOT__rename__DOT__bt_read_preg_h6e95ff9d_0_4;
    __VdfgSynthAssign_boom_core__DOT__rename__DOT__bt_read_preg_h6e95ff9d_0_4 = 0;
    QData/*35:0*/ __VdfgSynthAssign_boom_core__DOT__rename__DOT__mt_preg_h6e95ff9d_0_19;
    __VdfgSynthAssign_boom_core__DOT__rename__DOT__mt_preg_h6e95ff9d_0_19 = 0;
    QData/*35:0*/ __VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_preg_h6e95ff9d_0_21;
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_preg_h6e95ff9d_0_21 = 0;
    SData/*11:0*/ __VdfgRegularize_h6e95ff9d_0_212;
    __VdfgRegularize_h6e95ff9d_0_212 = 0;
    IData/*17:0*/ __VdfgRegularize_h6e95ff9d_0_213;
    __VdfgRegularize_h6e95ff9d_0_213 = 0;
    IData/*23:0*/ __VdfgRegularize_h6e95ff9d_0_214;
    __VdfgRegularize_h6e95ff9d_0_214 = 0;
    IData/*23:0*/ __VdfgRegularize_h6e95ff9d_0_215;
    __VdfgRegularize_h6e95ff9d_0_215 = 0;
    IData/*29:0*/ __VdfgRegularize_h6e95ff9d_0_216;
    __VdfgRegularize_h6e95ff9d_0_216 = 0;
    IData/*29:0*/ __VdfgRegularize_h6e95ff9d_0_217;
    __VdfgRegularize_h6e95ff9d_0_217 = 0;
    VlWide<24>/*753:0*/ __VdfgRegularize_h6e95ff9d_0_229;
    VL_ZERO_W(754, __VdfgRegularize_h6e95ff9d_0_229);
    VlWide<24>/*753:0*/ __VdfgRegularize_h6e95ff9d_0_230;
    VL_ZERO_W(754, __VdfgRegularize_h6e95ff9d_0_230);
    IData/*29:0*/ __VdfgRegularize_h6e95ff9d_0_233;
    __VdfgRegularize_h6e95ff9d_0_233 = 0;
    // Body
    if ((1U & (IData)(vlSelfRef.boom_core__DOT__dec_fire))) {
        __VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_write_lreg_h6e95ff9d_0_2 
            = (0x0000001fU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U] 
                              >> 0x0000000fU));
        __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_write_en_h6e95ff9d_0_2 
            = (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57));
        __VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_write_en_h6e95ff9d_0_2 
            = (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57));
        __VdfgSynthJoin_boom_core__DOT__rename__DOT__fl_alloc_en_h6e95ff9d_0_2 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57;
        __VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_lreg_h6e95ff9d_0_4 
            = ((0x3fff8000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_225) 
               | ((0x00007c00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U] 
                                  >> 5U)) | (0x000003ffU 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_225)));
    } else {
        __VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_write_lreg_h6e95ff9d_0_2 = 0U;
        __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_write_en_h6e95ff9d_0_2 = 0U;
        __VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_write_en_h6e95ff9d_0_2 = 0U;
        __VdfgSynthJoin_boom_core__DOT__rename__DOT__fl_alloc_en_h6e95ff9d_0_2 = 0U;
        __VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_lreg_h6e95ff9d_0_4 = 0U;
    }
    __VdfgSynthAssign_boom_core__DOT__rename__DOT__mt_lreg_h6e95ff9d_0_5 
        = ((0x3ff00000U & __VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_lreg_h6e95ff9d_0_4) 
           | ((0x000f8000U & (vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[13U] 
                              << 0x0000000dU)) | (0x00007fffU 
                                                  & __VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_lreg_h6e95ff9d_0_4)));
    vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__unnamedblk2__DOT__taken_mask = 0ULL;
    __Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
        = vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__free_vec;
    if ((2U & (IData)(vlSelfRef.boom_core__DOT__dec_fire))) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_write_lreg 
            = ((0x000003e0U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[13U] 
                               >> 3U)) | (0x0000001fU 
                                          & (IData)(__VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_write_lreg_h6e95ff9d_0_2)));
        vlSelfRef.boom_core__DOT__rename__DOT__bt_write_en 
            = ((2U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_235)) 
               | (1U & (IData)(__VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_write_en_h6e95ff9d_0_2)));
        vlSelfRef.boom_core__DOT__rename__DOT__mt_write_en 
            = ((2U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_235)) 
               | (1U & (IData)(__VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_write_en_h6e95ff9d_0_2)));
        vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_en 
            = ((((0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[13U] 
                                        >> 8U))) & 
                 (2U != (3U & (vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[12U] 
                               >> 0x00000014U)))) << 1U) 
               | (1U & (IData)(__VdfgSynthJoin_boom_core__DOT__rename__DOT__fl_alloc_en_h6e95ff9d_0_2)));
    } else {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_write_lreg 
            = __VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_write_lreg_h6e95ff9d_0_2;
        vlSelfRef.boom_core__DOT__rename__DOT__bt_write_en 
            = __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_write_en_h6e95ff9d_0_2;
        vlSelfRef.boom_core__DOT__rename__DOT__mt_write_en 
            = __VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_write_en_h6e95ff9d_0_2;
        vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_en 
            = __VdfgSynthJoin_boom_core__DOT__rename__DOT__fl_alloc_en_h6e95ff9d_0_2;
    }
    {
        vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0;
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 1U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 1U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 2U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 2U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 3U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 3U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 4U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 4U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 5U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 5U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 6U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 6U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 7U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 7U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 8U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 8U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 9U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 9U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x0aU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0aU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x0bU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0bU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x0cU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0cU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x0dU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0dU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x0eU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0eU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x0fU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0fU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x10U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x10U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x11U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x11U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x12U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x12U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x13U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x13U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x14U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x14U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x15U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x15U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x16U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x16U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x17U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x17U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x18U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x18U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x19U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x19U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x1aU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1aU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x1bU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1bU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x1cU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1cU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x1dU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1dU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x1eU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1eU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x1fU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1fU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x20U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x20U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x21U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x21U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x22U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x22U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x23U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x23U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x24U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x24U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x25U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x25U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x26U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x26U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x27U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x27U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x28U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x28U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x29U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x29U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x2aU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2aU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x2bU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2bU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x2cU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2cU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x2dU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2dU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x2eU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2eU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x2fU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2fU;
            goto __Vlabel0;
        }
        vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0U;
        __Vlabel0: ;
    }
    vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand 
        = ((0x0fc0U & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand)) 
           | (IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder));
    if ((1U & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_en))) {
        if (VL_LIKELY(((0x2fU >= (0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand)))))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__unnamedblk2__DOT__taken_mask 
                = (vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__unnamedblk2__DOT__taken_mask 
                   | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand)))));
        }
    }
    __Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
        = (vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__free_vec 
           & (~ vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__unnamedblk2__DOT__taken_mask));
    {
        vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0;
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 1U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 1U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 2U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 2U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 3U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 3U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 4U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 4U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 5U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 5U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 6U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 6U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 7U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 7U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 8U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 8U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 9U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 9U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x0aU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0aU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x0bU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0bU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x0cU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0cU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x0dU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0dU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x0eU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0eU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x0fU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0fU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x10U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x10U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x11U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x11U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x12U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x12U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x13U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x13U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x14U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x14U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x15U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x15U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x16U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x16U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x17U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x17U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x18U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x18U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x19U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x19U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x1aU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1aU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x1bU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1bU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x1cU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1cU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x1dU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1dU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x1eU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1eU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x1fU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1fU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x20U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x20U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x21U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x21U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x22U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x22U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x23U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x23U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x24U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x24U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x25U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x25U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x26U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x26U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x27U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x27U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x28U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x28U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x29U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x29U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x2aU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2aU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x2bU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2bU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x2cU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2cU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x2dU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2dU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x2eU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2eU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x2fU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2fU;
            goto __Vlabel1;
        }
        vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0U;
        __Vlabel1: ;
    }
    vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand 
        = ((0x003fU & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand)) 
           | ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder) 
              << 6U));
    if ((2U & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_en))) {
        if (VL_LIKELY(((0x2fU >= (0x0000003fU & ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                 >> 6U)))))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__unnamedblk2__DOT__taken_mask 
                = (vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__unnamedblk2__DOT__taken_mask 
                   | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                      >> 6U)))));
        }
    }
    __VdfgRegularize_h6e95ff9d_0_233 = ((0x3e000000U 
                                         & __VdfgSynthAssign_boom_core__DOT__rename__DOT__mt_lreg_h6e95ff9d_0_5) 
                                        | ((0x000f8000U 
                                            & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[13U] 
                                               << 0x0000000dU)) 
                                           | (0x00007fffU 
                                              & __VdfgSynthAssign_boom_core__DOT__rename__DOT__mt_lreg_h6e95ff9d_0_5)));
    if ((1U & (IData)(vlSelfRef.boom_core__DOT__dec_fire))) {
        __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_write_preg_h6e95ff9d_0_2 
            = (0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand));
        __VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_write_preg_h6e95ff9d_0_2 
            = (0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand));
    } else {
        __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_write_preg_h6e95ff9d_0_2 = 0U;
        __VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_write_preg_h6e95ff9d_0_2 = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[0U] = 
        ((0xffffffc0U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[0U]) 
         | ((0U == (0x0000003fU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[13U] 
                                   >> 8U))) ? 0U : 
            (0x0000003fU & ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                            >> 6U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[0U] = 
        ((0x0000003fU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[0U]) 
         | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238[0U] 
            << 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[1U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238[0U] 
          >> 0x0000001aU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238[1U] 
                             << 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[2U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238[1U] 
          >> 0x0000001aU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238[2U] 
                             << 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[3U] = 
        (0x00007fffU & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238[2U] 
                         >> 0x0000001aU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238[3U] 
                                            << 6U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[0U] = 
        ((0xffffffc0U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[0U]) 
         | ((0U == (0x0000003fU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U] 
                                   >> 0x0000000fU)))
             ? 0U : (0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[0U] = 
        ((0x0000003fU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[0U]) 
         | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[0U] 
            << 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[1U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[0U] 
          >> 0x0000001aU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[1U] 
                             << 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[2U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[1U] 
          >> 0x0000001aU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[2U] 
                             << 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[3U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[2U] 
          >> 0x0000001aU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[3U] 
                             << 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[4U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[3U] 
          >> 0x0000001aU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[4U] 
                             << 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[5U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[4U] 
          >> 0x0000001aU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[5U] 
                             << 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[6U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[5U] 
          >> 0x0000001aU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[6U] 
                             << 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[7U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[6U] 
          >> 0x0000001aU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[7U] 
                             << 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[8U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[7U] 
          >> 0x0000001aU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[8U] 
                             << 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[9U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[8U] 
          >> 0x0000001aU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[9U] 
                             << 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[10U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[9U] 
            >> 0x0000001aU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[10U] 
                               << 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[11U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[10U] 
            >> 0x0000001aU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[11U] 
                               << 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[12U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[11U] 
            >> 0x0000001aU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[12U] 
                               << 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[13U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[12U] 
            >> 0x0000001aU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[13U] 
                               << 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[14U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[13U] 
            >> 0x0000001aU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[14U] 
                               << 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[15U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[14U] 
            >> 0x0000001aU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[15U] 
                               << 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[16U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[15U] 
            >> 0x0000001aU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[16U] 
                               << 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[17U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[16U] 
            >> 0x0000001aU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[17U] 
                               << 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[18U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[17U] 
            >> 0x0000001aU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[18U] 
                               << 6U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[19U] 
        = (0x000001ffU & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[18U] 
                           >> 0x0000001aU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[19U] 
                                              << 6U)));
    vlSelfRef.boom_core__DOT__rename__DOT__mt_lreg 
        = ((2U & (IData)(vlSelfRef.boom_core__DOT__dec_fire))
            ? ((0x3e000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[13U] 
                               << 0x00000011U)) | (
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_234) 
                                                    << 0x0000000fU) 
                                                   | (0x00007fffU 
                                                      & __VdfgRegularize_h6e95ff9d_0_233)))
            : __VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_lreg_h6e95ff9d_0_4);
    __VdfgRegularize_h6e95ff9d_0_212 = (((IData)(vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__map_q
                                                 [(0x0000001fU 
                                                   & (vlSelfRef.boom_core__DOT__rename__DOT__mt_lreg 
                                                      >> 5U))]) 
                                         << 6U) | (0x0000003fU 
                                                   & ((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & vlSelfRef.boom_core__DOT__rename__DOT__mt_lreg))
                                                       ? (IData)(vlSelfRef.__VdfgSynthAssign_boom_core__DOT__rename__DOT__mt_preg_h6e95ff9d_0_1)
                                                       : vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__map_q
                                                      [
                                                      (0x0000001fU 
                                                       & vlSelfRef.boom_core__DOT__rename__DOT__mt_lreg)])));
    __VdfgRegularize_h6e95ff9d_0_213 = (((IData)(vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__map_q
                                                 [(0x0000001fU 
                                                   & (vlSelfRef.boom_core__DOT__rename__DOT__mt_lreg 
                                                      >> 0x0000000aU))]) 
                                         << 0x0000000cU) 
                                        | ((0U == (0x0000001fU 
                                                   & (vlSelfRef.boom_core__DOT__rename__DOT__mt_lreg 
                                                      >> 5U)))
                                            ? (0x0000003fU 
                                               & (IData)(__VdfgRegularize_h6e95ff9d_0_212))
                                            : (IData)(__VdfgRegularize_h6e95ff9d_0_212)));
    __VdfgRegularize_h6e95ff9d_0_214 = (((IData)(vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__map_q
                                                 [(0x0000001fU 
                                                   & (vlSelfRef.boom_core__DOT__rename__DOT__mt_lreg 
                                                      >> 0x0000000fU))]) 
                                         << 0x00000012U) 
                                        | ((0U == (0x0000001fU 
                                                   & (vlSelfRef.boom_core__DOT__rename__DOT__mt_lreg 
                                                      >> 0x0000000aU)))
                                            ? (0x00000fffU 
                                               & __VdfgRegularize_h6e95ff9d_0_213)
                                            : __VdfgRegularize_h6e95ff9d_0_213));
    __VdfgRegularize_h6e95ff9d_0_215 = ((0U == (0x0000001fU 
                                                & (vlSelfRef.boom_core__DOT__rename__DOT__mt_lreg 
                                                   >> 0x0000000fU)))
                                         ? (0x0003ffffU 
                                            & __VdfgRegularize_h6e95ff9d_0_214)
                                         : __VdfgRegularize_h6e95ff9d_0_214);
    if ((2U & (IData)(vlSelfRef.boom_core__DOT__dec_fire))) {
        vlSelfRef.boom_core__DOT__rename__DOT__bt_write_preg 
            = ((0x00000fc0U & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand)) 
               | (0x0000003fU & (IData)(__VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_write_preg_h6e95ff9d_0_2)));
        vlSelfRef.boom_core__DOT__rename__DOT__mt_write_preg 
            = ((0x00000fc0U & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand)) 
               | (0x0000003fU & (IData)(__VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_write_preg_h6e95ff9d_0_2)));
    } else {
        vlSelfRef.boom_core__DOT__rename__DOT__bt_write_preg 
            = __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_write_preg_h6e95ff9d_0_2;
        vlSelfRef.boom_core__DOT__rename__DOT__mt_write_preg 
            = __VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_write_preg_h6e95ff9d_0_2;
    }
    __VdfgRegularize_h6e95ff9d_0_216 = (((IData)(vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__map_q
                                                 [(0x0000001fU 
                                                   & (vlSelfRef.boom_core__DOT__rename__DOT__mt_lreg 
                                                      >> 0x00000014U))]) 
                                         << 0x00000018U) 
                                        | ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__mt_write_en) 
                                             & ((0x0000001fU 
                                                 & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__mt_write_lreg)) 
                                                == 
                                                (0x0000001fU 
                                                 & (vlSelfRef.boom_core__DOT__rename__DOT__mt_lreg 
                                                    >> 0x0000000fU)))) 
                                            & (0U != 
                                               (0x0000001fU 
                                                & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__mt_write_lreg))))
                                            ? ((0x00fc0000U 
                                                & ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__mt_write_preg) 
                                                   << 0x00000012U)) 
                                               | (0x0003ffffU 
                                                  & __VdfgRegularize_h6e95ff9d_0_215))
                                            : __VdfgRegularize_h6e95ff9d_0_215));
    __VdfgRegularize_h6e95ff9d_0_217 = ((0U == (0x0000001fU 
                                                & (vlSelfRef.boom_core__DOT__rename__DOT__mt_lreg 
                                                   >> 0x00000014U)))
                                         ? (0x00ffffffU 
                                            & __VdfgRegularize_h6e95ff9d_0_216)
                                         : __VdfgRegularize_h6e95ff9d_0_216);
    __VdfgSynthAssign_boom_core__DOT__rename__DOT__mt_preg_h6e95ff9d_0_19 
        = (((QData)((IData)(vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__map_q
                            [(0x0000001fU & (vlSelfRef.boom_core__DOT__rename__DOT__mt_lreg 
                                             >> 0x00000019U))])) 
            << 0x0000001eU) | (QData)((IData)(((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__mt_write_en) 
                                                 & ((0x0000001fU 
                                                     & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__mt_write_lreg)) 
                                                    == 
                                                    (0x0000001fU 
                                                     & (vlSelfRef.boom_core__DOT__rename__DOT__mt_lreg 
                                                        >> 0x00000014U)))) 
                                                & (0U 
                                                   != 
                                                   (0x0000001fU 
                                                    & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__mt_write_lreg))))
                                                ? (
                                                   (0x3f000000U 
                                                    & ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__mt_write_preg) 
                                                       << 0x00000018U)) 
                                                   | (0x00ffffffU 
                                                      & __VdfgRegularize_h6e95ff9d_0_217))
                                                : __VdfgRegularize_h6e95ff9d_0_217))));
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_preg_h6e95ff9d_0_21 
        = ((0U == (0x0000001fU & (vlSelfRef.boom_core__DOT__rename__DOT__mt_lreg 
                                  >> 0x00000019U)))
            ? (QData)((IData)((0x3fffffffU & (IData)(__VdfgSynthAssign_boom_core__DOT__rename__DOT__mt_preg_h6e95ff9d_0_19))))
            : __VdfgSynthAssign_boom_core__DOT__rename__DOT__mt_preg_h6e95ff9d_0_19);
    vlSelfRef.boom_core__DOT__rename__DOT__mt_preg 
        = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__mt_write_en) 
             & ((0x0000001fU & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__mt_write_lreg)) 
                == (0x0000001fU & (vlSelfRef.boom_core__DOT__rename__DOT__mt_lreg 
                                   >> 0x00000019U)))) 
            & (0U != (0x0000001fU & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__mt_write_lreg))))
            ? (((QData)((IData)((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__mt_write_preg)))) 
                << 0x0000001eU) | (QData)((IData)((0x3fffffffU 
                                                   & (IData)(__VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_preg_h6e95ff9d_0_21)))))
            : __VdfgSynthJoin_boom_core__DOT__rename__DOT__mt_preg_h6e95ff9d_0_21);
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_read_preg_h6e95ff9d_0_3 
        = ((1U & (IData)(vlSelfRef.boom_core__DOT__dec_fire))
            ? (QData)((IData)((0x00000fffU & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__mt_preg))))
            : 0ULL);
    __VdfgRegularize_h6e95ff9d_0_229[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[0U];
    __VdfgRegularize_h6e95ff9d_0_229[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[1U];
    __VdfgRegularize_h6e95ff9d_0_229[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[2U];
    __VdfgRegularize_h6e95ff9d_0_229[3U] = (((IData)(
                                                     (vlSelfRef.boom_core__DOT__rename__DOT__mt_preg 
                                                      >> 6U)) 
                                             << 0x0000001dU) 
                                            | (0x1fffffffU 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227[3U]));
    __VdfgRegularize_h6e95ff9d_0_229[4U] = ((0xfffffe00U 
                                             & __VdfgRegularize_h6e95ff9d_0_229[4U]) 
                                            | ((0x000001f8U 
                                                & ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__mt_preg) 
                                                   << 3U)) 
                                               | (7U 
                                                  & ((IData)(
                                                             (vlSelfRef.boom_core__DOT__rename__DOT__mt_preg 
                                                              >> 6U)) 
                                                     >> 3U))));
    __VdfgRegularize_h6e95ff9d_0_229[4U] = ((0x000001ffU 
                                             & __VdfgRegularize_h6e95ff9d_0_229[4U]) 
                                            | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[0U] 
                                               << 0x0000000fU));
    __VdfgRegularize_h6e95ff9d_0_229[5U] = ((0x000001ffU 
                                             & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[0U] 
                                                >> 0x00000011U)) 
                                            | ((0x00007e00U 
                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[0U] 
                                                   >> 0x00000011U)) 
                                               | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[1U] 
                                                  << 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_229[6U] = ((0x000001ffU 
                                             & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[1U] 
                                                >> 0x00000011U)) 
                                            | ((0x00007e00U 
                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[1U] 
                                                   >> 0x00000011U)) 
                                               | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[2U] 
                                                  << 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_229[7U] = ((0x000001ffU 
                                             & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[2U] 
                                                >> 0x00000011U)) 
                                            | ((0x00007e00U 
                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[2U] 
                                                   >> 0x00000011U)) 
                                               | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[3U] 
                                                  << 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_229[8U] = ((0x000001ffU 
                                             & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[3U] 
                                                >> 0x00000011U)) 
                                            | ((0x00007e00U 
                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[3U] 
                                                   >> 0x00000011U)) 
                                               | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[4U] 
                                                  << 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_229[9U] = ((0x000001ffU 
                                             & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[4U] 
                                                >> 0x00000011U)) 
                                            | ((0x00007e00U 
                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[4U] 
                                                   >> 0x00000011U)) 
                                               | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[5U] 
                                                  << 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_229[10U] = ((0x000001ffU 
                                              & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[5U] 
                                                 >> 0x00000011U)) 
                                             | ((0x00007e00U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[5U] 
                                                    >> 0x00000011U)) 
                                                | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[6U] 
                                                   << 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_229[11U] = ((0x000001ffU 
                                              & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[6U] 
                                                 >> 0x00000011U)) 
                                             | ((0x00007e00U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[6U] 
                                                    >> 0x00000011U)) 
                                                | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[7U] 
                                                   << 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_229[12U] = ((0x000001ffU 
                                              & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[7U] 
                                                 >> 0x00000011U)) 
                                             | ((0x00007e00U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[7U] 
                                                    >> 0x00000011U)) 
                                                | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[8U] 
                                                   << 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_229[13U] = ((0x000001ffU 
                                              & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[8U] 
                                                 >> 0x00000011U)) 
                                             | ((0x00007e00U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[8U] 
                                                    >> 0x00000011U)) 
                                                | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[9U] 
                                                   << 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_229[14U] = ((0x000001ffU 
                                              & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[9U] 
                                                 >> 0x00000011U)) 
                                             | ((0x00007e00U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[9U] 
                                                    >> 0x00000011U)) 
                                                | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[10U] 
                                                   << 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_229[15U] = ((0x000001ffU 
                                              & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[10U] 
                                                 >> 0x00000011U)) 
                                             | ((0x00007e00U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[10U] 
                                                    >> 0x00000011U)) 
                                                | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[11U] 
                                                   << 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_229[16U] = ((0x000001ffU 
                                              & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[11U] 
                                                 >> 0x00000011U)) 
                                             | ((0x00007e00U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[11U] 
                                                    >> 0x00000011U)) 
                                                | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[12U] 
                                                   << 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_229[17U] = ((0x000001ffU 
                                              & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[12U] 
                                                 >> 0x00000011U)) 
                                             | ((0x00007e00U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[12U] 
                                                    >> 0x00000011U)) 
                                                | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[13U] 
                                                   << 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_229[18U] = ((0x000001ffU 
                                              & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[13U] 
                                                 >> 0x00000011U)) 
                                             | ((0x00007e00U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[13U] 
                                                    >> 0x00000011U)) 
                                                | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[14U] 
                                                   << 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_229[19U] = ((0x000001ffU 
                                              & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[14U] 
                                                 >> 0x00000011U)) 
                                             | ((0x00007e00U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[14U] 
                                                    >> 0x00000011U)) 
                                                | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[15U] 
                                                   << 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_229[20U] = ((0x000001ffU 
                                              & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[15U] 
                                                 >> 0x00000011U)) 
                                             | ((0x00007e00U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[15U] 
                                                    >> 0x00000011U)) 
                                                | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[16U] 
                                                   << 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_229[21U] = ((0x000001ffU 
                                              & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[16U] 
                                                 >> 0x00000011U)) 
                                             | ((0x00007e00U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[16U] 
                                                    >> 0x00000011U)) 
                                                | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[17U] 
                                                   << 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_229[22U] = ((0x000001ffU 
                                              & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[17U] 
                                                 >> 0x00000011U)) 
                                             | ((0x00007e00U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[17U] 
                                                    >> 0x00000011U)) 
                                                | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[18U] 
                                                   << 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_229[23U] = (0x0003ffffU 
                                             & ((0x000001ffU 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[18U] 
                                                    >> 0x00000011U)) 
                                                | ((0x00007e00U 
                                                    & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[18U] 
                                                       >> 0x00000011U)) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228[19U] 
                                                      << 0x0000000fU))));
    __VdfgRegularize_h6e95ff9d_0_230[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31[0U];
    __VdfgRegularize_h6e95ff9d_0_230[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31[1U];
    __VdfgRegularize_h6e95ff9d_0_230[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31[2U];
    __VdfgRegularize_h6e95ff9d_0_230[3U] = ((0xe0000000U 
                                             & __VdfgRegularize_h6e95ff9d_0_229[3U]) 
                                            | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31[3U]);
    __VdfgRegularize_h6e95ff9d_0_230[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[0U] 
                                             << 9U) 
                                            | (0x000001ffU 
                                               & __VdfgRegularize_h6e95ff9d_0_229[4U]));
    __VdfgRegularize_h6e95ff9d_0_230[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[0U] 
                                             >> 0x00000017U) 
                                            | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[1U] 
                                               << 9U));
    __VdfgRegularize_h6e95ff9d_0_230[6U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[1U] 
                                             >> 0x00000017U) 
                                            | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[2U] 
                                               << 9U));
    __VdfgRegularize_h6e95ff9d_0_230[7U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[2U] 
                                             >> 0x00000017U) 
                                            | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[3U] 
                                               << 9U));
    __VdfgRegularize_h6e95ff9d_0_230[8U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[3U] 
                                             >> 0x00000017U) 
                                            | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[4U] 
                                               << 9U));
    __VdfgRegularize_h6e95ff9d_0_230[9U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[4U] 
                                             >> 0x00000017U) 
                                            | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[5U] 
                                               << 9U));
    __VdfgRegularize_h6e95ff9d_0_230[10U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[5U] 
                                              >> 0x00000017U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[6U] 
                                                << 9U));
    __VdfgRegularize_h6e95ff9d_0_230[11U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[6U] 
                                              >> 0x00000017U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[7U] 
                                                << 9U));
    __VdfgRegularize_h6e95ff9d_0_230[12U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[7U] 
                                              >> 0x00000017U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[8U] 
                                                << 9U));
    __VdfgRegularize_h6e95ff9d_0_230[13U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[8U] 
                                              >> 0x00000017U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[9U] 
                                                << 9U));
    __VdfgRegularize_h6e95ff9d_0_230[14U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[9U] 
                                              >> 0x00000017U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[10U] 
                                                << 9U));
    __VdfgRegularize_h6e95ff9d_0_230[15U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[10U] 
                                              >> 0x00000017U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[11U] 
                                                << 9U));
    __VdfgRegularize_h6e95ff9d_0_230[16U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[11U] 
                                              >> 0x00000017U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[12U] 
                                                << 9U));
    __VdfgRegularize_h6e95ff9d_0_230[17U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[12U] 
                                              >> 0x00000017U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[13U] 
                                                << 9U));
    __VdfgRegularize_h6e95ff9d_0_230[18U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[13U] 
                                              >> 0x00000017U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[14U] 
                                                << 9U));
    __VdfgRegularize_h6e95ff9d_0_230[19U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[14U] 
                                              >> 0x00000017U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[15U] 
                                                << 9U));
    __VdfgRegularize_h6e95ff9d_0_230[20U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[15U] 
                                              >> 0x00000017U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[16U] 
                                                << 9U));
    __VdfgRegularize_h6e95ff9d_0_230[21U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[16U] 
                                              >> 0x00000017U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[17U] 
                                                << 9U));
    __VdfgRegularize_h6e95ff9d_0_230[22U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[17U] 
                                              >> 0x00000017U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[18U] 
                                                << 9U));
    __VdfgRegularize_h6e95ff9d_0_230[23U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[18U] 
                                              >> 0x00000017U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[19U] 
                                                << 9U));
    __VdfgSynthAssign_boom_core__DOT__rename__DOT__bt_read_preg_h6e95ff9d_0_4 
        = (((QData)((IData)((0x00000fffU & (IData)(
                                                   (__VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_read_preg_h6e95ff9d_0_3 
                                                    >> 0x00000018U))))) 
            << 0x00000018U) | (QData)((IData)(((0x00fc0000U 
                                                & ((IData)(
                                                           (vlSelfRef.boom_core__DOT__rename__DOT__mt_preg 
                                                            >> 0x00000012U)) 
                                                   << 0x00000012U)) 
                                               | (0x0003ffffU 
                                                  & (IData)(__VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_read_preg_h6e95ff9d_0_3))))));
    vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
        = ((2U & (IData)(vlSelfRef.boom_core__DOT__dec_fire))
            ? (((QData)((IData)((0x0000003fU & (IData)(
                                                       (__VdfgSynthAssign_boom_core__DOT__rename__DOT__bt_read_preg_h6e95ff9d_0_4 
                                                        >> 0x0000001eU))))) 
                << 0x0000001eU) | (QData)((IData)((
                                                   (0x3f000000U 
                                                    & ((IData)(
                                                               (vlSelfRef.boom_core__DOT__rename__DOT__mt_preg 
                                                                >> 0x00000018U)) 
                                                       << 0x00000018U)) 
                                                   | (0x00ffffffU 
                                                      & (IData)(__VdfgSynthAssign_boom_core__DOT__rename__DOT__bt_read_preg_h6e95ff9d_0_4))))))
            : __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_read_preg_h6e95ff9d_0_3);
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[0U] 
        = __VdfgRegularize_h6e95ff9d_0_230[0U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[1U] 
        = __VdfgRegularize_h6e95ff9d_0_230[1U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[2U] 
        = __VdfgRegularize_h6e95ff9d_0_230[2U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[3U] 
        = ((0xffff8000U & __VdfgRegularize_h6e95ff9d_0_230[3U]) 
           | ((0x00007e00U & ((IData)((vlSelfRef.boom_core__DOT__rename__DOT__mt_preg 
                                       >> 0x0000000cU)) 
                              << 9U)) | (0x000001ffU 
                                         & __VdfgRegularize_h6e95ff9d_0_230[3U])));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[4U] 
        = ((0x00007fffU & __VdfgRegularize_h6e95ff9d_0_230[4U]) 
           | (0xffff8000U & __VdfgRegularize_h6e95ff9d_0_230[4U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[5U] 
        = ((0x00007fffU & __VdfgRegularize_h6e95ff9d_0_230[5U]) 
           | (0xffff8000U & __VdfgRegularize_h6e95ff9d_0_230[5U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[6U] 
        = ((0x00007fffU & __VdfgRegularize_h6e95ff9d_0_230[6U]) 
           | (0xffff8000U & __VdfgRegularize_h6e95ff9d_0_230[6U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[7U] 
        = ((0x00007fffU & __VdfgRegularize_h6e95ff9d_0_230[7U]) 
           | (0xffff8000U & __VdfgRegularize_h6e95ff9d_0_230[7U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[8U] 
        = ((0x00007fffU & __VdfgRegularize_h6e95ff9d_0_230[8U]) 
           | (0xffff8000U & __VdfgRegularize_h6e95ff9d_0_230[8U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[9U] 
        = ((0x00007fffU & __VdfgRegularize_h6e95ff9d_0_230[9U]) 
           | (0xffff8000U & __VdfgRegularize_h6e95ff9d_0_230[9U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[10U] 
        = ((0x00007fffU & __VdfgRegularize_h6e95ff9d_0_230[10U]) 
           | (0xffff8000U & __VdfgRegularize_h6e95ff9d_0_230[10U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[11U] 
        = ((0x00007fffU & __VdfgRegularize_h6e95ff9d_0_230[11U]) 
           | (0xffff8000U & __VdfgRegularize_h6e95ff9d_0_230[11U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[12U] 
        = ((0x00007fffU & __VdfgRegularize_h6e95ff9d_0_230[12U]) 
           | (0xffff8000U & __VdfgRegularize_h6e95ff9d_0_230[12U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[13U] 
        = ((0x00007fffU & __VdfgRegularize_h6e95ff9d_0_230[13U]) 
           | (0xffff8000U & __VdfgRegularize_h6e95ff9d_0_230[13U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[14U] 
        = ((0x00007fffU & __VdfgRegularize_h6e95ff9d_0_230[14U]) 
           | (0xffff8000U & __VdfgRegularize_h6e95ff9d_0_230[14U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[15U] 
        = ((0x00007fffU & __VdfgRegularize_h6e95ff9d_0_230[15U]) 
           | (0xffff8000U & __VdfgRegularize_h6e95ff9d_0_230[15U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[16U] 
        = ((0x00007fffU & __VdfgRegularize_h6e95ff9d_0_230[16U]) 
           | (0xffff8000U & __VdfgRegularize_h6e95ff9d_0_230[16U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[17U] 
        = ((0x00007fffU & __VdfgRegularize_h6e95ff9d_0_230[17U]) 
           | (0xffff8000U & __VdfgRegularize_h6e95ff9d_0_230[17U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[18U] 
        = ((0x00007fffU & __VdfgRegularize_h6e95ff9d_0_230[18U]) 
           | (0xffff8000U & __VdfgRegularize_h6e95ff9d_0_230[18U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[19U] 
        = ((0x00007fffU & __VdfgRegularize_h6e95ff9d_0_230[19U]) 
           | (0xffff8000U & __VdfgRegularize_h6e95ff9d_0_230[19U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[20U] 
        = ((0x00007fffU & __VdfgRegularize_h6e95ff9d_0_230[20U]) 
           | (0xffff8000U & __VdfgRegularize_h6e95ff9d_0_230[20U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[21U] 
        = ((0x00007fffU & __VdfgRegularize_h6e95ff9d_0_230[21U]) 
           | (0xffff8000U & __VdfgRegularize_h6e95ff9d_0_230[21U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[22U] 
        = ((0x00007fffU & __VdfgRegularize_h6e95ff9d_0_230[22U]) 
           | (0xffff8000U & __VdfgRegularize_h6e95ff9d_0_230[22U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[23U] 
        = ((0x00007fffU & __VdfgRegularize_h6e95ff9d_0_230[23U]) 
           | (0x00038000U & __VdfgRegularize_h6e95ff9d_0_230[23U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[3U] 
        = ((0xfffffe00U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[3U]) 
           | (0x000001ffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31[3U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[3U] 
        = ((0xe00001ffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[3U]) 
           | (((0x000ffc00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31[3U] 
                               >> 9U)) | ((0x000000c0U 
                                           & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31[3U] 
                                              >> 9U)) 
                                          | (0x0000003fU 
                                             & (__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[3U] 
                                                >> 9U)))) 
              << 9U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[3U] 
        = ((0x1fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[3U]) 
           | (0xe0000000U & __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[3U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[4U] 
        = (((0x1ffffe00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[0U] 
                            << 9U)) | (0x000001ffU 
                                       & __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_4[4U])) 
           | (0xe0000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[0U] 
                             << 9U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[5U] 
        = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[0U] 
             >> 0x00000017U) | (0x1ffffe00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[1U] 
                                               << 9U))) 
           | (0xe0000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[1U] 
                             << 9U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[6U] 
        = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[1U] 
             >> 0x00000017U) | (0x1ffffe00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[2U] 
                                               << 9U))) 
           | (0xe0000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[2U] 
                             << 9U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[7U] 
        = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[2U] 
             >> 0x00000017U) | (0x1ffffe00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[3U] 
                                               << 9U))) 
           | (0xe0000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[3U] 
                             << 9U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[8U] 
        = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[3U] 
             >> 0x00000017U) | (0x1ffffe00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[4U] 
                                               << 9U))) 
           | (0xe0000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[4U] 
                             << 9U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[9U] 
        = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[4U] 
             >> 0x00000017U) | (0x1ffffe00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[5U] 
                                               << 9U))) 
           | (0xe0000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[5U] 
                             << 9U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[10U] 
        = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[5U] 
             >> 0x00000017U) | (0x1ffffe00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[6U] 
                                               << 9U))) 
           | (0xe0000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[6U] 
                             << 9U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[11U] 
        = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[6U] 
             >> 0x00000017U) | (0x1ffffe00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[7U] 
                                               << 9U))) 
           | (0xe0000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[7U] 
                             << 9U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[12U] 
        = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[7U] 
             >> 0x00000017U) | (0x1ffffe00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[8U] 
                                               << 9U))) 
           | (0xe0000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[8U] 
                             << 9U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[13U] 
        = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[8U] 
             >> 0x00000017U) | (0x1ffffe00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[9U] 
                                               << 9U))) 
           | (0xe0000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[9U] 
                             << 9U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[14U] 
        = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[9U] 
             >> 0x00000017U) | (0x1ffffe00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[10U] 
                                               << 9U))) 
           | (0xe0000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[10U] 
                             << 9U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[15U] 
        = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[10U] 
             >> 0x00000017U) | (0x1ffffe00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[11U] 
                                               << 9U))) 
           | (0xe0000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[11U] 
                             << 9U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[16U] 
        = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[11U] 
             >> 0x00000017U) | (0x1ffffe00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[12U] 
                                               << 9U))) 
           | (0xe0000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[12U] 
                             << 9U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[17U] 
        = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[12U] 
             >> 0x00000017U) | (0x1ffffe00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[13U] 
                                               << 9U))) 
           | (0xe0000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[13U] 
                             << 9U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[18U] 
        = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[13U] 
             >> 0x00000017U) | (0x1ffffe00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[14U] 
                                               << 9U))) 
           | (0xe0000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[14U] 
                             << 9U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[19U] 
        = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[14U] 
             >> 0x00000017U) | (0x1ffffe00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[15U] 
                                               << 9U))) 
           | (0xe0000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[15U] 
                             << 9U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[20U] 
        = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[15U] 
             >> 0x00000017U) | (0x1ffffe00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[16U] 
                                               << 9U))) 
           | (0xe0000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[16U] 
                             << 9U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[21U] 
        = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[16U] 
             >> 0x00000017U) | (0x1ffffe00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[17U] 
                                               << 9U))) 
           | (0xe0000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[17U] 
                             << 9U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[22U] 
        = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[17U] 
             >> 0x00000017U) | (0x1ffffe00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[18U] 
                                               << 9U))) 
           | (0xe0000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[18U] 
                             << 9U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[23U] 
        = (0x0003ffffU & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[18U] 
                           >> 0x00000017U) | (0x1ffffe00U 
                                              & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[19U] 
                                                 << 9U))));
}

extern const VlWide<12>/*383:0*/ Vboom_core__ConstPool__CONST_hdb31f06b_0;

void Vboom_core___024root___nba_sequent__TOP__4(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___nba_sequent__TOP__4\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_22;
    __VdfgRegularize_h6e95ff9d_0_22 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_55;
    __VdfgRegularize_h6e95ff9d_0_55 = 0;
    SData/*11:0*/ __VdfgRegularize_h6e95ff9d_0_163;
    __VdfgRegularize_h6e95ff9d_0_163 = 0;
    SData/*9:0*/ __VdfgRegularize_h6e95ff9d_0_164;
    __VdfgRegularize_h6e95ff9d_0_164 = 0;
    SData/*11:0*/ __VdfgRegularize_h6e95ff9d_0_167;
    __VdfgRegularize_h6e95ff9d_0_167 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_168;
    __VdfgRegularize_h6e95ff9d_0_168 = 0;
    // Body
    vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result 
        = ((0x00100000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U])
            ? ((0x00080000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U])
                ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65
                : ((0x00040000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U])
                    ? ((0x00020000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U])
                        ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op2
                        : VL_SHIFTRS_III(32,32,5, vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op2, 
                                         (0x0000001fU 
                                          & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op1)))
                    : ((0x00020000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U])
                        ? (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op2 
                           >> (0x0000001fU & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op1))
                        : (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op2 
                           << (0x0000001fU & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op1)))))
            : ((0x00080000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U])
                ? ((0x00040000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U])
                    ? ((0x00020000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U])
                        ? (~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66)
                        : (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op1 
                           ^ vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op2))
                    : ((0x00020000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U])
                        ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66
                        : (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op1 
                           & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op2)))
                : ((0x00040000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U])
                    ? ((0x00020000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U])
                        ? (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op1 
                           < vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op2)
                        : VL_LTS_III(32, vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op1, vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op2))
                    : ((0x00020000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U])
                        ? (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op1 
                           - vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op2)
                        : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65))));
    vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result 
        = ((0x00100000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U])
            ? ((0x00080000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U])
                ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63
                : ((0x00040000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U])
                    ? ((0x00020000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U])
                        ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op2
                        : VL_SHIFTRS_III(32,32,5, vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op2, 
                                         (0x0000001fU 
                                          & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op1)))
                    : ((0x00020000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U])
                        ? (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op2 
                           >> (0x0000001fU & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op1))
                        : (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op2 
                           << (0x0000001fU & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op1)))))
            : ((0x00080000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U])
                ? ((0x00040000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U])
                    ? ((0x00020000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U])
                        ? (~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64)
                        : (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op1 
                           ^ vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op2))
                    : ((0x00020000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U])
                        ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64
                        : (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op1 
                           & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op2)))
                : ((0x00040000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U])
                    ? ((0x00020000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U])
                        ? (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op1 
                           < vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op2)
                        : VL_LTS_III(32, vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op1, vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op2))
                    : ((0x00020000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U])
                        ? (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op1 
                           - vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op2)
                        : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63))));
    vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result 
        = ((0x00100000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U])
            ? ((0x00080000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U])
                ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_67
                : ((0x00040000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U])
                    ? ((0x00020000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U])
                        ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op2
                        : VL_SHIFTRS_III(32,32,5, vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op2, 
                                         (0x0000001fU 
                                          & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op1)))
                    : ((0x00020000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U])
                        ? (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op2 
                           >> (0x0000001fU & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op1))
                        : (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op2 
                           << (0x0000001fU & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op1)))))
            : ((0x00080000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U])
                ? ((0x00040000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U])
                    ? ((0x00020000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U])
                        ? (~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68)
                        : (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op1 
                           ^ vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op2))
                    : ((0x00020000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U])
                        ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68
                        : (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op1 
                           & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op2)))
                : ((0x00040000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U])
                    ? ((0x00020000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U])
                        ? (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op1 
                           < vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op2)
                        : VL_LTS_III(32, vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op1, vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op2))
                    : ((0x00020000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U])
                        ? (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op1 
                           - vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op2)
                        : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_67))));
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed = 0U;
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready = 0U;
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant = 0U;
    vlSelfRef.boom_core__DOT__unq_iss_valid = 0U;
    VL_ASSIGN_W(377, vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop, Vboom_core__ConstPool__CONST_hdb31f06b_0);
    vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used = 0U;
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0ffeU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed)) 
           | (0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[7U] 
                                      << 8U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[7U] 
                                                >> 0x00000018U)) 
                                    & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                        << 0x0000001eU) 
                                       | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                          >> 2U))))));
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0ffeU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready)) 
           | (((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_valid) 
               & (~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed))) 
              & (0U == (0x00070000U & vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[3U]))));
    if ((1U & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready))) {
        vlSelfRef.boom_core__DOT__unq_iss_valid = 1U;
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[0U];
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[1U];
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[2U];
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[3U];
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[4U];
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[5U];
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[6U];
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[7U];
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[8U];
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[9U];
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[10U];
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = (0x01ffffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[11U]);
        vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant 
            = (1U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant));
        vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used = 1U;
    }
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0ffdU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[19U] 
                                       << 0x0000000fU) 
                                      | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[19U] 
                                         >> 0x00000011U)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 1U));
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0ffdU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_valid) 
                         >> 1U) & (~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed) 
                                      >> 1U))) & (0U 
                                                  == 
                                                  (0x00000e00U 
                                                   & vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[15U])))) 
              << 1U));
    if ((1U & (((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready) 
                >> 1U) & (~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used))))) {
        vlSelfRef.boom_core__DOT__unq_iss_valid = 1U;
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[12U] 
                << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[11U] 
                          >> 0x00000019U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[13U] 
                << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[12U] 
                          >> 0x00000019U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[14U] 
                << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[13U] 
                          >> 0x00000019U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[15U] 
                << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[14U] 
                          >> 0x00000019U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[16U] 
                << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[15U] 
                          >> 0x00000019U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[17U] 
                << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[16U] 
                          >> 0x00000019U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[18U] 
                << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[17U] 
                          >> 0x00000019U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[19U] 
                << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[18U] 
                          >> 0x00000019U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[20U] 
                << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[19U] 
                          >> 0x00000019U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[21U] 
                << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[20U] 
                          >> 0x00000019U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[22U] 
                << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[21U] 
                          >> 0x00000019U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[23U] 
                               << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[22U] 
                                         >> 0x00000019U)));
        vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant 
            = (2U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant));
        vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used = 1U;
    }
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0ffbU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[31U] 
                                       << 0x00000016U) 
                                      | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[31U] 
                                         >> 0x0000000aU)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 2U));
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0ffbU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_valid) 
                         >> 2U) & (~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed) 
                                      >> 2U))) & (0U 
                                                  == 
                                                  (0x0000001cU 
                                                   & vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[27U])))) 
              << 2U));
    if ((1U & (((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready) 
                >> 2U) & (~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used))))) {
        vlSelfRef.boom_core__DOT__unq_iss_valid = 1U;
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[24U] 
                << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[23U] 
                                   >> 0x00000012U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[25U] 
                << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[24U] 
                                   >> 0x00000012U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[26U] 
                << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[25U] 
                                   >> 0x00000012U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[27U] 
                << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[26U] 
                                   >> 0x00000012U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[28U] 
                << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[27U] 
                                   >> 0x00000012U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[29U] 
                << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[28U] 
                                   >> 0x00000012U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[30U] 
                << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[29U] 
                                   >> 0x00000012U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[31U] 
                << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[30U] 
                                   >> 0x00000012U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[32U] 
                << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[31U] 
                                   >> 0x00000012U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[33U] 
                << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[32U] 
                                   >> 0x00000012U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[34U] 
                << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[33U] 
                                   >> 0x00000012U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[35U] 
                               << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[34U] 
                                                  >> 0x00000012U)));
        vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant 
            = (4U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant));
        vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used = 1U;
    }
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0ff7U & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[43U] 
                                       << 0x0000001dU) 
                                      | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[43U] 
                                         >> 3U)) & 
                                     ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                       << 0x0000001eU) 
                                      | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         >> 2U))))) 
              << 3U));
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0ff7U & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_valid) 
                         >> 3U) & (~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed) 
                                      >> 3U))) & (0U 
                                                  == 
                                                  (0x38000000U 
                                                   & vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[38U])))) 
              << 3U));
    if ((1U & (((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready) 
                >> 3U) & (~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used))))) {
        vlSelfRef.boom_core__DOT__unq_iss_valid = 1U;
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[36U] 
                << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[35U] 
                                   >> 0x0000000bU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[37U] 
                << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[36U] 
                                   >> 0x0000000bU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[38U] 
                << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[37U] 
                                   >> 0x0000000bU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[39U] 
                << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[38U] 
                                   >> 0x0000000bU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[40U] 
                << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[39U] 
                                   >> 0x0000000bU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[41U] 
                << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[40U] 
                                   >> 0x0000000bU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[42U] 
                << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[41U] 
                                   >> 0x0000000bU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[43U] 
                << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[42U] 
                                   >> 0x0000000bU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[44U] 
                << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[43U] 
                                   >> 0x0000000bU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[45U] 
                << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[44U] 
                                   >> 0x0000000bU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[46U] 
                << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[45U] 
                                   >> 0x0000000bU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[47U] 
                               << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[46U] 
                                                  >> 0x0000000bU)));
        vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant 
            = (8U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant));
        vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used = 1U;
    }
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0fefU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[54U] 
                                       << 4U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[54U] 
                                                 >> 0x0000001cU)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 4U));
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0fefU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_valid) 
                         >> 4U) & (~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed) 
                                      >> 4U))) & (0U 
                                                  == 
                                                  (0x00700000U 
                                                   & vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[50U])))) 
              << 4U));
    if ((1U & (((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready) 
                >> 4U) & (~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used))))) {
        vlSelfRef.boom_core__DOT__unq_iss_valid = 1U;
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[48U] 
                << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[47U] 
                                   >> 4U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[49U] 
                << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[48U] 
                                   >> 4U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[50U] 
                << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[49U] 
                                   >> 4U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[51U] 
                << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[50U] 
                                   >> 4U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[52U] 
                << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[51U] 
                                   >> 4U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[53U] 
                << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[52U] 
                                   >> 4U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[54U] 
                << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[53U] 
                                   >> 4U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[55U] 
                << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[54U] 
                                   >> 4U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[56U] 
                << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[55U] 
                                   >> 4U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[57U] 
                << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[56U] 
                                   >> 4U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[58U] 
                << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[57U] 
                                   >> 4U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = (0x01ffffffU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[58U] 
                              >> 4U));
        vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant 
            = (0x00000010U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant));
        vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used = 1U;
    }
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0fdfU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[66U] 
                                       << 0x0000000bU) 
                                      | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[66U] 
                                         >> 0x00000015U)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 5U));
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0fdfU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_valid) 
                         >> 5U) & (~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed) 
                                      >> 5U))) & (0U 
                                                  == 
                                                  (0x0000e000U 
                                                   & vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[62U])))) 
              << 5U));
    if ((1U & (((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready) 
                >> 5U) & (~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used))))) {
        vlSelfRef.boom_core__DOT__unq_iss_valid = 1U;
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[59U] 
                << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[58U] 
                          >> 0x0000001dU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[60U] 
                << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[59U] 
                          >> 0x0000001dU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[61U] 
                << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[60U] 
                          >> 0x0000001dU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[62U] 
                << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[61U] 
                          >> 0x0000001dU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[63U] 
                << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[62U] 
                          >> 0x0000001dU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[64U] 
                << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[63U] 
                          >> 0x0000001dU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[65U] 
                << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[64U] 
                          >> 0x0000001dU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[66U] 
                << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[65U] 
                          >> 0x0000001dU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[67U] 
                << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[66U] 
                          >> 0x0000001dU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[68U] 
                << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[67U] 
                          >> 0x0000001dU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[69U] 
                << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[68U] 
                          >> 0x0000001dU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[70U] 
                               << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[69U] 
                                         >> 0x0000001dU)));
        vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant 
            = (0x00000020U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant));
        vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used = 1U;
    }
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0fbfU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[78U] 
                                       << 0x00000012U) 
                                      | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[78U] 
                                         >> 0x0000000eU)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 6U));
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0fbfU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_valid) 
                         >> 6U) & (~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed) 
                                      >> 6U))) & (0U 
                                                  == 
                                                  (0x000001c0U 
                                                   & vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[74U])))) 
              << 6U));
    if ((1U & (((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready) 
                >> 6U) & (~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used))))) {
        vlSelfRef.boom_core__DOT__unq_iss_valid = 1U;
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[71U] 
                << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[70U] 
                                   >> 0x00000016U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[72U] 
                << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[71U] 
                                   >> 0x00000016U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[73U] 
                << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[72U] 
                                   >> 0x00000016U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[74U] 
                << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[73U] 
                                   >> 0x00000016U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[75U] 
                << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[74U] 
                                   >> 0x00000016U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[76U] 
                << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[75U] 
                                   >> 0x00000016U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[77U] 
                << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[76U] 
                                   >> 0x00000016U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[78U] 
                << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[77U] 
                                   >> 0x00000016U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[79U] 
                << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[78U] 
                                   >> 0x00000016U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[80U] 
                << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[79U] 
                                   >> 0x00000016U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[81U] 
                << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[80U] 
                                   >> 0x00000016U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[82U] 
                               << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[81U] 
                                                  >> 0x00000016U)));
        vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant 
            = (0x00000040U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant));
        vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used = 1U;
    }
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0f7fU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[90U] 
                                       << 0x00000019U) 
                                      | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[90U] 
                                         >> 7U)) & 
                                     ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                       << 0x0000001eU) 
                                      | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         >> 2U))))) 
              << 7U));
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0f7fU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready)) 
           | (0x00000080U & (((((((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_valid) 
                                  >> 7U) & (~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed) 
                                               >> 7U))) 
                                & (~ (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[86U] 
                                      >> 1U))) & (~ vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[86U])) 
                              & (~ (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[85U] 
                                    >> 0x0000001fU))) 
                             << 7U)));
    if ((1U & (((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready) 
                >> 7U) & (~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used))))) {
        vlSelfRef.boom_core__DOT__unq_iss_valid = 1U;
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[83U] 
                << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[82U] 
                                   >> 0x0000000fU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[84U] 
                << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[83U] 
                                   >> 0x0000000fU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[85U] 
                << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[84U] 
                                   >> 0x0000000fU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[86U] 
                << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[85U] 
                                   >> 0x0000000fU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[87U] 
                << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[86U] 
                                   >> 0x0000000fU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[88U] 
                << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[87U] 
                                   >> 0x0000000fU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[89U] 
                << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[88U] 
                                   >> 0x0000000fU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[90U] 
                << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[89U] 
                                   >> 0x0000000fU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[91U] 
                << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[90U] 
                                   >> 0x0000000fU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[92U] 
                << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[91U] 
                                   >> 0x0000000fU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[93U] 
                << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[92U] 
                                   >> 0x0000000fU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[94U] 
                               << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[93U] 
                                                  >> 0x0000000fU)));
        vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant 
            = (0x00000080U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant));
        vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used = 1U;
    }
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0effU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[102U] 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 8U));
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0effU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_valid) 
                         >> 8U) & (~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed) 
                                      >> 8U))) & (0U 
                                                  == 
                                                  (0x07000000U 
                                                   & vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[97U])))) 
              << 8U));
    if ((1U & (((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready) 
                >> 8U) & (~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used))))) {
        vlSelfRef.boom_core__DOT__unq_iss_valid = 1U;
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[95U] 
                << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[94U] 
                                   >> 8U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[96U] 
                << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[95U] 
                                   >> 8U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[97U] 
                << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[96U] 
                                   >> 8U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[98U] 
                << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[97U] 
                                   >> 8U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[99U] 
                << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[98U] 
                                   >> 8U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[100U] 
                << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[99U] 
                                   >> 8U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[101U] 
                << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[100U] 
                                   >> 8U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[102U] 
                << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[101U] 
                                   >> 8U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[103U] 
                << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[102U] 
                                   >> 8U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[104U] 
                << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[103U] 
                                   >> 8U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[105U] 
                << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[104U] 
                                   >> 8U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[106U] 
                               << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[105U] 
                                                  >> 8U)));
        vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant 
            = (0x00000100U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant));
        vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used = 1U;
    }
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0dffU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[113U] 
                                       << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[113U] 
                                                 >> 0x00000019U)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 9U));
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0dffU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_valid) 
                         >> 9U) & (~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed) 
                                      >> 9U))) & (0U 
                                                  == 
                                                  (0x000e0000U 
                                                   & vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[109U])))) 
              << 9U));
    if ((1U & (((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready) 
                >> 9U) & (~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used))))) {
        vlSelfRef.boom_core__DOT__unq_iss_valid = 1U;
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[107U] 
                << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[106U] 
                                   >> 1U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[108U] 
                << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[107U] 
                                   >> 1U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[109U] 
                << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[108U] 
                                   >> 1U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[110U] 
                << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[109U] 
                                   >> 1U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[111U] 
                << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[110U] 
                                   >> 1U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[112U] 
                << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[111U] 
                                   >> 1U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[113U] 
                << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[112U] 
                                   >> 1U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[114U] 
                << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[113U] 
                                   >> 1U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[115U] 
                << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[114U] 
                                   >> 1U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[116U] 
                << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[115U] 
                                   >> 1U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[117U] 
                << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[116U] 
                                   >> 1U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = (0x01ffffffU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[117U] 
                              >> 1U));
        vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant 
            = (0x00000200U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant));
        vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used = 1U;
    }
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed 
        = ((0x0bffU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[125U] 
                                       << 0x0000000eU) 
                                      | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[125U] 
                                         >> 0x00000012U)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 0x0000000aU));
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready 
        = ((0x0bffU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_valid) 
                         >> 0x0000000aU) & (~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed) 
                                               >> 0x0000000aU))) 
                       & (0U == (0x00001c00U & vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[121U])))) 
              << 0x0000000aU));
    if ((1U & (((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready) 
                >> 0x0aU) & (~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used))))) {
        vlSelfRef.boom_core__DOT__unq_iss_valid = 1U;
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[118U] 
                << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[117U] 
                          >> 0x0000001aU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[119U] 
                << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[118U] 
                          >> 0x0000001aU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[120U] 
                << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[119U] 
                          >> 0x0000001aU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[121U] 
                << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[120U] 
                          >> 0x0000001aU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[122U] 
                << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[121U] 
                          >> 0x0000001aU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[123U] 
                << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[122U] 
                          >> 0x0000001aU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[124U] 
                << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[123U] 
                          >> 0x0000001aU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[125U] 
                << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[124U] 
                          >> 0x0000001aU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[126U] 
                << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[125U] 
                          >> 0x0000001aU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[127U] 
                << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[126U] 
                          >> 0x0000001aU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[128U] 
                << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[127U] 
                          >> 0x0000001aU));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[129U] 
                               << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[128U] 
                                         >> 0x0000001aU)));
        vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant 
            = (0x00000400U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant));
        vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used = 1U;
    }
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed 
        = ((0x07ffU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[137U] 
                                       << 0x00000015U) 
                                      | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[137U] 
                                         >> 0x0000000bU)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 0x0000000bU));
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready 
        = ((0x07ffU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_valid) 
                         >> 0x0000000bU) & (~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed) 
                                               >> 0x0000000bU))) 
                       & (0U == (0x00000038U & vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[133U])))) 
              << 0x0000000bU));
    if ((IData)((((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_ready) 
                  >> 0x0000000bU) & (~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used))))) {
        vlSelfRef.boom_core__DOT__unq_iss_valid = 1U;
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[0U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[130U] 
                << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[129U] 
                                   >> 0x00000013U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[131U] 
                << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[130U] 
                                   >> 0x00000013U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[2U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[132U] 
                << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[131U] 
                                   >> 0x00000013U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[133U] 
                << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[132U] 
                                   >> 0x00000013U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[134U] 
                << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[133U] 
                                   >> 0x00000013U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[135U] 
                << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[134U] 
                                   >> 0x00000013U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[136U] 
                << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[135U] 
                                   >> 0x00000013U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[7U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[137U] 
                << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[136U] 
                                   >> 0x00000013U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[138U] 
                << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[137U] 
                                   >> 0x00000013U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[9U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[139U] 
                << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[138U] 
                                   >> 0x00000013U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[10U] 
            = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[140U] 
                << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[139U] 
                                   >> 0x00000013U));
        vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[11U] 
            = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[141U] 
                               << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_uop[140U] 
                                                  >> 0x00000013U)));
        vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant 
            = (0x00000800U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant));
        vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used = 1U;
    }
    vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available 
        = (0x00000fffU & (((~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_valid)) 
                           | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant)) 
                          | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_killed)));
    vlSelfRef.boom_core__DOT__unq_iq_dis_ready = 0U;
    vlSelfRef.boom_core__DOT__unq_iq__DOT__dis_slot = 0U;
    if ((1U & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available))) {
        vlSelfRef.boom_core__DOT__unq_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__unq_iq__DOT__dis_slot = 0U;
        vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available 
            = (0x0ffeU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__unq_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available) 
                  >> 1U)))) {
        vlSelfRef.boom_core__DOT__unq_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__unq_iq__DOT__dis_slot = 1U;
        vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available 
            = (0x0ffdU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__unq_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available) 
                  >> 2U)))) {
        vlSelfRef.boom_core__DOT__unq_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__unq_iq__DOT__dis_slot = 2U;
        vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available 
            = (0x0ffbU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__unq_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available) 
                  >> 3U)))) {
        vlSelfRef.boom_core__DOT__unq_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__unq_iq__DOT__dis_slot = 3U;
        vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available 
            = (0x0ff7U & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__unq_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available) 
                  >> 4U)))) {
        vlSelfRef.boom_core__DOT__unq_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__unq_iq__DOT__dis_slot = 4U;
        vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available 
            = (0x0fefU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__unq_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available) 
                  >> 5U)))) {
        vlSelfRef.boom_core__DOT__unq_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__unq_iq__DOT__dis_slot = 5U;
        vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available 
            = (0x0fdfU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__unq_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available) 
                  >> 6U)))) {
        vlSelfRef.boom_core__DOT__unq_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__unq_iq__DOT__dis_slot = 6U;
        vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available 
            = (0x0fbfU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__unq_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available) 
                  >> 7U)))) {
        vlSelfRef.boom_core__DOT__unq_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__unq_iq__DOT__dis_slot = 7U;
        vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available 
            = (0x0f7fU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__unq_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available) 
                  >> 8U)))) {
        vlSelfRef.boom_core__DOT__unq_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__unq_iq__DOT__dis_slot = 8U;
        vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available 
            = (0x0effU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__unq_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available) 
                  >> 9U)))) {
        vlSelfRef.boom_core__DOT__unq_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__unq_iq__DOT__dis_slot = 9U;
        vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available 
            = (0x0dffU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__unq_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available) 
                  >> 0x0aU)))) {
        vlSelfRef.boom_core__DOT__unq_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__unq_iq__DOT__dis_slot = 0x0aU;
        vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available 
            = (0x0bffU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available));
    }
    if (((~ (IData)(vlSelfRef.boom_core__DOT__unq_iq_dis_ready)) 
         & ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available) 
            >> 0x0000000bU))) {
        vlSelfRef.boom_core__DOT__unq_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__unq_iq__DOT__dis_slot = 0x0bU;
        vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available 
            = (0x07ffU & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available));
    }
    vlSelfRef.boom_core__DOT__rob_inst__DOT__can_throw_exception 
        = ((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head_vals) 
           & ((2U & ((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_exception[1U] 
                      >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)) 
                     << 1U)) | (1U & (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_exception[0U] 
                                      >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)))));
    vlSelfRef.csr_addr = (0x00003fffU & ((vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U] 
                                          << 0x0000000dU) 
                                         | (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U] 
                                            >> 0x00000013U)));
    vlSelfRef.csr_cmd = (3U & (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U] 
                               >> 0x00000016U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_92 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                 & ((0U 
                                                     != 
                                                     (0x0000003fU 
                                                      & ((vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                          << 3U) 
                                                         | (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                                                            >> 0x0000001dU)))) 
                                                    & ((0x0000003fU 
                                                        & ((vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                            << 3U) 
                                                           | (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                                                              >> 0x0000001dU))) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                           >> 9U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_93 = ((0U 
                                                  != 
                                                  (0x0000003fU 
                                                   & ((vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                       << 3U) 
                                                      | (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                                                         >> 0x0000001dU)))) 
                                                 & (((0x0000003fU 
                                                      & ((vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                          << 3U) 
                                                         | (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                                                            >> 0x0000001dU))) 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSelfRef.lsu_resp[5U] 
                                                         >> 0x00000010U))) 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94 = ((0U 
                                                  != 
                                                  (0x0000003fU 
                                                   & ((vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                       << 3U) 
                                                      | (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                                                         >> 0x0000001dU)))) 
                                                 & (((0x0000003fU 
                                                      & ((vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                          << 3U) 
                                                         | (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                                                            >> 0x0000001dU))) 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                         >> 9U))) 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_95 = ((0U 
                                                  != 
                                                  (0x0000003fU 
                                                   & ((vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                       << 3U) 
                                                      | (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                                                         >> 0x0000001dU)))) 
                                                 & (((0x0000003fU 
                                                      & ((vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                          << 3U) 
                                                         | (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                                                            >> 0x0000001dU))) 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                         >> 9U))) 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_97 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                 & ((0U 
                                                     != 
                                                     (0x0000003fU 
                                                      & (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                         >> 3U))) 
                                                    & ((0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                           >> 3U)) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                           >> 9U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_98 = ((0U 
                                                  != 
                                                  (0x0000003fU 
                                                   & (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                      >> 3U))) 
                                                 & (((0x0000003fU 
                                                      & (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                         >> 3U)) 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSelfRef.lsu_resp[5U] 
                                                         >> 0x00000010U))) 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_99 = ((0U 
                                                  != 
                                                  (0x0000003fU 
                                                   & (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                      >> 3U))) 
                                                 & (((0x0000003fU 
                                                      & (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                         >> 3U)) 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                         >> 9U))) 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_100 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                       >> 3U))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                          >> 3U)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 9U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)));
    vlSelfRef.boom_core__DOT__unq_inst__DOT__state 
        = ((IData)(vlSelfRef.rst_n) ? ((2U == (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_state))
                                        ? 0U : (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__next_state))
            : 0U);
    vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_state 
        = vlSelfRef.__Vdly__boom_core__DOT__rob_inst__DOT__rob_state;
    vlSelfRef.rob_ready_dbg = ((~ (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70) 
                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_71)) 
                                   & ((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head) 
                                      == (0x0000001fU 
                                          & (((IData)(1U) 
                                              + (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail)) 
                                             & (- (IData)(
                                                          (0x1fU 
                                                           != (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail))))))))) 
                               & (0U == (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_state)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74 = ((0U 
                                                  != (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_state)) 
                                                 & (1U 
                                                    != (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_state)));
    vlSelfRef.boom_core__DOT__unq_inst__DOT__busy_done 
        = (((2U == (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state)) 
            & (2U == (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__busy_cnt))) 
           | ((3U == (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state)) 
              & (5U <= (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__busy_cnt))));
    vlSelfRef.csr_req_valid = ((IData)(vlSelfRef.boom_core__DOT__unq_iss_valid) 
                               & ((vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
                                   >> 0x0000000fU) 
                                  & (0U == (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_142 = ((~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74) 
                                                    | (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__can_throw_exception))) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_140 = ((~ 
                                                   (((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__can_throw_exception) 
                                                     >> 1U) 
                                                    | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74) 
                                                       | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40)) 
                                                             | (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__can_throw_exception)))))) 
                                                  & ((~ 
                                                      ((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_bsy[1U] 
                                                        >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)) 
                                                       | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_61[2U] 
                                                          >> 8U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36)));
    vlSelfRef.boom_core__DOT__unq_inst__DOT__res_valid 
        = ((1U == (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state)) 
           | ((IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__busy_done) 
              & ((2U == (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state)) 
                 | (3U == (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state)))));
    vlSelfRef.boom_core__DOT__unq_inst__DOT__next_state 
        = (3U & ((2U & (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state))
                  ? ((IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state) 
                     & (- (IData)((1U & (~ (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__busy_done))))))
                  : ((((2U != (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_state)) 
                       & (IData)(vlSelfRef.boom_core__DOT__unq_iss_valid))
                       ? ((0x00008000U & vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U])
                           ? 1U : ((0x00002000U & vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U])
                                    ? 2U : ((IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state) 
                                            | (- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
                                                             >> 0x0000000eU)))))))
                       : (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state)) 
                     & (- (IData)((1U & (~ (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state))))))));
    vlSelfRef.boom_core__DOT__rob_inst__DOT__will_commit 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_140) 
            << 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_142));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_85 = ((((IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__res_valid) 
                                                   << 4U) 
                                                  | (((IData)(vlSelfRef.lsu_resp_valid) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                        << 2U))) 
                                                 | (((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid)));
    vlSelfRef.commit.__PVT__valids = ((2U & vlSelfRef.commit
                                       .__PVT__valids) 
                                      | (1U & (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__will_commit)));
    vlSelfRef.commit.__PVT__valids = ((1U & vlSelfRef.commit
                                       .__PVT__valids) 
                                      | (2U & (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__will_commit)));
    vlSelfRef.commit.__PVT__arch_valids = ((2U & vlSelfRef.commit
                                            .__PVT__arch_valids) 
                                           | (1U & 
                                              ((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__will_commit) 
                                               & (~ 
                                                  (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_predicated[0U] 
                                                   >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head))))));
    vlSelfRef.commit.__PVT__arch_valids = ((1U & vlSelfRef.commit
                                            .__PVT__arch_valids) 
                                           | ((IData)(
                                                      (((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__will_commit) 
                                                        >> 1U) 
                                                       & (~ 
                                                          (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_predicated[1U] 
                                                           >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head))))) 
                                              << 1U));
    vlSelfRef.boom_core__DOT__wakeup_valid_w = ((0x20U 
                                                 & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w)) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_85));
    vlSelfRef.commit_valid_dbg = (0U != vlSelfRef.commit
                                  .__PVT__arch_valids);
    vlSelfRef.commit_ldst_dbg = (0x0000001fU & ((1U 
                                                 & vlSelfRef.commit
                                                 .__PVT__arch_valids)
                                                 ? 
                                                ((vlSelfRef.commit
                                                  .__PVT__uops[1U] 
                                                  << 0x00000011U) 
                                                 | (vlSelfRef.commit
                                                    .__PVT__uops[1U] 
                                                    >> 0x0000000fU))
                                                 : 
                                                ((vlSelfRef.commit
                                                  .__PVT__uops[13U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.commit
                                                    .__PVT__uops[13U] 
                                                    >> 8U))));
    VL_ASSIGN_W(754, vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops, vlSelfRef.commit
                .__PVT__uops);
    __VdfgRegularize_h6e95ff9d_0_22 = ((vlSelfRef.commit
                                        .__PVT__valids 
                                        >> 1U) & ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[13U] 
                                                       >> 8U))) 
                                                  & (2U 
                                                     != 
                                                     (3U 
                                                      & (vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[12U] 
                                                         >> 0x00000014U)))));
    __VdfgRegularize_h6e95ff9d_0_55 = (vlSelfRef.commit
                                       .__PVT__valids 
                                       & ((0U != (0x0000003fU 
                                                  & (vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[1U] 
                                                     >> 0x0000000fU))) 
                                          & (2U != 
                                             (3U & 
                                              (vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[0U] 
                                               >> 0x0000001bU)))));
    vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_en 
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_22) 
            << 1U) | (IData)(__VdfgRegularize_h6e95ff9d_0_55));
    __VdfgRegularize_h6e95ff9d_0_163 = (0x0000003fU 
                                        & ((vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[4U] 
                                            >> 9U) 
                                           & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_55)))));
    __VdfgRegularize_h6e95ff9d_0_164 = (0x0000001fU 
                                        & ((vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[1U] 
                                            >> 0x0000000fU) 
                                           & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_55)))));
    __VdfgRegularize_h6e95ff9d_0_167 = (0x0000003fU 
                                        & ((vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[3U] 
                                            >> 9U) 
                                           & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_55)))));
    __VdfgRegularize_h6e95ff9d_0_168 = ((0U != (0x0000003fU 
                                                & (vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[3U] 
                                                   >> 9U))) 
                                        & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_55))));
    vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_preg 
        = ((0x00000fc0U & (((IData)(__VdfgRegularize_h6e95ff9d_0_22)
                             ? ((vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[16U] 
                                 << 0x0000001eU) | 
                                (vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[16U] 
                                 >> 2U)) : ((IData)(__VdfgRegularize_h6e95ff9d_0_163) 
                                            >> 6U)) 
                           << 6U)) | (0x0000003fU & (IData)(__VdfgRegularize_h6e95ff9d_0_163)));
    vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_lreg 
        = ((0x000003e0U & (((IData)(__VdfgRegularize_h6e95ff9d_0_22)
                             ? ((vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[13U] 
                                 << 0x00000018U) | 
                                (vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[13U] 
                                 >> 8U)) : ((IData)(__VdfgRegularize_h6e95ff9d_0_164) 
                                            >> 5U)) 
                           << 5U)) | (0x0000001fU & (IData)(__VdfgRegularize_h6e95ff9d_0_164)));
    vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__free_preg 
        = ((0x00000fc0U & (((IData)(__VdfgRegularize_h6e95ff9d_0_22)
                             ? ((vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[15U] 
                                 << 0x0000001eU) | 
                                (vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[15U] 
                                 >> 2U)) : ((IData)(__VdfgRegularize_h6e95ff9d_0_167) 
                                            >> 6U)) 
                           << 6U)) | (0x0000003fU & (IData)(__VdfgRegularize_h6e95ff9d_0_167)));
    vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__free_en 
        = ((2U & (((IData)(__VdfgRegularize_h6e95ff9d_0_22)
                    ? (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[15U] 
                                             >> 2U)))
                    : ((IData)(__VdfgRegularize_h6e95ff9d_0_168) 
                       >> 1U)) << 1U)) | (1U & (IData)(__VdfgRegularize_h6e95ff9d_0_168)));
}

void Vboom_core___024root___nba_comb__TOP__1(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___nba_comb__TOP__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.boom_core__DOT__iregfile__DOT__write_addr 
        = ((((0x00000fc0U & (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                             >> 3U)) | (0x0000003fU 
                                        & (vlSelfRef.lsu_resp[5U] 
                                           >> 0x00000010U))) 
            << 0x00000012U) | ((0x0003f000U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                               << 3U)) 
                               | ((0x00000fc0U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                  >> 3U)) 
                                  | (0x0000003fU & 
                                     (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                      >> 9U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62 = (((
                                                   (0x00000fc0U 
                                                    & (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                       >> 3U)) 
                                                   | (0x0000003fU 
                                                      & (vlSelfRef.lsu_resp[5U] 
                                                         >> 0x00000010U))) 
                                                  << 0x00000012U) 
                                                 | ((0x0003f000U 
                                                     & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                        << 3U)) 
                                                    | ((0x00000fc0U 
                                                        & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                           >> 3U)) 
                                                       | (0x0000003fU 
                                                          & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                             >> 9U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = ((1U 
                                                 == (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state))
                                                 ? vlSelfRef.csr_rdata
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state))
                                                  ? (IData)(
                                                            VL_MULS_QQQ(64, 
                                                                        VL_EXTENDS_QI(64,32, vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_rs1), 
                                                                        VL_EXTENDS_QI(64,32, vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_rs2)))
                                                  : 
                                                 (VL_DIVS_III(32, vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_rs1, vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_rs2) 
                                                  & (- (IData)(
                                                               (3U 
                                                                == (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state)))))));
    if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) {
        vlSelfRef.rf_wr_pdst_dbg = (0x0000003fU & (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                    << 0x00000017U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                      >> 9U)));
        vlSelfRef.rf_wr_ldst_dbg = (0x0000001fU & (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                    << 0x00000011U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                      >> 0x0000000fU)));
        vlSelfRef.rf_wr_data_dbg = vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result;
    } else {
        vlSelfRef.rf_wr_pdst_dbg = (0x0000003fU & (
                                                   (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                    << 0x00000017U) 
                                                   | (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                      >> 9U)));
        vlSelfRef.rf_wr_ldst_dbg = (0x0000001fU & (
                                                   (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[1U] 
                                                    << 0x00000011U) 
                                                   | (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[1U] 
                                                      >> 0x0000000fU)));
        vlSelfRef.rf_wr_data_dbg = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = (IData)(
                                                       ((0U 
                                                         == 
                                                         (0x18000000U 
                                                          & vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[0U])) 
                                                        & (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__res_valid)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[0U] = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[1U] = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[2U] = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[3U] = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[4U] = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[5U] = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[5U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[6U] = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[6U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[7U] = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[7U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[8U] = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[8U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[9U] = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[9U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[10U] 
        = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[10U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[11U] 
        = (((IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__res_valid) 
            << 0x00000019U) | vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[11U]);
    vlSelfRef.boom_core__DOT__wakeup_pdst_w = ((0x0000000fc0000000ULL 
                                                & vlSelfRef.boom_core__DOT__wakeup_pdst_w) 
                                               | (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62)));
    vlSelfRef.boom_core__DOT__iregfile__DOT__write_data[0U] 
        = vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result;
    vlSelfRef.boom_core__DOT__iregfile__DOT__write_data[1U] 
        = vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result;
    vlSelfRef.boom_core__DOT__iregfile__DOT__write_data[2U] 
        = (IData)((((QData)((IData)(((vlSelfRef.lsu_resp[1U] 
                                      << 0x00000019U) 
                                     | (vlSelfRef.lsu_resp[0U] 
                                        >> 7U)))) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result))));
    vlSelfRef.boom_core__DOT__iregfile__DOT__write_data[3U] 
        = (IData)(((((QData)((IData)(((vlSelfRef.lsu_resp[1U] 
                                       << 0x00000019U) 
                                      | (vlSelfRef.lsu_resp[0U] 
                                         >> 7U)))) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result))) 
                   >> 0x00000020U));
    vlSelfRef.boom_core__DOT__iregfile__DOT__write_data[4U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3;
    vlSelfRef.rf_wr_en_dbg = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                              | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                                    | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))));
    vlSelfRef.boom_core__DOT__iregfile__DOT__write_en 
        = ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
             << 4U) | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                        << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                                  << 2U))) | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)));
    vlSelfRef.alu_rs1_dbg = (((0U != (0x0000003fU & 
                                      (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                                       >> 3U))) & (
                                                   ((0x0000003fU 
                                                     & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                                                        >> 3U)) 
                                                    == 
                                                    (0x0000003fU 
                                                     & (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                        >> 9U))) 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))
                              ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3
                              : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137)
                                  ? ((vlSelfRef.lsu_resp[1U] 
                                      << 0x00000019U) 
                                     | (vlSelfRef.lsu_resp[0U] 
                                        >> 7U)) : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_138)
                                                    ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_139)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     (((0U 
                                                        != 
                                                        (0x0000003fU 
                                                         & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                                                            >> 3U))) 
                                                       & (0x2fU 
                                                          >= 
                                                          (0x0000003fU 
                                                           & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                                                              >> 3U))))
                                                       ? vlSelfRef.boom_core__DOT__iregfile__DOT__rf
                                                      [
                                                      (0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                                                          >> 3U))]
                                                       : 0U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_91 = (((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & ((vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                        << 3U) 
                                                       | (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                                                          >> 0x0000001dU)))) 
                                                  & (((0x0000003fU 
                                                       & ((vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                           << 3U) 
                                                          | (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                                                             >> 0x0000001dU))) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                          >> 9U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))
                                                  ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_93)
                                                   ? 
                                                  ((vlSelfRef.lsu_resp[1U] 
                                                    << 0x00000019U) 
                                                   | (vlSelfRef.lsu_resp[0U] 
                                                      >> 7U))
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94)
                                                    ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_95)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_92)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     (((0U 
                                                        != 
                                                        (0x0000003fU 
                                                         & ((vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                             << 3U) 
                                                            | (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                                                               >> 0x0000001dU)))) 
                                                       & (0x2fU 
                                                          >= 
                                                          (0x0000003fU 
                                                           & ((vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                               << 3U) 
                                                              | (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                                                                 >> 0x0000001dU)))))
                                                       ? vlSelfRef.boom_core__DOT__iregfile__DOT__rf
                                                      [
                                                      (0x0000003fU 
                                                       & ((vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                           << 3U) 
                                                          | (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                                                             >> 0x0000001dU)))]
                                                       : 0U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_101 = ((
                                                   (0U 
                                                    != 
                                                    (0x0000003fU 
                                                     & ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                                                         << 4U) 
                                                        | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                                                           >> 0x0000001cU)))) 
                                                   & (((0x0000003fU 
                                                        & ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                                                            << 4U) 
                                                           | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                                                              >> 0x0000001cU))) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                           >> 9U))) 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103)
                                                    ? 
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.lsu_resp[0U] 
                                                       >> 7U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102)
                                                       ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                                                       : 
                                                      (((0U 
                                                         != 
                                                         (0x0000003fU 
                                                          & ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                                                              << 4U) 
                                                             | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                                                                >> 0x0000001cU)))) 
                                                        & (0x2fU 
                                                           >= 
                                                           (0x0000003fU 
                                                            & ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                                                                << 4U) 
                                                               | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                                                                  >> 0x0000001cU)))))
                                                        ? vlSelfRef.boom_core__DOT__iregfile__DOT__rf
                                                       [
                                                       (0x0000003fU 
                                                        & ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                                                            << 4U) 
                                                           | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                                                              >> 0x0000001cU)))]
                                                        : 0U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106 = ((
                                                   (0U 
                                                    != 
                                                    (0x0000003fU 
                                                     & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                        >> 3U))) 
                                                   & (((0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                           >> 3U)) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                           >> 9U))) 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108)
                                                    ? 
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.lsu_resp[0U] 
                                                       >> 7U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107)
                                                       ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                                                       : 
                                                      (((0U 
                                                         != 
                                                         (0x0000003fU 
                                                          & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                             >> 3U))) 
                                                        & (0x2fU 
                                                           >= 
                                                           (0x0000003fU 
                                                            & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                               >> 3U))))
                                                        ? vlSelfRef.boom_core__DOT__iregfile__DOT__rf
                                                       [
                                                       (0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                           >> 3U))]
                                                        : 0U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111 = ((
                                                   (0U 
                                                    != 
                                                    (0x0000003fU 
                                                     & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                        >> 0x0000000fU))) 
                                                   & (((0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                           >> 0x0000000fU)) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                           >> 9U))) 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113)
                                                    ? 
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.lsu_resp[0U] 
                                                       >> 7U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112)
                                                       ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                                                       : 
                                                      (((0U 
                                                         != 
                                                         (0x0000003fU 
                                                          & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                             >> 0x0000000fU))) 
                                                        & (0x2fU 
                                                           >= 
                                                           (0x0000003fU 
                                                            & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                               >> 0x0000000fU))))
                                                        ? vlSelfRef.boom_core__DOT__iregfile__DOT__rf
                                                       [
                                                       (0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                           >> 0x0000000fU))]
                                                        : 0U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116 = ((
                                                   (0U 
                                                    != 
                                                    (0x0000003fU 
                                                     & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                        >> 0x00000015U))) 
                                                   & (((0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                           >> 0x00000015U)) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                           >> 9U))) 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118)
                                                    ? 
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.lsu_resp[0U] 
                                                       >> 7U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_119)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_120)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117)
                                                       ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                                                       : 
                                                      (((0U 
                                                         != 
                                                         (0x0000003fU 
                                                          & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                             >> 0x00000015U))) 
                                                        & (0x2fU 
                                                           >= 
                                                           (0x0000003fU 
                                                            & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                               >> 0x00000015U))))
                                                        ? vlSelfRef.boom_core__DOT__iregfile__DOT__rf
                                                       [
                                                       (0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                           >> 0x00000015U))]
                                                        : 0U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_121 = ((
                                                   (0U 
                                                    != 
                                                    (0x0000003fU 
                                                     & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                                                        >> 0x00000016U))) 
                                                   & (((0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                                                           >> 0x00000016U)) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                           >> 9U))) 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_123)
                                                    ? 
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.lsu_resp[0U] 
                                                       >> 7U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_124)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_125)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122)
                                                       ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                                                       : 
                                                      (((0U 
                                                         != 
                                                         (0x0000003fU 
                                                          & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                                                             >> 0x00000016U))) 
                                                        & (0x2fU 
                                                           >= 
                                                           (0x0000003fU 
                                                            & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                                                               >> 0x00000016U))))
                                                        ? vlSelfRef.boom_core__DOT__iregfile__DOT__rf
                                                       [
                                                       (0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                                                           >> 0x00000016U))]
                                                        : 0U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_126 = ((
                                                   (0U 
                                                    != 
                                                    (0x0000003fU 
                                                     & ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                                                         << 4U) 
                                                        | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                                                           >> 0x0000001cU)))) 
                                                   & (((0x0000003fU 
                                                        & ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                                                            << 4U) 
                                                           | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                                                              >> 0x0000001cU))) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                           >> 9U))) 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_128)
                                                    ? 
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.lsu_resp[0U] 
                                                       >> 7U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_129)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127)
                                                       ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                                                       : 
                                                      (((0U 
                                                         != 
                                                         (0x0000003fU 
                                                          & ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                                                              << 4U) 
                                                             | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                                                                >> 0x0000001cU)))) 
                                                        & (0x2fU 
                                                           >= 
                                                           (0x0000003fU 
                                                            & ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                                                                << 4U) 
                                                               | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                                                                  >> 0x0000001cU)))))
                                                        ? vlSelfRef.boom_core__DOT__iregfile__DOT__rf
                                                       [
                                                       (0x0000003fU 
                                                        & ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                                                            << 4U) 
                                                           | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                                                              >> 0x0000001cU)))]
                                                        : 0U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_131 = ((
                                                   (0U 
                                                    != 
                                                    (0x0000003fU 
                                                     & ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                                                         << 3U) 
                                                        | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                                                           >> 0x0000001dU)))) 
                                                   & (((0x0000003fU 
                                                        & ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                                                            << 3U) 
                                                           | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                                                              >> 0x0000001dU))) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                           >> 9U))) 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_133)
                                                    ? 
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.lsu_resp[0U] 
                                                       >> 7U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_134)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_135)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_132)
                                                       ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                                                       : 
                                                      (((0U 
                                                         != 
                                                         (0x0000003fU 
                                                          & ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                                                              << 3U) 
                                                             | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                                                                >> 0x0000001dU)))) 
                                                        & (0x2fU 
                                                           >= 
                                                           (0x0000003fU 
                                                            & ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                                                                << 3U) 
                                                               | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                                                                  >> 0x0000001dU)))))
                                                        ? vlSelfRef.boom_core__DOT__iregfile__DOT__rf
                                                       [
                                                       (0x0000003fU 
                                                        & ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                                                            << 3U) 
                                                           | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                                                              >> 0x0000001dU)))]
                                                        : 0U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_96 = (((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                       >> 3U))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                          >> 3U)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                          >> 9U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))
                                                  ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_98)
                                                   ? 
                                                  ((vlSelfRef.lsu_resp[1U] 
                                                    << 0x00000019U) 
                                                   | (vlSelfRef.lsu_resp[0U] 
                                                      >> 7U))
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_99)
                                                    ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_100)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_97)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     (((0U 
                                                        != 
                                                        (0x0000003fU 
                                                         & (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                            >> 3U))) 
                                                       & (0x2fU 
                                                          >= 
                                                          (0x0000003fU 
                                                           & (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                              >> 3U))))
                                                       ? vlSelfRef.boom_core__DOT__iregfile__DOT__rf
                                                      [
                                                      (0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                                                          >> 3U))]
                                                       : 0U))))));
    vlSelfRef.boom_core__DOT__rob_wb_resps[0U] = (IData)(
                                                         ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result)) 
                                                          << 7U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[1U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                                   << 7U) 
                                                  | (IData)(
                                                            (((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result)) 
                                                              << 7U) 
                                                             >> 0x00000020U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[2U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                                   >> 0x00000019U) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                     << 7U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[3U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                   >> 0x00000019U) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                     << 7U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[4U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                   >> 0x00000019U) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                     << 7U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[5U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                   >> 0x00000019U) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                     << 7U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[6U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                   >> 0x00000019U) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                     << 7U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[7U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                   >> 0x00000019U) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                     << 7U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[8U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                   >> 0x00000019U) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                     << 7U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[9U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                   >> 0x00000019U) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                     << 7U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[10U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                    >> 0x00000019U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                      << 7U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[11U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                    >> 0x00000019U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                      << 7U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[12U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                    >> 0x00000019U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                                      << 7U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[13U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.boom_core__DOT__rob_wb_resps[13U]) 
                                                   | (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_valid));
    vlSelfRef.boom_core__DOT__rob_wb_resps[13U] = (
                                                   (0x000000ffU 
                                                    & vlSelfRef.boom_core__DOT__rob_wb_resps[13U]) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result 
                                                      << 8U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[14U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result 
                                                    >> 0x00000018U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                                      << 8U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[15U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                                    >> 0x00000018U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                      << 8U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[16U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                    >> 0x00000018U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                      << 8U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[17U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                    >> 0x00000018U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                      << 8U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[18U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                    >> 0x00000018U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                      << 8U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[19U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                    >> 0x00000018U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                      << 8U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[20U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                    >> 0x00000018U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                      << 8U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[21U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                    >> 0x00000018U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                      << 8U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[22U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                    >> 0x00000018U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                      << 8U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[23U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                    >> 0x00000018U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                      << 8U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[24U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                    >> 0x00000018U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                      << 8U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[25U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                    >> 0x00000018U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                                      << 8U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[26U] = (
                                                   ((0x000000feU 
                                                     & ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_valid) 
                                                        << 1U)) 
                                                    | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                                       >> 0x00000018U)) 
                                                   | ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result 
                                                       << 9U) 
                                                      | (0xffffff00U 
                                                         & ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_valid) 
                                                            << 1U))));
    vlSelfRef.boom_core__DOT__rob_wb_resps[27U] = (
                                                   (0xfffffe00U 
                                                    & vlSelfRef.boom_core__DOT__rob_wb_resps[27U]) 
                                                   | (((0x000000ffU 
                                                        & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result 
                                                           >> 0x00000017U)) 
                                                       | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_valid) 
                                                          >> 0x0000001fU)) 
                                                      | (0x00000100U 
                                                         & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result 
                                                            >> 0x00000017U))));
    vlSelfRef.boom_core__DOT__rob_wb_resps[27U] = (
                                                   (0x000001ffU 
                                                    & vlSelfRef.boom_core__DOT__rob_wb_resps[27U]) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                                      << 9U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[28U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                                    >> 0x00000017U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                      << 9U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[29U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                    >> 0x00000017U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                      << 9U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[30U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                    >> 0x00000017U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                      << 9U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[31U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                    >> 0x00000017U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                      << 9U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[32U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                    >> 0x00000017U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                      << 9U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[33U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                    >> 0x00000017U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                      << 9U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[34U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                    >> 0x00000017U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                      << 9U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[35U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                    >> 0x00000017U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                      << 9U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[36U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                    >> 0x00000017U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                      << 9U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[37U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                    >> 0x00000017U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                      << 9U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[38U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                    >> 0x00000017U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                                      << 9U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[39U] = (
                                                   ((0x000001f8U 
                                                     & (vlSelfRef.lsu_resp[0U] 
                                                        << 3U)) 
                                                    | ((0x000001fcU 
                                                        & ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_valid) 
                                                           << 2U)) 
                                                       | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                                          >> 0x00000017U))) 
                                                   | (0xfffffe00U 
                                                      & (vlSelfRef.lsu_resp[0U] 
                                                         << 3U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[40U] = (
                                                   ((vlSelfRef.lsu_resp[0U] 
                                                     >> 0x0000001dU) 
                                                    | (0x000001f8U 
                                                       & (vlSelfRef.lsu_resp[1U] 
                                                          << 3U))) 
                                                   | (0xfffffe00U 
                                                      & (vlSelfRef.lsu_resp[1U] 
                                                         << 3U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[41U] = (
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     >> 0x0000001dU) 
                                                    | (0x000001f8U 
                                                       & (vlSelfRef.lsu_resp[2U] 
                                                          << 3U))) 
                                                   | (0xfffffe00U 
                                                      & (vlSelfRef.lsu_resp[2U] 
                                                         << 3U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[42U] = (
                                                   ((vlSelfRef.lsu_resp[2U] 
                                                     >> 0x0000001dU) 
                                                    | (0x000001f8U 
                                                       & (vlSelfRef.lsu_resp[3U] 
                                                          << 3U))) 
                                                   | (0xfffffe00U 
                                                      & (vlSelfRef.lsu_resp[3U] 
                                                         << 3U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[43U] = (
                                                   ((vlSelfRef.lsu_resp[3U] 
                                                     >> 0x0000001dU) 
                                                    | (0x000001f8U 
                                                       & (vlSelfRef.lsu_resp[4U] 
                                                          << 3U))) 
                                                   | (0xfffffe00U 
                                                      & (vlSelfRef.lsu_resp[4U] 
                                                         << 3U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[44U] = (
                                                   ((vlSelfRef.lsu_resp[4U] 
                                                     >> 0x0000001dU) 
                                                    | (0x000001f8U 
                                                       & (vlSelfRef.lsu_resp[5U] 
                                                          << 3U))) 
                                                   | (0xfffffe00U 
                                                      & (vlSelfRef.lsu_resp[5U] 
                                                         << 3U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[45U] = (
                                                   ((vlSelfRef.lsu_resp[5U] 
                                                     >> 0x0000001dU) 
                                                    | (0x000001f8U 
                                                       & (vlSelfRef.lsu_resp[6U] 
                                                          << 3U))) 
                                                   | (0xfffffe00U 
                                                      & (vlSelfRef.lsu_resp[6U] 
                                                         << 3U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[46U] = (
                                                   ((vlSelfRef.lsu_resp[6U] 
                                                     >> 0x0000001dU) 
                                                    | (0x000001f8U 
                                                       & (vlSelfRef.lsu_resp[7U] 
                                                          << 3U))) 
                                                   | (0xfffffe00U 
                                                      & (vlSelfRef.lsu_resp[7U] 
                                                         << 3U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[47U] = (
                                                   ((vlSelfRef.lsu_resp[7U] 
                                                     >> 0x0000001dU) 
                                                    | (0x000001f8U 
                                                       & (vlSelfRef.lsu_resp[8U] 
                                                          << 3U))) 
                                                   | (0xfffffe00U 
                                                      & (vlSelfRef.lsu_resp[8U] 
                                                         << 3U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[48U] = (
                                                   ((vlSelfRef.lsu_resp[8U] 
                                                     >> 0x0000001dU) 
                                                    | (0x000001f8U 
                                                       & (vlSelfRef.lsu_resp[9U] 
                                                          << 3U))) 
                                                   | (0xfffffe00U 
                                                      & (vlSelfRef.lsu_resp[9U] 
                                                         << 3U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[49U] = (
                                                   ((vlSelfRef.lsu_resp[9U] 
                                                     >> 0x0000001dU) 
                                                    | (0x000001f8U 
                                                       & (vlSelfRef.lsu_resp[10U] 
                                                          << 3U))) 
                                                   | (0xfffffe00U 
                                                      & (vlSelfRef.lsu_resp[10U] 
                                                         << 3U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[50U] = (
                                                   ((vlSelfRef.lsu_resp[10U] 
                                                     >> 0x0000001dU) 
                                                    | (0x000001f8U 
                                                       & (vlSelfRef.lsu_resp[11U] 
                                                          << 3U))) 
                                                   | (0xfffffe00U 
                                                      & (vlSelfRef.lsu_resp[11U] 
                                                         << 3U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[51U] = (
                                                   ((vlSelfRef.lsu_resp[11U] 
                                                     >> 0x0000001dU) 
                                                    | (0x000001f8U 
                                                       & (vlSelfRef.lsu_resp[12U] 
                                                          << 3U))) 
                                                   | (0xfffffe00U 
                                                      & (vlSelfRef.lsu_resp[12U] 
                                                         << 3U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[52U] = (
                                                   (0xfffff800U 
                                                    & vlSelfRef.boom_core__DOT__rob_wb_resps[52U]) 
                                                   | ((vlSelfRef.lsu_resp[12U] 
                                                       >> 0x0000001dU) 
                                                      | (0x000001f8U 
                                                         & (vlSelfRef.lsu_resp[13U] 
                                                            << 3U))));
    vlSelfRef.boom_core__DOT__rob_wb_resps[52U] = (
                                                   (0x000007ffU 
                                                    & vlSelfRef.boom_core__DOT__rob_wb_resps[52U]) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[53U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[0U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[54U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[0U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[1U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[55U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[1U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[2U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[56U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[2U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[3U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[57U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[3U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[4U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[58U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[4U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[5U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[59U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[5U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[6U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[60U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[6U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[7U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[61U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[7U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[8U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[62U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[8U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[9U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[63U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[9U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[10U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[64U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[10U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[11U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[65U] = (
                                                   (0xffffffe0U 
                                                    & vlSelfRef.boom_core__DOT__rob_wb_resps[65U]) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[11U] 
                                                      >> 0x00000015U));
    vlSelfRef.boom_core__DOT__wakeups[48U] = ((0x0000003fU 
                                               & vlSelfRef.boom_core__DOT__wakeups[48U]) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[0U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[49U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[0U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[1U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[50U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[1U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[2U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[51U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[2U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[3U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[52U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[3U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[4U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[53U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[4U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[5U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[54U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[5U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[6U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[55U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[6U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[7U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[56U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[7U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[8U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[57U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[8U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[9U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[58U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[9U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[10U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[59U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[10U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86[11U] 
                                                 << 6U));
    vlSelfRef.csr_wdata = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_97)
                            ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_100)
                                ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_99)
                                    ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_98)
                                        ? ((vlSelfRef.lsu_resp[1U] 
                                            << 0x00000019U) 
                                           | (vlSelfRef.lsu_resp[0U] 
                                              >> 7U))
                                        : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_96))));
    vlSelfRef.rob_wb_valid_dbg = ((0x00000020U & vlSelfRef.boom_core__DOT__rob_wb_resps[78U]) 
                                  | (((IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__res_valid) 
                                      << 4U) | ((8U 
                                                 & (vlSelfRef.lsu_resp[13U] 
                                                    << 3U)) 
                                                | (IData)(vlSelfRef.alu_res_valid_dbg))));
    vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en 
        = ((0x00000020U & (vlSelfRef.boom_core__DOT__wakeups[71U] 
                           >> 0x0000001aU)) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_85));
    vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
        = (((QData)((IData)((0x0000003fU & (vlSelfRef.boom_core__DOT__wakeups[64U] 
                                            >> 0x0000000fU)))) 
            << 0x0000001eU) | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62)));
}

extern const VlWide<24>/*767:0*/ Vboom_core__ConstPool__CONST_h4465c659_0;

void Vboom_core___024root___nba_comb__TOP__2(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___nba_comb__TOP__2\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<24>/*753:0*/ __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1;
    VL_ZERO_W(754, __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1);
    VlWide<24>/*753:0*/ __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2;
    VL_ZERO_W(754, __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2);
    VlWide<24>/*753:0*/ __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3;
    VL_ZERO_W(754, __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3);
    VlWide<24>/*753:0*/ __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5;
    VL_ZERO_W(754, __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5);
    VlWide<24>/*753:0*/ __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7;
    VL_ZERO_W(754, __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7);
    VlWide<24>/*753:0*/ __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8;
    VL_ZERO_W(754, __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8);
    VlWide<24>/*753:0*/ __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9;
    VL_ZERO_W(754, __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9);
    VlWide<24>/*753:0*/ __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10;
    VL_ZERO_W(754, __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10);
    CData/*5:0*/ __VdfgSynthAssign_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_95;
    __VdfgSynthAssign_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_95 = 0;
    CData/*5:0*/ __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_97;
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_97 = 0;
    CData/*5:0*/ __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_99;
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_99 = 0;
    CData/*5:0*/ __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_101;
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_101 = 0;
    CData/*5:0*/ __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_103;
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_103 = 0;
    CData/*5:0*/ __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_105;
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_105 = 0;
    CData/*5:0*/ __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_107;
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_107 = 0;
    CData/*5:0*/ __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_109;
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_109 = 0;
    CData/*5:0*/ __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_111;
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_111 = 0;
    CData/*1:0*/ __VdfgSynthJoin_boom_core__DOT__disp__DOT__iq_ready_h6e95ff9d_0_2;
    __VdfgSynthJoin_boom_core__DOT__disp__DOT__iq_ready_h6e95ff9d_0_2 = 0;
    CData/*0:0*/ __Vdfg_BB0_Cond_h6e95ff9d_0_378;
    __Vdfg_BB0_Cond_h6e95ff9d_0_378 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_176;
    __VdfgRegularize_h6e95ff9d_0_176 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_177;
    __VdfgRegularize_h6e95ff9d_0_177 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_178;
    __VdfgRegularize_h6e95ff9d_0_178 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_179;
    __VdfgRegularize_h6e95ff9d_0_179 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_180;
    __VdfgRegularize_h6e95ff9d_0_180 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_181;
    __VdfgRegularize_h6e95ff9d_0_181 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_182;
    __VdfgRegularize_h6e95ff9d_0_182 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_183;
    __VdfgRegularize_h6e95ff9d_0_183 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_184;
    __VdfgRegularize_h6e95ff9d_0_184 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_185;
    __VdfgRegularize_h6e95ff9d_0_185 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_186;
    __VdfgRegularize_h6e95ff9d_0_186 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_187;
    __VdfgRegularize_h6e95ff9d_0_187 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_188;
    __VdfgRegularize_h6e95ff9d_0_188 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_189;
    __VdfgRegularize_h6e95ff9d_0_189 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_190;
    __VdfgRegularize_h6e95ff9d_0_190 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_191;
    __VdfgRegularize_h6e95ff9d_0_191 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_192;
    __VdfgRegularize_h6e95ff9d_0_192 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_193;
    __VdfgRegularize_h6e95ff9d_0_193 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_194;
    __VdfgRegularize_h6e95ff9d_0_194 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_195;
    __VdfgRegularize_h6e95ff9d_0_195 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_196;
    __VdfgRegularize_h6e95ff9d_0_196 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_197;
    __VdfgRegularize_h6e95ff9d_0_197 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_198;
    __VdfgRegularize_h6e95ff9d_0_198 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_199;
    __VdfgRegularize_h6e95ff9d_0_199 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_200;
    __VdfgRegularize_h6e95ff9d_0_200 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_201;
    __VdfgRegularize_h6e95ff9d_0_201 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_202;
    __VdfgRegularize_h6e95ff9d_0_202 = 0;
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_203;
    __VdfgRegularize_h6e95ff9d_0_203 = 0;
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_204;
    __VdfgRegularize_h6e95ff9d_0_204 = 0;
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_205;
    __VdfgRegularize_h6e95ff9d_0_205 = 0;
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_206;
    __VdfgRegularize_h6e95ff9d_0_206 = 0;
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_207;
    __VdfgRegularize_h6e95ff9d_0_207 = 0;
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_208;
    __VdfgRegularize_h6e95ff9d_0_208 = 0;
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_209;
    __VdfgRegularize_h6e95ff9d_0_209 = 0;
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_210;
    __VdfgRegularize_h6e95ff9d_0_210 = 0;
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_211;
    __VdfgRegularize_h6e95ff9d_0_211 = 0;
    VlWide<24>/*753:0*/ __VdfgRegularize_h6e95ff9d_0_221;
    VL_ZERO_W(754, __VdfgRegularize_h6e95ff9d_0_221);
    VlWide<24>/*753:0*/ __VdfgRegularize_h6e95ff9d_0_222;
    VL_ZERO_W(754, __VdfgRegularize_h6e95ff9d_0_222);
    VlWide<24>/*753:0*/ __VdfgRegularize_h6e95ff9d_0_223;
    VL_ZERO_W(754, __VdfgRegularize_h6e95ff9d_0_223);
    VlWide<24>/*753:0*/ __VdfgRegularize_h6e95ff9d_0_237;
    VL_ZERO_W(754, __VdfgRegularize_h6e95ff9d_0_237);
    VlWide<24>/*753:0*/ __VdfgRegularize_h6e95ff9d_0_239;
    VL_ZERO_W(754, __VdfgRegularize_h6e95ff9d_0_239);
    VlWide<24>/*753:0*/ __VdfgRegularize_h6e95ff9d_0_240;
    VL_ZERO_W(754, __VdfgRegularize_h6e95ff9d_0_240);
    VlWide<24>/*753:0*/ __VdfgRegularize_h6e95ff9d_0_243;
    VL_ZERO_W(754, __VdfgRegularize_h6e95ff9d_0_243);
    VlWide<24>/*767:0*/ __Vtemp_68;
    VlWide<24>/*767:0*/ __Vtemp_84;
    // Body
    __VdfgRegularize_h6e95ff9d_0_176 = ((((0x2fU >= 
                                           (0x0000003fU 
                                            & (IData)(
                                                      (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                       >> 6U)))) 
                                          && (1U & (IData)(
                                                           (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                            >> 
                                                            (0x0000003fU 
                                                             & (IData)(
                                                                       (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                                        >> 6U))))))) 
                                         << 1U) | (1U 
                                                   & ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                                        >> 5U) 
                                                       & ((0x0000003fU 
                                                           & (IData)(
                                                                     (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                                                      >> 0x0000001eU))) 
                                                          == 
                                                          (0x0000003fU 
                                                           & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg))))
                                                       ? (IData)(vlSelfRef.__VdfgSynthAssign_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_17)
                                                       : 
                                                      ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                                         >> 4U) 
                                                        & ((0x0000003fU 
                                                            & (IData)(
                                                                      (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                                                       >> 0x00000018U))) 
                                                           == 
                                                           (0x0000003fU 
                                                            & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg))))
                                                        ? (IData)(vlSelfRef.__VdfgSynthAssign_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_15)
                                                        : 
                                                       ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                                          >> 3U) 
                                                         & ((0x0000003fU 
                                                             & (IData)(
                                                                       (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                                                        >> 0x00000012U))) 
                                                            == 
                                                            (0x0000003fU 
                                                             & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg))))
                                                         ? (IData)(vlSelfRef.__VdfgSynthAssign_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_13)
                                                         : 
                                                        ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                                           >> 2U) 
                                                          & ((0x0000003fU 
                                                              & (IData)(
                                                                        (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                                                         >> 0x0000000cU))) 
                                                             == 
                                                             (0x0000003fU 
                                                              & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg))))
                                                          ? (IData)(vlSelfRef.__VdfgSynthAssign_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_11)
                                                          : 
                                                         ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                                            >> 1U) 
                                                           & ((0x0000003fU 
                                                               & (IData)(
                                                                         (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                                                          >> 6U))) 
                                                              == 
                                                              (0x0000003fU 
                                                               & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg))))
                                                           ? (IData)(vlSelfRef.__VdfgSynthAssign_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_9)
                                                           : 
                                                          (((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                                            & ((0x0000003fU 
                                                                & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg)) 
                                                               == 
                                                               (0x0000003fU 
                                                                & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg))))
                                                            ? (IData)(vlSelfRef.__VdfgSynthAssign_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_7)
                                                            : 
                                                           (((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_write_en) 
                                                               >> 1U) 
                                                              & ((0x0000003fU 
                                                                  & ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_write_preg) 
                                                                     >> 6U)) 
                                                                 == 
                                                                 (0x0000003fU 
                                                                  & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg)))) 
                                                             & (0U 
                                                                != 
                                                                (0x0000003fU 
                                                                 & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg))))
                                                             ? (IData)(vlSelfRef.__VdfgSynthAssign_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_5)
                                                             : 
                                                            ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_write_en) 
                                                               & ((0x0000003fU 
                                                                   & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_write_preg)) 
                                                                  == 
                                                                  (0x0000003fU 
                                                                   & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg)))) 
                                                              & (0U 
                                                                 != 
                                                                 (0x0000003fU 
                                                                  & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg))))
                                                              ? (IData)(vlSelfRef.__VdfgSynthAssign_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_3)
                                                              : 
                                                             ((0U 
                                                               == 
                                                               (0x0000003fU 
                                                                & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg)))
                                                               ? (IData)(vlSelfRef.__VdfgSynthAssign_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_1)
                                                               : 
                                                              ((0x2fU 
                                                                >= 
                                                                (0x0000003fU 
                                                                 & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg))) 
                                                               && (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                              >> 
                                                                              (0x0000003fU 
                                                                               & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg)))))))))))))))));
    __VdfgRegularize_h6e95ff9d_0_177 = ((0U == (0x0000003fU 
                                                & (IData)(
                                                          (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                           >> 6U))))
                                         ? (1U & (IData)(__VdfgRegularize_h6e95ff9d_0_176))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_176));
    __VdfgRegularize_h6e95ff9d_0_178 = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_write_en) 
                                          & ((0x0000003fU 
                                              & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_write_preg)) 
                                             == (0x0000003fU 
                                                 & (IData)(
                                                           (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                            >> 6U))))) 
                                         & (0U != (0x0000003fU 
                                                   & (IData)(
                                                             (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                              >> 6U)))))
                                         ? (2U | (1U 
                                                  & (IData)(__VdfgRegularize_h6e95ff9d_0_177)))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_177));
    __VdfgRegularize_h6e95ff9d_0_179 = (((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_write_en) 
                                           >> 1U) & 
                                          ((0x0000003fU 
                                            & ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_write_preg) 
                                               >> 6U)) 
                                           == (0x0000003fU 
                                               & (IData)(
                                                         (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                          >> 6U))))) 
                                         & (0U != (0x0000003fU 
                                                   & (IData)(
                                                             (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                              >> 6U)))))
                                         ? (2U | (1U 
                                                  & (IData)(__VdfgRegularize_h6e95ff9d_0_178)))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_178));
    __VdfgRegularize_h6e95ff9d_0_180 = (((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                         & ((0x0000003fU 
                                             & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg)) 
                                            == (0x0000003fU 
                                                & (IData)(
                                                          (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                           >> 6U)))))
                                         ? (1U & (IData)(__VdfgRegularize_h6e95ff9d_0_179))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_179));
    __VdfgRegularize_h6e95ff9d_0_181 = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                          >> 1U) & 
                                         ((0x0000003fU 
                                           & (IData)(
                                                     (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                                      >> 6U))) 
                                          == (0x0000003fU 
                                              & (IData)(
                                                        (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                         >> 6U)))))
                                         ? (1U & (IData)(__VdfgRegularize_h6e95ff9d_0_180))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_180));
    __VdfgRegularize_h6e95ff9d_0_182 = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                          >> 2U) & 
                                         ((0x0000003fU 
                                           & (IData)(
                                                     (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                                      >> 0x0000000cU))) 
                                          == (0x0000003fU 
                                              & (IData)(
                                                        (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                         >> 6U)))))
                                         ? (1U & (IData)(__VdfgRegularize_h6e95ff9d_0_181))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_181));
    __VdfgRegularize_h6e95ff9d_0_183 = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                          >> 3U) & 
                                         ((0x0000003fU 
                                           & (IData)(
                                                     (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                                      >> 0x00000012U))) 
                                          == (0x0000003fU 
                                              & (IData)(
                                                        (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                         >> 6U)))))
                                         ? (1U & (IData)(__VdfgRegularize_h6e95ff9d_0_182))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_182));
    __VdfgRegularize_h6e95ff9d_0_184 = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                          >> 4U) & 
                                         ((0x0000003fU 
                                           & (IData)(
                                                     (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                                      >> 0x00000018U))) 
                                          == (0x0000003fU 
                                              & (IData)(
                                                        (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                         >> 6U)))))
                                         ? (1U & (IData)(__VdfgRegularize_h6e95ff9d_0_183))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_183));
    __VdfgRegularize_h6e95ff9d_0_185 = ((((0x2fU >= 
                                           (0x0000003fU 
                                            & (IData)(
                                                      (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                       >> 0x0000000cU)))) 
                                          && (1U & (IData)(
                                                           (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                            >> 
                                                            (0x0000003fU 
                                                             & (IData)(
                                                                       (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                                        >> 0x0000000cU))))))) 
                                         << 2U) | (
                                                   (((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                                     >> 5U) 
                                                    & ((0x0000003fU 
                                                        & (IData)(
                                                                  (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                                                   >> 0x0000001eU))) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (IData)(
                                                                  (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                                   >> 6U)))))
                                                    ? 
                                                   (1U 
                                                    & (IData)(__VdfgRegularize_h6e95ff9d_0_184))
                                                    : (IData)(__VdfgRegularize_h6e95ff9d_0_184)));
    __VdfgRegularize_h6e95ff9d_0_186 = ((0U == (0x0000003fU 
                                                & (IData)(
                                                          (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                           >> 0x0000000cU))))
                                         ? (3U & (IData)(__VdfgRegularize_h6e95ff9d_0_185))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_185));
    __VdfgRegularize_h6e95ff9d_0_187 = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_write_en) 
                                          & ((0x0000003fU 
                                              & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_write_preg)) 
                                             == (0x0000003fU 
                                                 & (IData)(
                                                           (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                            >> 0x0000000cU))))) 
                                         & (0U != (0x0000003fU 
                                                   & (IData)(
                                                             (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                              >> 0x0000000cU)))))
                                         ? (4U | (3U 
                                                  & (IData)(__VdfgRegularize_h6e95ff9d_0_186)))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_186));
    __VdfgRegularize_h6e95ff9d_0_188 = (((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_write_en) 
                                           >> 1U) & 
                                          ((0x0000003fU 
                                            & ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_write_preg) 
                                               >> 6U)) 
                                           == (0x0000003fU 
                                               & (IData)(
                                                         (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                          >> 0x0000000cU))))) 
                                         & (0U != (0x0000003fU 
                                                   & (IData)(
                                                             (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                              >> 0x0000000cU)))))
                                         ? (4U | (3U 
                                                  & (IData)(__VdfgRegularize_h6e95ff9d_0_187)))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_187));
    __VdfgRegularize_h6e95ff9d_0_189 = (((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                         & ((0x0000003fU 
                                             & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg)) 
                                            == (0x0000003fU 
                                                & (IData)(
                                                          (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                           >> 0x0000000cU)))))
                                         ? (3U & (IData)(__VdfgRegularize_h6e95ff9d_0_188))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_188));
    __VdfgRegularize_h6e95ff9d_0_190 = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                          >> 1U) & 
                                         ((0x0000003fU 
                                           & (IData)(
                                                     (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                                      >> 6U))) 
                                          == (0x0000003fU 
                                              & (IData)(
                                                        (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                         >> 0x0000000cU)))))
                                         ? (3U & (IData)(__VdfgRegularize_h6e95ff9d_0_189))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_189));
    __VdfgRegularize_h6e95ff9d_0_191 = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                          >> 2U) & 
                                         ((0x0000003fU 
                                           & (IData)(
                                                     (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                                      >> 0x0000000cU))) 
                                          == (0x0000003fU 
                                              & (IData)(
                                                        (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                         >> 0x0000000cU)))))
                                         ? (3U & (IData)(__VdfgRegularize_h6e95ff9d_0_190))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_190));
    __VdfgRegularize_h6e95ff9d_0_192 = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                          >> 3U) & 
                                         ((0x0000003fU 
                                           & (IData)(
                                                     (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                                      >> 0x00000012U))) 
                                          == (0x0000003fU 
                                              & (IData)(
                                                        (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                         >> 0x0000000cU)))))
                                         ? (3U & (IData)(__VdfgRegularize_h6e95ff9d_0_191))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_191));
    __VdfgRegularize_h6e95ff9d_0_193 = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                          >> 4U) & 
                                         ((0x0000003fU 
                                           & (IData)(
                                                     (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                                      >> 0x00000018U))) 
                                          == (0x0000003fU 
                                              & (IData)(
                                                        (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                         >> 0x0000000cU)))))
                                         ? (3U & (IData)(__VdfgRegularize_h6e95ff9d_0_192))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_192));
    __VdfgRegularize_h6e95ff9d_0_194 = ((((0x2fU >= 
                                           (0x0000003fU 
                                            & (IData)(
                                                      (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                       >> 0x00000012U)))) 
                                          && (1U & (IData)(
                                                           (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                            >> 
                                                            (0x0000003fU 
                                                             & (IData)(
                                                                       (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                                        >> 0x00000012U))))))) 
                                         << 3U) | (
                                                   (((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                                     >> 5U) 
                                                    & ((0x0000003fU 
                                                        & (IData)(
                                                                  (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                                                   >> 0x0000001eU))) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (IData)(
                                                                  (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                                   >> 0x0000000cU)))))
                                                    ? 
                                                   (3U 
                                                    & (IData)(__VdfgRegularize_h6e95ff9d_0_193))
                                                    : (IData)(__VdfgRegularize_h6e95ff9d_0_193)));
    __VdfgRegularize_h6e95ff9d_0_195 = ((0U == (0x0000003fU 
                                                & (IData)(
                                                          (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                           >> 0x00000012U))))
                                         ? (7U & (IData)(__VdfgRegularize_h6e95ff9d_0_194))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_194));
    __VdfgRegularize_h6e95ff9d_0_196 = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_write_en) 
                                          & ((0x0000003fU 
                                              & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_write_preg)) 
                                             == (0x0000003fU 
                                                 & (IData)(
                                                           (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                            >> 0x00000012U))))) 
                                         & (0U != (0x0000003fU 
                                                   & (IData)(
                                                             (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                              >> 0x00000012U)))))
                                         ? (8U | (7U 
                                                  & (IData)(__VdfgRegularize_h6e95ff9d_0_195)))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_195));
    __VdfgRegularize_h6e95ff9d_0_197 = (((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_write_en) 
                                           >> 1U) & 
                                          ((0x0000003fU 
                                            & ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_write_preg) 
                                               >> 6U)) 
                                           == (0x0000003fU 
                                               & (IData)(
                                                         (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                          >> 0x00000012U))))) 
                                         & (0U != (0x0000003fU 
                                                   & (IData)(
                                                             (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                              >> 0x00000012U)))))
                                         ? (8U | (7U 
                                                  & (IData)(__VdfgRegularize_h6e95ff9d_0_196)))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_196));
    __VdfgRegularize_h6e95ff9d_0_198 = (((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                         & ((0x0000003fU 
                                             & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg)) 
                                            == (0x0000003fU 
                                                & (IData)(
                                                          (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                           >> 0x00000012U)))))
                                         ? (7U & (IData)(__VdfgRegularize_h6e95ff9d_0_197))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_197));
    __VdfgRegularize_h6e95ff9d_0_199 = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                          >> 1U) & 
                                         ((0x0000003fU 
                                           & (IData)(
                                                     (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                                      >> 6U))) 
                                          == (0x0000003fU 
                                              & (IData)(
                                                        (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                         >> 0x00000012U)))))
                                         ? (7U & (IData)(__VdfgRegularize_h6e95ff9d_0_198))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_198));
    __VdfgRegularize_h6e95ff9d_0_200 = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                          >> 2U) & 
                                         ((0x0000003fU 
                                           & (IData)(
                                                     (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                                      >> 0x0000000cU))) 
                                          == (0x0000003fU 
                                              & (IData)(
                                                        (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                         >> 0x00000012U)))))
                                         ? (7U & (IData)(__VdfgRegularize_h6e95ff9d_0_199))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_199));
    __VdfgRegularize_h6e95ff9d_0_201 = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                          >> 3U) & 
                                         ((0x0000003fU 
                                           & (IData)(
                                                     (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                                      >> 0x00000012U))) 
                                          == (0x0000003fU 
                                              & (IData)(
                                                        (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                         >> 0x00000012U)))))
                                         ? (7U & (IData)(__VdfgRegularize_h6e95ff9d_0_200))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_200));
    __VdfgRegularize_h6e95ff9d_0_202 = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                          >> 4U) & 
                                         ((0x0000003fU 
                                           & (IData)(
                                                     (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                                      >> 0x00000018U))) 
                                          == (0x0000003fU 
                                              & (IData)(
                                                        (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                         >> 0x00000012U)))))
                                         ? (7U & (IData)(__VdfgRegularize_h6e95ff9d_0_201))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_201));
    __VdfgRegularize_h6e95ff9d_0_203 = ((((0x2fU >= 
                                           (0x0000003fU 
                                            & (IData)(
                                                      (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                       >> 0x00000018U)))) 
                                          && (1U & (IData)(
                                                           (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                            >> 
                                                            (0x0000003fU 
                                                             & (IData)(
                                                                       (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                                        >> 0x00000018U))))))) 
                                         << 4U) | (
                                                   (((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                                     >> 5U) 
                                                    & ((0x0000003fU 
                                                        & (IData)(
                                                                  (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                                                   >> 0x0000001eU))) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (IData)(
                                                                  (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                                   >> 0x00000012U)))))
                                                    ? 
                                                   (7U 
                                                    & (IData)(__VdfgRegularize_h6e95ff9d_0_202))
                                                    : (IData)(__VdfgRegularize_h6e95ff9d_0_202)));
    __VdfgRegularize_h6e95ff9d_0_204 = ((0U == (0x0000003fU 
                                                & (IData)(
                                                          (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                           >> 0x00000018U))))
                                         ? (0x0000000fU 
                                            & (IData)(__VdfgRegularize_h6e95ff9d_0_203))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_203));
    __VdfgRegularize_h6e95ff9d_0_205 = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_write_en) 
                                          & ((0x0000003fU 
                                              & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_write_preg)) 
                                             == (0x0000003fU 
                                                 & (IData)(
                                                           (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                            >> 0x00000018U))))) 
                                         & (0U != (0x0000003fU 
                                                   & (IData)(
                                                             (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                              >> 0x00000018U)))))
                                         ? (0x00000010U 
                                            | (0x0000000fU 
                                               & (IData)(__VdfgRegularize_h6e95ff9d_0_204)))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_204));
    __VdfgRegularize_h6e95ff9d_0_206 = (((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_write_en) 
                                           >> 1U) & 
                                          ((0x0000003fU 
                                            & ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_write_preg) 
                                               >> 6U)) 
                                           == (0x0000003fU 
                                               & (IData)(
                                                         (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                          >> 0x00000018U))))) 
                                         & (0U != (0x0000003fU 
                                                   & (IData)(
                                                             (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                              >> 0x00000018U)))))
                                         ? (0x00000010U 
                                            | (0x0000000fU 
                                               & (IData)(__VdfgRegularize_h6e95ff9d_0_205)))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_205));
    __VdfgRegularize_h6e95ff9d_0_207 = (((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                         & ((0x0000003fU 
                                             & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg)) 
                                            == (0x0000003fU 
                                                & (IData)(
                                                          (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                           >> 0x00000018U)))))
                                         ? (0x0000000fU 
                                            & (IData)(__VdfgRegularize_h6e95ff9d_0_206))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_206));
    __VdfgRegularize_h6e95ff9d_0_208 = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                          >> 1U) & 
                                         ((0x0000003fU 
                                           & (IData)(
                                                     (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                                      >> 6U))) 
                                          == (0x0000003fU 
                                              & (IData)(
                                                        (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                         >> 0x00000018U)))))
                                         ? (0x0000000fU 
                                            & (IData)(__VdfgRegularize_h6e95ff9d_0_207))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_207));
    __VdfgRegularize_h6e95ff9d_0_209 = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                          >> 2U) & 
                                         ((0x0000003fU 
                                           & (IData)(
                                                     (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                                      >> 0x0000000cU))) 
                                          == (0x0000003fU 
                                              & (IData)(
                                                        (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                         >> 0x00000018U)))))
                                         ? (0x0000000fU 
                                            & (IData)(__VdfgRegularize_h6e95ff9d_0_208))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_208));
    __VdfgRegularize_h6e95ff9d_0_210 = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                          >> 3U) & 
                                         ((0x0000003fU 
                                           & (IData)(
                                                     (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                                      >> 0x00000012U))) 
                                          == (0x0000003fU 
                                              & (IData)(
                                                        (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                         >> 0x00000018U)))))
                                         ? (0x0000000fU 
                                            & (IData)(__VdfgRegularize_h6e95ff9d_0_209))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_209));
    __VdfgRegularize_h6e95ff9d_0_211 = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                                          >> 4U) & 
                                         ((0x0000003fU 
                                           & (IData)(
                                                     (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                                      >> 0x00000018U))) 
                                          == (0x0000003fU 
                                              & (IData)(
                                                        (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                         >> 0x00000018U)))))
                                         ? (0x0000000fU 
                                            & (IData)(__VdfgRegularize_h6e95ff9d_0_210))
                                         : (IData)(__VdfgRegularize_h6e95ff9d_0_210));
    __VdfgSynthAssign_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_95 
        = ((((0x2fU >= (0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                               >> 0x0000001eU)))) 
             && (1U & (IData)((vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__busy_vec 
                               >> (0x0000003fU & (IData)(
                                                         (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                          >> 0x0000001eU))))))) 
            << 5U) | ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
                        >> 5U) & ((0x0000003fU & (IData)(
                                                         (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                                          >> 0x0000001eU))) 
                                  == (0x0000003fU & (IData)(
                                                            (vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                             >> 0x00000018U)))))
                       ? (0x0000000fU & (IData)(__VdfgRegularize_h6e95ff9d_0_211))
                       : (IData)(__VdfgRegularize_h6e95ff9d_0_211)));
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_97 
        = ((0U == (0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                          >> 0x0000001eU))))
            ? (0x0000001fU & (IData)(__VdfgSynthAssign_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_95))
            : (IData)(__VdfgSynthAssign_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_95));
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_99 
        = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_write_en) 
             & ((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_write_preg)) 
                == (0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                           >> 0x0000001eU))))) 
            & (0U != (0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                             >> 0x0000001eU)))))
            ? (0x00000020U | (0x0000001fU & (IData)(__VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_97)))
            : (IData)(__VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_97));
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_101 
        = (((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_write_en) 
              >> 1U) & ((0x0000003fU & ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_write_preg) 
                                        >> 6U)) == 
                        (0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                >> 0x0000001eU))))) 
            & (0U != (0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                             >> 0x0000001eU)))))
            ? (0x00000020U | (0x0000001fU & (IData)(__VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_99)))
            : (IData)(__VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_99));
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_103 
        = (((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
            & ((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg)) 
               == (0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                          >> 0x0000001eU)))))
            ? (0x0000001fU & (IData)(__VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_101))
            : (IData)(__VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_101));
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_105 
        = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
             >> 1U) & ((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                               >> 6U))) 
                       == (0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                  >> 0x0000001eU)))))
            ? (0x0000001fU & (IData)(__VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_103))
            : (IData)(__VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_103));
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_107 
        = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
             >> 2U) & ((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                               >> 0x0000000cU))) 
                       == (0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                  >> 0x0000001eU)))))
            ? (0x0000001fU & (IData)(__VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_105))
            : (IData)(__VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_105));
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_109 
        = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
             >> 3U) & ((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                               >> 0x00000012U))) 
                       == (0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                  >> 0x0000001eU)))))
            ? (0x0000001fU & (IData)(__VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_107))
            : (IData)(__VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_107));
    __VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_111 
        = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
             >> 4U) & ((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                               >> 0x00000018U))) 
                       == (0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                  >> 0x0000001eU)))))
            ? (0x0000001fU & (IData)(__VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_109))
            : (IData)(__VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_109));
    vlSelfRef.boom_core__DOT__rename__DOT__bt_busy 
        = ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en) 
             >> 5U) & ((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
                                               >> 0x0000001eU))) 
                       == (0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__rename__DOT__bt_read_preg 
                                                  >> 0x0000001eU)))))
            ? (0x0000001fU & (IData)(__VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_111))
            : (IData)(__VdfgSynthJoin_boom_core__DOT__rename__DOT__bt_busy_h6e95ff9d_0_111));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[0U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[1U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[2U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[3U] 
        = ((0xfff80000U & __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[3U]) 
           | ((0x00040000U & ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_busy) 
                              << 0x00000012U)) | ((0x00020000U 
                                                   & ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_busy) 
                                                      << 0x00000010U)) 
                                                  | (0x0001ffffU 
                                                     & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[3U]))));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[3U] 
        = ((0x0007ffffU & __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[3U]) 
           | (0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[3U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[4U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[4U]) 
           | (0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[4U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[5U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[5U]) 
           | (0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[5U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[6U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[6U]) 
           | (0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[6U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[7U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[7U]) 
           | (0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[7U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[8U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[8U]) 
           | (0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[8U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[9U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[9U]) 
           | (0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[9U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[10U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[10U]) 
           | (0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[10U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[11U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[11U]) 
           | (0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[11U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[12U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[12U]) 
           | (0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[12U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[13U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[13U]) 
           | (0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[13U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[14U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[14U]) 
           | (0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[14U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[15U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[15U]) 
           | (0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[15U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[16U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[16U]) 
           | (0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[16U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[17U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[17U]) 
           | (0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[17U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[18U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[18U]) 
           | (0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[18U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[19U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[19U]) 
           | (0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[19U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[20U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[20U]) 
           | (0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[20U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[21U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[21U]) 
           | (0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[21U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[22U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[22U]) 
           | (0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[22U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[23U] 
        = (0x0003ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232[23U]);
    if ((1U & (IData)(vlSelfRef.boom_core__DOT__dec_fire))) {
        vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[0U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31[0U];
        vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[1U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31[1U];
        vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[2U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31[2U];
        vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[3U] 
            = ((((0xfff00000U & ((__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[4U] 
                                  << 0x00000017U) | 
                                 (0x00700000U & (__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[3U] 
                                                 >> 9U)))) 
                 | ((0x000ffc00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31[3U] 
                                    >> 9U)) | ((0x00000300U 
                                                & (__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[3U] 
                                                   >> 9U)) 
                                               | ((0x000000c0U 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31[3U] 
                                                      >> 9U)) 
                                                  | (0x0000003fU 
                                                     & (__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[3U] 
                                                        >> 9U)))))) 
                << 9U) | (0x000001ffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31[3U]));
        vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[4U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[0U] 
                << 9U) | (((0xfff00000U & ((__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[4U] 
                                            << 0x00000017U) 
                                           | (0x00700000U 
                                              & (__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[3U] 
                                                 >> 9U)))) 
                           | ((0x000ffc00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31[3U] 
                                              >> 9U)) 
                              | ((0x00000300U & (__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[3U] 
                                                 >> 9U)) 
                                 | ((0x000000c0U & 
                                     (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31[3U] 
                                      >> 9U)) | (0x0000003fU 
                                                 & (__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_5[3U] 
                                                    >> 9U)))))) 
                          >> 0x00000017U));
        vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[5U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[0U] 
                >> 0x00000017U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[1U] 
                                   << 9U));
        vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[6U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[1U] 
                >> 0x00000017U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[2U] 
                                   << 9U));
        vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[7U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[2U] 
                >> 0x00000017U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[3U] 
                                   << 9U));
        vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[8U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[3U] 
                >> 0x00000017U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[4U] 
                                   << 9U));
        vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[9U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[4U] 
                >> 0x00000017U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[5U] 
                                   << 9U));
        vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[10U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[5U] 
                >> 0x00000017U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[6U] 
                                   << 9U));
        vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[11U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[6U] 
                >> 0x00000017U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[7U] 
                                   << 9U));
        vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[12U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[7U] 
                >> 0x00000017U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[8U] 
                                   << 9U));
        vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[13U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[8U] 
                >> 0x00000017U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[9U] 
                                   << 9U));
        vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[14U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[9U] 
                >> 0x00000017U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[10U] 
                                   << 9U));
        vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[15U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[10U] 
                >> 0x00000017U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[11U] 
                                   << 9U));
        vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[16U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[11U] 
                >> 0x00000017U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[12U] 
                                   << 9U));
        vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[17U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[12U] 
                >> 0x00000017U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[13U] 
                                   << 9U));
        vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[18U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[13U] 
                >> 0x00000017U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[14U] 
                                   << 9U));
        vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[19U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[14U] 
                >> 0x00000017U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[15U] 
                                   << 9U));
        vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[20U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[15U] 
                >> 0x00000017U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[16U] 
                                   << 9U));
        vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[21U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[16U] 
                >> 0x00000017U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[17U] 
                                   << 9U));
        vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[22U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[17U] 
                >> 0x00000017U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[18U] 
                                   << 9U));
        vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[23U] 
            = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[18U] 
                >> 0x00000017U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[19U] 
                                   << 9U));
    } else {
        VL_ASSIGN_W(754, vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6, Vboom_core__ConstPool__CONST_h4465c659_0);
    }
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[0U] 
        = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[0U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[1U] 
        = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[1U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[2U] 
        = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[2U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[3U] 
        = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[3U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[4U] 
        = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[4U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[5U] 
        = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[5U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[6U] 
        = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[6U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[7U] 
        = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[7U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[8U] 
        = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[8U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[9U] 
        = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[9U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[10U] 
        = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[10U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[11U] 
        = ((0xfe000000U & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[11U]) 
           | (0x01ffffffU & vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[11U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[12U] 
        = ((0x01ffffffU & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[12U]) 
           | (0xfe000000U & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[12U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[13U] 
        = ((0x01ffffffU & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[13U]) 
           | (0xfe000000U & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[13U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[14U] 
        = ((0x01ffffffU & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[14U]) 
           | (0xfe000000U & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[14U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[15U] 
        = ((0x01ffffffU & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[15U]) 
           | (0xfe000000U & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[15U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[16U] 
        = ((0x01ffffffU & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[16U]) 
           | (0xfe000000U & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[16U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[17U] 
        = ((0x01ffffffU & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[17U]) 
           | (0xfe000000U & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[17U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[18U] 
        = ((0x01ffffffU & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[18U]) 
           | (0xfe000000U & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[18U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[19U] 
        = ((0x01ffffffU & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[19U]) 
           | (0xfe000000U & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[19U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[20U] 
        = ((0x01ffffffU & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[20U]) 
           | (0xfe000000U & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[20U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[21U] 
        = ((0x01ffffffU & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[21U]) 
           | (0xfe000000U & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[21U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[22U] 
        = ((0x01ffffffU & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[22U]) 
           | (0xfe000000U & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[22U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[23U] 
        = (0x0003ffffU & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[23U]);
    __VdfgRegularize_h6e95ff9d_0_237[0U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[0U];
    __VdfgRegularize_h6e95ff9d_0_237[1U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[1U];
    __VdfgRegularize_h6e95ff9d_0_237[2U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[2U];
    __VdfgRegularize_h6e95ff9d_0_237[3U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[3U];
    __VdfgRegularize_h6e95ff9d_0_237[4U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[4U];
    __VdfgRegularize_h6e95ff9d_0_237[5U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[5U];
    __VdfgRegularize_h6e95ff9d_0_237[6U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[6U];
    __VdfgRegularize_h6e95ff9d_0_237[7U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[7U];
    __VdfgRegularize_h6e95ff9d_0_237[8U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[8U];
    __VdfgRegularize_h6e95ff9d_0_237[9U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[9U];
    __VdfgRegularize_h6e95ff9d_0_237[10U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[10U];
    __VdfgRegularize_h6e95ff9d_0_237[11U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[0U] 
                                              << 0x00000019U) 
                                             | (0x01ffffffU 
                                                & __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[11U]));
    __VdfgRegularize_h6e95ff9d_0_237[12U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[0U] 
                                              >> 7U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[1U] 
                                                << 0x00000019U));
    __VdfgRegularize_h6e95ff9d_0_237[13U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[1U] 
                                              >> 7U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[2U] 
                                                << 0x00000019U));
    __VdfgRegularize_h6e95ff9d_0_237[14U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[2U] 
                                              >> 7U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[3U] 
                                                << 0x00000019U));
    __VdfgRegularize_h6e95ff9d_0_237[15U] = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[3U] 
                                             >> 7U);
    __VdfgRegularize_h6e95ff9d_0_237[16U] = (0xfffffffcU 
                                             & __VdfgRegularize_h6e95ff9d_0_237[16U]);
    __VdfgRegularize_h6e95ff9d_0_237[16U] = ((3U & __VdfgRegularize_h6e95ff9d_0_237[16U]) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_236[0U] 
                                                << 2U));
    __VdfgRegularize_h6e95ff9d_0_237[17U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_236[0U] 
                                              >> 0x0000001eU) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_236[1U] 
                                                << 2U));
    __VdfgRegularize_h6e95ff9d_0_237[18U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_236[1U] 
                                              >> 0x0000001eU) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_236[2U] 
                                                << 2U));
    __VdfgRegularize_h6e95ff9d_0_237[19U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_236[2U] 
                                              >> 0x0000001eU) 
                                             | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[0U] 
                                                 << 0x00000015U) 
                                                | (((0x00078000U 
                                                     & (__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[19U] 
                                                        >> 2U)) 
                                                    | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_236[3U]) 
                                                   << 2U)));
    __VdfgRegularize_h6e95ff9d_0_237[20U] = (((3U & 
                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[0U] 
                                                >> 0x0000000bU)) 
                                              | (((0x00078000U 
                                                   & (__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_7[19U] 
                                                      >> 2U)) 
                                                  | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_236[3U]) 
                                                 >> 0x0000001eU)) 
                                             | ((0x001ffffcU 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[0U] 
                                                    >> 0x0000000bU)) 
                                                | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[1U] 
                                                   << 0x00000015U)));
    __VdfgRegularize_h6e95ff9d_0_237[21U] = ((3U & 
                                              (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[1U] 
                                               >> 0x0000000bU)) 
                                             | ((0x001ffffcU 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[1U] 
                                                    >> 0x0000000bU)) 
                                                | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[2U] 
                                                   << 0x00000015U)));
    __VdfgRegularize_h6e95ff9d_0_237[22U] = ((3U & 
                                              (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[2U] 
                                               >> 0x0000000bU)) 
                                             | ((0x001ffffcU 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[2U] 
                                                    >> 0x0000000bU)) 
                                                | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[3U] 
                                                   << 0x00000015U)));
    __VdfgRegularize_h6e95ff9d_0_237[23U] = (0x0003ffffU 
                                             & ((3U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[3U] 
                                                    >> 0x0000000bU)) 
                                                | (0x001ffffcU 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[3U] 
                                                      >> 0x0000000bU))));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[0U] 
        = __VdfgRegularize_h6e95ff9d_0_237[0U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[1U] 
        = __VdfgRegularize_h6e95ff9d_0_237[1U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[2U] 
        = __VdfgRegularize_h6e95ff9d_0_237[2U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[3U] 
        = __VdfgRegularize_h6e95ff9d_0_237[3U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[4U] 
        = __VdfgRegularize_h6e95ff9d_0_237[4U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[5U] 
        = __VdfgRegularize_h6e95ff9d_0_237[5U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[6U] 
        = __VdfgRegularize_h6e95ff9d_0_237[6U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[7U] 
        = __VdfgRegularize_h6e95ff9d_0_237[7U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[8U] 
        = __VdfgRegularize_h6e95ff9d_0_237[8U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[9U] 
        = __VdfgRegularize_h6e95ff9d_0_237[9U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[10U] 
        = __VdfgRegularize_h6e95ff9d_0_237[10U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[11U] 
        = __VdfgRegularize_h6e95ff9d_0_237[11U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[12U] 
        = __VdfgRegularize_h6e95ff9d_0_237[12U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[13U] 
        = __VdfgRegularize_h6e95ff9d_0_237[13U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[14U] 
        = __VdfgRegularize_h6e95ff9d_0_237[14U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[15U] 
        = (((IData)((vlSelfRef.boom_core__DOT__rename__DOT__mt_preg 
                     >> 0x00000012U)) << 0x0000001cU) 
           | ((0x0fc00000U & ((IData)((vlSelfRef.boom_core__DOT__rename__DOT__mt_preg 
                                       >> 0x00000018U)) 
                              << 0x00000016U)) | (0x003fffffU 
                                                  & __VdfgRegularize_h6e95ff9d_0_237[15U])));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[16U] 
        = ((0xfffffffcU & __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[16U]) 
           | (3U & ((IData)((vlSelfRef.boom_core__DOT__rename__DOT__mt_preg 
                             >> 0x00000012U)) >> 4U)));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[16U] 
        = ((3U & __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[16U]) 
           | (0xfffffffcU & __VdfgRegularize_h6e95ff9d_0_237[16U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[17U] 
        = ((3U & __VdfgRegularize_h6e95ff9d_0_237[17U]) 
           | (0xfffffffcU & __VdfgRegularize_h6e95ff9d_0_237[17U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[18U] 
        = ((3U & __VdfgRegularize_h6e95ff9d_0_237[18U]) 
           | (0xfffffffcU & __VdfgRegularize_h6e95ff9d_0_237[18U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[19U] 
        = ((3U & __VdfgRegularize_h6e95ff9d_0_237[19U]) 
           | (0xfffffffcU & __VdfgRegularize_h6e95ff9d_0_237[19U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[20U] 
        = ((3U & __VdfgRegularize_h6e95ff9d_0_237[20U]) 
           | (0xfffffffcU & __VdfgRegularize_h6e95ff9d_0_237[20U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[21U] 
        = ((3U & __VdfgRegularize_h6e95ff9d_0_237[21U]) 
           | (0xfffffffcU & __VdfgRegularize_h6e95ff9d_0_237[21U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[22U] 
        = ((3U & __VdfgRegularize_h6e95ff9d_0_237[22U]) 
           | (0xfffffffcU & __VdfgRegularize_h6e95ff9d_0_237[22U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[23U] 
        = (0x0003ffffU & ((3U & __VdfgRegularize_h6e95ff9d_0_237[23U]) 
                          | (0x0003fffcU & __VdfgRegularize_h6e95ff9d_0_237[23U])));
    __VdfgRegularize_h6e95ff9d_0_239[0U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[0U];
    __VdfgRegularize_h6e95ff9d_0_239[1U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[1U];
    __VdfgRegularize_h6e95ff9d_0_239[2U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[2U];
    __VdfgRegularize_h6e95ff9d_0_239[3U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[3U];
    __VdfgRegularize_h6e95ff9d_0_239[4U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[4U];
    __VdfgRegularize_h6e95ff9d_0_239[5U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[5U];
    __VdfgRegularize_h6e95ff9d_0_239[6U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[6U];
    __VdfgRegularize_h6e95ff9d_0_239[7U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[7U];
    __VdfgRegularize_h6e95ff9d_0_239[8U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[8U];
    __VdfgRegularize_h6e95ff9d_0_239[9U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[9U];
    __VdfgRegularize_h6e95ff9d_0_239[10U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[10U];
    __VdfgRegularize_h6e95ff9d_0_239[11U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[0U] 
                                              << 0x00000019U) 
                                             | (0x01ffffffU 
                                                & __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[11U]));
    __VdfgRegularize_h6e95ff9d_0_239[12U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[0U] 
                                              >> 7U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[1U] 
                                                << 0x00000019U));
    __VdfgRegularize_h6e95ff9d_0_239[13U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[1U] 
                                              >> 7U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[2U] 
                                                << 0x00000019U));
    __VdfgRegularize_h6e95ff9d_0_239[14U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[2U] 
                                              >> 7U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[3U] 
                                                << 0x00000019U));
    __VdfgRegularize_h6e95ff9d_0_239[15U] = ((0xffc00000U 
                                              & __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[15U]) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[3U] 
                                                >> 7U));
    __VdfgRegularize_h6e95ff9d_0_239[16U] = ((0xfffffffcU 
                                              & __VdfgRegularize_h6e95ff9d_0_239[16U]) 
                                             | (3U 
                                                & __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[16U]));
    __VdfgRegularize_h6e95ff9d_0_239[16U] = ((3U & __VdfgRegularize_h6e95ff9d_0_239[16U]) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238[0U] 
                                                << 8U));
    __VdfgRegularize_h6e95ff9d_0_239[17U] = ((3U & 
                                              (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238[0U] 
                                               >> 0x00000018U)) 
                                             | ((0x000000fcU 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238[0U] 
                                                    >> 0x00000018U)) 
                                                | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238[1U] 
                                                   << 8U)));
    __VdfgRegularize_h6e95ff9d_0_239[18U] = ((3U & 
                                              (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238[1U] 
                                               >> 0x00000018U)) 
                                             | ((0x000000fcU 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238[1U] 
                                                    >> 0x00000018U)) 
                                                | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238[2U] 
                                                   << 8U)));
    __VdfgRegularize_h6e95ff9d_0_239[19U] = ((3U & 
                                              (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238[2U] 
                                               >> 0x00000018U)) 
                                             | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[0U] 
                                                 << 0x00000015U) 
                                                | (((0x00078000U 
                                                     & (__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[19U] 
                                                        >> 2U)) 
                                                    | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238[2U] 
                                                        >> 0x0000001aU) 
                                                       | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238[3U] 
                                                          << 6U))) 
                                                   << 2U)));
    __VdfgRegularize_h6e95ff9d_0_239[20U] = (((3U & 
                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[0U] 
                                                >> 0x0000000bU)) 
                                              | (((0x00078000U 
                                                   & (__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_8[19U] 
                                                      >> 2U)) 
                                                  | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238[2U] 
                                                      >> 0x0000001aU) 
                                                     | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238[3U] 
                                                        << 6U))) 
                                                 >> 0x0000001eU)) 
                                             | ((0x001ffffcU 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[0U] 
                                                    >> 0x0000000bU)) 
                                                | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[1U] 
                                                   << 0x00000015U)));
    __VdfgRegularize_h6e95ff9d_0_239[21U] = ((3U & 
                                              (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[1U] 
                                               >> 0x0000000bU)) 
                                             | ((0x001ffffcU 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[1U] 
                                                    >> 0x0000000bU)) 
                                                | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[2U] 
                                                   << 0x00000015U)));
    __VdfgRegularize_h6e95ff9d_0_239[22U] = ((3U & 
                                              (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[2U] 
                                               >> 0x0000000bU)) 
                                             | ((0x001ffffcU 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[2U] 
                                                    >> 0x0000000bU)) 
                                                | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[3U] 
                                                   << 0x00000015U)));
    __VdfgRegularize_h6e95ff9d_0_239[23U] = (0x0003ffffU 
                                             & ((3U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[3U] 
                                                    >> 0x0000000bU)) 
                                                | (0x001ffffcU 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[3U] 
                                                      >> 0x0000000bU))));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[0U] 
        = __VdfgRegularize_h6e95ff9d_0_239[0U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[1U] 
        = __VdfgRegularize_h6e95ff9d_0_239[1U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[2U] 
        = __VdfgRegularize_h6e95ff9d_0_239[2U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[3U] 
        = __VdfgRegularize_h6e95ff9d_0_239[3U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[4U] 
        = __VdfgRegularize_h6e95ff9d_0_239[4U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[5U] 
        = __VdfgRegularize_h6e95ff9d_0_239[5U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[6U] 
        = __VdfgRegularize_h6e95ff9d_0_239[6U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[7U] 
        = __VdfgRegularize_h6e95ff9d_0_239[7U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[8U] 
        = __VdfgRegularize_h6e95ff9d_0_239[8U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[9U] 
        = __VdfgRegularize_h6e95ff9d_0_239[9U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[10U] 
        = __VdfgRegularize_h6e95ff9d_0_239[10U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[11U] 
        = __VdfgRegularize_h6e95ff9d_0_239[11U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[12U] 
        = __VdfgRegularize_h6e95ff9d_0_239[12U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[13U] 
        = __VdfgRegularize_h6e95ff9d_0_239[13U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[14U] 
        = __VdfgRegularize_h6e95ff9d_0_239[14U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[15U] 
        = __VdfgRegularize_h6e95ff9d_0_239[15U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[16U] 
        = ((0xfffffffcU & __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[16U]) 
           | (3U & __VdfgRegularize_h6e95ff9d_0_239[16U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[16U] 
        = ((0xffffff03U & __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[16U]) 
           | (((0U == (0x0000003fU & (vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[13U] 
                                      >> 8U))) ? 0U
                : (0x0000003fU & ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                  >> 6U))) << 2U));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[16U] 
        = ((0x000000ffU & __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[16U]) 
           | (0xffffff00U & __VdfgRegularize_h6e95ff9d_0_239[16U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[17U] 
        = ((0x000000ffU & __VdfgRegularize_h6e95ff9d_0_239[17U]) 
           | (0xffffff00U & __VdfgRegularize_h6e95ff9d_0_239[17U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[18U] 
        = ((0x000000ffU & __VdfgRegularize_h6e95ff9d_0_239[18U]) 
           | (0xffffff00U & __VdfgRegularize_h6e95ff9d_0_239[18U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[19U] 
        = ((0x000000ffU & __VdfgRegularize_h6e95ff9d_0_239[19U]) 
           | (0xffffff00U & __VdfgRegularize_h6e95ff9d_0_239[19U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[20U] 
        = ((0x000000ffU & __VdfgRegularize_h6e95ff9d_0_239[20U]) 
           | (0xffffff00U & __VdfgRegularize_h6e95ff9d_0_239[20U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[21U] 
        = ((0x000000ffU & __VdfgRegularize_h6e95ff9d_0_239[21U]) 
           | (0xffffff00U & __VdfgRegularize_h6e95ff9d_0_239[21U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[22U] 
        = ((0x000000ffU & __VdfgRegularize_h6e95ff9d_0_239[22U]) 
           | (0xffffff00U & __VdfgRegularize_h6e95ff9d_0_239[22U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[23U] 
        = (0x0003ffffU & ((0x000000ffU & __VdfgRegularize_h6e95ff9d_0_239[23U]) 
                          | (0x0003ff00U & __VdfgRegularize_h6e95ff9d_0_239[23U])));
    __VdfgRegularize_h6e95ff9d_0_240[0U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[0U];
    __VdfgRegularize_h6e95ff9d_0_240[1U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[1U];
    __VdfgRegularize_h6e95ff9d_0_240[2U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[2U];
    __VdfgRegularize_h6e95ff9d_0_240[3U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[3U];
    __VdfgRegularize_h6e95ff9d_0_240[4U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[4U];
    __VdfgRegularize_h6e95ff9d_0_240[5U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[5U];
    __VdfgRegularize_h6e95ff9d_0_240[6U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[6U];
    __VdfgRegularize_h6e95ff9d_0_240[7U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[7U];
    __VdfgRegularize_h6e95ff9d_0_240[8U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[8U];
    __VdfgRegularize_h6e95ff9d_0_240[9U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[9U];
    __VdfgRegularize_h6e95ff9d_0_240[10U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[10U];
    __VdfgRegularize_h6e95ff9d_0_240[11U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[0U] 
                                              << 0x00000019U) 
                                             | (0x01ffffffU 
                                                & __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[11U]));
    __VdfgRegularize_h6e95ff9d_0_240[12U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[0U] 
                                              >> 7U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[1U] 
                                                << 0x00000019U));
    __VdfgRegularize_h6e95ff9d_0_240[13U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[1U] 
                                              >> 7U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[2U] 
                                                << 0x00000019U));
    __VdfgRegularize_h6e95ff9d_0_240[14U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[2U] 
                                              >> 7U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[3U] 
                                                << 0x00000019U));
    __VdfgRegularize_h6e95ff9d_0_240[15U] = ((0xffc00000U 
                                              & __VdfgRegularize_h6e95ff9d_0_240[15U]) 
                                             | ((0x003fff00U 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[3U] 
                                                    >> 7U)) 
                                                | (3U 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[3U] 
                                                      >> 7U))));
    __VdfgRegularize_h6e95ff9d_0_240[15U] = ((0x003fffffU 
                                              & __VdfgRegularize_h6e95ff9d_0_240[15U]) 
                                             | (0xffc00000U 
                                                & __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[15U]));
    __VdfgRegularize_h6e95ff9d_0_240[16U] = (((0x003ffffcU 
                                               & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[0U] 
                                                  << 2U)) 
                                              | (3U 
                                                 & __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[16U])) 
                                             | (0xffc00000U 
                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[0U] 
                                                   << 2U)));
    __VdfgRegularize_h6e95ff9d_0_240[17U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[0U] 
                                               >> 0x0000001eU) 
                                              | (0x003ffffcU 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[1U] 
                                                    << 2U))) 
                                             | (0xffc00000U 
                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[1U] 
                                                   << 2U)));
    __VdfgRegularize_h6e95ff9d_0_240[18U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[1U] 
                                               >> 0x0000001eU) 
                                              | (0x003ffffcU 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[2U] 
                                                    << 2U))) 
                                             | (((0x78000000U 
                                                  & (__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[19U] 
                                                     << 0x0000000aU)) 
                                                 | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[2U] 
                                                     >> 0x00000014U) 
                                                    | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[3U] 
                                                       << 0x0000000cU))) 
                                                << 0x00000016U));
    __VdfgRegularize_h6e95ff9d_0_240[19U] = ((0xffe00000U 
                                              & __VdfgRegularize_h6e95ff9d_0_240[19U]) 
                                             | (((0x78000000U 
                                                  & (__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_9[19U] 
                                                     << 0x0000000aU)) 
                                                 | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[2U] 
                                                     >> 0x00000014U) 
                                                    | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[3U] 
                                                       << 0x0000000cU))) 
                                                >> 0x0000000aU));
    __VdfgRegularize_h6e95ff9d_0_240[19U] = ((0x001fffffU 
                                              & __VdfgRegularize_h6e95ff9d_0_240[19U]) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[0U] 
                                                << 0x00000015U));
    __VdfgRegularize_h6e95ff9d_0_240[20U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[0U] 
                                              >> 0x0000000bU) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[1U] 
                                                << 0x00000015U));
    __VdfgRegularize_h6e95ff9d_0_240[21U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[1U] 
                                              >> 0x0000000bU) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[2U] 
                                                << 0x00000015U));
    __VdfgRegularize_h6e95ff9d_0_240[22U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[2U] 
                                              >> 0x0000000bU) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[3U] 
                                                << 0x00000015U));
    __VdfgRegularize_h6e95ff9d_0_240[23U] = (0x0003ffffU 
                                             & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[3U] 
                                                >> 0x0000000bU));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[0U] 
        = __VdfgRegularize_h6e95ff9d_0_240[0U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[1U] 
        = __VdfgRegularize_h6e95ff9d_0_240[1U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[2U] 
        = __VdfgRegularize_h6e95ff9d_0_240[2U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[3U] 
        = __VdfgRegularize_h6e95ff9d_0_240[3U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[4U] 
        = __VdfgRegularize_h6e95ff9d_0_240[4U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[5U] 
        = __VdfgRegularize_h6e95ff9d_0_240[5U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[6U] 
        = __VdfgRegularize_h6e95ff9d_0_240[6U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[7U] 
        = __VdfgRegularize_h6e95ff9d_0_240[7U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[8U] 
        = __VdfgRegularize_h6e95ff9d_0_240[8U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[9U] 
        = __VdfgRegularize_h6e95ff9d_0_240[9U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[10U] 
        = __VdfgRegularize_h6e95ff9d_0_240[10U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[11U] 
        = __VdfgRegularize_h6e95ff9d_0_240[11U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[12U] 
        = __VdfgRegularize_h6e95ff9d_0_240[12U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[13U] 
        = __VdfgRegularize_h6e95ff9d_0_240[13U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[14U] 
        = __VdfgRegularize_h6e95ff9d_0_240[14U];
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[15U] 
        = ((0xffffff00U & __VdfgRegularize_h6e95ff9d_0_240[15U]) 
           | ((0x000000fcU & ((IData)((vlSelfRef.boom_core__DOT__rename__DOT__mt_preg 
                                       >> 0x0000001eU)) 
                              << 2U)) | (3U & __VdfgRegularize_h6e95ff9d_0_240[15U])));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[16U] 
        = ((0x000000ffU & __VdfgRegularize_h6e95ff9d_0_240[16U]) 
           | (0xffffff00U & __VdfgRegularize_h6e95ff9d_0_240[16U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[17U] 
        = ((0x000000ffU & __VdfgRegularize_h6e95ff9d_0_240[17U]) 
           | (0xffffff00U & __VdfgRegularize_h6e95ff9d_0_240[17U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[18U] 
        = ((0x000000ffU & __VdfgRegularize_h6e95ff9d_0_240[18U]) 
           | (0xffffff00U & __VdfgRegularize_h6e95ff9d_0_240[18U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[19U] 
        = ((0x000000ffU & __VdfgRegularize_h6e95ff9d_0_240[19U]) 
           | (0xffffff00U & __VdfgRegularize_h6e95ff9d_0_240[19U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[20U] 
        = ((0x000000ffU & __VdfgRegularize_h6e95ff9d_0_240[20U]) 
           | (0xffffff00U & __VdfgRegularize_h6e95ff9d_0_240[20U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[21U] 
        = ((0x000000ffU & __VdfgRegularize_h6e95ff9d_0_240[21U]) 
           | (0xffffff00U & __VdfgRegularize_h6e95ff9d_0_240[21U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[22U] 
        = ((0x000000ffU & __VdfgRegularize_h6e95ff9d_0_240[22U]) 
           | (0xffffff00U & __VdfgRegularize_h6e95ff9d_0_240[22U]));
    __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[23U] 
        = ((0x000000ffU & __VdfgRegularize_h6e95ff9d_0_240[23U]) 
           | (0x0003ff00U & __VdfgRegularize_h6e95ff9d_0_240[23U]));
    __VdfgRegularize_h6e95ff9d_0_243[0U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[0U];
    __VdfgRegularize_h6e95ff9d_0_243[1U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[1U];
    __VdfgRegularize_h6e95ff9d_0_243[2U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[2U];
    __VdfgRegularize_h6e95ff9d_0_243[3U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[3U];
    __VdfgRegularize_h6e95ff9d_0_243[4U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[4U];
    __VdfgRegularize_h6e95ff9d_0_243[5U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[5U];
    __VdfgRegularize_h6e95ff9d_0_243[6U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[6U];
    __VdfgRegularize_h6e95ff9d_0_243[7U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[7U];
    __VdfgRegularize_h6e95ff9d_0_243[8U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[8U];
    __VdfgRegularize_h6e95ff9d_0_243[9U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[9U];
    __VdfgRegularize_h6e95ff9d_0_243[10U] = __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[10U];
    __VdfgRegularize_h6e95ff9d_0_243[11U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[0U] 
                                              << 0x00000019U) 
                                             | (0x01ffffffU 
                                                & __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[11U]));
    __VdfgRegularize_h6e95ff9d_0_243[12U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[0U] 
                                              >> 7U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[1U] 
                                                << 0x00000019U));
    __VdfgRegularize_h6e95ff9d_0_243[13U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[1U] 
                                              >> 7U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[2U] 
                                                << 0x00000019U));
    __VdfgRegularize_h6e95ff9d_0_243[14U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[2U] 
                                              >> 7U) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[3U] 
                                                << 0x00000019U));
    __VdfgRegularize_h6e95ff9d_0_243[15U] = ((0xfffffffcU 
                                              & __VdfgRegularize_h6e95ff9d_0_243[15U]) 
                                             | (3U 
                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[3U] 
                                                   >> 7U)));
    __VdfgRegularize_h6e95ff9d_0_243[15U] = ((0xffc00003U 
                                              & __VdfgRegularize_h6e95ff9d_0_243[15U]) 
                                             | (((0x000ffc00U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[3U] 
                                                     >> 9U)) 
                                                 | ((0x000000c0U 
                                                     & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[3U] 
                                                        >> 9U)) 
                                                    | (0x0000003fU 
                                                       & (__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[15U] 
                                                          >> 2U)))) 
                                                << 2U));
    __VdfgRegularize_h6e95ff9d_0_243[15U] = ((0x003fffffU 
                                              & __VdfgRegularize_h6e95ff9d_0_243[15U]) 
                                             | (0xffc00000U 
                                                & __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[15U]));
    __VdfgRegularize_h6e95ff9d_0_243[16U] = (((0x003ffffcU 
                                               & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[0U] 
                                                  << 2U)) 
                                              | (3U 
                                                 & __VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[16U])) 
                                             | (0xffc00000U 
                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[0U] 
                                                   << 2U)));
    __VdfgRegularize_h6e95ff9d_0_243[17U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[0U] 
                                               >> 0x0000001eU) 
                                              | (0x003ffffcU 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[1U] 
                                                    << 2U))) 
                                             | (0xffc00000U 
                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[1U] 
                                                   << 2U)));
    __VdfgRegularize_h6e95ff9d_0_243[18U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[1U] 
                                               >> 0x0000001eU) 
                                              | (0x003ffffcU 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[2U] 
                                                    << 2U))) 
                                             | (((0x78000000U 
                                                  & (__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[19U] 
                                                     << 0x0000000aU)) 
                                                 | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[2U] 
                                                     >> 0x00000014U) 
                                                    | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[3U] 
                                                       << 0x0000000cU))) 
                                                << 0x00000016U));
    __VdfgRegularize_h6e95ff9d_0_243[19U] = ((0xffe00000U 
                                              & __VdfgRegularize_h6e95ff9d_0_243[19U]) 
                                             | (((0x78000000U 
                                                  & (__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_10[19U] 
                                                     << 0x0000000aU)) 
                                                 | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[2U] 
                                                     >> 0x00000014U) 
                                                    | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[3U] 
                                                       << 0x0000000cU))) 
                                                >> 0x0000000aU));
    __VdfgRegularize_h6e95ff9d_0_243[19U] = ((0x001fffffU 
                                              & __VdfgRegularize_h6e95ff9d_0_243[19U]) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[0U] 
                                                << 0x00000015U));
    __VdfgRegularize_h6e95ff9d_0_243[20U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[0U] 
                                              >> 0x0000000bU) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[1U] 
                                                << 0x00000015U));
    __VdfgRegularize_h6e95ff9d_0_243[21U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[1U] 
                                              >> 0x0000000bU) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[2U] 
                                                << 0x00000015U));
    __VdfgRegularize_h6e95ff9d_0_243[22U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[2U] 
                                              >> 0x0000000bU) 
                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[3U] 
                                                << 0x00000015U));
    __VdfgRegularize_h6e95ff9d_0_243[23U] = (0x0003ffffU 
                                             & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[3U] 
                                                >> 0x0000000bU));
    vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[0U] 
        = __VdfgRegularize_h6e95ff9d_0_243[0U];
    vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[1U] 
        = __VdfgRegularize_h6e95ff9d_0_243[1U];
    vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[2U] 
        = __VdfgRegularize_h6e95ff9d_0_243[2U];
    vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[3U] 
        = __VdfgRegularize_h6e95ff9d_0_243[3U];
    vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[4U] 
        = __VdfgRegularize_h6e95ff9d_0_243[4U];
    vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[5U] 
        = __VdfgRegularize_h6e95ff9d_0_243[5U];
    vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[6U] 
        = __VdfgRegularize_h6e95ff9d_0_243[6U];
    vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[7U] 
        = __VdfgRegularize_h6e95ff9d_0_243[7U];
    vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[8U] 
        = __VdfgRegularize_h6e95ff9d_0_243[8U];
    vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[9U] 
        = __VdfgRegularize_h6e95ff9d_0_243[9U];
    vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[10U] 
        = __VdfgRegularize_h6e95ff9d_0_243[10U];
    vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[11U] 
        = __VdfgRegularize_h6e95ff9d_0_243[11U];
    vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[12U] 
        = __VdfgRegularize_h6e95ff9d_0_243[12U];
    vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[13U] 
        = __VdfgRegularize_h6e95ff9d_0_243[13U];
    vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[14U] 
        = __VdfgRegularize_h6e95ff9d_0_243[14U];
    vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[15U] 
        = ((0xfffff000U & vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[15U]) 
           | ((0x00000800U & ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_busy) 
                              << 8U)) | ((0x00000400U 
                                          & ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__bt_busy) 
                                             << 6U)) 
                                         | (0x000003ffU 
                                            & __VdfgRegularize_h6e95ff9d_0_243[15U]))));
    vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[15U] 
        = ((0x00000fffU & vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[15U]) 
           | (0xfffff000U & __VdfgRegularize_h6e95ff9d_0_243[15U]));
    vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[16U] 
        = ((0x00000fffU & __VdfgRegularize_h6e95ff9d_0_243[16U]) 
           | (0xfffff000U & __VdfgRegularize_h6e95ff9d_0_243[16U]));
    vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[17U] 
        = ((0x00000fffU & __VdfgRegularize_h6e95ff9d_0_243[17U]) 
           | (0xfffff000U & __VdfgRegularize_h6e95ff9d_0_243[17U]));
    vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[18U] 
        = ((0x00000fffU & __VdfgRegularize_h6e95ff9d_0_243[18U]) 
           | (0xfffff000U & __VdfgRegularize_h6e95ff9d_0_243[18U]));
    vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[19U] 
        = ((0x00000fffU & __VdfgRegularize_h6e95ff9d_0_243[19U]) 
           | (0xfffff000U & __VdfgRegularize_h6e95ff9d_0_243[19U]));
    vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[20U] 
        = ((0x00000fffU & __VdfgRegularize_h6e95ff9d_0_243[20U]) 
           | (0xfffff000U & __VdfgRegularize_h6e95ff9d_0_243[20U]));
    vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[21U] 
        = ((0x00000fffU & __VdfgRegularize_h6e95ff9d_0_243[21U]) 
           | (0xfffff000U & __VdfgRegularize_h6e95ff9d_0_243[21U]));
    vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[22U] 
        = ((0x00000fffU & __VdfgRegularize_h6e95ff9d_0_243[22U]) 
           | (0xfffff000U & __VdfgRegularize_h6e95ff9d_0_243[22U]));
    vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[23U] 
        = (0x0003ffffU & ((0x00000fffU & __VdfgRegularize_h6e95ff9d_0_243[23U]) 
                          | (0x0003f000U & __VdfgRegularize_h6e95ff9d_0_243[23U])));
    if ((2U & (IData)(vlSelfRef.boom_core__DOT__dec_fire))) {
        __Vtemp_68[0U] = vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[0U];
        __Vtemp_68[1U] = vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[1U];
        __Vtemp_68[2U] = vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[2U];
        __Vtemp_68[3U] = vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[3U];
        __Vtemp_68[4U] = vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[4U];
        __Vtemp_68[5U] = vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[5U];
        __Vtemp_68[6U] = vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[6U];
        __Vtemp_68[7U] = vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[7U];
        __Vtemp_68[8U] = vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[8U];
        __Vtemp_68[9U] = vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[9U];
        __Vtemp_68[10U] = vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[10U];
        __Vtemp_68[11U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[0U] 
                            << 0x00000019U) | (0x01ffffffU 
                                               & vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[11U]));
        __Vtemp_68[12U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[0U] 
                            >> 7U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[1U] 
                                      << 0x00000019U));
        __Vtemp_68[13U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[1U] 
                            >> 7U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[2U] 
                                      << 0x00000019U));
        __Vtemp_68[14U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[2U] 
                            >> 7U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[3U] 
                                      << 0x00000019U));
        __Vtemp_68[15U] = ((0xffc00000U & vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[15U]) 
                           | ((0x003ff000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[3U] 
                                              >> 7U)) 
                              | ((0x00000c00U & vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[15U]) 
                                 | ((0x00000300U & 
                                     (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[3U] 
                                      >> 7U)) | ((0x000000fcU 
                                                  & vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[15U]) 
                                                 | (3U 
                                                    & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[3U] 
                                                       >> 7U)))))));
        __Vtemp_68[16U] = (((0x003ffffcU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[0U] 
                                            << 2U)) 
                            | (3U & vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[16U])) 
                           | (0xffc00000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[0U] 
                                             << 2U)));
        __Vtemp_68[17U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[0U] 
                             >> 0x0000001eU) | (0x003ffffcU 
                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[1U] 
                                                   << 2U))) 
                           | (0xffc00000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[1U] 
                                             << 2U)));
        __Vtemp_68[18U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[1U] 
                             >> 0x0000001eU) | (0x003ffffcU 
                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[2U] 
                                                   << 2U))) 
                           | (0xffc00000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[2U] 
                                             << 2U)));
        __Vtemp_68[19U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[0U] 
                             << 0x00000015U) | (0x001e0000U 
                                                & vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[19U])) 
                           | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[2U] 
                               >> 0x0000001eU) | (0x003ffffcU 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[3U] 
                                                     << 2U))));
        __Vtemp_68[20U] = ((0x0001ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[0U] 
                                           >> 0x0000000bU)) 
                           | ((0x001e0000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[0U] 
                                              >> 0x0000000bU)) 
                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[1U] 
                                 << 0x00000015U)));
        __Vtemp_68[21U] = ((0x0001ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[1U] 
                                           >> 0x0000000bU)) 
                           | ((0x001e0000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[1U] 
                                              >> 0x0000000bU)) 
                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[2U] 
                                 << 0x00000015U)));
        __Vtemp_68[22U] = ((0x0001ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[2U] 
                                           >> 0x0000000bU)) 
                           | ((0x001e0000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[2U] 
                                              >> 0x0000000bU)) 
                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[3U] 
                                 << 0x00000015U)));
        __Vtemp_68[23U] = ((0x0001ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[3U] 
                                           >> 0x0000000bU)) 
                           | (0x001e0000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[3U] 
                                             >> 0x0000000bU)));
        __Vtemp_84[0U] = vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[0U];
        __Vtemp_84[1U] = vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[1U];
        __Vtemp_84[2U] = vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[2U];
        __Vtemp_84[3U] = vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[3U];
        __Vtemp_84[4U] = vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[4U];
        __Vtemp_84[5U] = vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[5U];
        __Vtemp_84[6U] = vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[6U];
        __Vtemp_84[7U] = vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[7U];
        __Vtemp_84[8U] = vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[8U];
        __Vtemp_84[9U] = vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[9U];
        __Vtemp_84[10U] = vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[10U];
        __Vtemp_84[11U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[0U] 
                            << 0x00000019U) | (0x01ffffffU 
                                               & vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[11U]));
        __Vtemp_84[12U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[0U] 
                            >> 7U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[1U] 
                                      << 0x00000019U));
        __Vtemp_84[13U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[1U] 
                            >> 7U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[2U] 
                                      << 0x00000019U));
        __Vtemp_84[14U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[2U] 
                            >> 7U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[3U] 
                                      << 0x00000019U));
        __Vtemp_84[15U] = ((0xffc00000U & vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[15U]) 
                           | ((0x003ff000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[3U] 
                                              >> 7U)) 
                              | ((0x00000c00U & vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[15U]) 
                                 | ((0x00000300U & 
                                     (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[3U] 
                                      >> 7U)) | ((0x000000fcU 
                                                  & vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[15U]) 
                                                 | (3U 
                                                    & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32[3U] 
                                                       >> 7U)))))));
        __Vtemp_84[16U] = (((0x003ffffcU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[0U] 
                                            << 2U)) 
                            | (3U & vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[16U])) 
                           | (0xffc00000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[0U] 
                                             << 2U)));
        __Vtemp_84[17U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[0U] 
                             >> 0x0000001eU) | (0x003ffffcU 
                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[1U] 
                                                   << 2U))) 
                           | (0xffc00000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[1U] 
                                             << 2U)));
        __Vtemp_84[18U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[1U] 
                             >> 0x0000001eU) | (0x003ffffcU 
                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[2U] 
                                                   << 2U))) 
                           | (0xffc00000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[2U] 
                                             << 2U)));
        __Vtemp_84[19U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[0U] 
                             << 0x00000015U) | (0x001e0000U 
                                                & vlSelfRef.__VdfgSynthAssign_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_11[19U])) 
                           | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[2U] 
                               >> 0x0000001eU) | (0x003ffffcU 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60[3U] 
                                                     << 2U))));
        __Vtemp_84[20U] = ((0x0001ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[0U] 
                                           >> 0x0000000bU)) 
                           | ((0x001e0000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[0U] 
                                              >> 0x0000000bU)) 
                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[1U] 
                                 << 0x00000015U)));
        __Vtemp_84[21U] = ((0x0001ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[1U] 
                                           >> 0x0000000bU)) 
                           | ((0x001e0000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[1U] 
                                              >> 0x0000000bU)) 
                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[2U] 
                                 << 0x00000015U)));
        __Vtemp_84[22U] = ((0x0001ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[2U] 
                                           >> 0x0000000bU)) 
                           | ((0x001e0000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[2U] 
                                              >> 0x0000000bU)) 
                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[3U] 
                                 << 0x00000015U)));
        __Vtemp_84[23U] = ((0x0001ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[3U] 
                                           >> 0x0000000bU)) 
                           | (0x001e0000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12[3U] 
                                             >> 0x0000000bU)));
    } else {
        __Vtemp_68[0U] = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[0U];
        __Vtemp_68[1U] = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[1U];
        __Vtemp_68[2U] = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[2U];
        __Vtemp_68[3U] = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[3U];
        __Vtemp_68[4U] = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[4U];
        __Vtemp_84[5U] = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[5U];
        __Vtemp_84[6U] = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[6U];
        __Vtemp_84[7U] = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[7U];
        __Vtemp_84[8U] = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[8U];
        __Vtemp_84[9U] = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[9U];
        __Vtemp_84[10U] = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[10U];
        __Vtemp_84[11U] = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[11U];
        __Vtemp_84[12U] = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[12U];
        __Vtemp_84[13U] = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[13U];
        __Vtemp_84[14U] = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[14U];
        __Vtemp_84[15U] = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[15U];
        __Vtemp_84[16U] = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[16U];
        __Vtemp_84[17U] = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[17U];
        __Vtemp_84[18U] = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[18U];
        __Vtemp_84[19U] = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[19U];
        __Vtemp_84[20U] = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[20U];
        __Vtemp_84[21U] = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[21U];
        __Vtemp_84[22U] = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[22U];
        __Vtemp_84[23U] = vlSelfRef.__VdfgSynthJoin_boom_core__DOT____Vcellout__rename__rn2_uops_h6e95ff9d_0_6[23U];
    }
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[0U] 
        = __Vtemp_68[0U];
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[1U] 
        = __Vtemp_68[1U];
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[2U] 
        = __Vtemp_68[2U];
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[3U] 
        = __Vtemp_68[3U];
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[4U] 
        = ((0xe0000000U & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[4U]) 
           | (0x1fffffffU & __Vtemp_68[4U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[4U] 
        = ((0x1fffffffU & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[4U]) 
           | ((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail_idx) 
              << 0x0000001dU));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[5U] 
        = ((0xfffffff8U & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[5U]) 
           | ((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail_idx) 
              >> 3U));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[5U] 
        = ((7U & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[5U]) 
           | (0xfffffff8U & __Vtemp_84[5U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[6U] 
        = ((7U & __Vtemp_84[6U]) | (0xfffffff8U & __Vtemp_84[6U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[7U] 
        = ((7U & __Vtemp_84[7U]) | (0xfffffff8U & __Vtemp_84[7U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[8U] 
        = ((7U & __Vtemp_84[8U]) | (0xfffffff8U & __Vtemp_84[8U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[9U] 
        = ((7U & __Vtemp_84[9U]) | (0xfffffff8U & __Vtemp_84[9U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[10U] 
        = ((7U & __Vtemp_84[10U]) | (0xfffffff8U & __Vtemp_84[10U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[11U] 
        = ((7U & __Vtemp_84[11U]) | (0xfffffff8U & __Vtemp_84[11U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[12U] 
        = ((7U & __Vtemp_84[12U]) | (0xfffffff8U & __Vtemp_84[12U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[13U] 
        = ((7U & __Vtemp_84[13U]) | (0xfffffff8U & __Vtemp_84[13U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[14U] 
        = ((7U & __Vtemp_84[14U]) | (0xfffffff8U & __Vtemp_84[14U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[15U] 
        = ((7U & __Vtemp_84[15U]) | (0xfffffff8U & __Vtemp_84[15U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[16U] 
        = ((7U & __Vtemp_84[16U]) | (0xfffffff8U & __Vtemp_84[16U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[17U] 
        = ((7U & __Vtemp_84[17U]) | (0xfffffff8U & __Vtemp_84[17U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[18U] 
        = ((7U & __Vtemp_84[18U]) | (0xfffffff8U & __Vtemp_84[18U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[19U] 
        = ((7U & __Vtemp_84[19U]) | (0xfffffff8U & __Vtemp_84[19U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[20U] 
        = ((7U & __Vtemp_84[20U]) | (0xfffffff8U & __Vtemp_84[20U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[21U] 
        = ((7U & __Vtemp_84[21U]) | (0xfffffff8U & __Vtemp_84[21U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[22U] 
        = ((7U & __Vtemp_84[22U]) | (0xfffffff8U & __Vtemp_84[22U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[23U] 
        = (0x0003ffffU & ((7U & __Vtemp_84[23U]) | 
                          (0x0003fff8U & __Vtemp_84[23U])));
    __VdfgRegularize_h6e95ff9d_0_221[0U] = (IData)(
                                                   (0x03ffffffffffffffULL 
                                                    & (((QData)((IData)(__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[0U])))));
    __VdfgRegularize_h6e95ff9d_0_221[1U] = ((0xf8000000U 
                                             & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[1U]) 
                                            | (IData)(
                                                      ((0x03ffffffffffffffULL 
                                                        & (((QData)((IData)(__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[1U])) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[0U])))) 
                                                       >> 0x00000020U)));
    __VdfgRegularize_h6e95ff9d_0_221[2U] = ((0x07ffffffU 
                                             & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[2U]) 
                                            | (0xf8000000U 
                                               & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[2U]));
    __VdfgRegularize_h6e95ff9d_0_221[3U] = ((0x07ffffffU 
                                             & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[3U]) 
                                            | (0xf8000000U 
                                               & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[3U]));
    __VdfgRegularize_h6e95ff9d_0_221[4U] = ((0xe0000000U 
                                             & __VdfgRegularize_h6e95ff9d_0_221[4U]) 
                                            | ((0x07ffffffU 
                                                & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[4U]) 
                                               | (0x18000000U 
                                                  & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[4U])));
    __VdfgRegularize_h6e95ff9d_0_221[4U] = ((0x1fffffffU 
                                             & __VdfgRegularize_h6e95ff9d_0_221[4U]) 
                                            | (((0xffffffc0U 
                                                 & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[5U] 
                                                    << 3U)) 
                                                | (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail_idx)) 
                                               << 0x0000001dU));
    __VdfgRegularize_h6e95ff9d_0_221[5U] = ((((0xffffffc0U 
                                               & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[5U] 
                                                  << 3U)) 
                                              | (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail_idx)) 
                                             >> 3U) 
                                            | ((((0x00000038U 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[6U] 
                                                     << 3U)) 
                                                 | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[5U] 
                                                    >> 0x0000001dU)) 
                                                | (0xffffffc0U 
                                                   & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[6U] 
                                                      << 3U))) 
                                               << 0x0000001dU));
    __VdfgRegularize_h6e95ff9d_0_221[6U] = (((((0x00000038U 
                                                & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[6U] 
                                                   << 3U)) 
                                               | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[5U] 
                                                  >> 0x0000001dU)) 
                                              | (0xffffffc0U 
                                                 & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[6U] 
                                                    << 3U))) 
                                             >> 3U) 
                                            | ((((0x00000038U 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[7U] 
                                                     << 3U)) 
                                                 | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[6U] 
                                                    >> 0x0000001dU)) 
                                                | (0xffffffc0U 
                                                   & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[7U] 
                                                      << 3U))) 
                                               << 0x0000001dU));
    __VdfgRegularize_h6e95ff9d_0_221[7U] = (((((0x00000038U 
                                                & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[7U] 
                                                   << 3U)) 
                                               | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[6U] 
                                                  >> 0x0000001dU)) 
                                              | (0xffffffc0U 
                                                 & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[7U] 
                                                    << 3U))) 
                                             >> 3U) 
                                            | ((((0x00000038U 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[8U] 
                                                     << 3U)) 
                                                 | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[7U] 
                                                    >> 0x0000001dU)) 
                                                | (0xffffffc0U 
                                                   & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[8U] 
                                                      << 3U))) 
                                               << 0x0000001dU));
    __VdfgRegularize_h6e95ff9d_0_221[8U] = (((((0x00000038U 
                                                & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[8U] 
                                                   << 3U)) 
                                               | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[7U] 
                                                  >> 0x0000001dU)) 
                                              | (0xffffffc0U 
                                                 & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[8U] 
                                                    << 3U))) 
                                             >> 3U) 
                                            | ((((0x00000038U 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[9U] 
                                                     << 3U)) 
                                                 | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[8U] 
                                                    >> 0x0000001dU)) 
                                                | (0xffffffc0U 
                                                   & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[9U] 
                                                      << 3U))) 
                                               << 0x0000001dU));
    __VdfgRegularize_h6e95ff9d_0_221[9U] = (((((0x00000038U 
                                                & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[9U] 
                                                   << 3U)) 
                                               | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[8U] 
                                                  >> 0x0000001dU)) 
                                              | (0xffffffc0U 
                                                 & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[9U] 
                                                    << 3U))) 
                                             >> 3U) 
                                            | ((((0x00000038U 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[10U] 
                                                     << 3U)) 
                                                 | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[9U] 
                                                    >> 0x0000001dU)) 
                                                | (0xffffffc0U 
                                                   & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[10U] 
                                                      << 3U))) 
                                               << 0x0000001dU));
    __VdfgRegularize_h6e95ff9d_0_221[10U] = (((((0x00000038U 
                                                 & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[10U] 
                                                    << 3U)) 
                                                | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[9U] 
                                                   >> 0x0000001dU)) 
                                               | (0xffffffc0U 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[10U] 
                                                     << 3U))) 
                                              >> 3U) 
                                             | ((((0x00000038U 
                                                   & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[11U] 
                                                      << 3U)) 
                                                  | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[10U] 
                                                     >> 0x0000001dU)) 
                                                 | (0xffffffc0U 
                                                    & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[11U] 
                                                       << 3U))) 
                                                << 0x0000001dU));
    __VdfgRegularize_h6e95ff9d_0_221[11U] = (((((0x00000038U 
                                                 & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[11U] 
                                                    << 3U)) 
                                                | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[10U] 
                                                   >> 0x0000001dU)) 
                                               | (0xffffffc0U 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[11U] 
                                                     << 3U))) 
                                              >> 3U) 
                                             | ((((0x00000038U 
                                                   & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[12U] 
                                                      << 3U)) 
                                                  | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[11U] 
                                                     >> 0x0000001dU)) 
                                                 | (0xffffffc0U 
                                                    & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[12U] 
                                                       << 3U))) 
                                                << 0x0000001dU));
    __VdfgRegularize_h6e95ff9d_0_221[12U] = (((((0x00000038U 
                                                 & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[12U] 
                                                    << 3U)) 
                                                | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[11U] 
                                                   >> 0x0000001dU)) 
                                               | (0xffffffc0U 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[12U] 
                                                     << 3U))) 
                                              >> 3U) 
                                             | ((((0x00000038U 
                                                   & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[13U] 
                                                      << 3U)) 
                                                  | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[12U] 
                                                     >> 0x0000001dU)) 
                                                 | (0xffffffc0U 
                                                    & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[13U] 
                                                       << 3U))) 
                                                << 0x0000001dU));
    __VdfgRegularize_h6e95ff9d_0_221[13U] = (((((0x00000038U 
                                                 & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[13U] 
                                                    << 3U)) 
                                                | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[12U] 
                                                   >> 0x0000001dU)) 
                                               | (0xffffffc0U 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[13U] 
                                                     << 3U))) 
                                              >> 3U) 
                                             | ((((0x00000038U 
                                                   & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[14U] 
                                                      << 3U)) 
                                                  | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[13U] 
                                                     >> 0x0000001dU)) 
                                                 | (0xffffffc0U 
                                                    & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[14U] 
                                                       << 3U))) 
                                                << 0x0000001dU));
    __VdfgRegularize_h6e95ff9d_0_221[14U] = (((((0x00000038U 
                                                 & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[14U] 
                                                    << 3U)) 
                                                | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[13U] 
                                                   >> 0x0000001dU)) 
                                               | (0xffffffc0U 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[14U] 
                                                     << 3U))) 
                                              >> 3U) 
                                             | ((((0x00000038U 
                                                   & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[15U] 
                                                      << 3U)) 
                                                  | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[14U] 
                                                     >> 0x0000001dU)) 
                                                 | (0xffffffc0U 
                                                    & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[15U] 
                                                       << 3U))) 
                                                << 0x0000001dU));
    __VdfgRegularize_h6e95ff9d_0_221[15U] = (((((0x00000038U 
                                                 & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[15U] 
                                                    << 3U)) 
                                                | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[14U] 
                                                   >> 0x0000001dU)) 
                                               | (0xffffffc0U 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[15U] 
                                                     << 3U))) 
                                              >> 3U) 
                                             | ((((0x00000038U 
                                                   & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[16U] 
                                                      << 3U)) 
                                                  | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[15U] 
                                                     >> 0x0000001dU)) 
                                                 | (0xffffffc0U 
                                                    & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[16U] 
                                                       << 3U))) 
                                                << 0x0000001dU));
    __VdfgRegularize_h6e95ff9d_0_221[16U] = (((((0x00000038U 
                                                 & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[16U] 
                                                    << 3U)) 
                                                | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[15U] 
                                                   >> 0x0000001dU)) 
                                               | (0xffffffc0U 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[16U] 
                                                     << 3U))) 
                                              >> 3U) 
                                             | ((((0x00000038U 
                                                   & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[17U] 
                                                      << 3U)) 
                                                  | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[16U] 
                                                     >> 0x0000001dU)) 
                                                 | (0xffffffc0U 
                                                    & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[17U] 
                                                       << 3U))) 
                                                << 0x0000001dU));
    __VdfgRegularize_h6e95ff9d_0_221[17U] = (((((0x00000038U 
                                                 & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[17U] 
                                                    << 3U)) 
                                                | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[16U] 
                                                   >> 0x0000001dU)) 
                                               | (0xffffffc0U 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[17U] 
                                                     << 3U))) 
                                              >> 3U) 
                                             | ((((0x00000038U 
                                                   & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[18U] 
                                                      << 3U)) 
                                                  | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[17U] 
                                                     >> 0x0000001dU)) 
                                                 | (0xffffffc0U 
                                                    & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[18U] 
                                                       << 3U))) 
                                                << 0x0000001dU));
    __VdfgRegularize_h6e95ff9d_0_221[18U] = (((((0x00000038U 
                                                 & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[18U] 
                                                    << 3U)) 
                                                | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[17U] 
                                                   >> 0x0000001dU)) 
                                               | (0xffffffc0U 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[18U] 
                                                     << 3U))) 
                                              >> 3U) 
                                             | ((((0x00000038U 
                                                   & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[19U] 
                                                      << 3U)) 
                                                  | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[18U] 
                                                     >> 0x0000001dU)) 
                                                 | (0xffffffc0U 
                                                    & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[19U] 
                                                       << 3U))) 
                                                << 0x0000001dU));
    __VdfgRegularize_h6e95ff9d_0_221[19U] = (((((0x00000038U 
                                                 & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[19U] 
                                                    << 3U)) 
                                                | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[18U] 
                                                   >> 0x0000001dU)) 
                                               | (0xffffffc0U 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[19U] 
                                                     << 3U))) 
                                              >> 3U) 
                                             | ((((0x00000038U 
                                                   & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[20U] 
                                                      << 3U)) 
                                                  | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[19U] 
                                                     >> 0x0000001dU)) 
                                                 | (0xffffffc0U 
                                                    & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[20U] 
                                                       << 3U))) 
                                                << 0x0000001dU));
    __VdfgRegularize_h6e95ff9d_0_221[20U] = (((((0x00000038U 
                                                 & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[20U] 
                                                    << 3U)) 
                                                | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[19U] 
                                                   >> 0x0000001dU)) 
                                               | (0xffffffc0U 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[20U] 
                                                     << 3U))) 
                                              >> 3U) 
                                             | ((((0x00000038U 
                                                   & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[21U] 
                                                      << 3U)) 
                                                  | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[20U] 
                                                     >> 0x0000001dU)) 
                                                 | (0xffffffc0U 
                                                    & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[21U] 
                                                       << 3U))) 
                                                << 0x0000001dU));
    __VdfgRegularize_h6e95ff9d_0_221[21U] = (((((0x00000038U 
                                                 & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[21U] 
                                                    << 3U)) 
                                                | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[20U] 
                                                   >> 0x0000001dU)) 
                                               | (0xffffffc0U 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[21U] 
                                                     << 3U))) 
                                              >> 3U) 
                                             | ((((0x00000038U 
                                                   & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[22U] 
                                                      << 3U)) 
                                                  | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[21U] 
                                                     >> 0x0000001dU)) 
                                                 | (0xffffffc0U 
                                                    & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[22U] 
                                                       << 3U))) 
                                                << 0x0000001dU));
    __VdfgRegularize_h6e95ff9d_0_221[22U] = (((((0x00000038U 
                                                 & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[22U] 
                                                    << 3U)) 
                                                | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[21U] 
                                                   >> 0x0000001dU)) 
                                               | (0xffffffc0U 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[22U] 
                                                     << 3U))) 
                                              >> 3U) 
                                             | ((((0x00000038U 
                                                   & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[23U] 
                                                      << 3U)) 
                                                  | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[22U] 
                                                     >> 0x0000001dU)) 
                                                 | (0x001fffc0U 
                                                    & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[23U] 
                                                       << 3U))) 
                                                << 0x0000001dU));
    __VdfgRegularize_h6e95ff9d_0_221[23U] = (0x0003ffffU 
                                             & ((((0x00000038U 
                                                   & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[23U] 
                                                      << 3U)) 
                                                  | (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[22U] 
                                                     >> 0x0000001dU)) 
                                                 | (0x001fffc0U 
                                                    & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_1[23U] 
                                                       << 3U))) 
                                                >> 3U));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[0U] 
        = (IData)((((QData)((IData)((1U & (IData)(vlSelfRef.boom_core__DOT__rn2_mask)))) 
                    << 0x0000003aU) | (0x03ffffffffffffffULL 
                                       & (((QData)((IData)(__VdfgRegularize_h6e95ff9d_0_221[1U])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(__VdfgRegularize_h6e95ff9d_0_221[0U]))))));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[1U] 
        = ((0xf8000000U & __VdfgRegularize_h6e95ff9d_0_221[1U]) 
           | (IData)(((((QData)((IData)((1U & (IData)(vlSelfRef.boom_core__DOT__rn2_mask)))) 
                        << 0x0000003aU) | (0x03ffffffffffffffULL 
                                           & (((QData)((IData)(__VdfgRegularize_h6e95ff9d_0_221[1U])) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(__VdfgRegularize_h6e95ff9d_0_221[0U]))))) 
                      >> 0x00000020U)));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[2U] 
        = ((0x07ffffffU & __VdfgRegularize_h6e95ff9d_0_221[2U]) 
           | (0xf8000000U & __VdfgRegularize_h6e95ff9d_0_221[2U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[3U] 
        = ((0x07ffffffU & __VdfgRegularize_h6e95ff9d_0_221[3U]) 
           | (0xf8000000U & __VdfgRegularize_h6e95ff9d_0_221[3U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[4U] 
        = ((0x07ffffffU & __VdfgRegularize_h6e95ff9d_0_221[4U]) 
           | (0xf8000000U & __VdfgRegularize_h6e95ff9d_0_221[4U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[5U] 
        = ((0x07ffffffU & __VdfgRegularize_h6e95ff9d_0_221[5U]) 
           | (0xf8000000U & __VdfgRegularize_h6e95ff9d_0_221[5U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[6U] 
        = ((0x07ffffffU & __VdfgRegularize_h6e95ff9d_0_221[6U]) 
           | (0xf8000000U & __VdfgRegularize_h6e95ff9d_0_221[6U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[7U] 
        = ((0x07ffffffU & __VdfgRegularize_h6e95ff9d_0_221[7U]) 
           | (0xf8000000U & __VdfgRegularize_h6e95ff9d_0_221[7U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[8U] 
        = ((0x07ffffffU & __VdfgRegularize_h6e95ff9d_0_221[8U]) 
           | (0xf8000000U & __VdfgRegularize_h6e95ff9d_0_221[8U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[9U] 
        = ((0x07ffffffU & __VdfgRegularize_h6e95ff9d_0_221[9U]) 
           | (0xf8000000U & __VdfgRegularize_h6e95ff9d_0_221[9U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[10U] 
        = ((0x07ffffffU & __VdfgRegularize_h6e95ff9d_0_221[10U]) 
           | (0xf8000000U & __VdfgRegularize_h6e95ff9d_0_221[10U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[11U] 
        = ((0x07ffffffU & __VdfgRegularize_h6e95ff9d_0_221[11U]) 
           | (0xf8000000U & __VdfgRegularize_h6e95ff9d_0_221[11U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[12U] 
        = ((0x07ffffffU & __VdfgRegularize_h6e95ff9d_0_221[12U]) 
           | (0xf8000000U & __VdfgRegularize_h6e95ff9d_0_221[12U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[13U] 
        = ((0x07ffffffU & __VdfgRegularize_h6e95ff9d_0_221[13U]) 
           | (0xf8000000U & __VdfgRegularize_h6e95ff9d_0_221[13U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[14U] 
        = ((0x07ffffffU & __VdfgRegularize_h6e95ff9d_0_221[14U]) 
           | (0xf8000000U & __VdfgRegularize_h6e95ff9d_0_221[14U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[15U] 
        = ((0x07ffffffU & __VdfgRegularize_h6e95ff9d_0_221[15U]) 
           | (0xf8000000U & __VdfgRegularize_h6e95ff9d_0_221[15U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[16U] 
        = ((0x07ffffffU & __VdfgRegularize_h6e95ff9d_0_221[16U]) 
           | (0xf8000000U & __VdfgRegularize_h6e95ff9d_0_221[16U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[17U] 
        = ((0x07ffffffU & __VdfgRegularize_h6e95ff9d_0_221[17U]) 
           | (0xf8000000U & __VdfgRegularize_h6e95ff9d_0_221[17U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[18U] 
        = ((0x07ffffffU & __VdfgRegularize_h6e95ff9d_0_221[18U]) 
           | (0xf8000000U & __VdfgRegularize_h6e95ff9d_0_221[18U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[19U] 
        = ((0x07ffffffU & __VdfgRegularize_h6e95ff9d_0_221[19U]) 
           | (0xf8000000U & __VdfgRegularize_h6e95ff9d_0_221[19U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[20U] 
        = ((0x07ffffffU & __VdfgRegularize_h6e95ff9d_0_221[20U]) 
           | (0xf8000000U & __VdfgRegularize_h6e95ff9d_0_221[20U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[21U] 
        = ((0x07ffffffU & __VdfgRegularize_h6e95ff9d_0_221[21U]) 
           | (0xf8000000U & __VdfgRegularize_h6e95ff9d_0_221[21U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[22U] 
        = ((0x07ffffffU & __VdfgRegularize_h6e95ff9d_0_221[22U]) 
           | (0xf8000000U & __VdfgRegularize_h6e95ff9d_0_221[22U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[23U] 
        = (0x0003ffffU & __VdfgRegularize_h6e95ff9d_0_221[23U]);
    __VdfgRegularize_h6e95ff9d_0_222[0U] = __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[0U];
    __VdfgRegularize_h6e95ff9d_0_222[1U] = __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[1U];
    __VdfgRegularize_h6e95ff9d_0_222[2U] = __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[2U];
    __VdfgRegularize_h6e95ff9d_0_222[3U] = __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[3U];
    __VdfgRegularize_h6e95ff9d_0_222[4U] = (((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail_idx) 
                                             << 0x0000001dU) 
                                            | (0x1fffffffU 
                                               & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[4U]));
    __VdfgRegularize_h6e95ff9d_0_222[5U] = ((0xfffffff8U 
                                             & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[5U]) 
                                            | ((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail_idx) 
                                               >> 3U));
    __VdfgRegularize_h6e95ff9d_0_222[6U] = ((7U & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[6U]) 
                                            | (0xfffffff8U 
                                               & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[6U]));
    __VdfgRegularize_h6e95ff9d_0_222[7U] = ((7U & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[7U]) 
                                            | (0xfffffff8U 
                                               & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[7U]));
    __VdfgRegularize_h6e95ff9d_0_222[8U] = ((7U & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[8U]) 
                                            | (0xfffffff8U 
                                               & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[8U]));
    __VdfgRegularize_h6e95ff9d_0_222[9U] = ((7U & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[9U]) 
                                            | (0xfffffff8U 
                                               & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[9U]));
    __VdfgRegularize_h6e95ff9d_0_222[10U] = ((7U & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[10U]) 
                                             | (0xfffffff8U 
                                                & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[10U]));
    __VdfgRegularize_h6e95ff9d_0_222[11U] = ((7U & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[11U]) 
                                             | (0xfffffff8U 
                                                & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[11U]));
    __VdfgRegularize_h6e95ff9d_0_222[12U] = ((7U & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[12U]) 
                                             | (0xfffffff8U 
                                                & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[12U]));
    __VdfgRegularize_h6e95ff9d_0_222[13U] = ((7U & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[13U]) 
                                             | (0xfffffff8U 
                                                & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[13U]));
    __VdfgRegularize_h6e95ff9d_0_222[14U] = ((7U & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[14U]) 
                                             | (0xfffffff8U 
                                                & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[14U]));
    __VdfgRegularize_h6e95ff9d_0_222[15U] = ((7U & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[15U]) 
                                             | (0xfffffff8U 
                                                & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[15U]));
    __VdfgRegularize_h6e95ff9d_0_222[16U] = ((0xffc00000U 
                                              & __VdfgRegularize_h6e95ff9d_0_222[16U]) 
                                             | ((7U 
                                                 & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[16U]) 
                                                | (0x003ffff8U 
                                                   & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[16U])));
    __VdfgRegularize_h6e95ff9d_0_222[16U] = ((0x003fffffU 
                                              & __VdfgRegularize_h6e95ff9d_0_222[16U]) 
                                             | (0xf0000000U 
                                                & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[16U]));
    __VdfgRegularize_h6e95ff9d_0_222[17U] = ((0x003fffffU 
                                              & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[17U]) 
                                             | (((0x0000003fU 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[17U] 
                                                     >> 0x00000016U)) 
                                                 | ((__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[18U] 
                                                     << 0x0000000aU) 
                                                    | (0x000003c0U 
                                                       & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[17U] 
                                                          >> 0x00000016U)))) 
                                                << 0x00000016U));
    __VdfgRegularize_h6e95ff9d_0_222[18U] = ((((0x0000003fU 
                                                & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[17U] 
                                                   >> 0x00000016U)) 
                                               | ((__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[18U] 
                                                   << 0x0000000aU) 
                                                  | (0x000003c0U 
                                                     & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[17U] 
                                                        >> 0x00000016U)))) 
                                              >> 0x0000000aU) 
                                             | (((0x0000003fU 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[18U] 
                                                     >> 0x00000016U)) 
                                                 | ((__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[19U] 
                                                     << 0x0000000aU) 
                                                    | (0x000003c0U 
                                                       & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[18U] 
                                                          >> 0x00000016U)))) 
                                                << 0x00000016U));
    __VdfgRegularize_h6e95ff9d_0_222[19U] = ((((0x0000003fU 
                                                & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[18U] 
                                                   >> 0x00000016U)) 
                                               | ((__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[19U] 
                                                   << 0x0000000aU) 
                                                  | (0x000003c0U 
                                                     & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[18U] 
                                                        >> 0x00000016U)))) 
                                              >> 0x0000000aU) 
                                             | (((0x0000003fU 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[19U] 
                                                     >> 0x00000016U)) 
                                                 | ((__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[20U] 
                                                     << 0x0000000aU) 
                                                    | (0x000003c0U 
                                                       & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[19U] 
                                                          >> 0x00000016U)))) 
                                                << 0x00000016U));
    __VdfgRegularize_h6e95ff9d_0_222[20U] = ((((0x0000003fU 
                                                & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[19U] 
                                                   >> 0x00000016U)) 
                                               | ((__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[20U] 
                                                   << 0x0000000aU) 
                                                  | (0x000003c0U 
                                                     & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[19U] 
                                                        >> 0x00000016U)))) 
                                              >> 0x0000000aU) 
                                             | (((0x0000003fU 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[20U] 
                                                     >> 0x00000016U)) 
                                                 | ((__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[21U] 
                                                     << 0x0000000aU) 
                                                    | (0x000003c0U 
                                                       & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[20U] 
                                                          >> 0x00000016U)))) 
                                                << 0x00000016U));
    __VdfgRegularize_h6e95ff9d_0_222[21U] = ((((0x0000003fU 
                                                & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[20U] 
                                                   >> 0x00000016U)) 
                                               | ((__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[21U] 
                                                   << 0x0000000aU) 
                                                  | (0x000003c0U 
                                                     & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[20U] 
                                                        >> 0x00000016U)))) 
                                              >> 0x0000000aU) 
                                             | (((0x0000003fU 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[21U] 
                                                     >> 0x00000016U)) 
                                                 | ((__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[22U] 
                                                     << 0x0000000aU) 
                                                    | (0x000003c0U 
                                                       & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[21U] 
                                                          >> 0x00000016U)))) 
                                                << 0x00000016U));
    __VdfgRegularize_h6e95ff9d_0_222[22U] = ((((0x0000003fU 
                                                & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[21U] 
                                                   >> 0x00000016U)) 
                                               | ((__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[22U] 
                                                   << 0x0000000aU) 
                                                  | (0x000003c0U 
                                                     & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[21U] 
                                                        >> 0x00000016U)))) 
                                              >> 0x0000000aU) 
                                             | (((0x0000003fU 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[22U] 
                                                     >> 0x00000016U)) 
                                                 | (0x0fffffc0U 
                                                    & ((__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[23U] 
                                                        << 0x0000000aU) 
                                                       | (0x000003c0U 
                                                          & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[22U] 
                                                             >> 0x00000016U))))) 
                                                << 0x00000016U));
    __VdfgRegularize_h6e95ff9d_0_222[23U] = (0x0003ffffU 
                                             & (((0x0000003fU 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[22U] 
                                                     >> 0x00000016U)) 
                                                 | (0x0fffffc0U 
                                                    & ((__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[23U] 
                                                        << 0x0000000aU) 
                                                       | (0x000003c0U 
                                                          & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_2[22U] 
                                                             >> 0x00000016U))))) 
                                                >> 0x0000000aU));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[0U] 
        = __VdfgRegularize_h6e95ff9d_0_222[0U];
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[1U] 
        = __VdfgRegularize_h6e95ff9d_0_222[1U];
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[2U] 
        = __VdfgRegularize_h6e95ff9d_0_222[2U];
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[3U] 
        = __VdfgRegularize_h6e95ff9d_0_222[3U];
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[4U] 
        = __VdfgRegularize_h6e95ff9d_0_222[4U];
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[5U] 
        = __VdfgRegularize_h6e95ff9d_0_222[5U];
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[6U] 
        = __VdfgRegularize_h6e95ff9d_0_222[6U];
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[7U] 
        = __VdfgRegularize_h6e95ff9d_0_222[7U];
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[8U] 
        = __VdfgRegularize_h6e95ff9d_0_222[8U];
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[9U] 
        = __VdfgRegularize_h6e95ff9d_0_222[9U];
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[10U] 
        = __VdfgRegularize_h6e95ff9d_0_222[10U];
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[11U] 
        = __VdfgRegularize_h6e95ff9d_0_222[11U];
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[12U] 
        = __VdfgRegularize_h6e95ff9d_0_222[12U];
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[13U] 
        = __VdfgRegularize_h6e95ff9d_0_222[13U];
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[14U] 
        = __VdfgRegularize_h6e95ff9d_0_222[14U];
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[15U] 
        = __VdfgRegularize_h6e95ff9d_0_222[15U];
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[16U] 
        = ((0xf0000000U & __VdfgRegularize_h6e95ff9d_0_222[16U]) 
           | ((0x0fc00000U & (((IData)(1U) + (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail_idx)) 
                              << 0x00000016U)) | (0x003fffffU 
                                                  & __VdfgRegularize_h6e95ff9d_0_222[16U])));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[17U] 
        = ((0x0fffffffU & __VdfgRegularize_h6e95ff9d_0_222[17U]) 
           | (0xf0000000U & __VdfgRegularize_h6e95ff9d_0_222[17U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[18U] 
        = ((0x0fffffffU & __VdfgRegularize_h6e95ff9d_0_222[18U]) 
           | (0xf0000000U & __VdfgRegularize_h6e95ff9d_0_222[18U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[19U] 
        = ((0x0fffffffU & __VdfgRegularize_h6e95ff9d_0_222[19U]) 
           | (0xf0000000U & __VdfgRegularize_h6e95ff9d_0_222[19U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[20U] 
        = ((0x0fffffffU & __VdfgRegularize_h6e95ff9d_0_222[20U]) 
           | (0xf0000000U & __VdfgRegularize_h6e95ff9d_0_222[20U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[21U] 
        = ((0x0fffffffU & __VdfgRegularize_h6e95ff9d_0_222[21U]) 
           | (0xf0000000U & __VdfgRegularize_h6e95ff9d_0_222[21U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[22U] 
        = ((0x0fffffffU & __VdfgRegularize_h6e95ff9d_0_222[22U]) 
           | (0xf0000000U & __VdfgRegularize_h6e95ff9d_0_222[22U]));
    __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[23U] 
        = (0x0003ffffU & __VdfgRegularize_h6e95ff9d_0_222[23U]);
    __VdfgRegularize_h6e95ff9d_0_223[0U] = __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[0U];
    __VdfgRegularize_h6e95ff9d_0_223[1U] = __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[1U];
    __VdfgRegularize_h6e95ff9d_0_223[2U] = __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[2U];
    __VdfgRegularize_h6e95ff9d_0_223[3U] = __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[3U];
    __VdfgRegularize_h6e95ff9d_0_223[4U] = (((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail_idx) 
                                             << 0x0000001dU) 
                                            | (0x1fffffffU 
                                               & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[4U]));
    __VdfgRegularize_h6e95ff9d_0_223[5U] = ((0xfffffff8U 
                                             & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[5U]) 
                                            | ((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail_idx) 
                                               >> 3U));
    __VdfgRegularize_h6e95ff9d_0_223[6U] = ((7U & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[6U]) 
                                            | (0xfffffff8U 
                                               & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[6U]));
    __VdfgRegularize_h6e95ff9d_0_223[7U] = ((7U & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[7U]) 
                                            | (0xfffffff8U 
                                               & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[7U]));
    __VdfgRegularize_h6e95ff9d_0_223[8U] = ((7U & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[8U]) 
                                            | (0xfffffff8U 
                                               & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[8U]));
    __VdfgRegularize_h6e95ff9d_0_223[9U] = ((7U & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[9U]) 
                                            | (0xfffffff8U 
                                               & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[9U]));
    __VdfgRegularize_h6e95ff9d_0_223[10U] = ((7U & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[10U]) 
                                             | (0xfffffff8U 
                                                & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[10U]));
    __VdfgRegularize_h6e95ff9d_0_223[11U] = ((7U & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[11U]) 
                                             | (0xfffffff8U 
                                                & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[11U]));
    __VdfgRegularize_h6e95ff9d_0_223[12U] = ((7U & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[12U]) 
                                             | (0xfffffff8U 
                                                & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[12U]));
    __VdfgRegularize_h6e95ff9d_0_223[13U] = ((0xfff80000U 
                                              & __VdfgRegularize_h6e95ff9d_0_223[13U]) 
                                             | ((7U 
                                                 & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[13U]) 
                                                | (0x0007fff8U 
                                                   & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[13U])));
    __VdfgRegularize_h6e95ff9d_0_223[13U] = ((0x0007ffffU 
                                              & __VdfgRegularize_h6e95ff9d_0_223[13U]) 
                                             | (0xfff00000U 
                                                & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[13U]));
    __VdfgRegularize_h6e95ff9d_0_223[14U] = ((0x0007ffffU 
                                              & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[14U]) 
                                             | (((1U 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[14U] 
                                                     >> 0x00000013U)) 
                                                 | ((__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[15U] 
                                                     << 0x0000000dU) 
                                                    | (0x00001ffeU 
                                                       & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[14U] 
                                                          >> 0x00000013U)))) 
                                                << 0x00000013U));
    __VdfgRegularize_h6e95ff9d_0_223[15U] = ((((1U 
                                                & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[14U] 
                                                   >> 0x00000013U)) 
                                               | ((__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[15U] 
                                                   << 0x0000000dU) 
                                                  | (0x00001ffeU 
                                                     & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[14U] 
                                                        >> 0x00000013U)))) 
                                              >> 0x0000000dU) 
                                             | (((1U 
                                                  & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[15U] 
                                                     >> 0x00000013U)) 
                                                 | ((__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[16U] 
                                                     << 0x0000000dU) 
                                                    | (0x00001ffeU 
                                                       & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[15U] 
                                                          >> 0x00000013U)))) 
                                                << 0x00000013U));
    __VdfgRegularize_h6e95ff9d_0_223[16U] = ((0xf0000000U 
                                              & __VdfgRegularize_h6e95ff9d_0_223[16U]) 
                                             | ((((1U 
                                                   & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[15U] 
                                                      >> 0x00000013U)) 
                                                  | ((__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[16U] 
                                                      << 0x0000000dU) 
                                                     | (0x00001ffeU 
                                                        & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[15U] 
                                                           >> 0x00000013U)))) 
                                                 >> 0x0000000dU) 
                                                | (((0x000001f8U 
                                                     & (((IData)(1U) 
                                                         + (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail_idx)) 
                                                        << 3U)) 
                                                    | ((1U 
                                                        & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[16U] 
                                                           >> 0x00000013U)) 
                                                       | (6U 
                                                          & (__VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[16U] 
                                                             >> 0x00000013U)))) 
                                                   << 0x00000013U)));
    __VdfgRegularize_h6e95ff9d_0_223[16U] = ((0x0fffffffU 
                                              & __VdfgRegularize_h6e95ff9d_0_223[16U]) 
                                             | (0xf0000000U 
                                                & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[16U]));
    __VdfgRegularize_h6e95ff9d_0_223[17U] = ((0x0fffffffU 
                                              & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[17U]) 
                                             | (0xf0000000U 
                                                & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[17U]));
    __VdfgRegularize_h6e95ff9d_0_223[18U] = ((0x0fffffffU 
                                              & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[18U]) 
                                             | (0xf0000000U 
                                                & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[18U]));
    __VdfgRegularize_h6e95ff9d_0_223[19U] = ((0x0fffffffU 
                                              & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[19U]) 
                                             | (0xf0000000U 
                                                & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[19U]));
    __VdfgRegularize_h6e95ff9d_0_223[20U] = ((0x0fffffffU 
                                              & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[20U]) 
                                             | (0xf0000000U 
                                                & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[20U]));
    __VdfgRegularize_h6e95ff9d_0_223[21U] = ((0x0fffffffU 
                                              & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[21U]) 
                                             | (0xf0000000U 
                                                & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[21U]));
    __VdfgRegularize_h6e95ff9d_0_223[22U] = ((0x0fffffffU 
                                              & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[22U]) 
                                             | (0xf0000000U 
                                                & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[22U]));
    __VdfgRegularize_h6e95ff9d_0_223[23U] = (0x0003ffffU 
                                             & __VdfgSynthAssign_boom_core__DOT__rn2_uops_h6e95ff9d_0_3[23U]);
    vlSelfRef.boom_core__DOT__rn2_uops[0U] = __VdfgRegularize_h6e95ff9d_0_223[0U];
    vlSelfRef.boom_core__DOT__rn2_uops[1U] = __VdfgRegularize_h6e95ff9d_0_223[1U];
    vlSelfRef.boom_core__DOT__rn2_uops[2U] = __VdfgRegularize_h6e95ff9d_0_223[2U];
    vlSelfRef.boom_core__DOT__rn2_uops[3U] = __VdfgRegularize_h6e95ff9d_0_223[3U];
    vlSelfRef.boom_core__DOT__rn2_uops[4U] = __VdfgRegularize_h6e95ff9d_0_223[4U];
    vlSelfRef.boom_core__DOT__rn2_uops[5U] = __VdfgRegularize_h6e95ff9d_0_223[5U];
    vlSelfRef.boom_core__DOT__rn2_uops[6U] = __VdfgRegularize_h6e95ff9d_0_223[6U];
    vlSelfRef.boom_core__DOT__rn2_uops[7U] = __VdfgRegularize_h6e95ff9d_0_223[7U];
    vlSelfRef.boom_core__DOT__rn2_uops[8U] = __VdfgRegularize_h6e95ff9d_0_223[8U];
    vlSelfRef.boom_core__DOT__rn2_uops[9U] = __VdfgRegularize_h6e95ff9d_0_223[9U];
    vlSelfRef.boom_core__DOT__rn2_uops[10U] = __VdfgRegularize_h6e95ff9d_0_223[10U];
    vlSelfRef.boom_core__DOT__rn2_uops[11U] = __VdfgRegularize_h6e95ff9d_0_223[11U];
    vlSelfRef.boom_core__DOT__rn2_uops[12U] = __VdfgRegularize_h6e95ff9d_0_223[12U];
    vlSelfRef.boom_core__DOT__rn2_uops[13U] = ((0xfff00000U 
                                                & __VdfgRegularize_h6e95ff9d_0_223[13U]) 
                                               | ((0x00080000U 
                                                   & ((IData)(vlSelfRef.boom_core__DOT__rn2_mask) 
                                                      << 0x00000012U)) 
                                                  | (0x0007ffffU 
                                                     & __VdfgRegularize_h6e95ff9d_0_223[13U])));
    vlSelfRef.boom_core__DOT__rn2_uops[14U] = ((0x000fffffU 
                                                & __VdfgRegularize_h6e95ff9d_0_223[14U]) 
                                               | (0xfff00000U 
                                                  & __VdfgRegularize_h6e95ff9d_0_223[14U]));
    vlSelfRef.boom_core__DOT__rn2_uops[15U] = ((0x000fffffU 
                                                & __VdfgRegularize_h6e95ff9d_0_223[15U]) 
                                               | (0xfff00000U 
                                                  & __VdfgRegularize_h6e95ff9d_0_223[15U]));
    vlSelfRef.boom_core__DOT__rn2_uops[16U] = ((0x000fffffU 
                                                & __VdfgRegularize_h6e95ff9d_0_223[16U]) 
                                               | (0xfff00000U 
                                                  & __VdfgRegularize_h6e95ff9d_0_223[16U]));
    vlSelfRef.boom_core__DOT__rn2_uops[17U] = ((0x000fffffU 
                                                & __VdfgRegularize_h6e95ff9d_0_223[17U]) 
                                               | (0xfff00000U 
                                                  & __VdfgRegularize_h6e95ff9d_0_223[17U]));
    vlSelfRef.boom_core__DOT__rn2_uops[18U] = ((0x000fffffU 
                                                & __VdfgRegularize_h6e95ff9d_0_223[18U]) 
                                               | (0xfff00000U 
                                                  & __VdfgRegularize_h6e95ff9d_0_223[18U]));
    vlSelfRef.boom_core__DOT__rn2_uops[19U] = ((0x000fffffU 
                                                & __VdfgRegularize_h6e95ff9d_0_223[19U]) 
                                               | (0xfff00000U 
                                                  & __VdfgRegularize_h6e95ff9d_0_223[19U]));
    vlSelfRef.boom_core__DOT__rn2_uops[20U] = ((0x000fffffU 
                                                & __VdfgRegularize_h6e95ff9d_0_223[20U]) 
                                               | (0xfff00000U 
                                                  & __VdfgRegularize_h6e95ff9d_0_223[20U]));
    vlSelfRef.boom_core__DOT__rn2_uops[21U] = ((0x000fffffU 
                                                & __VdfgRegularize_h6e95ff9d_0_223[21U]) 
                                               | (0xfff00000U 
                                                  & __VdfgRegularize_h6e95ff9d_0_223[21U]));
    vlSelfRef.boom_core__DOT__rn2_uops[22U] = ((0x000fffffU 
                                                & __VdfgRegularize_h6e95ff9d_0_223[22U]) 
                                               | (0xfff00000U 
                                                  & __VdfgRegularize_h6e95ff9d_0_223[22U]));
    vlSelfRef.boom_core__DOT__rn2_uops[23U] = (0x0003ffffU 
                                               & __VdfgRegularize_h6e95ff9d_0_223[23U]);
    vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[0U] 
        = vlSelfRef.boom_core__DOT__rn2_uops[0U];
    vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[1U] 
        = vlSelfRef.boom_core__DOT__rn2_uops[1U];
    vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[2U] 
        = vlSelfRef.boom_core__DOT__rn2_uops[2U];
    vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[3U] 
        = vlSelfRef.boom_core__DOT__rn2_uops[3U];
    vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[4U] 
        = (((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail_idx) 
            << 0x0000001dU) | (0x1fffffffU & vlSelfRef.boom_core__DOT__rn2_uops[4U]));
    vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[5U] 
        = ((0xfffffff8U & vlSelfRef.boom_core__DOT__rn2_uops[5U]) 
           | ((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail_idx) 
              >> 3U));
    vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[6U] 
        = ((7U & vlSelfRef.boom_core__DOT__rn2_uops[6U]) 
           | (0xfffffff8U & vlSelfRef.boom_core__DOT__rn2_uops[6U]));
    vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[7U] 
        = ((7U & vlSelfRef.boom_core__DOT__rn2_uops[7U]) 
           | (0xfffffff8U & vlSelfRef.boom_core__DOT__rn2_uops[7U]));
    vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[8U] 
        = ((7U & vlSelfRef.boom_core__DOT__rn2_uops[8U]) 
           | (0xfffffff8U & vlSelfRef.boom_core__DOT__rn2_uops[8U]));
    vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[9U] 
        = ((7U & vlSelfRef.boom_core__DOT__rn2_uops[9U]) 
           | (0xfffffff8U & vlSelfRef.boom_core__DOT__rn2_uops[9U]));
    vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[10U] 
        = ((7U & vlSelfRef.boom_core__DOT__rn2_uops[10U]) 
           | (0xfffffff8U & vlSelfRef.boom_core__DOT__rn2_uops[10U]));
    vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[11U] 
        = ((7U & vlSelfRef.boom_core__DOT__rn2_uops[11U]) 
           | (0xfffffff8U & vlSelfRef.boom_core__DOT__rn2_uops[11U]));
    vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[12U] 
        = ((7U & vlSelfRef.boom_core__DOT__rn2_uops[12U]) 
           | (0xfffffff8U & vlSelfRef.boom_core__DOT__rn2_uops[12U]));
    vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[13U] 
        = ((7U & vlSelfRef.boom_core__DOT__rn2_uops[13U]) 
           | (0xfffffff8U & vlSelfRef.boom_core__DOT__rn2_uops[13U]));
    vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[14U] 
        = ((7U & vlSelfRef.boom_core__DOT__rn2_uops[14U]) 
           | (0xfffffff8U & vlSelfRef.boom_core__DOT__rn2_uops[14U]));
    vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[15U] 
        = ((7U & vlSelfRef.boom_core__DOT__rn2_uops[15U]) 
           | (0xfffffff8U & vlSelfRef.boom_core__DOT__rn2_uops[15U]));
    vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[16U] 
        = ((0xffc00000U & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[16U]) 
           | ((7U & vlSelfRef.boom_core__DOT__rn2_uops[16U]) 
              | (0x003ffff8U & vlSelfRef.boom_core__DOT__rn2_uops[16U])));
    vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[16U] 
        = ((0x003fffffU & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[16U]) 
           | ((((vlSelfRef.boom_core__DOT__rn2_uops[17U] 
                 << 0x0000000aU) | (0x000003c0U & (vlSelfRef.boom_core__DOT__rn2_uops[16U] 
                                                   >> 0x00000016U))) 
               | (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail_idx)))) 
              << 0x00000016U));
    vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[17U] 
        = (((((vlSelfRef.boom_core__DOT__rn2_uops[17U] 
               << 0x0000000aU) | (0x000003c0U & (vlSelfRef.boom_core__DOT__rn2_uops[16U] 
                                                 >> 0x00000016U))) 
             | (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail_idx)))) 
            >> 0x0000000aU) | (((0x0000003fU & (vlSelfRef.boom_core__DOT__rn2_uops[17U] 
                                                >> 0x00000016U)) 
                                | ((vlSelfRef.boom_core__DOT__rn2_uops[18U] 
                                    << 0x0000000aU) 
                                   | (0x000003c0U & 
                                      (vlSelfRef.boom_core__DOT__rn2_uops[17U] 
                                       >> 0x00000016U)))) 
                               << 0x00000016U));
    vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[18U] 
        = ((((0x0000003fU & (vlSelfRef.boom_core__DOT__rn2_uops[17U] 
                             >> 0x00000016U)) | ((vlSelfRef.boom_core__DOT__rn2_uops[18U] 
                                                  << 0x0000000aU) 
                                                 | (0x000003c0U 
                                                    & (vlSelfRef.boom_core__DOT__rn2_uops[17U] 
                                                       >> 0x00000016U)))) 
            >> 0x0000000aU) | (((0x0000003fU & (vlSelfRef.boom_core__DOT__rn2_uops[18U] 
                                                >> 0x00000016U)) 
                                | ((vlSelfRef.boom_core__DOT__rn2_uops[19U] 
                                    << 0x0000000aU) 
                                   | (0x000003c0U & 
                                      (vlSelfRef.boom_core__DOT__rn2_uops[18U] 
                                       >> 0x00000016U)))) 
                               << 0x00000016U));
    vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[19U] 
        = ((((0x0000003fU & (vlSelfRef.boom_core__DOT__rn2_uops[18U] 
                             >> 0x00000016U)) | ((vlSelfRef.boom_core__DOT__rn2_uops[19U] 
                                                  << 0x0000000aU) 
                                                 | (0x000003c0U 
                                                    & (vlSelfRef.boom_core__DOT__rn2_uops[18U] 
                                                       >> 0x00000016U)))) 
            >> 0x0000000aU) | (((0x0000003fU & (vlSelfRef.boom_core__DOT__rn2_uops[19U] 
                                                >> 0x00000016U)) 
                                | ((vlSelfRef.boom_core__DOT__rn2_uops[20U] 
                                    << 0x0000000aU) 
                                   | (0x000003c0U & 
                                      (vlSelfRef.boom_core__DOT__rn2_uops[19U] 
                                       >> 0x00000016U)))) 
                               << 0x00000016U));
    vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[20U] 
        = ((((0x0000003fU & (vlSelfRef.boom_core__DOT__rn2_uops[19U] 
                             >> 0x00000016U)) | ((vlSelfRef.boom_core__DOT__rn2_uops[20U] 
                                                  << 0x0000000aU) 
                                                 | (0x000003c0U 
                                                    & (vlSelfRef.boom_core__DOT__rn2_uops[19U] 
                                                       >> 0x00000016U)))) 
            >> 0x0000000aU) | (((0x0000003fU & (vlSelfRef.boom_core__DOT__rn2_uops[20U] 
                                                >> 0x00000016U)) 
                                | ((vlSelfRef.boom_core__DOT__rn2_uops[21U] 
                                    << 0x0000000aU) 
                                   | (0x000003c0U & 
                                      (vlSelfRef.boom_core__DOT__rn2_uops[20U] 
                                       >> 0x00000016U)))) 
                               << 0x00000016U));
    vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[21U] 
        = ((((0x0000003fU & (vlSelfRef.boom_core__DOT__rn2_uops[20U] 
                             >> 0x00000016U)) | ((vlSelfRef.boom_core__DOT__rn2_uops[21U] 
                                                  << 0x0000000aU) 
                                                 | (0x000003c0U 
                                                    & (vlSelfRef.boom_core__DOT__rn2_uops[20U] 
                                                       >> 0x00000016U)))) 
            >> 0x0000000aU) | (((0x0000003fU & (vlSelfRef.boom_core__DOT__rn2_uops[21U] 
                                                >> 0x00000016U)) 
                                | ((vlSelfRef.boom_core__DOT__rn2_uops[22U] 
                                    << 0x0000000aU) 
                                   | (0x000003c0U & 
                                      (vlSelfRef.boom_core__DOT__rn2_uops[21U] 
                                       >> 0x00000016U)))) 
                               << 0x00000016U));
    vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[22U] 
        = ((((0x0000003fU & (vlSelfRef.boom_core__DOT__rn2_uops[21U] 
                             >> 0x00000016U)) | ((vlSelfRef.boom_core__DOT__rn2_uops[22U] 
                                                  << 0x0000000aU) 
                                                 | (0x000003c0U 
                                                    & (vlSelfRef.boom_core__DOT__rn2_uops[21U] 
                                                       >> 0x00000016U)))) 
            >> 0x0000000aU) | (((0x0000003fU & (vlSelfRef.boom_core__DOT__rn2_uops[22U] 
                                                >> 0x00000016U)) 
                                | (0x0fffffc0U & ((vlSelfRef.boom_core__DOT__rn2_uops[23U] 
                                                   << 0x0000000aU) 
                                                  | (0x000003c0U 
                                                     & (vlSelfRef.boom_core__DOT__rn2_uops[22U] 
                                                        >> 0x00000016U))))) 
                               << 0x00000016U));
    vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[23U] 
        = (0x0003ffffU & (((0x0000003fU & (vlSelfRef.boom_core__DOT__rn2_uops[22U] 
                                           >> 0x00000016U)) 
                           | (0x0fffffc0U & ((vlSelfRef.boom_core__DOT__rn2_uops[23U] 
                                              << 0x0000000aU) 
                                             | (0x000003c0U 
                                                & (vlSelfRef.boom_core__DOT__rn2_uops[22U] 
                                                   >> 0x00000016U))))) 
                          >> 0x0000000aU));
    vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[0U] 
        = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[0U];
    vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[1U] 
        = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[1U];
    vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[2U] 
        = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[2U];
    vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[3U] 
        = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[3U];
    vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[4U] 
        = (((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail_idx) 
            << 0x0000001dU) | (0x1fffffffU & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[4U]));
    vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[5U] 
        = ((0xfffffff8U & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[5U]) 
           | ((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail_idx) 
              >> 3U));
    vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[6U] 
        = ((7U & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[6U]) 
           | (0xfffffff8U & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[6U]));
    vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[7U] 
        = ((7U & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[7U]) 
           | (0xfffffff8U & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[7U]));
    vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[8U] 
        = ((7U & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[8U]) 
           | (0xfffffff8U & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[8U]));
    vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[9U] 
        = ((7U & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[9U]) 
           | (0xfffffff8U & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[9U]));
    vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[10U] 
        = ((7U & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[10U]) 
           | (0xfffffff8U & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[10U]));
    vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[11U] 
        = ((7U & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[11U]) 
           | (0xfffffff8U & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[11U]));
    vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[12U] 
        = ((7U & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[12U]) 
           | (0xfffffff8U & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[12U]));
    vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[13U] 
        = ((7U & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[13U]) 
           | (0xfffffff8U & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[13U]));
    vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[14U] 
        = ((7U & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[14U]) 
           | (0xfffffff8U & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[14U]));
    vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[15U] 
        = ((7U & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[15U]) 
           | (0xfffffff8U & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[15U]));
    vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[16U] 
        = ((0xffc00000U & vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[16U]) 
           | ((7U & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[16U]) 
              | (0x003ffff8U & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[16U])));
    vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[16U] 
        = ((0x003fffffU & vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[16U]) 
           | ((((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[17U] 
                 << 0x0000000aU) | (0x000003c0U & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[16U] 
                                                   >> 0x00000016U))) 
               | (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail_idx)))) 
              << 0x00000016U));
    vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[17U] 
        = (((((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[17U] 
               << 0x0000000aU) | (0x000003c0U & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[16U] 
                                                 >> 0x00000016U))) 
             | (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail_idx)))) 
            >> 0x0000000aU) | (((0x0000003fU & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[17U] 
                                                >> 0x00000016U)) 
                                | ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[18U] 
                                    << 0x0000000aU) 
                                   | (0x000003c0U & 
                                      (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[17U] 
                                       >> 0x00000016U)))) 
                               << 0x00000016U));
    vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[18U] 
        = ((((0x0000003fU & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[17U] 
                             >> 0x00000016U)) | ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[18U] 
                                                  << 0x0000000aU) 
                                                 | (0x000003c0U 
                                                    & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[17U] 
                                                       >> 0x00000016U)))) 
            >> 0x0000000aU) | (((0x0000003fU & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[18U] 
                                                >> 0x00000016U)) 
                                | ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[19U] 
                                    << 0x0000000aU) 
                                   | (0x000003c0U & 
                                      (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[18U] 
                                       >> 0x00000016U)))) 
                               << 0x00000016U));
    vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[19U] 
        = ((((0x0000003fU & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[18U] 
                             >> 0x00000016U)) | ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[19U] 
                                                  << 0x0000000aU) 
                                                 | (0x000003c0U 
                                                    & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[18U] 
                                                       >> 0x00000016U)))) 
            >> 0x0000000aU) | (((0x0000003fU & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[19U] 
                                                >> 0x00000016U)) 
                                | ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[20U] 
                                    << 0x0000000aU) 
                                   | (0x000003c0U & 
                                      (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[19U] 
                                       >> 0x00000016U)))) 
                               << 0x00000016U));
    vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[20U] 
        = ((((0x0000003fU & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[19U] 
                             >> 0x00000016U)) | ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[20U] 
                                                  << 0x0000000aU) 
                                                 | (0x000003c0U 
                                                    & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[19U] 
                                                       >> 0x00000016U)))) 
            >> 0x0000000aU) | (((0x0000003fU & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[20U] 
                                                >> 0x00000016U)) 
                                | ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[21U] 
                                    << 0x0000000aU) 
                                   | (0x000003c0U & 
                                      (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[20U] 
                                       >> 0x00000016U)))) 
                               << 0x00000016U));
    vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[21U] 
        = ((((0x0000003fU & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[20U] 
                             >> 0x00000016U)) | ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[21U] 
                                                  << 0x0000000aU) 
                                                 | (0x000003c0U 
                                                    & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[20U] 
                                                       >> 0x00000016U)))) 
            >> 0x0000000aU) | (((0x0000003fU & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[21U] 
                                                >> 0x00000016U)) 
                                | ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[22U] 
                                    << 0x0000000aU) 
                                   | (0x000003c0U & 
                                      (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[21U] 
                                       >> 0x00000016U)))) 
                               << 0x00000016U));
    vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[22U] 
        = ((((0x0000003fU & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[21U] 
                             >> 0x00000016U)) | ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[22U] 
                                                  << 0x0000000aU) 
                                                 | (0x000003c0U 
                                                    & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[21U] 
                                                       >> 0x00000016U)))) 
            >> 0x0000000aU) | (((0x0000003fU & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[22U] 
                                                >> 0x00000016U)) 
                                | (0x0fffffc0U & ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[23U] 
                                                   << 0x0000000aU) 
                                                  | (0x000003c0U 
                                                     & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[22U] 
                                                        >> 0x00000016U))))) 
                               << 0x00000016U));
    vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[23U] 
        = (0x0003ffffU & (((0x0000003fU & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[22U] 
                                           >> 0x00000016U)) 
                           | (0x0fffffc0U & ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[23U] 
                                              << 0x0000000aU) 
                                             | (0x000003c0U 
                                                & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[22U] 
                                                   >> 0x00000016U))))) 
                          >> 0x0000000aU));
    __VdfgSynthJoin_boom_core__DOT__disp__DOT__iq_ready_h6e95ff9d_0_2 
        = ((1U & (IData)(vlSelfRef.boom_core__DOT__rn2_mask))
            ? ((1U == (0x0000000fU & (vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[8U] 
                                      >> 0x00000014U)))
                ? (IData)(vlSelfRef.boom_core__DOT__mem_iq_dis_ready)
                : ((4U == (0x0000000fU & (vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[8U] 
                                          >> 0x00000014U)))
                    ? (IData)(vlSelfRef.boom_core__DOT__alu_iq_dis_ready)
                    : ((2U == (0x0000000fU & (vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[8U] 
                                              >> 0x00000014U))) 
                       && (IData)(vlSelfRef.boom_core__DOT__unq_iq_dis_ready))))
            : 0U);
    vlSelfRef.boom_core__DOT__disp__DOT__iq_ready = 
        ((2U & (IData)(vlSelfRef.boom_core__DOT__rn2_mask))
          ? ((((1U == (0x0000000fU & (vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[20U] 
                                      >> 0x0000000dU)))
                ? (IData)(vlSelfRef.boom_core__DOT__mem_iq_dis_ready)
                : ((4U == (0x0000000fU & (vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[20U] 
                                          >> 0x0000000dU)))
                    ? (IData)(vlSelfRef.boom_core__DOT__alu_iq_dis_ready)
                    : ((2U == (0x0000000fU & (vlSelfRef.boom_core__DOT__disp__DOT__rn2_uops[20U] 
                                              >> 0x0000000dU))) 
                       && (IData)(vlSelfRef.boom_core__DOT__unq_iq_dis_ready)))) 
              << 1U) | (1U & (IData)(__VdfgSynthJoin_boom_core__DOT__disp__DOT__iq_ready_h6e95ff9d_0_2)))
          : (IData)(__VdfgSynthJoin_boom_core__DOT__disp__DOT__iq_ready_h6e95ff9d_0_2));
    __Vdfg_BB0_Cond_h6e95ff9d_0_378 = (1U & ((IData)(vlSelfRef.boom_core__DOT__rn2_mask) 
                                             & (IData)(vlSelfRef.boom_core__DOT__disp__DOT__iq_ready)));
    vlSelfRef.__VdfgSynthJoin_boom_core__DOT__disp__DOT__block_h6e95ff9d_0_3 
        = ((1U & (~ (IData)(__Vdfg_BB0_Cond_h6e95ff9d_0_378))) 
           && (1U & (IData)(vlSelfRef.boom_core__DOT__rn2_mask)));
    vlSelfRef.__Vdfg_BB5_Cond_h6e95ff9d_0_380 = (1U 
                                                 & ((((IData)(vlSelfRef.boom_core__DOT__rn2_mask) 
                                                      & (IData)(vlSelfRef.boom_core__DOT__disp__DOT__iq_ready)) 
                                                     >> 1U) 
                                                    & (~ (IData)(vlSelfRef.__VdfgSynthJoin_boom_core__DOT__disp__DOT__block_h6e95ff9d_0_3))));
    vlSelfRef.dis_fire_dbg = (((IData)(vlSelfRef.__Vdfg_BB5_Cond_h6e95ff9d_0_380) 
                               << 1U) | (IData)(__Vdfg_BB0_Cond_h6e95ff9d_0_378));
    vlSelfRef.boom_core__DOT__rn_stalls = (3U & (- (IData)(
                                                           (1U 
                                                            & ((~ 
                                                                (0U 
                                                                 != 
                                                                 (0x00007fffffffffffULL 
                                                                  & (vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                                     >> 1U)))) 
                                                               | ((IData)(vlSelfRef.__Vdfg_BB5_Cond_h6e95ff9d_0_380)
                                                                   ? (IData)(vlSelfRef.__VdfgSynthJoin_boom_core__DOT__disp__DOT__block_h6e95ff9d_0_3)
                                                                   : 
                                                                  ((1U 
                                                                    & ((IData)(vlSelfRef.boom_core__DOT__rn2_mask) 
                                                                       >> 1U)) 
                                                                   || (IData)(vlSelfRef.__VdfgSynthJoin_boom_core__DOT__disp__DOT__block_h6e95ff9d_0_3))))))));
    vlSelfRef.boom_core__DOT__iq_mem_dis_valid = 0U;
    VL_ASSIGN_W(377, vlSelfRef.boom_core__DOT__iq_mem_dis_uop, Vboom_core__ConstPool__CONST_hdb31f06b_0);
    vlSelfRef.boom_core__DOT__iq_alu_dis_valid = 0U;
    VL_ASSIGN_W(377, vlSelfRef.boom_core__DOT__iq_alu_dis_uop, Vboom_core__ConstPool__CONST_hdb31f06b_0);
    vlSelfRef.boom_core__DOT__iq_unq_dis_valid = 0U;
    VL_ASSIGN_W(377, vlSelfRef.boom_core__DOT__iq_unq_dis_uop, Vboom_core__ConstPool__CONST_hdb31f06b_0);
    if ((1U & (IData)(vlSelfRef.dis_fire_dbg))) {
        if ((1U == (0x0000000fU & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[8U] 
                                   >> 0x00000014U)))) {
            vlSelfRef.boom_core__DOT__iq_mem_dis_valid = 1U;
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[0U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[0U];
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[1U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[1U];
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[2U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[2U];
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[3U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[3U];
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[4U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[4U];
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[5U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[5U];
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[6U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[6U];
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[7U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[7U];
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[8U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[8U];
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[9U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[9U];
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[10U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[10U];
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[11U] 
                = (0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[11U]);
        } else if ((4U == (0x0000000fU & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[8U] 
                                          >> 0x00000014U)))) {
            vlSelfRef.boom_core__DOT__iq_alu_dis_valid = 1U;
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[0U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[0U];
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[1U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[1U];
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[2U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[2U];
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[3U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[3U];
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[4U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[4U];
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[5U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[5U];
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[6U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[6U];
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[7U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[7U];
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[8U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[8U];
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[9U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[9U];
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[10U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[10U];
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[11U] 
                = (0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[11U]);
        } else if ((2U == (0x0000000fU & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[8U] 
                                          >> 0x00000014U)))) {
            vlSelfRef.boom_core__DOT__iq_unq_dis_valid = 1U;
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[0U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[0U];
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[1U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[1U];
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[2U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[2U];
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[3U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[3U];
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[4U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[4U];
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[5U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[5U];
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[6U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[6U];
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[7U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[7U];
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[8U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[8U];
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[9U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[9U];
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[10U] 
                = vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[10U];
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[11U] 
                = (0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[11U]);
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (0x0000000fU 
                                           & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[8U] 
                                              >> 0x00000014U))) 
                                   << 2U) | (((4U == 
                                               (0x0000000fU 
                                                & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[8U] 
                                                   >> 0x00000014U))) 
                                              << 1U) 
                                             | (1U 
                                                == 
                                                (0x0000000fU 
                                                 & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[8U] 
                                                    >> 0x00000014U))))))))) {
            if ((0U == (((2U == (0x0000000fU & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[8U] 
                                                >> 0x00000014U))) 
                         << 2U) | (((4U == (0x0000000fU 
                                            & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[8U] 
                                               >> 0x00000014U))) 
                                    << 1U) | (1U == 
                                              (0x0000000fU 
                                               & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[8U] 
                                                  >> 0x00000014U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: dispatch.sv:62: Assertion failed in %m: unique case, but none matched for '4'h%X'\n",4, 'M',vlSymsp->name(),"boom_core.disp.unnamedblk3", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1)
                                 , '#',4,(0x0000000fU 
                                          & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[8U] 
                                             >> 0x00000014U)));
                    VL_STOP_MT("exu/dispatch.sv", 62, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: dispatch.sv:62: Assertion failed in %m: unique case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->name(),"boom_core.disp.unnamedblk3", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '#',4,(0x0000000fU & 
                                      (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[8U] 
                                       >> 0x00000014U)));
                VL_STOP_MT("exu/dispatch.sv", 62, "");
            }
        }
    }
    if ((2U & (IData)(vlSelfRef.dis_fire_dbg))) {
        if ((1U == (0x0000000fU & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[20U] 
                                   >> 0x0000000dU)))) {
            vlSelfRef.boom_core__DOT__iq_mem_dis_valid = 1U;
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[0U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[12U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[11U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[1U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[13U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[12U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[2U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[14U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[13U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[3U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[15U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[14U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[4U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[16U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[15U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[5U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[17U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[16U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[6U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[18U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[17U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[7U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[19U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[18U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[8U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[20U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[19U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[9U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[21U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[20U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[10U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[22U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[21U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[23U] 
                                   << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[22U] 
                                             >> 0x00000019U)));
        } else if ((4U == (0x0000000fU & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[20U] 
                                          >> 0x0000000dU)))) {
            vlSelfRef.boom_core__DOT__iq_alu_dis_valid = 1U;
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[0U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[12U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[11U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[1U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[13U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[12U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[2U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[14U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[13U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[3U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[15U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[14U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[4U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[16U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[15U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[5U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[17U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[16U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[6U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[18U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[17U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[7U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[19U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[18U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[8U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[20U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[19U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[9U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[21U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[20U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[10U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[22U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[21U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[23U] 
                                   << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[22U] 
                                             >> 0x00000019U)));
        } else if ((2U == (0x0000000fU & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[20U] 
                                          >> 0x0000000dU)))) {
            vlSelfRef.boom_core__DOT__iq_unq_dis_valid = 1U;
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[0U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[12U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[11U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[1U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[13U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[12U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[2U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[14U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[13U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[3U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[15U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[14U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[4U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[16U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[15U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[5U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[17U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[16U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[6U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[18U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[17U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[7U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[19U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[18U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[8U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[20U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[19U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[9U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[21U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[20U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[10U] 
                = ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[22U] 
                    << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[21U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[23U] 
                                   << 7U) | (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[22U] 
                                             >> 0x00000019U)));
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (0x0000000fU 
                                           & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[20U] 
                                              >> 0x0000000dU))) 
                                   << 2U) | (((4U == 
                                               (0x0000000fU 
                                                & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[20U] 
                                                   >> 0x0000000dU))) 
                                              << 1U) 
                                             | (1U 
                                                == 
                                                (0x0000000fU 
                                                 & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[20U] 
                                                    >> 0x0000000dU))))))))) {
            if ((0U == (((2U == (0x0000000fU & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[20U] 
                                                >> 0x0000000dU))) 
                         << 2U) | (((4U == (0x0000000fU 
                                            & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[20U] 
                                               >> 0x0000000dU))) 
                                    << 1U) | (1U == 
                                              (0x0000000fU 
                                               & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[20U] 
                                                  >> 0x0000000dU))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: dispatch.sv:62: Assertion failed in %m: unique case, but none matched for '4'h%X'\n",4, 'M',vlSymsp->name(),"boom_core.disp.unnamedblk3", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1)
                                 , '#',4,(0x0000000fU 
                                          & (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[20U] 
                                             >> 0x0000000dU)));
                    VL_STOP_MT("exu/dispatch.sv", 62, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: dispatch.sv:62: Assertion failed in %m: unique case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->name(),"boom_core.disp.unnamedblk3", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '#',4,(0x0000000fU & 
                                      (vlSelfRef.boom_core__DOT____Vcellinp__disp__rn2_uops[20U] 
                                       >> 0x0000000dU)));
                VL_STOP_MT("exu/dispatch.sv", 62, "");
            }
        }
    }
    vlSelfRef.ren_stalls_dbg = vlSelfRef.boom_core__DOT__rn_stalls;
    vlSelfRef.boom_core__DOT__dec_ready = ((~ (0U != (IData)(vlSelfRef.boom_core__DOT__rn_stalls))) 
                                           & (IData)(vlSelfRef.rob_ready_dbg));
    vlSelfRef.fe_ready = vlSelfRef.boom_core__DOT__dec_ready;
    vlSelfRef.boom_core__DOT__dec_fire = (3U & ((IData)(vlSelfRef.fe_valid) 
                                                & (- (IData)((IData)(vlSelfRef.boom_core__DOT__dec_ready)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170 = ((3U 
                                                   | ((0U 
                                                       != 
                                                       (0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT____Vcellinp__rename__dec_uops[1U] 
                                                           >> 0x0000000fU))) 
                                                      << 2U)) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(vlSelfRef.boom_core__DOT__dec_fire)))));
}
