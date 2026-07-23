// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboom_core.h for the primary calling header

#include "Vboom_core__pch.h"

void Vboom_core___024root___nba_sequent__TOP__3(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___nba_sequent__TOP__3\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.boom_core__DOT__brmask__DOT__alloc_mask 
        = ((((8U & (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_25))
              ? ((4U & (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_25))
                  ? ((2U & (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_25))
                      ? (1U & (~ (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_25)))
                      : 2U) : 4U) : 8U) << 4U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_96));
    vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__write_lreg 
        = ((0x000003e0U & (((2U & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__dec_fire))
                             ? ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_16[1U] 
                                 << 0x00000011U) | 
                                (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_16[1U] 
                                 >> 0x0000000fU)) : 
                            ((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_168) 
                             >> 5U)) << 5U)) | (0x0000001fU 
                                                & (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_168)));
    vlSelfRef.boom_core__DOT__brmask__DOT__curr_mask 
        = ((~ (IData)(vlSelfRef.boom_core__DOT__resolve_mask)) 
           & (IData)(vlSelfRef.boom_core__DOT__brmask__DOT__br_mask_q));
    vlSelfRef.boom_core__DOT__bm_br_mask = ((0xf0U 
                                             & (IData)(vlSelfRef.boom_core__DOT__bm_br_mask)) 
                                            | (IData)(vlSelfRef.boom_core__DOT__brmask__DOT__curr_mask));
    if ((1U & (IData)(vlSelfRef.boom_core__DOT__brmask__DOT__will_fire))) {
        vlSelfRef.boom_core__DOT__brmask__DOT__curr_mask 
            = (0x0000000fU & ((IData)(vlSelfRef.boom_core__DOT__brmask__DOT__curr_mask) 
                              | (IData)(vlSelfRef.boom_core__DOT__brmask__DOT__alloc_mask)));
    }
    vlSelfRef.boom_core__DOT__bm_br_mask = ((0x0fU 
                                             & (IData)(vlSelfRef.boom_core__DOT__bm_br_mask)) 
                                            | ((IData)(vlSelfRef.boom_core__DOT__brmask__DOT__curr_mask) 
                                               << 4U));
    if ((2U & (IData)(vlSelfRef.boom_core__DOT__brmask__DOT__will_fire))) {
        vlSelfRef.boom_core__DOT__brmask__DOT__curr_mask 
            = (0x0000000fU & ((IData)(vlSelfRef.boom_core__DOT__brmask__DOT__curr_mask) 
                              | ((IData)(vlSelfRef.boom_core__DOT__brmask__DOT__alloc_mask) 
                                 >> 4U)));
    }
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[0U] 
        = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[0U];
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[1U] 
        = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[1U];
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[2U] 
        = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[2U];
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[3U] 
        = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[3U];
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[4U] 
        = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[4U];
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[5U] 
        = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[5U];
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[6U] 
        = vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[6U];
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[7U] 
        = ((0xf0000000U & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[7U]) 
           | ((0x0f000000U & ((IData)(vlSelfRef.boom_core__DOT__bm_br_mask) 
                              << 0x00000018U)) | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102) 
                                                   << 0x00000016U) 
                                                  | (0x003fffffU 
                                                     & vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[7U]))));
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[7U] 
        = ((0x0fffffffU & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[7U]) 
           | ((IData)((0x1fffffffffffffffULL & (((QData)((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[9U])) 
                                                 << 0x00000024U) 
                                                | (((QData)((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[8U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[7U])) 
                                                      >> 0x0000001cU))))) 
              << 0x0000001cU));
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[8U] 
        = (((IData)((0x1fffffffffffffffULL & (((QData)((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[9U])) 
                                               << 0x00000024U) 
                                              | (((QData)((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[8U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[7U])) 
                                                    >> 0x0000001cU))))) 
            >> 4U) | ((IData)(((0x1fffffffffffffffULL 
                                & (((QData)((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[9U])) 
                                    << 0x00000024U) 
                                   | (((QData)((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[8U])) 
                                       << 4U) | ((QData)((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[7U])) 
                                                 >> 0x0000001cU)))) 
                               >> 0x00000020U)) << 0x0000001cU));
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[9U] 
        = (((0x0e000000U & ((IData)((((QData)((IData)(vlSelfRef.fe_insts[0U])) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(vlSelfRef.fe_insts[0U])))) 
                            << 0x00000019U)) | ((IData)(
                                                        ((0x1fffffffffffffffULL 
                                                          & (((QData)((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[9U])) 
                                                              << 0x00000024U) 
                                                             | (((QData)((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[8U])) 
                                                                 << 4U) 
                                                                | ((QData)((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[7U])) 
                                                                   >> 0x0000001cU)))) 
                                                         >> 0x00000020U)) 
                                                >> 4U)) 
           | (0xf0000000U & ((IData)((((QData)((IData)(vlSelfRef.fe_insts[0U])) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(vlSelfRef.fe_insts[0U])))) 
                             << 0x00000019U)));
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[10U] 
        = ((((IData)((((QData)((IData)(vlSelfRef.fe_insts[0U])) 
                       << 0x00000020U) | (QData)((IData)(vlSelfRef.fe_insts[0U])))) 
             >> 7U) | (0x0e000000U & ((IData)(((((QData)((IData)(vlSelfRef.fe_insts[0U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.fe_insts[0U]))) 
                                               >> 0x00000020U)) 
                                      << 0x00000019U))) 
           | (0xf0000000U & ((IData)(((((QData)((IData)(vlSelfRef.fe_insts[0U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.fe_insts[0U]))) 
                                      >> 0x00000020U)) 
                             << 0x00000019U)));
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[11U] 
        = ((0xfe000000U & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[11U]) 
           | ((IData)(((((QData)((IData)(vlSelfRef.fe_insts[0U])) 
                         << 0x00000020U) | (QData)((IData)(vlSelfRef.fe_insts[0U]))) 
                       >> 0x00000020U)) >> 7U));
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[11U] 
        = ((0x01ffffffU & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[11U]) 
           | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[0U] 
              << 0x00000019U));
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[12U] 
        = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[0U] 
            >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[1U] 
                      << 0x00000019U));
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[13U] 
        = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[1U] 
            >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[2U] 
                      << 0x00000019U));
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[14U] 
        = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[2U] 
            >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[3U] 
                      << 0x00000019U));
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[15U] 
        = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[3U] 
            >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[4U] 
                      << 0x00000019U));
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[16U] 
        = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[4U] 
            >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[5U] 
                      << 0x00000019U));
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[17U] 
        = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[5U] 
            >> 7U) | (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[6U] 
                      << 0x00000019U));
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[18U] 
        = ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[6U] 
            >> 7U) | (((0x0f000000U & ((IData)(vlSelfRef.boom_core__DOT__bm_br_mask) 
                                       << 0x00000014U)) 
                       | (((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_101) 
                           << 0x00000016U) | (0x003fffffU 
                                              & vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[7U]))) 
                      << 0x00000019U));
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[19U] 
        = ((0xffe00000U & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[19U]) 
           | (((0x0f000000U & ((IData)(vlSelfRef.boom_core__DOT__bm_br_mask) 
                               << 0x00000014U)) | (
                                                   ((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_101) 
                                                    << 0x00000016U) 
                                                   | (0x003fffffU 
                                                      & vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[7U]))) 
              >> 7U));
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[19U] 
        = ((0x001fffffU & vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[19U]) 
           | ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[8U] 
               << 0x00000019U) | (0x01e00000U & (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[7U] 
                                                 >> 7U))));
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[20U] 
        = ((0x001fffffU & (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[8U] 
                           >> 7U)) | ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[9U] 
                                       << 0x00000019U) 
                                      | (0x01e00000U 
                                         & (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[8U] 
                                            >> 7U))));
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[21U] 
        = ((0x001fffffU & (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[9U] 
                           >> 7U)) | ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[10U] 
                                       << 0x00000019U) 
                                      | (0x01e00000U 
                                         & (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[9U] 
                                            >> 7U))));
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[22U] 
        = ((0x001fffffU & (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[10U] 
                           >> 7U)) | (0xffe00000U & 
                                      ((vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[11U] 
                                        << 0x00000019U) 
                                       | (0x01e00000U 
                                          & (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[10U] 
                                             >> 7U)))));
    vlSelfRef.boom_core__DOT__rename__DOT__dec_uops[23U] 
        = (0x0003ffffU & (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.uop[11U] 
                          >> 7U));
}

