// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboom_core.h for the primary calling header

#include "Vboom_core__pch.h"

VL_ATTR_COLD void Vboom_core___024root___stl_sequent__TOP__1(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___stl_sequent__TOP__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.boom_core__DOT__brmask__DOT__will_fire 
        = (((IData)((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__dec_fire) 
                      >> 1U) & (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_16[7U] 
                                >> 0x00000015U))) << 1U) 
           | (1U & ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__dec_fire) 
                    & (vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_13[7U] 
                       >> 0x00000015U))));
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

VL_ATTR_COLD void Vboom_core___024root___stl_sequent__TOP__2(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___stl_sequent__TOP__2\n"); );
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

#ifdef VL_DEBUG
VL_ATTR_COLD void Vboom_core___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vboom_core___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vboom_core___024root___stl_sequent__TOP__0(Vboom_core___024root* vlSelf);
void Vboom_core_decode___ico_sequent__TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst__0(Vboom_core_decode* vlSelf);
VL_ATTR_COLD void Vboom_core_decode___stl_sequent__TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst__0(Vboom_core_decode* vlSelf);
void Vboom_core_decode___ico_comb__TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst__0(Vboom_core_decode* vlSelf);
VL_ATTR_COLD void Vboom_core_decode___stl_sequent__TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst__1(Vboom_core_decode* vlSelf);
void Vboom_core___024root___ico_comb__TOP__5(Vboom_core___024root* vlSelf);
void Vboom_core_decode___ico_comb__TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst__1(Vboom_core_decode* vlSelf);
void Vboom_core___024root___ico_comb__TOP__6(Vboom_core___024root* vlSelf);

VL_ATTR_COLD bool Vboom_core___024root___eval_phase__stl(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___eval_phase__stl\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vboom_core___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vboom_core___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vboom_core___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.__Vm_traceActivity[3U] = 1U;
                    vlSelfRef.__Vm_traceActivity[4U] = 1U;
                    vlSelfRef.__Vm_traceActivity[5U] = 1U;
                    vlSelfRef.__Vm_traceActivity[6U] = 1U;
                    vlSelfRef.__Vm_traceActivity[7U] = 1U;
                    vlSelfRef.__Vm_traceActivity[8U] = 1U;
                    vlSelfRef.__Vm_traceActivity[9U] = 1U;
                    vlSelfRef.__Vm_traceActivity[10U] = 1U;
                }
                Vboom_core_decode___ico_sequent__TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst__0((&vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst));
                Vboom_core_decode___stl_sequent__TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst__0((&vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst));
                Vboom_core___024root___stl_sequent__TOP__1(vlSelf);
                Vboom_core_decode___ico_comb__TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst__0((&vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst));
                Vboom_core___024root___stl_sequent__TOP__2(vlSelf);
                Vboom_core_decode___stl_sequent__TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst__1((&vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst));
                Vboom_core___024root___ico_comb__TOP__5(vlSelf);
                Vboom_core_decode___ico_comb__TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst__1((&vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst));
                Vboom_core___024root___ico_comb__TOP__6(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

bool Vboom_core___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vboom_core___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vboom_core___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( fe_valid)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( fe_insts)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( lsu_resp_valid)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( lsu_resp)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( csr_rdata)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vboom_core___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vboom_core___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vboom_core___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vboom_core___024root___ctor_var_reset(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___ctor_var_reset\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->fe_valid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4161282499223213957ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->fe_insts, __VscopeHash, 9777309644771077505ull);
    vlSelf->fe_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14019875863511091012ull);
    vlSelf->lsu_agen_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13352352722590465944ull);
    vlSelf->lsu_agen_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13042245985735519227ull);
    VL_SCOPED_RAND_RESET_W(377, vlSelf->lsu_agen_uop, __VscopeHash, 5219310961056568885ull);
    vlSelf->lsu_dgen_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12268462477436053523ull);
    vlSelf->lsu_dgen_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10306575792661751908ull);
    VL_SCOPED_RAND_RESET_W(377, vlSelf->lsu_dgen_uop, __VscopeHash, 1948667719866872751ull);
    vlSelf->lsu_resp_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2692178241092760346ull);
    VL_SCOPED_RAND_RESET_W(417, vlSelf->lsu_resp, __VscopeHash, 3395202530624233500ull);
    vlSelf->csr_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15321472922041309029ull);
    vlSelf->csr_addr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 7898632209201321389ull);
    vlSelf->csr_cmd = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12467272236922965782ull);
    vlSelf->csr_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6382147037310304714ull);
    vlSelf->csr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8686967141507380524ull);
    vlSelf->commit.__PVT__valids = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6902039264876868477ull);
    vlSelf->commit.__PVT__arch_valids = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6902039264876868477ull);
    VL_SCOPED_RAND_RESET_W(754, vlSelf->commit.__PVT__uops, __VscopeHash, 6902039264876868477ull);
    vlSelf->commit.__PVT__fflags = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6902039264876868477ull);
    vlSelf->commit.__PVT__debug_insts = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6902039264876868477ull);
    vlSelf->commit.__PVT__debug_wdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6902039264876868477ull);
    vlSelf->rob_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15707162050714807370ull);
    vlSelf->debug_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4804012649788666537ull);
    vlSelf->commit_valid_dbg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12306427113263693282ull);
    vlSelf->commit_ldst_dbg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18429456090088790463ull);
    vlSelf->rf_wr_en_dbg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 618272685453687497ull);
    vlSelf->rf_wr_pdst_dbg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16261790369603064730ull);
    vlSelf->rf_wr_ldst_dbg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7111231811184171925ull);
    vlSelf->rf_wr_data_dbg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1187381490524393389ull);
    vlSelf->alu_rs1_dbg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4891039306003989546ull);
    vlSelf->alu_imm_dbg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16889952098317522743ull);
    vlSelf->alu_imm_packed_dbg = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 6723860184046567308ull);
    vlSelf->alu_imm_sel_dbg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8106923250418839092ull);
    vlSelf->rob_ready_dbg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 918724893111105414ull);
    vlSelf->ren_stalls_dbg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6475882582754896773ull);
    vlSelf->rn2_mask_dbg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4867777125875905838ull);
    vlSelf->dis_fire_dbg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11047359464764360688ull);
    vlSelf->alu_iss_valid_dbg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 787330008753177147ull);
    vlSelf->alu_res_valid_dbg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10121177031775991028ull);
    vlSelf->rob_wb_valid_dbg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2214443294101741465ull);
    vlSelf->boom_core__DOT__dec_xcpts = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10738600673259672723ull);
    vlSelf->boom_core__DOT__bm_br_mask = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13197191903617107120ull);
    VL_SCOPED_RAND_RESET_W(2304, vlSelf->boom_core__DOT__wakeups, __VscopeHash, 16474668936244035276ull);
    VL_ZERO_RESET_W(754, vlSelf->boom_core__DOT____Vcellinp__rename__commit_uops);
    vlSelf->boom_core__DOT__iq_mem_dis_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7100903236591965838ull);
    vlSelf->boom_core__DOT__iq_alu_dis_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13795681005790473760ull);
    vlSelf->boom_core__DOT__iq_unq_dis_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10925451758013664944ull);
    VL_SCOPED_RAND_RESET_W(377, vlSelf->boom_core__DOT__iq_mem_dis_uop, __VscopeHash, 8064258328192263477ull);
    VL_SCOPED_RAND_RESET_W(377, vlSelf->boom_core__DOT__iq_alu_dis_uop, __VscopeHash, 3330536252628674773ull);
    VL_SCOPED_RAND_RESET_W(377, vlSelf->boom_core__DOT__iq_unq_dis_uop, __VscopeHash, 17482371730448538173ull);
    vlSelf->boom_core__DOT__dis_fire = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10349308570205178889ull);
    vlSelf->boom_core__DOT__alu_iq_dis_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1080193265027940868ull);
    vlSelf->boom_core__DOT__mem_iq_dis_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14961723761708206811ull);
    vlSelf->boom_core__DOT__unq_iq_dis_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9614827815272292126ull);
    vlSelf->boom_core__DOT__alu_iss_valid = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16070220421427467536ull);
    vlSelf->boom_core__DOT__mem_iss_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9860219961558260586ull);
    vlSelf->boom_core__DOT__unq_iss_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3641268345878460632ull);
    vlSelf->boom_core__DOT__alu_slot_grant = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3280390494125743073ull);
    vlSelf->boom_core__DOT__mem_slot_grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13881059309953712204ull);
    vlSelf->boom_core__DOT__unq_slot_grant = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4485832883061640805ull);
    vlSelf->boom_core__DOT__alu_slot_request = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15799760521429315030ull);
    vlSelf->boom_core__DOT__mem_slot_request = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8176140194123551264ull);
    vlSelf->boom_core__DOT__unq_slot_request = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1596010737446052831ull);
    vlSelf->boom_core__DOT__wakeup_valid_w = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17041239931159128431ull);
    vlSelf->boom_core__DOT__wakeup_pdst_w = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 17437732478240274588ull);
    VL_ZERO_RESET_W(1131, vlSelf->boom_core__DOT____Vcellout__alu_iq__iss_uop);
    VL_ZERO_RESET_W(754, vlSelf->boom_core__DOT____Vcellout__mem_iq__iss_uop);
    VL_ZERO_RESET_W(377, vlSelf->boom_core__DOT____Vcellout__unq_iq__iss_uop);
    VL_SCOPED_RAND_RESET_W(2502, vlSelf->boom_core__DOT__rob_wb_resps, __VscopeHash, 17450650022363437189ull);
    vlSelf->boom_core__DOT__resolve_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9210041460011837841ull);
    VL_ZERO_RESET_W(384, vlSelf->boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup);
    VL_ZERO_RESET_W(384, vlSelf->boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup);
    VL_ZERO_RESET_W(384, vlSelf->boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup);
    vlSelf->boom_core__DOT__rename__DOT__dec_fire = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5691628918775990657ull);
    VL_SCOPED_RAND_RESET_W(754, vlSelf->boom_core__DOT__rename__DOT__dec_uops, __VscopeHash, 15010092699560910377ull);
    vlSelf->boom_core__DOT__rename__DOT__mt_arch_busy_vec = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 15721481170999015937ull);
    vlSelf->boom_core__DOT__rename__DOT__busytable__DOT__busy = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15735406319467904407ull);
    vlSelf->boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8135361090384892576ull);
    vlSelf->boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 7971068830031713293ull);
    vlSelf->boom_core__DOT__rename__DOT__busytable__DOT__busy_vec = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 2479088686647778667ull);
    vlSelf->boom_core__DOT__rename__DOT__freelist__DOT__free_en = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14613969614342334221ull);
    vlSelf->boom_core__DOT__rename__DOT__freelist__DOT__free_preg = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14673755411894617719ull);
    vlSelf->boom_core__DOT__rename__DOT__freelist__DOT__free_vec = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 8373182466374436981ull);
    vlSelf->boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12123692016034441814ull);
    vlSelf->boom_core__DOT__rename__DOT__maptable__DOT__write_en = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 246036764768540797ull);
    vlSelf->boom_core__DOT__rename__DOT__maptable__DOT__write_lreg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18422435061717492230ull);
    vlSelf->boom_core__DOT__rename__DOT__maptable__DOT__write_preg = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 18404068096868889442ull);
    vlSelf->boom_core__DOT__rename__DOT__maptable__DOT__commit_en = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11221404520317901800ull);
    vlSelf->boom_core__DOT__rename__DOT__maptable__DOT__commit_lreg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3245917488683988438ull);
    vlSelf->boom_core__DOT__rename__DOT__maptable__DOT__commit_preg = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 18222762207552274522ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->boom_core__DOT__rename__DOT__maptable__DOT__map_q[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 272531143348230947ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9736232014987471479ull);
    }
    vlSelf->boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11879016624905059621ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__brinfo_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14150006458219878320ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2628324139952095112ull);
    VL_SCOPED_RAND_RESET_W(377, vlSelf->boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop, __VscopeHash, 16817069226447271198ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8547635171181924361ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1772653844049388640ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17807948156448765391ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8320900511679563354ull);
    VL_SCOPED_RAND_RESET_W(377, vlSelf->boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop, __VscopeHash, 4869021795046477240ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7015677157768360361ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4065188858577569283ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12765842392666407702ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17982877267739158349ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4453803007963258044ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5663044491470986243ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__cond_true = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18214010903656446369ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7273230140302481791ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__brinfo_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1095307141173798488ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5514175274457639611ull);
    VL_SCOPED_RAND_RESET_W(377, vlSelf->boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop, __VscopeHash, 3953135966838983748ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15260378740016375908ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17088997543310836706ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10961368745660449420ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16338005935636531107ull);
    VL_SCOPED_RAND_RESET_W(377, vlSelf->boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop, __VscopeHash, 7671187375012596908ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5134186690227031985ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4759420550028057236ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15562334813110026233ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 38597247150076177ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15962043872957949108ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16505502137169752572ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__cond_true = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6046664669155585534ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17550460116841076808ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__brinfo_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4907205932269051841ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10218858843940966271ull);
    VL_SCOPED_RAND_RESET_W(377, vlSelf->boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop, __VscopeHash, 12000033380388346264ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6864450167609748595ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16988035992561319777ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9043228059379724901ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3391099987845105814ull);
    VL_SCOPED_RAND_RESET_W(377, vlSelf->boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop, __VscopeHash, 1424547842844135319ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 201289859655910618ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8602053735482645828ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10679493984663404574ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4856349041528092441ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6010648580400256188ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6518091324523668669ull);
    vlSelf->boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__cond_true = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2450138453486540620ull);
    vlSelf->boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__rrd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10342384327689880899ull);
    VL_SCOPED_RAND_RESET_W(377, vlSelf->boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__rrd_uop, __VscopeHash, 750348297191348698ull);
    vlSelf->boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__rrd_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14707148235422584326ull);
    vlSelf->boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__rrd_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5787085648538358538ull);
    vlSelf->boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__rrd_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4483204143601249646ull);
    vlSelf->boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16899799147343283526ull);
    VL_SCOPED_RAND_RESET_W(377, vlSelf->boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop, __VscopeHash, 13777334542732955574ull);
    vlSelf->boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4431863940396338493ull);
    vlSelf->boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9602925130633887443ull);
    vlSelf->boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8751867433855520989ull);
    vlSelf->boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7949981285594240407ull);
    VL_SCOPED_RAND_RESET_W(377, vlSelf->boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_uop, __VscopeHash, 7929032899902212262ull);
    vlSelf->boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8281018969758570550ull);
    vlSelf->boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18427315041679752463ull);
    vlSelf->boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__rrd_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1439056346138486374ull);
    vlSelf->boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15884683790862072132ull);
    VL_SCOPED_RAND_RESET_W(377, vlSelf->boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop, __VscopeHash, 6362312063327272533ull);
    vlSelf->boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14964969073532017205ull);
    vlSelf->boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9354672726030535534ull);
    vlSelf->boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17528940598748986367ull);
    vlSelf->boom_core__DOT__rob_inst__DOT__rob_tail_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3227776612935212620ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->boom_core__DOT__rob_inst__DOT__com_xcpt, __VscopeHash, 15933189282715809554ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->boom_core__DOT__rob_inst__DOT__flush, __VscopeHash, 8219204643623222305ull);
    vlSelf->boom_core__DOT__rob_inst__DOT__flush_frontend = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14485435356314560509ull);
    vlSelf->boom_core__DOT__rob_inst__DOT__rob_head_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6725044680358114576ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->boom_core__DOT__rob_inst__DOT__rob_val[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17597975393211964667ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->boom_core__DOT__rob_inst__DOT__rob_bsy[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12419199051717263039ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->boom_core__DOT__rob_inst__DOT__rob_unsafe[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14431471619396515889ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(12064, vlSelf->boom_core__DOT__rob_inst__DOT__rob_uop[__Vi0], __VscopeHash, 53965305286681431ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->boom_core__DOT__rob_inst__DOT__rob_exception[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6201548995166691015ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->boom_core__DOT__rob_inst__DOT__rob_predicated[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3543133816558926042ull);
    }
    vlSelf->boom_core__DOT__rob_inst__DOT__rob_head = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2249742561096514871ull);
    vlSelf->boom_core__DOT__rob_inst__DOT__rob_tail = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9068284662015539518ull);
    vlSelf->boom_core__DOT__rob_inst__DOT__rob_pnr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2334820562268591646ull);
    vlSelf->boom_core__DOT__rob_inst__DOT__rob_head_lsb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14591212045144199147ull);
    vlSelf->boom_core__DOT__rob_inst__DOT__rob_tail_lsb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7490253459561242421ull);
    vlSelf->boom_core__DOT__rob_inst__DOT__rob_pnr_lsb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18092958876609764870ull);
    vlSelf->boom_core__DOT__rob_inst__DOT__rob_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13644123725563371977ull);
    vlSelf->boom_core__DOT__rob_inst__DOT__next_rob_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2905080916637621828ull);
    vlSelf->boom_core__DOT__rob_inst__DOT__rob_head_vals = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 607622439767658294ull);
    vlSelf->boom_core__DOT__rob_inst__DOT__can_throw_exception = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 586293768460138284ull);
    vlSelf->boom_core__DOT__rob_inst__DOT__will_commit = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17071698346644301619ull);
    vlSelf->boom_core__DOT__rob_inst__DOT__exception_throw_d1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12489584875135969342ull);
    vlSelf->boom_core__DOT__rob_inst__DOT__exception_throw_d2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1371592831576281900ull);
    vlSelf->boom_core__DOT__unq_inst__DOT__res_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8406135086186158963ull);
    vlSelf->boom_core__DOT__unq_inst__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3841416501036263268ull);
    vlSelf->boom_core__DOT__unq_inst__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12898109071762899159ull);
    VL_SCOPED_RAND_RESET_W(377, vlSelf->boom_core__DOT__unq_inst__DOT__pipe_uop, __VscopeHash, 2840345438856075244ull);
    vlSelf->boom_core__DOT__unq_inst__DOT__pipe_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13394976170784033655ull);
    vlSelf->boom_core__DOT__unq_inst__DOT__pipe_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18127493910910118934ull);
    vlSelf->boom_core__DOT__unq_inst__DOT__busy_cnt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6266036413295641083ull);
    vlSelf->boom_core__DOT__unq_inst__DOT__busy_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9613615236110007311ull);
    vlSelf->boom_core__DOT__iregfile__DOT__write_en = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12581932230229767197ull);
    vlSelf->boom_core__DOT__iregfile__DOT__write_addr = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 4121566513932260486ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->boom_core__DOT__iregfile__DOT__write_data, __VscopeHash, 5776505045853728199ull);
    for (int __Vi0 = 0; __Vi0 < 48; ++__Vi0) {
        vlSelf->boom_core__DOT__iregfile__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8568383062670558591ull);
    }
    vlSelf->boom_core__DOT__unq_iq__DOT__slot_valid = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10350176008047594113ull);
    VL_SCOPED_RAND_RESET_W(4524, vlSelf->boom_core__DOT__unq_iq__DOT__slot_uop, __VscopeHash, 3733580155538111617ull);
    vlSelf->boom_core__DOT__unq_iq__DOT__slot_killed = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6512181312120888664ull);
    vlSelf->boom_core__DOT__unq_iq__DOT__slot_ready = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9871114803086484760ull);
    vlSelf->boom_core__DOT__unq_iq__DOT__slot_grant = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12547709737474249301ull);
    vlSelf->boom_core__DOT__unq_iq__DOT__dis_slot = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7525002059474970398ull);
    vlSelf->boom_core__DOT__mem_iq__DOT__slot_valid = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17986259729883906720ull);
    VL_SCOPED_RAND_RESET_W(6032, vlSelf->boom_core__DOT__mem_iq__DOT__slot_uop, __VscopeHash, 11176532631761433708ull);
    vlSelf->boom_core__DOT__mem_iq__DOT__slot_killed = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11955005360803389813ull);
    vlSelf->boom_core__DOT__mem_iq__DOT__slot_ready = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11880925995694498462ull);
    vlSelf->boom_core__DOT__mem_iq__DOT__slot_grant = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1721719253644761480ull);
    vlSelf->boom_core__DOT__mem_iq__DOT__dis_slot = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 835441053462294370ull);
    vlSelf->boom_core__DOT__alu_iq__DOT__slot_valid = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16761535252614384776ull);
    VL_SCOPED_RAND_RESET_W(6032, vlSelf->boom_core__DOT__alu_iq__DOT__slot_uop, __VscopeHash, 8914731002591135362ull);
    vlSelf->boom_core__DOT__alu_iq__DOT__slot_killed = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11095573962682000047ull);
    vlSelf->boom_core__DOT__alu_iq__DOT__slot_ready = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13969243136867558753ull);
    vlSelf->boom_core__DOT__alu_iq__DOT__slot_grant = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6149155101345704629ull);
    vlSelf->boom_core__DOT__alu_iq__DOT__dis_slot = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14618648166307768443ull);
    VL_SCOPED_RAND_RESET_W(754, vlSelf->boom_core__DOT__disp__DOT__rn2_uops, __VscopeHash, 2357845320801622119ull);
    vlSelf->boom_core__DOT__disp__DOT__iq_ready = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7898194578564115408ull);
    vlSelf->boom_core__DOT__disp__DOT__block = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2212085145682080554ull);
    vlSelf->boom_core__DOT__brmask__DOT__will_fire = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4866415248429991986ull);
    VL_SCOPED_RAND_RESET_W(458, vlSelf->boom_core__DOT__brmask__DOT__brupdate, __VscopeHash, 9291293778132762026ull);
    vlSelf->boom_core__DOT__brmask__DOT__br_mask_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9550426103509499700ull);
    vlSelf->boom_core__DOT__brmask__DOT__alloc_mask = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14618686770819230506ull);
    vlSelf->boom_core__DOT__brmask__DOT__curr_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5207887243390853234ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_5 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_6 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_7 = 0;
    VL_ZERO_RESET_W(262, vlSelf->__VdfgRegularize_h6e95ff9d_0_21);
    VL_ZERO_RESET_W(262, vlSelf->__VdfgRegularize_h6e95ff9d_0_22);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_24 = 0;
    VL_ZERO_RESET_W(256, vlSelf->__VdfgRegularize_h6e95ff9d_0_26);
    VL_ZERO_RESET_W(256, vlSelf->__VdfgRegularize_h6e95ff9d_0_27);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_29 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_30 = 0;
    VL_ZERO_RESET_W(258, vlSelf->__VdfgRegularize_h6e95ff9d_0_41);
    VL_ZERO_RESET_W(258, vlSelf->__VdfgRegularize_h6e95ff9d_0_42);
    VL_ZERO_RESET_W(84, vlSelf->__VdfgRegularize_h6e95ff9d_0_43);
    VL_ZERO_RESET_W(84, vlSelf->__VdfgRegularize_h6e95ff9d_0_44);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_45 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_46 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_47 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_48 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_51 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_52 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_53 = 0;
    VL_ZERO_RESET_W(241, vlSelf->__VdfgRegularize_h6e95ff9d_0_57);
    VL_ZERO_RESET_W(241, vlSelf->__VdfgRegularize_h6e95ff9d_0_58);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_61 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_62 = 0;
    VL_ZERO_RESET_W(84, vlSelf->__VdfgRegularize_h6e95ff9d_0_63);
    VL_ZERO_RESET_W(84, vlSelf->__VdfgRegularize_h6e95ff9d_0_64);
    VL_ZERO_RESET_W(261, vlSelf->__VdfgRegularize_h6e95ff9d_0_65);
    VL_ZERO_RESET_W(261, vlSelf->__VdfgRegularize_h6e95ff9d_0_66);
    VL_ZERO_RESET_W(450, vlSelf->__VdfgRegularize_h6e95ff9d_0_68);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_69 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_77 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_78 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_79 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_82 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_83 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_85 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_87 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_88 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_90 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_92 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_93 = 0;
    VL_ZERO_RESET_W(378, vlSelf->__VdfgRegularize_h6e95ff9d_0_94);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_96 = 0;
    VL_ZERO_RESET_W(256, vlSelf->__VdfgRegularize_h6e95ff9d_0_97);
    VL_ZERO_RESET_W(256, vlSelf->__VdfgRegularize_h6e95ff9d_0_99);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_102 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_104 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_105 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_106 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_107 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_108 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_109 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_110 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_111 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_112 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_113 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_114 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_115 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_116 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_117 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_118 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_119 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_120 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_121 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_122 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_123 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_124 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_125 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_126 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_127 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_128 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_129 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_130 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_131 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_132 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_133 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_134 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_135 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_136 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_137 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_138 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_139 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_140 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_141 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_142 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_143 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_144 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_145 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_146 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_147 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_148 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_149 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_150 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_151 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_152 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_153 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_155 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_172 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_178 = 0;
    VL_ZERO_RESET_W(256, vlSelf->__VdfgRegularize_h6e95ff9d_0_179);
    VL_ZERO_RESET_W(256, vlSelf->__VdfgRegularize_h6e95ff9d_0_180);
    VL_ZERO_RESET_W(87, vlSelf->__VdfgRegularize_h6e95ff9d_0_181);
    VL_ZERO_RESET_W(87, vlSelf->__VdfgRegularize_h6e95ff9d_0_182);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_183 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_184 = 0;
    VL_ZERO_RESET_W(86, vlSelf->__VdfgRegularize_h6e95ff9d_0_185);
    VL_ZERO_RESET_W(86, vlSelf->__VdfgRegularize_h6e95ff9d_0_186);
    vlSelf->__Vdly__boom_core__DOT__rob_inst__DOT__rob_head = 0;
    vlSelf->__Vdly__boom_core__DOT__rob_inst__DOT__rob_tail = 0;
    vlSelf->__Vdly__boom_core__DOT__rob_inst__DOT__rob_state = 0;
    vlSelf->__Vdly__boom_core__DOT__unq_inst__DOT__busy_cnt = 0;
    VL_ZERO_RESET_W(4524, vlSelf->__Vdly__boom_core__DOT__unq_iq__DOT__slot_uop);
    VL_ZERO_RESET_W(6032, vlSelf->__Vdly__boom_core__DOT__mem_iq__DOT__slot_uop);
    VL_ZERO_RESET_W(6032, vlSelf->__Vdly__boom_core__DOT__alu_iq__DOT__slot_uop);
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v0 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v0 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v1 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v2 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v3 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v4 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v5 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v6 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v7 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v8 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v9 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v10 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v11 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v12 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v13 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v14 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v15 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v16 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v17 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v18 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v19 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v20 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v21 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v22 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v23 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v24 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v25 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v26 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v27 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v28 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v29 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v30 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v31 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v32 = 0;
    vlSelf->__VdlyDim0__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v32 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v32 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v33 = 0;
    vlSelf->__VdlyDim0__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v33 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v33 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rename__DOT__maptable__DOT__map_q__v34 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q__v0 = 0;
    vlSelf->__VdlyDim0__boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q__v0 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q__v0 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q__v1 = 0;
    vlSelf->__VdlyDim0__boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q__v1 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q__v1 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q__v2 = 0;
    VL_ZERO_RESET_W(377, vlSelf->__VdlyVal__boom_core__DOT__rob_inst__DOT__rob_uop__v0);
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_uop__v0 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_uop__v0 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rob_inst__DOT__rob_exception__v0 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_exception__v0 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_exception__v0 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_exception__v1 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rob_inst__DOT__rob_bsy__v0 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_bsy__v0 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_bsy__v0 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rob_inst__DOT__rob_unsafe__v0 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_unsafe__v0 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rob_inst__DOT__rob_predicated__v0 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_predicated__v0 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_bsy__v1 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_bsy__v1 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_unsafe__v1 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_predicated__v1 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_bsy__v2 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_bsy__v2 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_unsafe__v2 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_predicated__v2 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_bsy__v3 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_bsy__v3 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_unsafe__v3 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_predicated__v3 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_bsy__v4 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_bsy__v4 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_unsafe__v4 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_predicated__v4 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_bsy__v5 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_bsy__v5 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_unsafe__v5 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_predicated__v5 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_bsy__v6 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_bsy__v6 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_unsafe__v6 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_predicated__v6 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_bsy__v7 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_bsy__v8 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v0 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v1 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v2 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v3 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v4 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v5 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v6 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v7 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v8 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v9 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v10 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v11 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v12 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v13 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v14 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v15 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v16 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v17 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v18 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v19 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v20 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v21 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v22 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v23 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v24 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v25 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v26 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v27 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v28 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v29 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v30 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v31 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v32 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v33 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v34 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v35 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v36 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rob_inst__DOT__rob_exception__v2 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_exception__v2 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_exception__v2 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_exception__v3 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rob_inst__DOT__rob_bsy__v9 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_bsy__v9 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_bsy__v9 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rob_inst__DOT__rob_unsafe__v8 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_unsafe__v8 = 0;
    vlSelf->__VdlyVal__boom_core__DOT__rob_inst__DOT__rob_predicated__v8 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_predicated__v8 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_bsy__v10 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_bsy__v10 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_unsafe__v9 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_predicated__v9 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_bsy__v11 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_bsy__v11 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_unsafe__v10 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_predicated__v10 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_bsy__v12 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_bsy__v12 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_unsafe__v11 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_predicated__v11 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_bsy__v13 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_bsy__v13 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_unsafe__v12 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_predicated__v12 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_bsy__v14 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_bsy__v14 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_unsafe__v13 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_predicated__v13 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_bsy__v15 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_bsy__v15 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_unsafe__v14 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_predicated__v14 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_bsy__v16 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_bsy__v17 = 0;
    VL_ZERO_RESET_W(377, vlSelf->__VdlyVal__boom_core__DOT__rob_inst__DOT__rob_uop__v1);
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_uop__v1 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_uop__v1 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_val__v37 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v37 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v38 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v39 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v40 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v41 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v42 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v43 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v44 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v45 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v46 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v47 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v48 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v49 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v50 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v51 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v52 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v53 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v54 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v55 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v56 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v57 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v58 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v59 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v60 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v61 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v62 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v63 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v64 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v65 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v66 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v67 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v68 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v69 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_val__v70 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v70 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v71 = 0;
    vlSelf->__VdlyLsb__boom_core__DOT__rob_inst__DOT__rob_val__v72 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v72 = 0;
    vlSelf->__VdlySet__boom_core__DOT__rob_inst__DOT__rob_val__v73 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__fe_valid__0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vtrigprevexpr___TOP__fe_insts__0);
    vlSelf->__Vtrigprevexpr___TOP__lsu_resp_valid__0 = 0;
    VL_ZERO_RESET_W(417, vlSelf->__Vtrigprevexpr___TOP__lsu_resp__0);
    vlSelf->__Vtrigprevexpr___TOP__csr_rdata__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
