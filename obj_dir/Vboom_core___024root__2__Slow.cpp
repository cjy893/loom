// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboom_core.h for the primary calling header

#include "Vboom_core__pch.h"

extern const VlWide<142>/*4543:0*/ Vboom_core__ConstPool__CONST_ha307440e_0;
extern const VlWide<12>/*383:0*/ Vboom_core__ConstPool__CONST_hdb31f06b_0;

VL_ATTR_COLD void Vboom_core___024root___stl_comb__TOP__9(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___stl_comb__TOP__9\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid = 0U;
    VL_ASSIGN_W(4524, vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_uop, Vboom_core__ConstPool__CONST_ha307440e_0);
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear = 0U;
    vlSelfRef.boom_core__DOT__unq_iq__DOT__dis_accepted = 0U;
    vlSelfRef.boom_core__DOT__unq_iq__DOT__dst = 0U;
    if ((1U & (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__src_valid))) {
        if ((0U != vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)) {
            if (VL_LIKELY(((0x0bU >= (0x0000000fU & vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))))) {
                vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid 
                    = ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid) 
                       | (0x0fffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))));
            }
            vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[0U] 
                = vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[0U];
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[1U] 
                = vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[1U];
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[2U] 
                = vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[2U];
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                = vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[3U];
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                = vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[4U];
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[5U] 
                = vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[5U];
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[6U] 
                = vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[6U];
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[7U] 
                = vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[7U];
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[8U] 
                = vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[8U];
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[9U] 
                = vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[9U];
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[10U] 
                = vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[10U];
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[11U] 
                = (0x01ffffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[11U]);
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x11abU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(4524, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)), vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__unq_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__unq_iq__DOT__dst);
    }
    if ((((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__src_valid) 
          >> 1U) & VL_GTS_III(32, 0x0000000cU, vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))) {
        if ((1U != vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)) {
            if (VL_LIKELY(((0x0bU >= (0x0000000fU & vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))))) {
                vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid 
                    = ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid) 
                       | (0x0fffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))));
            }
            vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[12U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[11U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[13U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[12U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[14U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[13U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[15U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[14U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[16U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[15U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[17U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[16U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[18U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[17U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[19U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[18U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[20U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[19U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[21U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[20U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[22U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[21U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[23U] 
                                   << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[22U] 
                                             >> 0x00000019U)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x11abU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(4524, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)), vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__unq_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__unq_iq__DOT__dst);
    }
    if ((((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__src_valid) 
          >> 2U) & VL_GTS_III(32, 0x0000000cU, vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))) {
        if ((2U != vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)) {
            if (VL_LIKELY(((0x0bU >= (0x0000000fU & vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))))) {
                vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid 
                    = ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid) 
                       | (0x0fffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))));
            }
            vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[24U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[23U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[25U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[24U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[26U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[25U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[27U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[26U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[28U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[27U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[29U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[28U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[30U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[29U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[31U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[30U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[32U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[31U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[33U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[32U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[34U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[33U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[35U] 
                                   << 0x0000000eU) 
                                  | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[34U] 
                                     >> 0x00000012U)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x11abU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(4524, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)), vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__unq_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__unq_iq__DOT__dst);
    }
    if ((((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__src_valid) 
          >> 3U) & VL_GTS_III(32, 0x0000000cU, vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))) {
        if ((3U != vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)) {
            if (VL_LIKELY(((0x0bU >= (0x0000000fU & vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))))) {
                vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid 
                    = ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid) 
                       | (0x0fffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))));
            }
            vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear 
                = (8U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[36U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[35U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[37U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[36U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[38U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[37U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[39U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[38U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[40U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[39U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[41U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[40U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[42U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[41U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[43U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[42U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[44U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[43U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[45U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[44U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[46U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[45U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[47U] 
                                   << 0x00000015U) 
                                  | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[46U] 
                                     >> 0x0000000bU)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x11abU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(4524, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)), vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__unq_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__unq_iq__DOT__dst);
    }
    if ((((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__src_valid) 
          >> 4U) & VL_GTS_III(32, 0x0000000cU, vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))) {
        if ((4U != vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)) {
            if (VL_LIKELY(((0x0bU >= (0x0000000fU & vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))))) {
                vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid 
                    = ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid) 
                       | (0x0fffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))));
            }
            vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear 
                = (0x00000010U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[48U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[47U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[49U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[48U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[50U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[49U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[51U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[50U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[52U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[51U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[53U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[52U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[54U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[53U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[55U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[54U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[56U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[55U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[57U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[56U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[58U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[57U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[11U] 
                = (0x01ffffffU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[58U] 
                                  >> 4U));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x11abU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(4524, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)), vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__unq_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__unq_iq__DOT__dst);
    }
    if ((((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__src_valid) 
          >> 5U) & VL_GTS_III(32, 0x0000000cU, vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))) {
        if ((5U != vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)) {
            if (VL_LIKELY(((0x0bU >= (0x0000000fU & vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))))) {
                vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid 
                    = ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid) 
                       | (0x0fffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))));
            }
            vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear 
                = (0x00000020U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[59U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[58U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[60U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[59U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[61U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[60U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[62U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[61U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[63U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[62U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[64U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[63U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[65U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[64U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[66U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[65U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[67U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[66U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[68U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[67U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[69U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[68U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[70U] 
                                   << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[69U] 
                                             >> 0x0000001dU)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x11abU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(4524, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)), vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__unq_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__unq_iq__DOT__dst);
    }
    if ((((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__src_valid) 
          >> 6U) & VL_GTS_III(32, 0x0000000cU, vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))) {
        if ((6U != vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)) {
            if (VL_LIKELY(((0x0bU >= (0x0000000fU & vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))))) {
                vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid 
                    = ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid) 
                       | (0x0fffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))));
            }
            vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear 
                = (0x00000040U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[71U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[70U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[72U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[71U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[73U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[72U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[74U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[73U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[75U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[74U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[76U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[75U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[77U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[76U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[78U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[77U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[79U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[78U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[80U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[79U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[81U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[80U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[82U] 
                                   << 0x0000000aU) 
                                  | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[81U] 
                                     >> 0x00000016U)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x11abU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(4524, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)), vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__unq_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__unq_iq__DOT__dst);
    }
    if ((((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__src_valid) 
          >> 7U) & VL_GTS_III(32, 0x0000000cU, vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))) {
        if ((7U != vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)) {
            if (VL_LIKELY(((0x0bU >= (0x0000000fU & vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))))) {
                vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid 
                    = ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid) 
                       | (0x0fffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))));
            }
            vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear 
                = (0x00000080U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[83U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[82U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[84U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[83U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[85U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[84U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[86U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[85U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[87U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[86U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[88U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[87U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[89U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[88U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[90U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[89U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[91U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[90U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[92U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[91U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[93U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[92U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[94U] 
                                   << 0x00000011U) 
                                  | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[93U] 
                                     >> 0x0000000fU)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x11abU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(4524, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)), vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__unq_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__unq_iq__DOT__dst);
    }
    if ((((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__src_valid) 
          >> 8U) & VL_GTS_III(32, 0x0000000cU, vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))) {
        if ((8U != vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)) {
            if (VL_LIKELY(((0x0bU >= (0x0000000fU & vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))))) {
                vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid 
                    = ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid) 
                       | (0x0fffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))));
            }
            vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear 
                = (0x00000100U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[95U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[94U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[96U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[95U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[97U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[96U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[98U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[97U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[99U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[98U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[100U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[99U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[101U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[100U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[102U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[101U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[103U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[102U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[104U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[103U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[105U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[104U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[106U] 
                                   << 0x00000018U) 
                                  | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[105U] 
                                     >> 8U)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x11abU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(4524, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)), vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__unq_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__unq_iq__DOT__dst);
    }
    if ((((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__src_valid) 
          >> 9U) & VL_GTS_III(32, 0x0000000cU, vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))) {
        if ((9U != vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)) {
            if (VL_LIKELY(((0x0bU >= (0x0000000fU & vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))))) {
                vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid 
                    = ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid) 
                       | (0x0fffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))));
            }
            vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear 
                = (0x00000200U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[107U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[106U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[108U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[107U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[109U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[108U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[110U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[109U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[111U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[110U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[112U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[111U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[113U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[112U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[114U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[113U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[115U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[114U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[116U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[115U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[117U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[116U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[11U] 
                = (0x01ffffffU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[117U] 
                                  >> 1U));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x11abU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(4524, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)), vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__unq_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__unq_iq__DOT__dst);
    }
    if ((((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__src_valid) 
          >> 0x0aU) & VL_GTS_III(32, 0x0000000cU, vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))) {
        if ((0x0000000aU != vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)) {
            if (VL_LIKELY(((0x0bU >= (0x0000000fU & vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))))) {
                vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid 
                    = ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid) 
                       | (0x0fffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))));
            }
            vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear 
                = (0x00000400U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[118U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[117U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[119U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[118U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[120U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[119U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[121U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[120U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[122U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[121U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[123U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[122U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[124U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[123U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[125U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[124U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[126U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[125U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[127U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[126U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[128U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[127U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[129U] 
                                   << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[128U] 
                                             >> 0x0000001aU)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x11abU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(4524, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)), vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__unq_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__unq_iq__DOT__dst);
    }
    if ((((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__src_valid) 
          >> 0x0bU) & VL_GTS_III(32, 0x0000000cU, vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))) {
        if ((0x0000000bU != vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)) {
            if (VL_LIKELY(((0x0bU >= (0x0000000fU & vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))))) {
                vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid 
                    = ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid) 
                       | (0x0fffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))));
            }
            vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear 
                = (0x00000800U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[130U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[129U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[131U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[130U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[132U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[131U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[133U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[132U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[134U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[133U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[135U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[134U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[136U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[135U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[137U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[136U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[138U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[137U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[139U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[138U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[140U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[139U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[141U] 
                                   << 0x0000000dU) 
                                  | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[140U] 
                                     >> 0x00000013U)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x11abU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(4524, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)), vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__unq_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__unq_iq__DOT__dst);
    }
    if ((((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__src_valid) 
          >> 0x0cU) & VL_GTS_III(32, 0x0000000cU, vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))) {
        vlSelfRef.boom_core__DOT__unq_iq__DOT__d = 0U;
        if ((0x0000000cU != vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)) {
            if (VL_LIKELY(((0x0bU >= (0x0000000fU & vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))))) {
                vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid 
                    = ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_valid) 
                       | (0x0fffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__unq_iq__DOT__dst))));
            }
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[142U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[141U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[143U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[142U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[144U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[143U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[145U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[144U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[146U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[145U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[147U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[146U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[148U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[147U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[149U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[148U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[150U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[149U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[151U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[150U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[152U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[151U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[153U] 
                                   << 0x00000014U) 
                                  | (vlSelfRef.boom_core__DOT__unq_iq__DOT__src_uop[152U] 
                                     >> 0x0000000cU)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x11abU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(4524, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__unq_iq__DOT__dst)), vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__unq_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__unq_iq__DOT__dis_accepted = 1U;
        vlSelfRef.boom_core__DOT__unq_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__unq_iq__DOT__dst);
    }
    vlSelfRef.boom_core__DOT__unq_iq__DOT__dis_ready 
        = vlSelfRef.boom_core__DOT__unq_iq__DOT__dis_accepted;
    vlSelfRef.boom_core__DOT__unq_iss_valid = 0U;
    VL_ASSIGN_W(377, vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop, Vboom_core__ConstPool__CONST_hdb31f06b_0);
    vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant = 0U;
    vlSelfRef.boom_core__DOT__unq_iq__DOT__port_used = 0U;
    {
        if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_request)))) {
            goto __Vlabel0;
        }
        if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__port_used)))) {
            vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__unq_iss_valid = 1U;
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[0U] 
                = vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[0U];
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U] 
                = vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[1U];
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[2U] 
                = vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[2U];
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                = vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[3U];
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                = vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[4U];
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U] 
                = vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[5U];
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U] 
                = vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[6U];
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[7U] 
                = vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[7U];
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
                = vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[8U];
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[9U] 
                = vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[9U];
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[10U] 
                = vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[10U];
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[11U] 
                = (0x01ffffffU & vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[11U]);
            vlSelfRef.boom_core__DOT__unq_iq__DOT__port_used = 1U;
        }
        __Vlabel0: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_request) 
                      >> 1U)))) {
            goto __Vlabel1;
        }
        if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__port_used)))) {
            vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__unq_iss_valid = 1U;
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[12U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[11U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[13U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[12U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[14U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[13U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[15U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[14U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[16U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[15U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[17U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[16U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[18U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[17U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[19U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[18U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[20U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[19U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[21U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[20U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[22U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[21U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[23U] 
                                   << 7U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[22U] 
                                             >> 0x00000019U)));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__port_used = 1U;
        }
        __Vlabel1: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_request) 
                      >> 2U)))) {
            goto __Vlabel2;
        }
        if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__port_used)))) {
            vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__unq_iss_valid = 1U;
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[24U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[23U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[25U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[24U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[26U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[25U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[27U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[26U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[28U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[27U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[29U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[28U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[30U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[29U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[31U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[30U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[32U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[31U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[33U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[32U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[34U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[33U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[35U] 
                                   << 0x0000000eU) 
                                  | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[34U] 
                                     >> 0x00000012U)));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__port_used = 1U;
        }
        __Vlabel2: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_request) 
                      >> 3U)))) {
            goto __Vlabel3;
        }
        if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__port_used)))) {
            vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant 
                = (8U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__unq_iss_valid = 1U;
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[36U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[35U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[37U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[36U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[38U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[37U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[39U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[38U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[40U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[39U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[41U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[40U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[42U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[41U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[43U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[42U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[44U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[43U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[45U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[44U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[46U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[45U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[47U] 
                                   << 0x00000015U) 
                                  | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[46U] 
                                     >> 0x0000000bU)));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__port_used = 1U;
        }
        __Vlabel3: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_request) 
                      >> 4U)))) {
            goto __Vlabel4;
        }
        if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__port_used)))) {
            vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant 
                = (0x00000010U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__unq_iss_valid = 1U;
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[48U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[47U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[49U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[48U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[50U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[49U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[51U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[50U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[52U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[51U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[53U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[52U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[54U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[53U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[55U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[54U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[56U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[55U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[57U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[56U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[58U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[57U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[11U] 
                = (0x01ffffffU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[58U] 
                                  >> 4U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__port_used = 1U;
        }
        __Vlabel4: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_request) 
                      >> 5U)))) {
            goto __Vlabel5;
        }
        if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__port_used)))) {
            vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant 
                = (0x00000020U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__unq_iss_valid = 1U;
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[59U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[58U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[60U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[59U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[61U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[60U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[62U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[61U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[63U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[62U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[64U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[63U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[65U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[64U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[66U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[65U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[67U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[66U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[68U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[67U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[69U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[68U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[70U] 
                                   << 3U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[69U] 
                                             >> 0x0000001dU)));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__port_used = 1U;
        }
        __Vlabel5: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_request) 
                      >> 6U)))) {
            goto __Vlabel6;
        }
        if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__port_used)))) {
            vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant 
                = (0x00000040U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__unq_iss_valid = 1U;
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[71U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[70U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[72U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[71U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[73U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[72U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[74U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[73U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[75U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[74U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[76U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[75U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[77U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[76U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[78U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[77U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[79U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[78U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[80U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[79U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[81U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[80U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[82U] 
                                   << 0x0000000aU) 
                                  | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[81U] 
                                     >> 0x00000016U)));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__port_used = 1U;
        }
        __Vlabel6: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_request) 
                      >> 7U)))) {
            goto __Vlabel7;
        }
        if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__port_used)))) {
            vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant 
                = (0x00000080U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__unq_iss_valid = 1U;
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[83U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[82U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[84U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[83U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[85U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[84U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[86U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[85U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[87U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[86U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[88U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[87U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[89U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[88U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[90U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[89U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[91U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[90U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[92U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[91U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[93U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[92U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[94U] 
                                   << 0x00000011U) 
                                  | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[93U] 
                                     >> 0x0000000fU)));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__port_used = 1U;
        }
        __Vlabel7: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_request) 
                      >> 8U)))) {
            goto __Vlabel8;
        }
        if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__port_used)))) {
            vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant 
                = (0x00000100U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__unq_iss_valid = 1U;
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[95U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[94U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[96U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[95U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[97U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[96U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[98U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[97U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[99U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[98U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[100U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[99U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[101U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[100U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[102U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[101U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[103U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[102U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[104U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[103U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[105U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[104U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[106U] 
                                   << 0x00000018U) 
                                  | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[105U] 
                                     >> 8U)));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__port_used = 1U;
        }
        __Vlabel8: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_request) 
                      >> 9U)))) {
            goto __Vlabel9;
        }
        if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__port_used)))) {
            vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant 
                = (0x00000200U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__unq_iss_valid = 1U;
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[107U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[106U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[108U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[107U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[109U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[108U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[110U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[109U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[111U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[110U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[112U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[111U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[113U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[112U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[114U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[113U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[115U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[114U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[116U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[115U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[117U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[116U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[11U] 
                = (0x01ffffffU & (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[117U] 
                                  >> 1U));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__port_used = 1U;
        }
        __Vlabel9: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_request) 
                      >> 0x0aU)))) {
            goto __Vlabel10;
        }
        if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__port_used)))) {
            vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant 
                = (0x00000400U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__unq_iss_valid = 1U;
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[118U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[117U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[119U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[118U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[120U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[119U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[121U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[120U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[122U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[121U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[123U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[122U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[124U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[123U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[125U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[124U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[126U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[125U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[127U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[126U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[128U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[127U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[129U] 
                                   << 6U) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[128U] 
                                             >> 0x0000001aU)));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__port_used = 1U;
        }
        __Vlabel10: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_request) 
                      >> 0x0bU)))) {
            goto __Vlabel11;
        }
        if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__port_used)))) {
            vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant 
                = (0x00000800U | (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__unq_iss_valid = 1U;
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[130U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[129U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[131U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[130U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[132U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[131U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[133U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[132U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[134U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[133U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[135U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[134U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[136U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[135U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[137U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[136U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[138U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[137U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[139U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[138U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[140U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[139U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[141U] 
                                   << 0x0000000dU) 
                                  | (vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_iss_uop[140U] 
                                     >> 0x00000013U)));
            vlSelfRef.boom_core__DOT__unq_iq__DOT__port_used = 1U;
        }
        __Vlabel11: ;
    }
    vlSelfRef.boom_core__DOT__unq_iq__DOT__src_valid 
        = ((((((((~ (vlSelfRef.boom_core__DOT__iq_unq_dis_uop[3U] 
                     >> 8U)) & (IData)(vlSelfRef.boom_core__DOT__iq_unq_dis_valid)) 
                << 3U) | ((IData)(((~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear) 
                                       >> 0x0000000bU)) 
                                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12) 
                                      >> 0x0000000bU))) 
                          << 2U)) | ((2U & (((~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear) 
                                                 >> 0x0000000aU)) 
                                             << 1U) 
                                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12) 
                                               >> 9U))) 
                                     | (1U & ((~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear) 
                                                  >> 9U)) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12) 
                                                 >> 9U))))) 
             << 9U) | (((4U & (((~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear) 
                                    >> 8U)) << 2U) 
                               & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12) 
                                  >> 6U))) | ((2U & 
                                               (((~ 
                                                  ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear) 
                                                   >> 7U)) 
                                                 << 1U) 
                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12) 
                                                   >> 6U))) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear) 
                                                      >> 6U)) 
                                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12) 
                                                       >> 6U))))) 
                       << 6U)) | ((((4U & (((~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear) 
                                                >> 5U)) 
                                            << 2U) 
                                           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12) 
                                              >> 3U))) 
                                    | ((2U & (((~ ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear) 
                                                   >> 4U)) 
                                               << 1U) 
                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12) 
                                                 >> 3U))) 
                                       | (1U & ((~ 
                                                 ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear) 
                                                  >> 3U)) 
                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12) 
                                                   >> 3U))))) 
                                   << 3U) | ((4U & 
                                              (((~ 
                                                 ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear) 
                                                  >> 2U)) 
                                                << 2U) 
                                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12))) 
                                             | ((2U 
                                                 & (((~ 
                                                      ((IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear) 
                                                       >> 1U)) 
                                                     << 1U) 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12))) 
                                                | (1U 
                                                   & ((~ (IData)(vlSelfRef.boom_core__DOT__unq_iq__DOT__slot_clear)) 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12)))))));
    vlSelfRef.csr_addr = (0x00003fffU & ((vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[6U] 
                                          << 0x0000000dU) 
                                         | (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[5U] 
                                            >> 0x00000013U)));
    vlSelfRef.csr_cmd = (3U & (vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[1U] 
                               >> 0x00000016U));
    vlSelfRef.csr_req_valid = ((IData)(vlSelfRef.boom_core__DOT__unq_iss_valid) 
                               & ((vlSelfRef.boom_core__DOT____Vcellout__unq_iq__iss_uop[8U] 
                                   >> 0x0000000fU) 
                                  & (0U == (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state))));
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_222 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_223 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_225 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_229 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_230 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_221 = ((
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
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22)))
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_223)
                                                    ? 
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.lsu_resp[0U] 
                                                       >> 7U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_225)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_222)
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_226 = ((
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
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22)))
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228)
                                                    ? 
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.lsu_resp[0U] 
                                                       >> 7U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_229)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_230)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227)
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
    vlSelfRef.csr_wdata = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_227)
                            ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                            : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_230)
                                ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_229)
                                    ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_228)
                                        ? ((vlSelfRef.lsu_resp[1U] 
                                            << 0x00000019U) 
                                           | (vlSelfRef.lsu_resp[0U] 
                                              >> 7U))
                                        : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_226))));
}

extern const VlWide<189>/*6047:0*/ Vboom_core__ConstPool__CONST_h2a0917b4_0;
extern const VlWide<36>/*1151:0*/ Vboom_core__ConstPool__CONST_h0fa36855_0;

VL_ATTR_COLD void Vboom_core___024root___stl_comb__TOP__10(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___stl_comb__TOP__10\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid = 0U;
    VL_ASSIGN_W(6032, vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_uop, Vboom_core__ConstPool__CONST_h2a0917b4_0);
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear = 0U;
    vlSelfRef.boom_core__DOT__alu_iq__DOT__dis_accepted = 0U;
    vlSelfRef.boom_core__DOT__alu_iq__DOT__dst = 0U;
    if ((1U & vlSelfRef.boom_core__DOT__alu_iq__DOT__src_valid)) {
        if ((0U != vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[0U] 
                = vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[0U];
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[1U] 
                = vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[1U];
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[2U] 
                = vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[2U];
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                = vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[3U];
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                = vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[4U];
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[5U] 
                = vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[5U];
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[6U] 
                = vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[6U];
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[7U] 
                = vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[7U];
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[8U] 
                = vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[8U];
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[9U] 
                = vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[9U];
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[10U] 
                = vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[10U];
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[11U] 
                = (0x01ffffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[11U]);
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)), vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__alu_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_valid 
          >> 1U) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))) {
        if ((1U != vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[12U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[11U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[13U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[12U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[14U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[13U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[15U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[14U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[16U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[15U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[17U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[16U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[18U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[17U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[19U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[18U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[20U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[19U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[21U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[20U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[22U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[21U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[23U] 
                                   << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[22U] 
                                             >> 0x00000019U)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)), vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__alu_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_valid 
          >> 2U) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))) {
        if ((2U != vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[24U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[23U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[25U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[24U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[26U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[25U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[27U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[26U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[28U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[27U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[29U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[28U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[30U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[29U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[31U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[30U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[32U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[31U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[33U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[32U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[34U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[33U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[35U] 
                                   << 0x0000000eU) 
                                  | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[34U] 
                                     >> 0x00000012U)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)), vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__alu_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_valid 
          >> 3U) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))) {
        if ((3U != vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear 
                = (8U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[36U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[35U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[37U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[36U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[38U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[37U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[39U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[38U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[40U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[39U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[41U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[40U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[42U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[41U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[43U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[42U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[44U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[43U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[45U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[44U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[46U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[45U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[47U] 
                                   << 0x00000015U) 
                                  | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[46U] 
                                     >> 0x0000000bU)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)), vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__alu_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_valid 
          >> 4U) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))) {
        if ((4U != vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear 
                = (0x00000010U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[48U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[47U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[49U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[48U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[50U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[49U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[51U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[50U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[52U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[51U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[53U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[52U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[54U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[53U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[55U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[54U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[56U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[55U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[57U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[56U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[58U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[57U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[11U] 
                = (0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[58U] 
                                  >> 4U));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)), vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__alu_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_valid 
          >> 5U) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))) {
        if ((5U != vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear 
                = (0x00000020U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[59U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[58U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[60U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[59U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[61U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[60U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[62U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[61U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[63U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[62U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[64U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[63U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[65U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[64U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[66U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[65U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[67U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[66U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[68U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[67U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[69U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[68U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[70U] 
                                   << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[69U] 
                                             >> 0x0000001dU)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)), vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__alu_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_valid 
          >> 6U) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))) {
        if ((6U != vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear 
                = (0x00000040U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[71U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[70U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[72U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[71U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[73U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[72U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[74U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[73U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[75U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[74U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[76U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[75U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[77U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[76U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[78U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[77U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[79U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[78U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[80U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[79U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[81U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[80U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[82U] 
                                   << 0x0000000aU) 
                                  | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[81U] 
                                     >> 0x00000016U)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)), vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__alu_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_valid 
          >> 7U) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))) {
        if ((7U != vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear 
                = (0x00000080U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[83U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[82U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[84U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[83U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[85U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[84U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[86U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[85U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[87U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[86U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[88U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[87U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[89U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[88U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[90U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[89U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[91U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[90U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[92U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[91U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[93U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[92U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[94U] 
                                   << 0x00000011U) 
                                  | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[93U] 
                                     >> 0x0000000fU)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)), vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__alu_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_valid 
          >> 8U) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))) {
        if ((8U != vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear 
                = (0x00000100U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[95U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[94U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[96U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[95U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[97U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[96U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[98U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[97U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[99U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[98U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[100U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[99U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[101U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[100U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[102U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[101U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[103U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[102U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[104U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[103U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[105U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[104U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[106U] 
                                   << 0x00000018U) 
                                  | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[105U] 
                                     >> 8U)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)), vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__alu_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_valid 
          >> 9U) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))) {
        if ((9U != vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear 
                = (0x00000200U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[107U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[106U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[108U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[107U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[109U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[108U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[110U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[109U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[111U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[110U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[112U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[111U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[113U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[112U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[114U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[113U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[115U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[114U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[116U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[115U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[117U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[116U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[11U] 
                = (0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[117U] 
                                  >> 1U));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)), vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__alu_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_valid 
          >> 0x0aU) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))) {
        if ((0x0000000aU != vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear 
                = (0x00000400U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[118U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[117U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[119U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[118U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[120U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[119U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[121U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[120U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[122U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[121U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[123U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[122U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[124U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[123U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[125U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[124U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[126U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[125U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[127U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[126U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[128U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[127U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[129U] 
                                   << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[128U] 
                                             >> 0x0000001aU)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)), vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__alu_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_valid 
          >> 0x0bU) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))) {
        if ((0x0000000bU != vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear 
                = (0x00000800U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[130U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[129U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[131U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[130U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[132U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[131U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[133U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[132U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[134U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[133U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[135U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[134U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[136U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[135U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[137U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[136U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[138U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[137U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[139U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[138U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[140U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[139U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[141U] 
                                   << 0x0000000dU) 
                                  | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[140U] 
                                     >> 0x00000013U)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)), vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__alu_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_valid 
          >> 0x0cU) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))) {
        if ((0x0000000cU != vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear 
                = (0x00001000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[142U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[141U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[143U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[142U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[144U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[143U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[145U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[144U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[146U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[145U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[147U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[146U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[148U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[147U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[149U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[148U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[150U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[149U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[151U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[150U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[152U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[151U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[153U] 
                                   << 0x00000014U) 
                                  | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[152U] 
                                     >> 0x0000000cU)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)), vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__alu_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_valid 
          >> 0x0dU) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))) {
        if ((0x0000000dU != vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear 
                = (0x00002000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[154U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[153U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[155U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[154U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[156U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[155U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[157U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[156U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[158U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[157U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[159U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[158U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[160U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[159U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[161U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[160U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[162U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[161U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[163U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[162U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[164U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[163U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[11U] 
                = (0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[164U] 
                                  >> 5U));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)), vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__alu_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_valid 
          >> 0x0eU) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))) {
        if ((0x0000000eU != vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear 
                = (0x00004000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[165U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[164U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[166U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[165U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[167U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[166U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[168U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[167U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[169U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[168U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[170U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[169U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[171U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[170U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[172U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[171U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[173U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[172U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[174U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[173U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[175U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[174U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[176U] 
                                   << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[175U] 
                                             >> 0x0000001eU)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)), vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__alu_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_valid 
          >> 0x0fU) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))) {
        if ((0x0000000fU != vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear 
                = (0x00008000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[177U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[176U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[178U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[177U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[179U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[178U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[180U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[179U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[181U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[180U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[182U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[181U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[183U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[182U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[184U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[183U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[185U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[184U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[186U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[185U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[187U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[186U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[188U] 
                                   << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[187U] 
                                             >> 0x00000017U)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)), vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__alu_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_valid 
          >> 0x10U) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))) {
        vlSelfRef.boom_core__DOT__alu_iq__DOT__d = 0U;
        if ((0x00000010U != vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__alu_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[189U] 
                    << 0x00000010U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[188U] 
                                       >> 0x00000010U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[190U] 
                    << 0x00000010U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[189U] 
                                       >> 0x00000010U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[191U] 
                    << 0x00000010U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[190U] 
                                       >> 0x00000010U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[192U] 
                    << 0x00000010U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[191U] 
                                       >> 0x00000010U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[193U] 
                    << 0x00000010U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[192U] 
                                       >> 0x00000010U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[194U] 
                    << 0x00000010U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[193U] 
                                       >> 0x00000010U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[195U] 
                    << 0x00000010U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[194U] 
                                       >> 0x00000010U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[196U] 
                    << 0x00000010U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[195U] 
                                       >> 0x00000010U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[197U] 
                    << 0x00000010U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[196U] 
                                       >> 0x00000010U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[198U] 
                    << 0x00000010U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[197U] 
                                       >> 0x00000010U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[199U] 
                    << 0x00000010U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[198U] 
                                       >> 0x00000010U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[200U] 
                                   << 0x00000010U) 
                                  | (vlSelfRef.boom_core__DOT__alu_iq__DOT__src_uop[199U] 
                                     >> 0x00000010U)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__alu_iq__DOT__dst)), vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__alu_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dis_accepted = 1U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__alu_iq__DOT__dst);
    }
    vlSelfRef.boom_core__DOT__alu_iq__DOT__dis_ready 
        = vlSelfRef.boom_core__DOT__alu_iq__DOT__dis_accepted;
    vlSelfRef.boom_core__DOT__alu_iss_valid = 0U;
    VL_ASSIGN_W(1131, vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop, Vboom_core__ConstPool__CONST_h0fa36855_0);
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant = 0U;
    vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used = 0U;
    {
        if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_request)))) {
            goto __Vlabel0;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                    = vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[0U];
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                    = vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[1U];
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                    = vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[2U];
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                    = vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[3U];
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                    = vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[4U];
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                    = vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[5U];
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                    = vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[6U];
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                    = vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[7U];
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                    = vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[8U];
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                    = vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[9U];
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                    = vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[10U];
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0x01ffffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[11U]));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel1;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[0U] 
                          << 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[0U] 
                        >> 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[1U] 
                                  << 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[1U] 
                        >> 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[2U] 
                                  << 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[2U] 
                        >> 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[3U] 
                                  << 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[3U] 
                        >> 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[4U] 
                                  << 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[4U] 
                        >> 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[5U] 
                                  << 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[5U] 
                        >> 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[6U] 
                                  << 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[6U] 
                        >> 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[7U] 
                                  << 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[7U] 
                        >> 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[8U] 
                                  << 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[8U] 
                        >> 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[9U] 
                                  << 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[9U] 
                        >> 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[10U] 
                                  << 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[10U] 
                        >> 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[11U] 
                                  << 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | (0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[11U] 
                                         >> 7U)));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel1;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 2U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[0U] 
                          << 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[0U] 
                        >> 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[1U] 
                                           << 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[1U] 
                        >> 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[2U] 
                                           << 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[2U] 
                        >> 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[3U] 
                                           << 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[3U] 
                        >> 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[4U] 
                                           << 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[4U] 
                        >> 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[5U] 
                                           << 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[5U] 
                        >> 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[6U] 
                                           << 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[6U] 
                        >> 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[7U] 
                                           << 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[7U] 
                        >> 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[8U] 
                                           << 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[8U] 
                        >> 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[9U] 
                                           << 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[9U] 
                        >> 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[10U] 
                                           << 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[10U] 
                        >> 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[11U] 
                                           << 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                    = (0x000007ffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[11U] 
                                      >> 0x0000000eU));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
            }
            __Vlabel1: ;
        }
        __Vlabel0: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_request) 
                      >> 1U)))) {
            goto __Vlabel2;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[12U] 
                        << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[11U] 
                                  >> 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[13U] 
                        << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[12U] 
                                  >> 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[14U] 
                        << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[13U] 
                                  >> 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[15U] 
                        << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[14U] 
                                  >> 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[16U] 
                        << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[15U] 
                                  >> 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[17U] 
                        << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[16U] 
                                  >> 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[18U] 
                        << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[17U] 
                                  >> 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[19U] 
                        << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[18U] 
                                  >> 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[20U] 
                        << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[19U] 
                                  >> 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[21U] 
                        << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[20U] 
                                  >> 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[22U] 
                        << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[21U] 
                                  >> 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[23U] 
                                          << 7U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[22U] 
                                          >> 0x00000019U))));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel3;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0xfe000000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[11U]));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[12U]) 
                       | (0xfe000000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[12U]));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[13U]) 
                       | (0xfe000000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[13U]));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[14U]) 
                       | (0xfe000000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[14U]));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[15U]) 
                       | (0xfe000000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[15U]));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[16U]) 
                       | (0xfe000000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[16U]));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[17U]) 
                       | (0xfe000000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[17U]));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[18U]) 
                       | (0xfe000000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[18U]));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[19U]) 
                       | (0xfe000000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[19U]));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[20U]) 
                       | (0xfe000000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[20U]));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[21U]) 
                       | (0xfe000000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[21U]));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[22U]) 
                       | (0xfe000000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[22U]));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | (0x0003ffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[23U]));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel3;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 2U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[12U] 
                           << 0x00000019U) | (0x01fc0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[11U] 
                                                 >> 7U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[12U] 
                                       >> 7U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[13U] 
                                                   << 0x00000019U) 
                                                  | (0x01fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[12U] 
                                                        >> 7U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[13U] 
                                       >> 7U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[14U] 
                                                   << 0x00000019U) 
                                                  | (0x01fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[13U] 
                                                        >> 7U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[14U] 
                                       >> 7U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[15U] 
                                                   << 0x00000019U) 
                                                  | (0x01fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[14U] 
                                                        >> 7U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[15U] 
                                       >> 7U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[16U] 
                                                   << 0x00000019U) 
                                                  | (0x01fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[15U] 
                                                        >> 7U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[16U] 
                                       >> 7U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[17U] 
                                                   << 0x00000019U) 
                                                  | (0x01fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[16U] 
                                                        >> 7U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[17U] 
                                       >> 7U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[18U] 
                                                   << 0x00000019U) 
                                                  | (0x01fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[17U] 
                                                        >> 7U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[18U] 
                                       >> 7U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[19U] 
                                                   << 0x00000019U) 
                                                  | (0x01fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[18U] 
                                                        >> 7U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[19U] 
                                       >> 7U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[20U] 
                                                   << 0x00000019U) 
                                                  | (0x01fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[19U] 
                                                        >> 7U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[20U] 
                                       >> 7U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[21U] 
                                                   << 0x00000019U) 
                                                  | (0x01fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[20U] 
                                                        >> 7U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[21U] 
                                       >> 7U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[22U] 
                                                   << 0x00000019U) 
                                                  | (0x01fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[21U] 
                                                        >> 7U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[22U] 
                                       >> 7U)) | (0xfffc0000U 
                                                  & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[23U] 
                                                      << 0x00000019U) 
                                                     | (0x01fc0000U 
                                                        & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[22U] 
                                                           >> 7U)))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                    = (0x000007ffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[23U] 
                                      >> 7U));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
            }
            __Vlabel3: ;
        }
        __Vlabel2: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_request) 
                      >> 2U)))) {
            goto __Vlabel4;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[24U] 
                        << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[23U] 
                                           >> 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[25U] 
                        << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[24U] 
                                           >> 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[26U] 
                        << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[25U] 
                                           >> 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[27U] 
                        << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[26U] 
                                           >> 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[28U] 
                        << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[27U] 
                                           >> 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[29U] 
                        << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[28U] 
                                           >> 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[30U] 
                        << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[29U] 
                                           >> 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[31U] 
                        << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[30U] 
                                           >> 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[32U] 
                        << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[31U] 
                                           >> 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[33U] 
                        << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[32U] 
                                           >> 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[34U] 
                        << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[33U] 
                                           >> 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[35U] 
                                          << 0x0000000eU) 
                                         | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[34U] 
                                            >> 0x00000012U))));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel5;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[23U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                    = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[24U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[23U] 
                                                   >> 0x00000019U)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[24U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                    = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[25U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[24U] 
                                                   >> 0x00000019U)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[25U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                    = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[26U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[25U] 
                                                   >> 0x00000019U)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[26U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                    = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[27U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[26U] 
                                                   >> 0x00000019U)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[27U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                    = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[28U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[27U] 
                                                   >> 0x00000019U)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[28U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                    = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[29U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[28U] 
                                                   >> 0x00000019U)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[29U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                    = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[30U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[29U] 
                                                   >> 0x00000019U)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[30U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                    = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[31U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[30U] 
                                                   >> 0x00000019U)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[31U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                    = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[32U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[31U] 
                                                   >> 0x00000019U)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[32U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                    = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[33U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[32U] 
                                                   >> 0x00000019U)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[33U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                    = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[34U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[33U] 
                                                   >> 0x00000019U)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[34U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | (0x0003ffffU & ((0x01ffff80U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[35U] 
                                             << 7U)) 
                                         | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[34U] 
                                            >> 0x00000019U))));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel5;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 2U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | (0xfffc0000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[23U]));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[24U]) 
                       | (0xfffc0000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[24U]));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[25U]) 
                       | (0xfffc0000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[25U]));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[26U]) 
                       | (0xfffc0000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[26U]));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[27U]) 
                       | (0xfffc0000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[27U]));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[28U]) 
                       | (0xfffc0000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[28U]));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[29U]) 
                       | (0xfffc0000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[29U]));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[30U]) 
                       | (0xfffc0000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[30U]));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[31U]) 
                       | (0xfffc0000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[31U]));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[32U]) 
                       | (0xfffc0000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[32U]));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[33U]) 
                       | (0xfffc0000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[33U]));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[34U]) 
                       | (0xfffc0000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[34U]));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                    = (0x000007ffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[35U]);
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
            }
            __Vlabel5: ;
        }
        __Vlabel4: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_request) 
                      >> 3U)))) {
            goto __Vlabel6;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (8U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[36U] 
                        << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[35U] 
                                           >> 0x0000000bU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[37U] 
                        << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[36U] 
                                           >> 0x0000000bU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[38U] 
                        << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[37U] 
                                           >> 0x0000000bU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[39U] 
                        << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[38U] 
                                           >> 0x0000000bU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[40U] 
                        << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[39U] 
                                           >> 0x0000000bU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[41U] 
                        << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[40U] 
                                           >> 0x0000000bU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[42U] 
                        << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[41U] 
                                           >> 0x0000000bU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[43U] 
                        << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[42U] 
                                           >> 0x0000000bU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[44U] 
                        << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[43U] 
                                           >> 0x0000000bU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[45U] 
                        << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[44U] 
                                           >> 0x0000000bU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[46U] 
                        << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[45U] 
                                           >> 0x0000000bU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[47U] 
                                          << 0x00000015U) 
                                         | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[46U] 
                                            >> 0x0000000bU))));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel7;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (8U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[35U] 
                                         << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                    = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[36U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[35U] 
                           >> 0x00000012U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[36U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                    = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[37U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[36U] 
                           >> 0x00000012U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[37U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                    = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[38U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[37U] 
                           >> 0x00000012U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[38U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                    = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[39U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[38U] 
                           >> 0x00000012U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[39U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                    = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[40U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[39U] 
                           >> 0x00000012U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[40U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                    = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[41U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[40U] 
                           >> 0x00000012U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[41U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                    = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[42U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[41U] 
                           >> 0x00000012U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[42U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                    = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[43U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[42U] 
                           >> 0x00000012U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[43U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                    = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[44U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[43U] 
                           >> 0x00000012U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[44U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                    = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[45U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[44U] 
                           >> 0x00000012U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[45U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                    = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[46U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[45U] 
                           >> 0x00000012U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[46U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | (0x0003ffffU & ((0x01ffc000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[47U] 
                                             << 0x0000000eU)) 
                                         | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[46U] 
                                            >> 0x00000012U))));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel7;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 2U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (8U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[35U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                    = (((0x0003ff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[36U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[35U] 
                                                   >> 0x00000019U)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[36U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                    = (((0x0003ff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[37U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[36U] 
                                                   >> 0x00000019U)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[37U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                    = (((0x0003ff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[38U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[37U] 
                                                   >> 0x00000019U)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[38U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                    = (((0x0003ff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[39U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[38U] 
                                                   >> 0x00000019U)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[39U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                    = (((0x0003ff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[40U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[39U] 
                                                   >> 0x00000019U)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[40U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                    = (((0x0003ff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[41U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[40U] 
                                                   >> 0x00000019U)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[41U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                    = (((0x0003ff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[42U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[41U] 
                                                   >> 0x00000019U)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[42U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                    = (((0x0003ff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[43U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[42U] 
                                                   >> 0x00000019U)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[43U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                    = (((0x0003ff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[44U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[43U] 
                                                   >> 0x00000019U)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[44U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                    = (((0x0003ff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[45U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[44U] 
                                                   >> 0x00000019U)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[45U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                    = (((0x0003ff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[46U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[45U] 
                                                   >> 0x00000019U)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[46U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                    = (0x000007ffU & ((0x0003ff80U 
                                       & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[47U] 
                                          << 7U)) | 
                                      (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[46U] 
                                       >> 0x00000019U)));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
            }
            __Vlabel7: ;
        }
        __Vlabel6: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_request) 
                      >> 4U)))) {
            goto __Vlabel8;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00000010U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[48U] 
                        << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[47U] 
                                           >> 4U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[49U] 
                        << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[48U] 
                                           >> 4U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[50U] 
                        << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[49U] 
                                           >> 4U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[51U] 
                        << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[50U] 
                                           >> 4U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[52U] 
                        << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[51U] 
                                           >> 4U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[53U] 
                        << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[52U] 
                                           >> 4U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[54U] 
                        << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[53U] 
                                           >> 4U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[55U] 
                        << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[54U] 
                                           >> 4U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[56U] 
                        << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[55U] 
                                           >> 4U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[57U] 
                        << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[56U] 
                                           >> 4U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[58U] 
                        << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[57U] 
                                           >> 4U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[58U] 
                                         >> 4U)));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel9;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00000010U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[47U] 
                                         << 0x00000015U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                    = (((0x01e00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[48U] 
                                        << 0x00000015U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[47U] 
                           >> 0x0000000bU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[48U] 
                                                  << 0x00000015U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                    = (((0x01e00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[49U] 
                                        << 0x00000015U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[48U] 
                           >> 0x0000000bU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[49U] 
                                                  << 0x00000015U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                    = (((0x01e00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[50U] 
                                        << 0x00000015U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[49U] 
                           >> 0x0000000bU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[50U] 
                                                  << 0x00000015U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                    = (((0x01e00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[51U] 
                                        << 0x00000015U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[50U] 
                           >> 0x0000000bU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[51U] 
                                                  << 0x00000015U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                    = (((0x01e00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[52U] 
                                        << 0x00000015U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[51U] 
                           >> 0x0000000bU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[52U] 
                                                  << 0x00000015U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                    = (((0x01e00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[53U] 
                                        << 0x00000015U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[52U] 
                           >> 0x0000000bU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[53U] 
                                                  << 0x00000015U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                    = (((0x01e00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[54U] 
                                        << 0x00000015U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[53U] 
                           >> 0x0000000bU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[54U] 
                                                  << 0x00000015U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                    = (((0x01e00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[55U] 
                                        << 0x00000015U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[54U] 
                           >> 0x0000000bU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[55U] 
                                                  << 0x00000015U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                    = (((0x01e00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[56U] 
                                        << 0x00000015U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[55U] 
                           >> 0x0000000bU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[56U] 
                                                  << 0x00000015U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                    = (((0x01e00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[57U] 
                                        << 0x00000015U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[56U] 
                           >> 0x0000000bU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[57U] 
                                                  << 0x00000015U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                    = (((0x01e00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[58U] 
                                        << 0x00000015U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[57U] 
                           >> 0x0000000bU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[58U] 
                                                  << 0x00000015U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | (0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[58U] 
                                         >> 0x0000000bU)));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel9;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 2U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00000010U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[47U] 
                                         << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                    = (((0x0003c000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[48U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[47U] 
                           >> 0x00000012U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[48U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                    = (((0x0003c000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[49U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[48U] 
                           >> 0x00000012U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[49U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                    = (((0x0003c000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[50U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[49U] 
                           >> 0x00000012U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[50U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                    = (((0x0003c000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[51U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[50U] 
                           >> 0x00000012U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[51U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                    = (((0x0003c000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[52U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[51U] 
                           >> 0x00000012U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[52U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                    = (((0x0003c000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[53U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[52U] 
                           >> 0x00000012U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[53U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                    = (((0x0003c000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[54U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[53U] 
                           >> 0x00000012U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[54U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                    = (((0x0003c000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[55U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[54U] 
                           >> 0x00000012U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[55U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                    = (((0x0003c000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[56U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[55U] 
                           >> 0x00000012U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[56U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                    = (((0x0003c000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[57U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[56U] 
                           >> 0x00000012U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[57U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                    = (((0x0003c000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[58U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[57U] 
                           >> 0x00000012U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[58U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                    = (0x000007ffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[58U] 
                                      >> 0x00000012U));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
            }
            __Vlabel9: ;
        }
        __Vlabel8: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_request) 
                      >> 5U)))) {
            goto __Vlabel10;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00000020U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[59U] 
                        << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[58U] 
                                  >> 0x0000001dU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[60U] 
                        << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[59U] 
                                  >> 0x0000001dU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[61U] 
                        << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[60U] 
                                  >> 0x0000001dU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[62U] 
                        << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[61U] 
                                  >> 0x0000001dU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[63U] 
                        << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[62U] 
                                  >> 0x0000001dU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[64U] 
                        << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[63U] 
                                  >> 0x0000001dU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[65U] 
                        << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[64U] 
                                  >> 0x0000001dU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[66U] 
                        << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[65U] 
                                  >> 0x0000001dU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[67U] 
                        << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[66U] 
                                  >> 0x0000001dU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[68U] 
                        << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[67U] 
                                  >> 0x0000001dU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[69U] 
                        << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[68U] 
                                  >> 0x0000001dU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[70U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[69U] 
                                          >> 0x0000001dU))));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel11;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00000020U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[59U] 
                           << 0x0000001cU) | (0x0e000000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[58U] 
                                                 >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[59U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[60U] 
                                                   << 0x0000001cU) 
                                                  | (0x0e000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[59U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[60U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[61U] 
                                                   << 0x0000001cU) 
                                                  | (0x0e000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[60U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[61U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[62U] 
                                                   << 0x0000001cU) 
                                                  | (0x0e000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[61U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[62U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[63U] 
                                                   << 0x0000001cU) 
                                                  | (0x0e000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[62U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[63U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[64U] 
                                                   << 0x0000001cU) 
                                                  | (0x0e000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[63U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[64U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[65U] 
                                                   << 0x0000001cU) 
                                                  | (0x0e000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[64U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[65U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[66U] 
                                                   << 0x0000001cU) 
                                                  | (0x0e000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[65U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[66U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[67U] 
                                                   << 0x0000001cU) 
                                                  | (0x0e000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[66U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[67U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[68U] 
                                                   << 0x0000001cU) 
                                                  | (0x0e000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[67U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[68U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[69U] 
                                                   << 0x0000001cU) 
                                                  | (0x0e000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[68U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[69U] 
                                       >> 4U)) | (0xfe000000U 
                                                  & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[70U] 
                                                      << 0x0000001cU) 
                                                     | (0x0e000000U 
                                                        & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[69U] 
                                                           >> 4U)))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | (0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[70U] 
                                         >> 4U)));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel11;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 2U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00000020U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[59U] 
                           << 0x00000015U) | (0x001c0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[58U] 
                                                 >> 0x0000000bU))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[59U] 
                                       >> 0x0000000bU)) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[60U] 
                           << 0x00000015U) | (0x001c0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[59U] 
                                                 >> 0x0000000bU))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[60U] 
                                       >> 0x0000000bU)) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[61U] 
                           << 0x00000015U) | (0x001c0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[60U] 
                                                 >> 0x0000000bU))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[61U] 
                                       >> 0x0000000bU)) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[62U] 
                           << 0x00000015U) | (0x001c0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[61U] 
                                                 >> 0x0000000bU))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[62U] 
                                       >> 0x0000000bU)) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[63U] 
                           << 0x00000015U) | (0x001c0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[62U] 
                                                 >> 0x0000000bU))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[63U] 
                                       >> 0x0000000bU)) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[64U] 
                           << 0x00000015U) | (0x001c0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[63U] 
                                                 >> 0x0000000bU))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[64U] 
                                       >> 0x0000000bU)) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[65U] 
                           << 0x00000015U) | (0x001c0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[64U] 
                                                 >> 0x0000000bU))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[65U] 
                                       >> 0x0000000bU)) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[66U] 
                           << 0x00000015U) | (0x001c0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[65U] 
                                                 >> 0x0000000bU))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[66U] 
                                       >> 0x0000000bU)) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[67U] 
                           << 0x00000015U) | (0x001c0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[66U] 
                                                 >> 0x0000000bU))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[67U] 
                                       >> 0x0000000bU)) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[68U] 
                           << 0x00000015U) | (0x001c0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[67U] 
                                                 >> 0x0000000bU))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[68U] 
                                       >> 0x0000000bU)) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[69U] 
                           << 0x00000015U) | (0x001c0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[68U] 
                                                 >> 0x0000000bU))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[69U] 
                                       >> 0x0000000bU)) 
                       | (0xfffc0000U & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[70U] 
                                          << 0x00000015U) 
                                         | (0x001c0000U 
                                            & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[69U] 
                                               >> 0x0000000bU)))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                    = (0x000007ffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[70U] 
                                      >> 0x0000000bU));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
            }
            __Vlabel11: ;
        }
        __Vlabel10: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_request) 
                      >> 6U)))) {
            goto __Vlabel12;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00000040U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[71U] 
                        << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[70U] 
                                           >> 0x00000016U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[72U] 
                        << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[71U] 
                                           >> 0x00000016U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[73U] 
                        << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[72U] 
                                           >> 0x00000016U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[74U] 
                        << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[73U] 
                                           >> 0x00000016U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[75U] 
                        << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[74U] 
                                           >> 0x00000016U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[76U] 
                        << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[75U] 
                                           >> 0x00000016U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[77U] 
                        << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[76U] 
                                           >> 0x00000016U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[78U] 
                        << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[77U] 
                                           >> 0x00000016U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[79U] 
                        << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[78U] 
                                           >> 0x00000016U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[80U] 
                        << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[79U] 
                                           >> 0x00000016U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[81U] 
                        << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[80U] 
                                           >> 0x00000016U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[82U] 
                                          << 0x0000000aU) 
                                         | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[81U] 
                                            >> 0x00000016U))));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel13;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00000040U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[70U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                    = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[71U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[70U] 
                                                   >> 0x0000001dU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[71U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                    = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[72U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[71U] 
                                                   >> 0x0000001dU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[72U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                    = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[73U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[72U] 
                                                   >> 0x0000001dU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[73U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                    = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[74U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[73U] 
                                                   >> 0x0000001dU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[74U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                    = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[75U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[74U] 
                                                   >> 0x0000001dU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[75U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                    = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[76U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[75U] 
                                                   >> 0x0000001dU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[76U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                    = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[77U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[76U] 
                                                   >> 0x0000001dU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[77U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                    = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[78U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[77U] 
                                                   >> 0x0000001dU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[78U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                    = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[79U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[78U] 
                                                   >> 0x0000001dU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[79U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                    = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[80U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[79U] 
                                                   >> 0x0000001dU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[80U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                    = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[81U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[80U] 
                                                   >> 0x0000001dU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[81U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | (0x0003ffffU & ((0x01fffff8U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[82U] 
                                             << 3U)) 
                                         | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[81U] 
                                            >> 0x0000001dU))));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel13;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 2U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00000040U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[71U] 
                           << 0x0000001cU) | (0x0ffc0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[70U] 
                                                 >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[71U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[72U] 
                                                   << 0x0000001cU) 
                                                  | (0x0ffc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[71U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[72U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[73U] 
                                                   << 0x0000001cU) 
                                                  | (0x0ffc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[72U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[73U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[74U] 
                                                   << 0x0000001cU) 
                                                  | (0x0ffc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[73U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[74U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[75U] 
                                                   << 0x0000001cU) 
                                                  | (0x0ffc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[74U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[75U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[76U] 
                                                   << 0x0000001cU) 
                                                  | (0x0ffc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[75U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[76U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[77U] 
                                                   << 0x0000001cU) 
                                                  | (0x0ffc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[76U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[77U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[78U] 
                                                   << 0x0000001cU) 
                                                  | (0x0ffc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[77U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[78U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[79U] 
                                                   << 0x0000001cU) 
                                                  | (0x0ffc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[78U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[79U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[80U] 
                                                   << 0x0000001cU) 
                                                  | (0x0ffc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[79U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[80U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[81U] 
                                                   << 0x0000001cU) 
                                                  | (0x0ffc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[80U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[81U] 
                                       >> 4U)) | (0xfffc0000U 
                                                  & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[82U] 
                                                      << 0x0000001cU) 
                                                     | (0x0ffc0000U 
                                                        & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[81U] 
                                                           >> 4U)))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                    = (0x000007ffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[82U] 
                                      >> 4U));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
            }
            __Vlabel13: ;
        }
        __Vlabel12: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_request) 
                      >> 7U)))) {
            goto __Vlabel14;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00000080U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[83U] 
                        << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[82U] 
                                           >> 0x0000000fU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[84U] 
                        << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[83U] 
                                           >> 0x0000000fU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[85U] 
                        << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[84U] 
                                           >> 0x0000000fU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[86U] 
                        << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[85U] 
                                           >> 0x0000000fU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[87U] 
                        << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[86U] 
                                           >> 0x0000000fU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[88U] 
                        << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[87U] 
                                           >> 0x0000000fU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[89U] 
                        << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[88U] 
                                           >> 0x0000000fU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[90U] 
                        << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[89U] 
                                           >> 0x0000000fU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[91U] 
                        << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[90U] 
                                           >> 0x0000000fU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[92U] 
                        << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[91U] 
                                           >> 0x0000000fU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[93U] 
                        << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[92U] 
                                           >> 0x0000000fU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[94U] 
                                          << 0x00000011U) 
                                         | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[93U] 
                                            >> 0x0000000fU))));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel15;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00000080U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[82U] 
                                         << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                    = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[83U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[82U] 
                           >> 0x00000016U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[83U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                    = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[84U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[83U] 
                           >> 0x00000016U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[84U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                    = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[85U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[84U] 
                           >> 0x00000016U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[85U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                    = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[86U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[85U] 
                           >> 0x00000016U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[86U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                    = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[87U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[86U] 
                           >> 0x00000016U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[87U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                    = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[88U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[87U] 
                           >> 0x00000016U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[88U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                    = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[89U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[88U] 
                           >> 0x00000016U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[89U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                    = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[90U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[89U] 
                           >> 0x00000016U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[90U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                    = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[91U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[90U] 
                           >> 0x00000016U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[91U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                    = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[92U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[91U] 
                           >> 0x00000016U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[92U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                    = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[93U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[92U] 
                           >> 0x00000016U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[93U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | (0x0003ffffU & ((0x01fffc00U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[94U] 
                                             << 0x0000000aU)) 
                                         | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[93U] 
                                            >> 0x00000016U))));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel15;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 2U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00000080U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[82U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                    = (((0x0003fff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[83U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[82U] 
                                                   >> 0x0000001dU)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[83U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                    = (((0x0003fff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[84U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[83U] 
                                                   >> 0x0000001dU)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[84U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                    = (((0x0003fff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[85U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[84U] 
                                                   >> 0x0000001dU)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[85U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                    = (((0x0003fff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[86U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[85U] 
                                                   >> 0x0000001dU)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[86U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                    = (((0x0003fff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[87U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[86U] 
                                                   >> 0x0000001dU)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[87U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                    = (((0x0003fff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[88U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[87U] 
                                                   >> 0x0000001dU)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[88U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                    = (((0x0003fff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[89U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[88U] 
                                                   >> 0x0000001dU)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[89U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                    = (((0x0003fff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[90U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[89U] 
                                                   >> 0x0000001dU)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[90U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                    = (((0x0003fff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[91U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[90U] 
                                                   >> 0x0000001dU)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[91U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                    = (((0x0003fff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[92U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[91U] 
                                                   >> 0x0000001dU)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[92U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                    = (((0x0003fff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[93U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[92U] 
                                                   >> 0x0000001dU)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[93U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                    = (0x000007ffU & ((0x0003fff8U 
                                       & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[94U] 
                                          << 3U)) | 
                                      (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[93U] 
                                       >> 0x0000001dU)));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
            }
            __Vlabel15: ;
        }
        __Vlabel14: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_request) 
                      >> 8U)))) {
            goto __Vlabel16;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00000100U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[95U] 
                        << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[94U] 
                                           >> 8U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[96U] 
                        << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[95U] 
                                           >> 8U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[97U] 
                        << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[96U] 
                                           >> 8U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[98U] 
                        << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[97U] 
                                           >> 8U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[99U] 
                        << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[98U] 
                                           >> 8U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[100U] 
                        << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[99U] 
                                           >> 8U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[101U] 
                        << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[100U] 
                                           >> 8U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[102U] 
                        << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[101U] 
                                           >> 8U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[103U] 
                        << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[102U] 
                                           >> 8U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[104U] 
                        << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[103U] 
                                           >> 8U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[105U] 
                        << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[104U] 
                                           >> 8U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[106U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[105U] 
                                            >> 8U))));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel17;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00000100U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[94U] 
                                         << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                    = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[95U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[94U] 
                           >> 0x0000000fU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[95U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                    = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[96U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[95U] 
                           >> 0x0000000fU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[96U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                    = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[97U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[96U] 
                           >> 0x0000000fU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[97U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                    = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[98U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[97U] 
                           >> 0x0000000fU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[98U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                    = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[99U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[98U] 
                           >> 0x0000000fU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[99U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                    = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[100U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[99U] 
                           >> 0x0000000fU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[100U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                    = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[101U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[100U] 
                           >> 0x0000000fU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[101U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                    = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[102U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[101U] 
                           >> 0x0000000fU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[102U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                    = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[103U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[102U] 
                           >> 0x0000000fU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[103U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                    = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[104U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[103U] 
                           >> 0x0000000fU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[104U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                    = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[105U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[104U] 
                           >> 0x0000000fU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[105U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | (0x0003ffffU & ((0x01fe0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[106U] 
                                             << 0x00000011U)) 
                                         | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[105U] 
                                            >> 0x0000000fU))));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel17;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 2U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00000100U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[94U] 
                                         << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                    = (((0x0003fc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[95U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[94U] 
                           >> 0x00000016U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[95U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                    = (((0x0003fc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[96U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[95U] 
                           >> 0x00000016U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[96U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                    = (((0x0003fc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[97U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[96U] 
                           >> 0x00000016U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[97U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                    = (((0x0003fc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[98U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[97U] 
                           >> 0x00000016U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[98U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                    = (((0x0003fc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[99U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[98U] 
                           >> 0x00000016U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[99U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                    = (((0x0003fc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[100U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[99U] 
                           >> 0x00000016U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[100U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                    = (((0x0003fc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[101U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[100U] 
                           >> 0x00000016U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[101U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                    = (((0x0003fc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[102U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[101U] 
                           >> 0x00000016U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[102U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                    = (((0x0003fc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[103U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[102U] 
                           >> 0x00000016U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[103U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                    = (((0x0003fc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[104U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[103U] 
                           >> 0x00000016U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[104U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                    = (((0x0003fc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[105U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[104U] 
                           >> 0x00000016U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[105U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                    = (0x000007ffU & ((0x0003fc00U 
                                       & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[106U] 
                                          << 0x0000000aU)) 
                                      | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[105U] 
                                         >> 0x00000016U)));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
            }
            __Vlabel17: ;
        }
        __Vlabel16: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_request) 
                      >> 9U)))) {
            goto __Vlabel18;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00000200U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[107U] 
                        << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[106U] 
                                           >> 1U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[108U] 
                        << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[107U] 
                                           >> 1U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[109U] 
                        << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[108U] 
                                           >> 1U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[110U] 
                        << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[109U] 
                                           >> 1U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[111U] 
                        << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[110U] 
                                           >> 1U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[112U] 
                        << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[111U] 
                                           >> 1U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[113U] 
                        << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[112U] 
                                           >> 1U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[114U] 
                        << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[113U] 
                                           >> 1U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[115U] 
                        << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[114U] 
                                           >> 1U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[116U] 
                        << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[115U] 
                                           >> 1U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[117U] 
                        << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[116U] 
                                           >> 1U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[117U] 
                                         >> 1U)));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel19;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00000200U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[106U] 
                                         << 0x00000018U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                    = (((0x01000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[107U] 
                                        << 0x00000018U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[106U] 
                           >> 8U)) | (0xfe000000U & 
                                      (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[107U] 
                                       << 0x00000018U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                    = (((0x01000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[108U] 
                                        << 0x00000018U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[107U] 
                           >> 8U)) | (0xfe000000U & 
                                      (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[108U] 
                                       << 0x00000018U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                    = (((0x01000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[109U] 
                                        << 0x00000018U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[108U] 
                           >> 8U)) | (0xfe000000U & 
                                      (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[109U] 
                                       << 0x00000018U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                    = (((0x01000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[110U] 
                                        << 0x00000018U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[109U] 
                           >> 8U)) | (0xfe000000U & 
                                      (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[110U] 
                                       << 0x00000018U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                    = (((0x01000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[111U] 
                                        << 0x00000018U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[110U] 
                           >> 8U)) | (0xfe000000U & 
                                      (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[111U] 
                                       << 0x00000018U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                    = (((0x01000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[112U] 
                                        << 0x00000018U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[111U] 
                           >> 8U)) | (0xfe000000U & 
                                      (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[112U] 
                                       << 0x00000018U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                    = (((0x01000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[113U] 
                                        << 0x00000018U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[112U] 
                           >> 8U)) | (0xfe000000U & 
                                      (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[113U] 
                                       << 0x00000018U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                    = (((0x01000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[114U] 
                                        << 0x00000018U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[113U] 
                           >> 8U)) | (0xfe000000U & 
                                      (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[114U] 
                                       << 0x00000018U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                    = (((0x01000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[115U] 
                                        << 0x00000018U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[114U] 
                           >> 8U)) | (0xfe000000U & 
                                      (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[115U] 
                                       << 0x00000018U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                    = (((0x01000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[116U] 
                                        << 0x00000018U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[115U] 
                           >> 8U)) | (0xfe000000U & 
                                      (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[116U] 
                                       << 0x00000018U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                    = (((0x01000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[117U] 
                                        << 0x00000018U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[116U] 
                           >> 8U)) | (0xfe000000U & 
                                      (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[117U] 
                                       << 0x00000018U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | (0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[117U] 
                                         >> 8U)));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel19;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 2U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00000200U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[106U] 
                                         << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                    = (((0x00020000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[107U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[106U] 
                           >> 0x0000000fU)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[107U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                    = (((0x00020000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[108U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[107U] 
                           >> 0x0000000fU)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[108U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                    = (((0x00020000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[109U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[108U] 
                           >> 0x0000000fU)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[109U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                    = (((0x00020000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[110U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[109U] 
                           >> 0x0000000fU)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[110U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                    = (((0x00020000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[111U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[110U] 
                           >> 0x0000000fU)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[111U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                    = (((0x00020000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[112U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[111U] 
                           >> 0x0000000fU)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[112U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                    = (((0x00020000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[113U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[112U] 
                           >> 0x0000000fU)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[113U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                    = (((0x00020000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[114U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[113U] 
                           >> 0x0000000fU)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[114U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                    = (((0x00020000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[115U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[114U] 
                           >> 0x0000000fU)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[115U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                    = (((0x00020000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[116U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[115U] 
                           >> 0x0000000fU)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[116U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                    = (((0x00020000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[117U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[116U] 
                           >> 0x0000000fU)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[117U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                    = (0x000007ffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[117U] 
                                      >> 0x0000000fU));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
            }
            __Vlabel19: ;
        }
        __Vlabel18: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_request) 
                      >> 0x0aU)))) {
            goto __Vlabel20;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00000400U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[118U] 
                        << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[117U] 
                                  >> 0x0000001aU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[119U] 
                        << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[118U] 
                                  >> 0x0000001aU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[120U] 
                        << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[119U] 
                                  >> 0x0000001aU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[121U] 
                        << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[120U] 
                                  >> 0x0000001aU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[122U] 
                        << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[121U] 
                                  >> 0x0000001aU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[123U] 
                        << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[122U] 
                                  >> 0x0000001aU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[124U] 
                        << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[123U] 
                                  >> 0x0000001aU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[125U] 
                        << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[124U] 
                                  >> 0x0000001aU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[126U] 
                        << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[125U] 
                                  >> 0x0000001aU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[127U] 
                        << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[126U] 
                                  >> 0x0000001aU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[128U] 
                        << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[127U] 
                                  >> 0x0000001aU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[129U] 
                                          << 6U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[128U] 
                                          >> 0x0000001aU))));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel21;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00000400U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[118U] 
                           << 0x0000001fU) | (0x7e000000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[117U] 
                                                 >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[118U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[119U] 
                                                   << 0x0000001fU) 
                                                  | (0x7e000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[118U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[119U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[120U] 
                                                   << 0x0000001fU) 
                                                  | (0x7e000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[119U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[120U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[121U] 
                                                   << 0x0000001fU) 
                                                  | (0x7e000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[120U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[121U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[122U] 
                                                   << 0x0000001fU) 
                                                  | (0x7e000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[121U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[122U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[123U] 
                                                   << 0x0000001fU) 
                                                  | (0x7e000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[122U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[123U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[124U] 
                                                   << 0x0000001fU) 
                                                  | (0x7e000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[123U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[124U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[125U] 
                                                   << 0x0000001fU) 
                                                  | (0x7e000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[124U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[125U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[126U] 
                                                   << 0x0000001fU) 
                                                  | (0x7e000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[125U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[126U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[127U] 
                                                   << 0x0000001fU) 
                                                  | (0x7e000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[126U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[127U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[128U] 
                                                   << 0x0000001fU) 
                                                  | (0x7e000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[127U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[128U] 
                                       >> 1U)) | (0xfe000000U 
                                                  & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[129U] 
                                                      << 0x0000001fU) 
                                                     | (0x7e000000U 
                                                        & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[128U] 
                                                           >> 1U)))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | (0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[129U] 
                                         >> 1U)));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel21;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 2U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00000400U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[118U] 
                           << 0x00000018U) | (0x00fc0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[117U] 
                                                 >> 8U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[118U] 
                                       >> 8U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[119U] 
                                                   << 0x00000018U) 
                                                  | (0x00fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[118U] 
                                                        >> 8U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[119U] 
                                       >> 8U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[120U] 
                                                   << 0x00000018U) 
                                                  | (0x00fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[119U] 
                                                        >> 8U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[120U] 
                                       >> 8U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[121U] 
                                                   << 0x00000018U) 
                                                  | (0x00fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[120U] 
                                                        >> 8U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[121U] 
                                       >> 8U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[122U] 
                                                   << 0x00000018U) 
                                                  | (0x00fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[121U] 
                                                        >> 8U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[122U] 
                                       >> 8U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[123U] 
                                                   << 0x00000018U) 
                                                  | (0x00fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[122U] 
                                                        >> 8U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[123U] 
                                       >> 8U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[124U] 
                                                   << 0x00000018U) 
                                                  | (0x00fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[123U] 
                                                        >> 8U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[124U] 
                                       >> 8U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[125U] 
                                                   << 0x00000018U) 
                                                  | (0x00fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[124U] 
                                                        >> 8U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[125U] 
                                       >> 8U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[126U] 
                                                   << 0x00000018U) 
                                                  | (0x00fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[125U] 
                                                        >> 8U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[126U] 
                                       >> 8U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[127U] 
                                                   << 0x00000018U) 
                                                  | (0x00fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[126U] 
                                                        >> 8U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[127U] 
                                       >> 8U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[128U] 
                                                   << 0x00000018U) 
                                                  | (0x00fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[127U] 
                                                        >> 8U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[128U] 
                                       >> 8U)) | (0xfffc0000U 
                                                  & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[129U] 
                                                      << 0x00000018U) 
                                                     | (0x00fc0000U 
                                                        & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[128U] 
                                                           >> 8U)))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                    = (0x000007ffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[129U] 
                                      >> 8U));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
            }
            __Vlabel21: ;
        }
        __Vlabel20: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_request) 
                      >> 0x0bU)))) {
            goto __Vlabel22;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00000800U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[130U] 
                        << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[129U] 
                                           >> 0x00000013U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[131U] 
                        << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[130U] 
                                           >> 0x00000013U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[132U] 
                        << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[131U] 
                                           >> 0x00000013U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[133U] 
                        << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[132U] 
                                           >> 0x00000013U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[134U] 
                        << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[133U] 
                                           >> 0x00000013U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[135U] 
                        << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[134U] 
                                           >> 0x00000013U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[136U] 
                        << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[135U] 
                                           >> 0x00000013U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[137U] 
                        << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[136U] 
                                           >> 0x00000013U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[138U] 
                        << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[137U] 
                                           >> 0x00000013U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[139U] 
                        << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[138U] 
                                           >> 0x00000013U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[140U] 
                        << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[139U] 
                                           >> 0x00000013U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[141U] 
                                          << 0x0000000dU) 
                                         | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[140U] 
                                            >> 0x00000013U))));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel23;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00000800U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[129U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                    = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[130U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[129U] 
                                                   >> 0x0000001aU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[130U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                    = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[131U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[130U] 
                                                   >> 0x0000001aU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[131U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                    = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[132U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[131U] 
                                                   >> 0x0000001aU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[132U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                    = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[133U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[132U] 
                                                   >> 0x0000001aU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[133U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                    = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[134U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[133U] 
                                                   >> 0x0000001aU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[134U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                    = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[135U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[134U] 
                                                   >> 0x0000001aU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[135U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                    = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[136U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[135U] 
                                                   >> 0x0000001aU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[136U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                    = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[137U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[136U] 
                                                   >> 0x0000001aU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[137U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                    = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[138U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[137U] 
                                                   >> 0x0000001aU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[138U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                    = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[139U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[138U] 
                                                   >> 0x0000001aU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[139U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                    = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[140U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[139U] 
                                                   >> 0x0000001aU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[140U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | (0x0003ffffU & ((0x01ffffc0U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[141U] 
                                             << 6U)) 
                                         | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[140U] 
                                            >> 0x0000001aU))));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel23;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 2U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00000800U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[130U] 
                           << 0x0000001fU) | (0x7ffc0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[129U] 
                                                 >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[130U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[131U] 
                                                   << 0x0000001fU) 
                                                  | (0x7ffc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[130U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[131U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[132U] 
                                                   << 0x0000001fU) 
                                                  | (0x7ffc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[131U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[132U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[133U] 
                                                   << 0x0000001fU) 
                                                  | (0x7ffc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[132U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[133U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[134U] 
                                                   << 0x0000001fU) 
                                                  | (0x7ffc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[133U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[134U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[135U] 
                                                   << 0x0000001fU) 
                                                  | (0x7ffc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[134U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[135U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[136U] 
                                                   << 0x0000001fU) 
                                                  | (0x7ffc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[135U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[136U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[137U] 
                                                   << 0x0000001fU) 
                                                  | (0x7ffc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[136U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[137U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[138U] 
                                                   << 0x0000001fU) 
                                                  | (0x7ffc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[137U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[138U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[139U] 
                                                   << 0x0000001fU) 
                                                  | (0x7ffc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[138U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[139U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[140U] 
                                                   << 0x0000001fU) 
                                                  | (0x7ffc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[139U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[140U] 
                                       >> 1U)) | (0xfffc0000U 
                                                  & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[141U] 
                                                      << 0x0000001fU) 
                                                     | (0x7ffc0000U 
                                                        & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[140U] 
                                                           >> 1U)))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                    = (0x000007ffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[141U] 
                                      >> 1U));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
            }
            __Vlabel23: ;
        }
        __Vlabel22: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_request) 
                      >> 0x0cU)))) {
            goto __Vlabel24;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00001000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[142U] 
                        << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[141U] 
                                           >> 0x0000000cU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[143U] 
                        << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[142U] 
                                           >> 0x0000000cU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[144U] 
                        << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[143U] 
                                           >> 0x0000000cU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[145U] 
                        << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[144U] 
                                           >> 0x0000000cU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[146U] 
                        << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[145U] 
                                           >> 0x0000000cU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[147U] 
                        << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[146U] 
                                           >> 0x0000000cU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[148U] 
                        << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[147U] 
                                           >> 0x0000000cU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[149U] 
                        << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[148U] 
                                           >> 0x0000000cU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[150U] 
                        << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[149U] 
                                           >> 0x0000000cU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[151U] 
                        << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[150U] 
                                           >> 0x0000000cU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[152U] 
                        << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[151U] 
                                           >> 0x0000000cU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[153U] 
                                          << 0x00000014U) 
                                         | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[152U] 
                                            >> 0x0000000cU))));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel25;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00001000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[141U] 
                                         << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                    = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[142U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[141U] 
                           >> 0x00000013U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[142U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                    = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[143U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[142U] 
                           >> 0x00000013U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[143U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                    = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[144U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[143U] 
                           >> 0x00000013U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[144U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                    = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[145U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[144U] 
                           >> 0x00000013U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[145U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                    = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[146U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[145U] 
                           >> 0x00000013U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[146U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                    = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[147U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[146U] 
                           >> 0x00000013U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[147U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                    = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[148U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[147U] 
                           >> 0x00000013U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[148U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                    = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[149U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[148U] 
                           >> 0x00000013U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[149U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                    = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[150U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[149U] 
                           >> 0x00000013U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[150U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                    = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[151U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[150U] 
                           >> 0x00000013U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[151U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                    = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[152U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[151U] 
                           >> 0x00000013U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[152U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | (0x0003ffffU & ((0x01ffe000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[153U] 
                                             << 0x0000000dU)) 
                                         | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[152U] 
                                            >> 0x00000013U))));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel25;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 2U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00001000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[141U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                    = (((0x0003ffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[142U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[141U] 
                                                   >> 0x0000001aU)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[142U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                    = (((0x0003ffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[143U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[142U] 
                                                   >> 0x0000001aU)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[143U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                    = (((0x0003ffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[144U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[143U] 
                                                   >> 0x0000001aU)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[144U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                    = (((0x0003ffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[145U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[144U] 
                                                   >> 0x0000001aU)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[145U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                    = (((0x0003ffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[146U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[145U] 
                                                   >> 0x0000001aU)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[146U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                    = (((0x0003ffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[147U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[146U] 
                                                   >> 0x0000001aU)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[147U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                    = (((0x0003ffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[148U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[147U] 
                                                   >> 0x0000001aU)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[148U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                    = (((0x0003ffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[149U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[148U] 
                                                   >> 0x0000001aU)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[149U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                    = (((0x0003ffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[150U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[149U] 
                                                   >> 0x0000001aU)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[150U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                    = (((0x0003ffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[151U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[150U] 
                                                   >> 0x0000001aU)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[151U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                    = (((0x0003ffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[152U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[151U] 
                                                   >> 0x0000001aU)) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[152U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                    = (0x000007ffU & ((0x0003ffc0U 
                                       & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[153U] 
                                          << 6U)) | 
                                      (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[152U] 
                                       >> 0x0000001aU)));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
            }
            __Vlabel25: ;
        }
        __Vlabel24: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_request) 
                      >> 0x0dU)))) {
            goto __Vlabel26;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00002000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[154U] 
                        << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[153U] 
                                           >> 5U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[155U] 
                        << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[154U] 
                                           >> 5U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[156U] 
                        << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[155U] 
                                           >> 5U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[157U] 
                        << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[156U] 
                                           >> 5U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[158U] 
                        << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[157U] 
                                           >> 5U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[159U] 
                        << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[158U] 
                                           >> 5U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[160U] 
                        << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[159U] 
                                           >> 5U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[161U] 
                        << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[160U] 
                                           >> 5U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[162U] 
                        << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[161U] 
                                           >> 5U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[163U] 
                        << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[162U] 
                                           >> 5U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[164U] 
                        << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[163U] 
                                           >> 5U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[164U] 
                                         >> 5U)));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel27;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00002000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[153U] 
                                         << 0x00000014U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                    = (((0x01f00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[154U] 
                                        << 0x00000014U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[153U] 
                           >> 0x0000000cU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[154U] 
                                                  << 0x00000014U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                    = (((0x01f00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[155U] 
                                        << 0x00000014U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[154U] 
                           >> 0x0000000cU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[155U] 
                                                  << 0x00000014U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                    = (((0x01f00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[156U] 
                                        << 0x00000014U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[155U] 
                           >> 0x0000000cU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[156U] 
                                                  << 0x00000014U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                    = (((0x01f00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[157U] 
                                        << 0x00000014U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[156U] 
                           >> 0x0000000cU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[157U] 
                                                  << 0x00000014U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                    = (((0x01f00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[158U] 
                                        << 0x00000014U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[157U] 
                           >> 0x0000000cU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[158U] 
                                                  << 0x00000014U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                    = (((0x01f00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[159U] 
                                        << 0x00000014U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[158U] 
                           >> 0x0000000cU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[159U] 
                                                  << 0x00000014U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                    = (((0x01f00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[160U] 
                                        << 0x00000014U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[159U] 
                           >> 0x0000000cU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[160U] 
                                                  << 0x00000014U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                    = (((0x01f00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[161U] 
                                        << 0x00000014U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[160U] 
                           >> 0x0000000cU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[161U] 
                                                  << 0x00000014U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                    = (((0x01f00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[162U] 
                                        << 0x00000014U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[161U] 
                           >> 0x0000000cU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[162U] 
                                                  << 0x00000014U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                    = (((0x01f00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[163U] 
                                        << 0x00000014U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[162U] 
                           >> 0x0000000cU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[163U] 
                                                  << 0x00000014U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                    = (((0x01f00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[164U] 
                                        << 0x00000014U)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[163U] 
                           >> 0x0000000cU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[164U] 
                                                  << 0x00000014U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | (0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[164U] 
                                         >> 0x0000000cU)));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel27;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 2U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00002000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[153U] 
                                         << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                    = (((0x0003e000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[154U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[153U] 
                           >> 0x00000013U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[154U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                    = (((0x0003e000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[155U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[154U] 
                           >> 0x00000013U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[155U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                    = (((0x0003e000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[156U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[155U] 
                           >> 0x00000013U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[156U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                    = (((0x0003e000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[157U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[156U] 
                           >> 0x00000013U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[157U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                    = (((0x0003e000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[158U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[157U] 
                           >> 0x00000013U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[158U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                    = (((0x0003e000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[159U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[158U] 
                           >> 0x00000013U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[159U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                    = (((0x0003e000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[160U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[159U] 
                           >> 0x00000013U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[160U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                    = (((0x0003e000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[161U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[160U] 
                           >> 0x00000013U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[161U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                    = (((0x0003e000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[162U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[161U] 
                           >> 0x00000013U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[162U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                    = (((0x0003e000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[163U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[162U] 
                           >> 0x00000013U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[163U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                    = (((0x0003e000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[164U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[163U] 
                           >> 0x00000013U)) | (0xfffc0000U 
                                               & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[164U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                    = (0x000007ffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[164U] 
                                      >> 0x00000013U));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
            }
            __Vlabel27: ;
        }
        __Vlabel26: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_request) 
                      >> 0x0eU)))) {
            goto __Vlabel28;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00004000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[165U] 
                        << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[164U] 
                                  >> 0x0000001eU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[166U] 
                        << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[165U] 
                                  >> 0x0000001eU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[167U] 
                        << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[166U] 
                                  >> 0x0000001eU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[168U] 
                        << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[167U] 
                                  >> 0x0000001eU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[169U] 
                        << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[168U] 
                                  >> 0x0000001eU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[170U] 
                        << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[169U] 
                                  >> 0x0000001eU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[171U] 
                        << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[170U] 
                                  >> 0x0000001eU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[172U] 
                        << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[171U] 
                                  >> 0x0000001eU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[173U] 
                        << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[172U] 
                                  >> 0x0000001eU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[174U] 
                        << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[173U] 
                                  >> 0x0000001eU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[175U] 
                        << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[174U] 
                                  >> 0x0000001eU));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[176U] 
                                          << 2U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[175U] 
                                          >> 0x0000001eU))));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel29;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00004000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[165U] 
                           << 0x0000001bU) | (0x06000000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[164U] 
                                                 >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[165U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[166U] 
                                                   << 0x0000001bU) 
                                                  | (0x06000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[165U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[166U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[167U] 
                                                   << 0x0000001bU) 
                                                  | (0x06000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[166U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[167U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[168U] 
                                                   << 0x0000001bU) 
                                                  | (0x06000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[167U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[168U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[169U] 
                                                   << 0x0000001bU) 
                                                  | (0x06000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[168U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[169U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[170U] 
                                                   << 0x0000001bU) 
                                                  | (0x06000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[169U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[170U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[171U] 
                                                   << 0x0000001bU) 
                                                  | (0x06000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[170U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[171U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[172U] 
                                                   << 0x0000001bU) 
                                                  | (0x06000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[171U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[172U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[173U] 
                                                   << 0x0000001bU) 
                                                  | (0x06000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[172U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[173U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[174U] 
                                                   << 0x0000001bU) 
                                                  | (0x06000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[173U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[174U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[175U] 
                                                   << 0x0000001bU) 
                                                  | (0x06000000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[174U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[175U] 
                                       >> 5U)) | (0xfe000000U 
                                                  & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[176U] 
                                                      << 0x0000001bU) 
                                                     | (0x06000000U 
                                                        & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[175U] 
                                                           >> 5U)))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | (0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[176U] 
                                         >> 5U)));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel29;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 2U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00004000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[165U] 
                           << 0x00000014U) | (0x000c0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[164U] 
                                                 >> 0x0000000cU))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[165U] 
                                       >> 0x0000000cU)) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[166U] 
                           << 0x00000014U) | (0x000c0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[165U] 
                                                 >> 0x0000000cU))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[166U] 
                                       >> 0x0000000cU)) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[167U] 
                           << 0x00000014U) | (0x000c0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[166U] 
                                                 >> 0x0000000cU))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[167U] 
                                       >> 0x0000000cU)) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[168U] 
                           << 0x00000014U) | (0x000c0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[167U] 
                                                 >> 0x0000000cU))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[168U] 
                                       >> 0x0000000cU)) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[169U] 
                           << 0x00000014U) | (0x000c0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[168U] 
                                                 >> 0x0000000cU))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[169U] 
                                       >> 0x0000000cU)) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[170U] 
                           << 0x00000014U) | (0x000c0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[169U] 
                                                 >> 0x0000000cU))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[170U] 
                                       >> 0x0000000cU)) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[171U] 
                           << 0x00000014U) | (0x000c0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[170U] 
                                                 >> 0x0000000cU))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[171U] 
                                       >> 0x0000000cU)) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[172U] 
                           << 0x00000014U) | (0x000c0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[171U] 
                                                 >> 0x0000000cU))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[172U] 
                                       >> 0x0000000cU)) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[173U] 
                           << 0x00000014U) | (0x000c0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[172U] 
                                                 >> 0x0000000cU))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[173U] 
                                       >> 0x0000000cU)) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[174U] 
                           << 0x00000014U) | (0x000c0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[173U] 
                                                 >> 0x0000000cU))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[174U] 
                                       >> 0x0000000cU)) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[175U] 
                           << 0x00000014U) | (0x000c0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[174U] 
                                                 >> 0x0000000cU))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[175U] 
                                       >> 0x0000000cU)) 
                       | (0xfffc0000U & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[176U] 
                                          << 0x00000014U) 
                                         | (0x000c0000U 
                                            & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[175U] 
                                               >> 0x0000000cU)))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                    = (0x000007ffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[176U] 
                                      >> 0x0000000cU));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
            }
            __Vlabel29: ;
        }
        __Vlabel28: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_request) 
                      >> 0x0fU)))) {
            goto __Vlabel30;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00008000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[177U] 
                        << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[176U] 
                                  >> 0x00000017U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[178U] 
                        << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[177U] 
                                  >> 0x00000017U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[179U] 
                        << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[178U] 
                                  >> 0x00000017U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[180U] 
                        << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[179U] 
                                  >> 0x00000017U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[181U] 
                        << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[180U] 
                                  >> 0x00000017U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[182U] 
                        << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[181U] 
                                  >> 0x00000017U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[183U] 
                        << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[182U] 
                                  >> 0x00000017U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[184U] 
                        << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[183U] 
                                  >> 0x00000017U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[185U] 
                        << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[184U] 
                                  >> 0x00000017U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[186U] 
                        << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[185U] 
                                  >> 0x00000017U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[187U] 
                        << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[186U] 
                                  >> 0x00000017U));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[188U] 
                                          << 9U) | 
                                         (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[187U] 
                                          >> 0x00000017U))));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel31;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00008000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[176U] 
                                         << 2U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                    = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[177U] 
                                        << 2U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[176U] 
                                                   >> 0x0000001eU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[177U] 
                                         << 2U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                    = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[178U] 
                                        << 2U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[177U] 
                                                   >> 0x0000001eU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[178U] 
                                         << 2U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                    = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[179U] 
                                        << 2U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[178U] 
                                                   >> 0x0000001eU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[179U] 
                                         << 2U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                    = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[180U] 
                                        << 2U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[179U] 
                                                   >> 0x0000001eU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[180U] 
                                         << 2U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                    = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[181U] 
                                        << 2U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[180U] 
                                                   >> 0x0000001eU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[181U] 
                                         << 2U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                    = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[182U] 
                                        << 2U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[181U] 
                                                   >> 0x0000001eU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[182U] 
                                         << 2U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                    = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[183U] 
                                        << 2U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[182U] 
                                                   >> 0x0000001eU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[183U] 
                                         << 2U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                    = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[184U] 
                                        << 2U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[183U] 
                                                   >> 0x0000001eU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[184U] 
                                         << 2U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                    = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[185U] 
                                        << 2U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[184U] 
                                                   >> 0x0000001eU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[185U] 
                                         << 2U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                    = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[186U] 
                                        << 2U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[185U] 
                                                   >> 0x0000001eU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[186U] 
                                         << 2U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                    = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[187U] 
                                        << 2U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[186U] 
                                                   >> 0x0000001eU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[187U] 
                                         << 2U)));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | (0x0003ffffU & ((0x01fffffcU 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[188U] 
                                             << 2U)) 
                                         | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[187U] 
                                            >> 0x0000001eU))));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
                goto __Vlabel31;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used) 
                          >> 2U)))) {
                vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                    = (0x00008000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__alu_iss_valid 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                    = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                       | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[177U] 
                           << 0x0000001bU) | (0x07fc0000U 
                                              & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[176U] 
                                                 >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[177U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[178U] 
                                                   << 0x0000001bU) 
                                                  | (0x07fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[177U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[178U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[179U] 
                                                   << 0x0000001bU) 
                                                  | (0x07fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[178U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[179U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[180U] 
                                                   << 0x0000001bU) 
                                                  | (0x07fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[179U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[180U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[181U] 
                                                   << 0x0000001bU) 
                                                  | (0x07fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[180U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[181U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[182U] 
                                                   << 0x0000001bU) 
                                                  | (0x07fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[181U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[182U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[183U] 
                                                   << 0x0000001bU) 
                                                  | (0x07fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[182U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[183U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[184U] 
                                                   << 0x0000001bU) 
                                                  | (0x07fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[183U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[184U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[185U] 
                                                   << 0x0000001bU) 
                                                  | (0x07fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[184U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[185U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[186U] 
                                                   << 0x0000001bU) 
                                                  | (0x07fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[185U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[186U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[187U] 
                                                   << 0x0000001bU) 
                                                  | (0x07fc0000U 
                                                     & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[186U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                    = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[187U] 
                                       >> 5U)) | (0xfffc0000U 
                                                  & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[188U] 
                                                      << 0x0000001bU) 
                                                     | (0x07fc0000U 
                                                        & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[187U] 
                                                           >> 5U)))));
                vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                    = (0x000007ffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_iss_uop[188U] 
                                      >> 5U));
                vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__port_used));
            }
            __Vlabel31: ;
        }
        __Vlabel30: ;
    }
    vlSelfRef.boom_core__DOT__alu_iq__DOT__src_valid 
        = ((((((((~ (vlSelfRef.boom_core__DOT__iq_alu_dis_uop[3U] 
                     >> 8U)) & (IData)(vlSelfRef.boom_core__DOT__iq_alu_dis_valid)) 
                << 4U) | (((IData)(((~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear) 
                                        >> 0x0000000fU)) 
                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                       >> 0x0000000fU))) 
                           << 3U) | (4U & (((~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear) 
                                                >> 0x0000000eU)) 
                                            << 2U) 
                                           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                              >> 0x0000000cU))))) 
              | ((2U & (((~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear) 
                             >> 0x0000000dU)) << 1U) 
                        & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                           >> 0x0000000cU))) | (1U 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear) 
                                                     >> 0x0000000cU)) 
                                                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                                      >> 0x0000000cU))))) 
             << 0x0000000cU) | ((((2U & (((~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear) 
                                              >> 0x0000000bU)) 
                                          << 1U) & 
                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                          >> 0x0000000aU))) 
                                  | (1U & ((~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear) 
                                               >> 0x0000000aU)) 
                                           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                              >> 0x0000000aU)))) 
                                 << 0x0000000aU) | 
                                (((2U & (((~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear) 
                                              >> 9U)) 
                                          << 1U) & 
                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                          >> 8U))) 
                                  | (1U & ((~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear) 
                                               >> 8U)) 
                                           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                              >> 8U)))) 
                                 << 8U))) | (((((2U 
                                                 & (((~ 
                                                      ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear) 
                                                       >> 7U)) 
                                                     << 1U) 
                                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                                       >> 6U))) 
                                                | (1U 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear) 
                                                        >> 6U)) 
                                                      & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                                         >> 6U)))) 
                                               << 6U) 
                                              | (((2U 
                                                   & (((~ 
                                                        ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear) 
                                                         >> 5U)) 
                                                       << 1U) 
                                                      & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                                         >> 4U))) 
                                                  | (1U 
                                                     & ((~ 
                                                         ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear) 
                                                          >> 4U)) 
                                                        & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                                           >> 4U)))) 
                                                 << 4U)) 
                                             | ((((2U 
                                                   & (((~ 
                                                        ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear) 
                                                         >> 3U)) 
                                                       << 1U) 
                                                      & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                                         >> 2U))) 
                                                  | (1U 
                                                     & ((~ 
                                                         ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear) 
                                                          >> 2U)) 
                                                        & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                                           >> 2U)))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (((~ 
                                                         ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear) 
                                                          >> 1U)) 
                                                        << 1U) 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5))) 
                                                   | (1U 
                                                      & ((~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_clear)) 
                                                         & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_242 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                          >> 0x0000000fU))) 
                                                     & ((0x0000003fU 
                                                         & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                            >> 0x0000000fU)) 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                            >> 9U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_243 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                       >> 0x0000000fU))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                          >> 0x0000000fU)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.lsu_resp[5U] 
                                                          >> 0x00000010U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_244 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                       >> 0x0000000fU))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                          >> 0x0000000fU)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 9U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_245 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                       >> 0x0000000fU))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                          >> 0x0000000fU)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 9U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_247 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                          >> 0x00000015U))) 
                                                     & ((0x0000003fU 
                                                         & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                            >> 0x00000015U)) 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                            >> 9U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_248 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                       >> 0x00000015U))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                          >> 0x00000015U)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.lsu_resp[5U] 
                                                          >> 0x00000010U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_249 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                       >> 0x00000015U))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                          >> 0x00000015U)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 9U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_250 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                       >> 0x00000015U))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                                                          >> 0x00000015U)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 9U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_252 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                                                          >> 0x00000016U))) 
                                                     & ((0x0000003fU 
                                                         & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                                                            >> 0x00000016U)) 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                            >> 9U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_253 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                                                       >> 0x00000016U))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                                                          >> 0x00000016U)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.lsu_resp[5U] 
                                                          >> 0x00000010U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_254 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                                                       >> 0x00000016U))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                                                          >> 0x00000016U)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 9U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_255 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                                                       >> 0x00000016U))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                                                          >> 0x00000016U)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 9U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_257 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                                                           << 4U) 
                                                          | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                                                             >> 0x0000001cU)))) 
                                                     & ((0x0000003fU 
                                                         & ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                                                             << 4U) 
                                                            | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                                                               >> 0x0000001cU))) 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                            >> 9U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_258 = ((0U 
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
                                                       & (vlSelfRef.lsu_resp[5U] 
                                                          >> 0x00000010U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_259 = ((0U 
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
                                                       & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 9U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_260 = ((0U 
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
                                                       & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 9U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_262 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                                                           << 3U) 
                                                          | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                                                             >> 0x0000001dU)))) 
                                                     & ((0x0000003fU 
                                                         & ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                                                             << 3U) 
                                                            | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                                                               >> 0x0000001dU))) 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                            >> 9U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_263 = ((0U 
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
                                                       & (vlSelfRef.lsu_resp[5U] 
                                                          >> 0x00000010U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_264 = ((0U 
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
                                                       & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 9U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_265 = ((0U 
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
                                                       & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 9U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_266 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                                                          >> 3U))) 
                                                     & ((0x0000003fU 
                                                         & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                                                            >> 3U)) 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                            >> 9U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_267 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                                                       >> 3U))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                                                          >> 3U)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.lsu_resp[5U] 
                                                          >> 0x00000010U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_268 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                                                       >> 3U))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                                                          >> 3U)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 9U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_269 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                                                       >> 3U))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                                                          >> 3U)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 9U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_241 = ((
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
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22)))
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_243)
                                                    ? 
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.lsu_resp[0U] 
                                                       >> 7U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_244)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_245)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_242)
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_246 = ((
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
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22)))
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_248)
                                                    ? 
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.lsu_resp[0U] 
                                                       >> 7U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_249)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_250)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_247)
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_251 = ((
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
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22)))
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_253)
                                                    ? 
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.lsu_resp[0U] 
                                                       >> 7U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_254)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_255)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_252)
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_256 = ((
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
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22)))
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_258)
                                                    ? 
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.lsu_resp[0U] 
                                                       >> 7U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_259)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_260)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_257)
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_261 = ((
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
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22)))
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_263)
                                                    ? 
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.lsu_resp[0U] 
                                                       >> 7U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_264)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_265)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_262)
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151 = ((
                                                   (0U 
                                                    != 
                                                    (0x0000003fU 
                                                     & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                                                        >> 3U))) 
                                                   & (((0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                                                           >> 3U)) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                           >> 9U))) 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22)))
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_267)
                                                    ? 
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.lsu_resp[0U] 
                                                       >> 7U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_268)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_269)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_266)
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
}