void Vboom_core___024root___nba_sequent__TOP__4(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___nba_sequent__TOP__4\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*47:0*/ __Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec;
    __Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec = 0;
    // Body
    vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__write_en 
        = (((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_23) 
            << 1U) | (1U & (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_171)));
    vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__unnamedblk2__DOT__taken_mask = 0ULL;
    __Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
        = vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__free_vec;
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
    if ((1U & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__write_en))) {
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
    if ((2U & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__write_en))) {
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_172 = (0x0000003fU 
                                                  & ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__dec_fire))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24 = (0x0000003fU 
                                                 & ((2U 
                                                     & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__dec_fire))
                                                     ? 
                                                    ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                     >> 6U)
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_172) 
                                                     >> 6U)));
    vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__write_preg 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24) 
            << 6U) | (0x0000003fU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_172)));
}

void Vboom_core___024root___nba_comb__TOP__0(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___nba_comb__TOP__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = ((1U 
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
    if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) {
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
        vlSelfRef.rf_wr_data_dbg = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_69 = (((
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = (IData)(
                                                       ((0U 
                                                         == 
                                                         (0x18000000U 
                                                          & vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[0U])) 
                                                        & (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__res_valid)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[0U] = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[1U] = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[2U] = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[3U] = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[4U] = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[5U] = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[5U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[6U] = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[6U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[7U] = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[7U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[8U] = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[8U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[9U] = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[9U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[10U] 
        = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[10U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[11U] 
        = (((IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__res_valid) 
            << 0x00000019U) | vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[11U]);
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
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2;
    vlSelfRef.boom_core__DOT__wakeup_pdst_w = ((0x0000000fc0000000ULL 
                                                & vlSelfRef.boom_core__DOT__wakeup_pdst_w) 
                                               | (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_69)));
    vlSelfRef.rf_wr_en_dbg = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                              | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                                    | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))));
    vlSelfRef.boom_core__DOT__iregfile__DOT__write_en 
        = ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
             << 4U) | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                        << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                                  << 2U))) | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)));
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
                              ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2
                              : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_150)
                                  ? ((vlSelfRef.lsu_resp[1U] 
                                      << 0x00000019U) 
                                     | (vlSelfRef.lsu_resp[0U] 
                                        >> 7U)) : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151)
                                                    ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_152)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149)
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104 = ((
                                                   (0U 
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
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106)
                                                    ? 
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.lsu_resp[0U] 
                                                       >> 7U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105)
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_114 = ((
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
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116)
                                                    ? 
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.lsu_resp[0U] 
                                                       >> 7U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115)
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_119 = ((
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
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_121)
                                                    ? 
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.lsu_resp[0U] 
                                                       >> 7U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_123)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_120)
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_124 = ((
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
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_126)
                                                    ? 
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.lsu_resp[0U] 
                                                       >> 7U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_128)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_125)
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_129 = ((
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
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_131)
                                                    ? 
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.lsu_resp[0U] 
                                                       >> 7U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_132)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_133)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130)
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_134 = ((
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
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136)
                                                    ? 
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.lsu_resp[0U] 
                                                       >> 7U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_138)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_135)
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_139 = ((
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
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_141)
                                                    ? 
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.lsu_resp[0U] 
                                                       >> 7U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_142)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_143)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_140)
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_144 = ((
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
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_146)
                                                    ? 
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.lsu_resp[0U] 
                                                       >> 7U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_147)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_148)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145)
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109 = ((
                                                   (0U 
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
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111)
                                                    ? 
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.lsu_resp[0U] 
                                                       >> 7U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110)
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
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[53U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[0U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[54U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[0U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[1U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[55U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[1U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[2U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[56U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[2U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[3U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[57U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[3U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[4U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[58U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[4U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[5U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[59U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[5U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[6U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[60U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[6U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[7U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[61U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[7U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[8U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[62U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[8U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[9U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[63U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[9U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[10U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[64U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[10U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[11U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[65U] = (
                                                   (0xffffffe0U 
                                                    & vlSelfRef.boom_core__DOT__rob_wb_resps[65U]) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[11U] 
                                                      >> 0x00000015U));
    vlSelfRef.boom_core__DOT__wakeups[48U] = ((0x0000003fU 
                                               & vlSelfRef.boom_core__DOT__wakeups[48U]) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[0U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[49U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[0U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[1U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[50U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[1U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[2U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[51U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[2U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[3U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[52U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[3U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[4U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[53U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[4U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[5U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[54U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[5U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[6U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[55U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[6U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[7U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[56U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[7U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[8U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[57U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[8U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[9U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[58U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[9U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[10U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[59U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[10U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_94[11U] 
                                                 << 6U));
    vlSelfRef.csr_wdata = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110)
                            ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113)
                                ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112)
                                    ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111)
                                        ? ((vlSelfRef.lsu_resp[1U] 
                                            << 0x00000019U) 
                                           | (vlSelfRef.lsu_resp[0U] 
                                              >> 7U))
                                        : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_109))));
    vlSelfRef.rob_wb_valid_dbg = ((0x00000020U & vlSelfRef.boom_core__DOT__rob_wb_resps[78U]) 
                                  | (((IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__res_valid) 
                                      << 4U) | ((8U 
                                                 & (vlSelfRef.lsu_resp[13U] 
                                                    << 3U)) 
                                                | (IData)(vlSelfRef.alu_res_valid_dbg))));
    vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en 
        = ((0x00000020U & (vlSelfRef.boom_core__DOT__wakeups[71U] 
                           >> 0x0000001aU)) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_93));
    vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
        = (((QData)((IData)((0x0000003fU & (vlSelfRef.boom_core__DOT__wakeups[64U] 
                                            >> 0x0000000fU)))) 
            << 0x0000001eU) | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_69)));
}

void Vboom_core___024root___nba_sequent__TOP__6(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___nba_sequent__TOP__6\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_36;
    __VdfgRegularize_h6e95ff9d_0_36 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_67;
    __VdfgRegularize_h6e95ff9d_0_67 = 0;
    SData/*11:0*/ __VdfgRegularize_h6e95ff9d_0_190;
    __VdfgRegularize_h6e95ff9d_0_190 = 0;
    SData/*9:0*/ __VdfgRegularize_h6e95ff9d_0_191;
    __VdfgRegularize_h6e95ff9d_0_191 = 0;
    SData/*11:0*/ __VdfgRegularize_h6e95ff9d_0_194;
    __VdfgRegularize_h6e95ff9d_0_194 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_195;
    __VdfgRegularize_h6e95ff9d_0_195 = 0;
    // Body
    vlSelfRef.boom_core__DOT__rob_inst__DOT__can_throw_exception 
        = ((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head_vals) 
           & ((2U & ((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_exception[1U] 
                      >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)) 
                     << 1U)) | (1U & (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_exception[0U] 
                                      >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_155 = ((~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82) 
                                                    | (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__can_throw_exception))) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153 = ((~ 
                                                   (((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__can_throw_exception) 
                                                     >> 1U) 
                                                    | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82) 
                                                       | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51)) 
                                                             | (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__can_throw_exception)))))) 
                                                  & ((~ 
                                                      ((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_bsy[1U] 
                                                        >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)) 
                                                       | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[2U] 
                                                          >> 8U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48)));
    vlSelfRef.boom_core__DOT__rob_inst__DOT__will_commit 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153) 
            << 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_155));
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
    __VdfgRegularize_h6e95ff9d_0_36 = ((vlSelfRef.commit
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
    __VdfgRegularize_h6e95ff9d_0_67 = (vlSelfRef.commit
                                       .__PVT__valids 
                                       & ((0U != (0x0000003fU 
                                                  & (vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[1U] 
                                                     >> 0x0000000fU))) 
                                          & (2U != 
                                             (3U & 
                                              (vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[0U] 
                                               >> 0x0000001bU)))));
    vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_en 
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_36) 
            << 1U) | (IData)(__VdfgRegularize_h6e95ff9d_0_67));
    __VdfgRegularize_h6e95ff9d_0_190 = (0x0000003fU 
                                        & ((vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[4U] 
                                            >> 9U) 
                                           & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_67)))));
    __VdfgRegularize_h6e95ff9d_0_191 = (0x0000001fU 
                                        & ((vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[1U] 
                                            >> 0x0000000fU) 
                                           & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_67)))));
    __VdfgRegularize_h6e95ff9d_0_194 = (0x0000003fU 
                                        & ((vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[3U] 
                                            >> 9U) 
                                           & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_67)))));
    __VdfgRegularize_h6e95ff9d_0_195 = ((0U != (0x0000003fU 
                                                & (vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[3U] 
                                                   >> 9U))) 
                                        & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_67))));
    vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_preg 
        = ((0x00000fc0U & (((IData)(__VdfgRegularize_h6e95ff9d_0_36)
                             ? ((vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[16U] 
                                 << 0x0000001eU) | 
                                (vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[16U] 
                                 >> 2U)) : ((IData)(__VdfgRegularize_h6e95ff9d_0_190) 
                                            >> 6U)) 
                           << 6U)) | (0x0000003fU & (IData)(__VdfgRegularize_h6e95ff9d_0_190)));
    vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_lreg 
        = ((0x000003e0U & (((IData)(__VdfgRegularize_h6e95ff9d_0_36)
                             ? ((vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[13U] 
                                 << 0x00000018U) | 
                                (vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[13U] 
                                 >> 8U)) : ((IData)(__VdfgRegularize_h6e95ff9d_0_191) 
                                            >> 5U)) 
                           << 5U)) | (0x0000001fU & (IData)(__VdfgRegularize_h6e95ff9d_0_191)));
    vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__free_preg 
        = ((0x00000fc0U & (((IData)(__VdfgRegularize_h6e95ff9d_0_36)
                             ? ((vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[15U] 
                                 << 0x0000001eU) | 
                                (vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[15U] 
                                 >> 2U)) : ((IData)(__VdfgRegularize_h6e95ff9d_0_194) 
                                            >> 6U)) 
                           << 6U)) | (0x0000003fU & (IData)(__VdfgRegularize_h6e95ff9d_0_194)));
    vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__free_en 
        = ((2U & (((IData)(__VdfgRegularize_h6e95ff9d_0_36)
                    ? (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[15U] 
                                             >> 2U)))
                    : ((IData)(__VdfgRegularize_h6e95ff9d_0_195) 
                       >> 1U)) << 1U)) | (1U & (IData)(__VdfgRegularize_h6e95ff9d_0_195)));
}

void Vboom_core___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vboom_core___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vboom_core___024root___eval_phase__act(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___eval_phase__act\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((~ (IData)(vlSelfRef.rst_n)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__1)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rst_n__1 = vlSelfRef.rst_n;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vboom_core___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vboom_core___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vboom_core___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vboom_core___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vboom_core___024root___nba_sequent__TOP__0(Vboom_core___024root* vlSelf);
void Vboom_core___024root___nba_sequent__TOP__1(Vboom_core___024root* vlSelf);
void Vboom_core___024root___nba_sequent__TOP__2(Vboom_core___024root* vlSelf);
void Vboom_core_decode___nba_sequent__TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst__0(Vboom_core_decode* vlSelf);
void Vboom_core_decode___ico_comb__TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst__0(Vboom_core_decode* vlSelf);
void Vboom_core_decode___ico_comb__TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst__1(Vboom_core_decode* vlSelf);
void Vboom_core_decode___ico_comb__TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst__2(Vboom_core_decode* vlSelf);
void Vboom_core___024root___ico_comb__TOP__5(Vboom_core___024root* vlSelf);
void Vboom_core_decode___ico_comb__TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst__1(Vboom_core_decode* vlSelf);
void Vboom_core___024root___ico_comb__TOP__6(Vboom_core___024root* vlSelf);

bool Vboom_core___024root___eval_phase__nba(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___eval_phase__nba\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vboom_core___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vboom_core___024root___nba_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[7U] = 1U;
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vboom_core___024root___nba_sequent__TOP__1(vlSelf);
                vlSelfRef.__Vm_traceActivity[8U] = 1U;
                Vboom_core___024root___nba_sequent__TOP__2(vlSelf);
                Vboom_core_decode___nba_sequent__TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst__0((&vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst));
                Vboom_core___024root___nba_sequent__TOP__3(vlSelf);
                Vboom_core_decode___ico_comb__TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst__0((&vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst));
                Vboom_core___024root___nba_sequent__TOP__4(vlSelf);
                Vboom_core_decode___ico_comb__TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst__1((&vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst));
            }
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__5
                    vlSelfRef.boom_core__DOT__rob_inst__DOT__exception_throw_d2 
                        = vlSelfRef.boom_core__DOT__rob_inst__DOT__exception_throw_d1;
                    vlSelfRef.boom_core__DOT__rob_inst__DOT__exception_throw_d1 
                        = ((~ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_155))) 
                           & (0U != (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__can_throw_exception)));
                }
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vboom_core___024root___nba_comb__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[9U] = 1U;
                Vboom_core_decode___ico_comb__TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst__2((&vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst));
                Vboom_core___024root___ico_comb__TOP__5(vlSelf);
                Vboom_core_decode___ico_comb__TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst__1((&vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst));
                Vboom_core___024root___ico_comb__TOP__6(vlSelf);
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vboom_core___024root___nba_sequent__TOP__6(vlSelf);
                vlSelfRef.__Vm_traceActivity[10U] = 1U;
            }
        }
        Vboom_core___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vboom_core___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vboom_core___024root___eval_phase__ico(Vboom_core___024root* vlSelf);

void Vboom_core___024root___eval(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___eval\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vboom_core___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("boom_core.sv", 5, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vboom_core___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vboom_core___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("boom_core.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vboom_core___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("boom_core.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vboom_core___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vboom_core___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vboom_core___024root___eval_debug_assertions(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___eval_debug_assertions\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.fe_valid & 0xf0U)))) {
        Verilated::overWidthError("fe_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.lsu_resp_valid & 0xfeU)))) {
        Verilated::overWidthError("lsu_resp_valid");
    }
}
#endif  // VL_DEBUG
