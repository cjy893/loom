// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vicache_test_top.h for the primary calling header

#include "Vicache_test_top__pch.h"

bool Vicache_test_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_test_top___024root___trigger_anySet__act\n"); );
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

void Vicache_test_top___024root___nba_sequent__TOP__0(Vicache_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_test_top___024root___nba_sequent__TOP__0\n"); );
    Vicache_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_icache_test_top__DOT__dut__DOT__address_set__4__addr;
    __Vfunc_icache_test_top__DOT__dut__DOT__address_set__4__addr = 0;
    IData/*31:0*/ __Vfunc_icache_test_top__DOT__dut__DOT__address_set__5__addr;
    __Vfunc_icache_test_top__DOT__dut__DOT__address_set__5__addr = 0;
    IData/*31:0*/ __Vfunc_icache_test_top__DOT__dut__DOT__address_set__6__addr;
    __Vfunc_icache_test_top__DOT__dut__DOT__address_set__6__addr = 0;
    IData/*31:0*/ __Vfunc_icache_test_top__DOT__dut__DOT__address_tag__7__addr;
    __Vfunc_icache_test_top__DOT__dut__DOT__address_tag__7__addr = 0;
    IData/*31:0*/ __Vfunc_icache_test_top__DOT__dut__DOT__address_set__8__addr;
    __Vfunc_icache_test_top__DOT__dut__DOT__address_set__8__addr = 0;
    // Body
    vlSelfRef.__VdlySet__icache_test_top__DOT__dut__DOT__data_array__v0 = 0U;
    vlSelfRef.__Vdly__icache_test_top__DOT__dut__DOT__state_q 
        = vlSelfRef.icache_test_top__DOT__dut__DOT__state_q;
    vlSelfRef.__VdlySet__icache_test_top__DOT__dut__DOT__valid_array__v1 = 0U;
    vlSelfRef.__VdlySet__icache_test_top__DOT__dut__DOT__valid_array__v9 = 0U;
    vlSelfRef.__VdlySet__icache_test_top__DOT__dut__DOT__valid_array__v10 = 0U;
    vlSelfRef.__VdlySet__icache_test_top__DOT__dut__DOT__valid_array__v11 = 0U;
    vlSelfRef.__VdlySet__icache_test_top__DOT__dut__DOT__replace_way_q__v1 = 0U;
    vlSelfRef.__VdlySet__icache_test_top__DOT__dut__DOT__tag_array__v0 = 0U;
    if (vlSelfRef.rst_n) {
        vlSelfRef.icache_test_top__DOT__dut__DOT__maint_done_q = 0U;
        if ((4U & (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__state_q))) {
                vlSelfRef.__Vdly__icache_test_top__DOT__dut__DOT__state_q = 0U;
            } else if ((1U & (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__state_q))) {
                vlSelfRef.__Vdly__icache_test_top__DOT__dut__DOT__state_q = 0U;
            } else if (((IData)(vlSelfRef.resp_valid) 
                        & (IData)(vlSelfRef.resp_ready))) {
                vlSelfRef.__Vdly__icache_test_top__DOT__dut__DOT__state_q = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__state_q))) {
                if (((IData)(vlSelfRef.mem_resp_valid) 
                     & (IData)(vlSelfRef.mem_resp_ready))) {
                    if (vlSelfRef.icache_test_top__DOT__dut__DOT__req_cacheable_q) {
                        vlSelfRef.__VdlyVal__icache_test_top__DOT__dut__DOT__data_array__v0 
                            = vlSelfRef.mem_resp_data;
                        vlSelfRef.__VdlyDim0__icache_test_top__DOT__dut__DOT__data_array__v0 
                            = vlSelfRef.icache_test_top__DOT__dut__DOT__refill_beat_q;
                        vlSelfRef.__VdlyDim1__icache_test_top__DOT__dut__DOT__data_array__v0 
                            = vlSelfRef.icache_test_top__DOT__dut__DOT__refill_way_q;
                        vlSelfRef.__VdlyDim2__icache_test_top__DOT__dut__DOT__data_array__v0 
                            = vlSelfRef.icache_test_top__DOT__dut__DOT__refill_set_q;
                        vlSelfRef.__VdlySet__icache_test_top__DOT__dut__DOT__data_array__v0 = 1U;
                        if (((IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__refill_beat_q) 
                             == (0x0000000fU & (vlSelfRef.icache_test_top__DOT__dut__DOT__req_paddr_q 
                                                >> 2U)))) {
                            vlSelfRef.icache_test_top__DOT__dut__DOT__resp_insts_q[0U] 
                                = vlSelfRef.mem_resp_data;
                        }
                        if (((IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__refill_beat_q) 
                             == (0x0000000fU & ((IData)(1U) 
                                                + (vlSelfRef.icache_test_top__DOT__dut__DOT__req_paddr_q 
                                                   >> 2U))))) {
                            vlSelfRef.icache_test_top__DOT__dut__DOT__resp_insts_q[1U] 
                                = vlSelfRef.mem_resp_data;
                        }
                        if (((IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__refill_beat_q) 
                             == (0x0000000fU & ((IData)(2U) 
                                                + (vlSelfRef.icache_test_top__DOT__dut__DOT__req_paddr_q 
                                                   >> 2U))))) {
                            vlSelfRef.icache_test_top__DOT__dut__DOT__resp_insts_q[2U] 
                                = vlSelfRef.mem_resp_data;
                        }
                        if (((IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__refill_beat_q) 
                             == (0x0000000fU & ((IData)(3U) 
                                                + (vlSelfRef.icache_test_top__DOT__dut__DOT__req_paddr_q 
                                                   >> 2U))))) {
                            vlSelfRef.icache_test_top__DOT__dut__DOT__resp_insts_q[3U] 
                                = vlSelfRef.mem_resp_data;
                        }
                    } else {
                        if ((0U == (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__refill_beat_q))) {
                            vlSelfRef.icache_test_top__DOT__dut__DOT__resp_insts_q[0U] 
                                = vlSelfRef.mem_resp_data;
                        }
                        if ((1U == (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__refill_beat_q))) {
                            vlSelfRef.icache_test_top__DOT__dut__DOT__resp_insts_q[1U] 
                                = vlSelfRef.mem_resp_data;
                        }
                        if ((2U == (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__refill_beat_q))) {
                            vlSelfRef.icache_test_top__DOT__dut__DOT__resp_insts_q[2U] 
                                = vlSelfRef.mem_resp_data;
                        }
                        if ((3U == (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__refill_beat_q))) {
                            vlSelfRef.icache_test_top__DOT__dut__DOT__resp_insts_q[3U] 
                                = vlSelfRef.mem_resp_data;
                        }
                    }
                    if (vlSelfRef.mem_resp_last) {
                        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
                            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                                if (VL_UNLIKELY((((IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__refill_beat_q) 
                                                  != 
                                                  ((IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__req_cacheable_q)
                                                    ? 0x0000000fU
                                                    : 3U))))) {
                                    VL_WRITEF_NX("[%0t] %%Error: icache_reference.sv:260: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"icache_test_top.dut", 'T',-12
                                                 , '#',64,VL_TIME_UNITED_Q(1));
                                    VL_STOP_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/icache/icache_reference.sv", 260, "");
                                }
                            }
                        }
                        if (vlSelfRef.icache_test_top__DOT__dut__DOT__req_cacheable_q) {
                            vlSelfRef.__VdlyVal__icache_test_top__DOT__dut__DOT__tag_array__v0 
                                = vlSelfRef.icache_test_top__DOT__dut__DOT__refill_tag_q;
                            vlSelfRef.__VdlyDim0__icache_test_top__DOT__dut__DOT__tag_array__v0 
                                = vlSelfRef.icache_test_top__DOT__dut__DOT__refill_way_q;
                            vlSelfRef.__VdlyDim1__icache_test_top__DOT__dut__DOT__tag_array__v0 
                                = vlSelfRef.icache_test_top__DOT__dut__DOT__refill_set_q;
                            vlSelfRef.__VdlySet__icache_test_top__DOT__dut__DOT__tag_array__v0 = 1U;
                            vlSelfRef.__VdlyDim0__icache_test_top__DOT__dut__DOT__valid_array__v0 
                                = vlSelfRef.icache_test_top__DOT__dut__DOT__refill_way_q;
                            vlSelfRef.__VdlyDim1__icache_test_top__DOT__dut__DOT__valid_array__v0 
                                = vlSelfRef.icache_test_top__DOT__dut__DOT__refill_set_q;
                            vlSelfRef.__VdlyVal__icache_test_top__DOT__dut__DOT__replace_way_q__v0 
                                = (1U & ((~ (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__refill_way_q)) 
                                         & ((IData)(1U) 
                                            + (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__refill_way_q))));
                            vlSelfRef.__VdlyDim0__icache_test_top__DOT__dut__DOT__replace_way_q__v0 
                                = vlSelfRef.icache_test_top__DOT__dut__DOT__refill_set_q;
                        }
                        vlSelfRef.__Vdly__icache_test_top__DOT__dut__DOT__state_q = 4U;
                    } else {
                        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
                            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                                if (VL_UNLIKELY((((IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__refill_beat_q) 
                                                  >= 
                                                  ((IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__req_cacheable_q)
                                                    ? 0x0000000fU
                                                    : 3U))))) {
                                    VL_WRITEF_NX("[%0t] %%Error: icache_reference.sv:274: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"icache_test_top.dut", 'T',-12
                                                 , '#',64,VL_TIME_UNITED_Q(1));
                                    VL_STOP_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/icache/icache_reference.sv", 274, "");
                                }
                            }
                        }
                        vlSelfRef.icache_test_top__DOT__dut__DOT__refill_beat_q 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__refill_beat_q)));
                    }
                }
            } else if (((IData)(vlSelfRef.mem_req_valid) 
                        & (IData)(vlSelfRef.mem_req_ready))) {
                vlSelfRef.icache_test_top__DOT__dut__DOT__refill_beat_q = 0U;
                vlSelfRef.__Vdly__icache_test_top__DOT__dut__DOT__state_q = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__state_q))) {
            if (((IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__req_cacheable_q) 
                 & (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_hit))) {
                vlSelfRef.icache_test_top__DOT__dut__DOT__resp_insts_q[0U] 
                    = vlSelfRef.icache_test_top__DOT__dut__DOT__data_array
                    [vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_set]
                    [vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_hit_way]
                    [(0x0000000fU & (vlSelfRef.icache_test_top__DOT__dut__DOT__req_paddr_q 
                                     >> 2U))];
                vlSelfRef.__Vdly__icache_test_top__DOT__dut__DOT__state_q = 4U;
                vlSelfRef.icache_test_top__DOT__dut__DOT__resp_insts_q[1U] 
                    = vlSelfRef.icache_test_top__DOT__dut__DOT__data_array
                    [vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_set]
                    [vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_hit_way]
                    [(0x0000000fU & ((IData)(1U) + 
                                     (vlSelfRef.icache_test_top__DOT__dut__DOT__req_paddr_q 
                                      >> 2U)))];
                vlSelfRef.icache_test_top__DOT__dut__DOT__resp_insts_q[2U] 
                    = vlSelfRef.icache_test_top__DOT__dut__DOT__data_array
                    [vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_set]
                    [vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_hit_way]
                    [(0x0000000fU & ((IData)(2U) + 
                                     (vlSelfRef.icache_test_top__DOT__dut__DOT__req_paddr_q 
                                      >> 2U)))];
                vlSelfRef.icache_test_top__DOT__dut__DOT__resp_insts_q[3U] 
                    = vlSelfRef.icache_test_top__DOT__dut__DOT__data_array
                    [vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_set]
                    [vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_hit_way]
                    [(0x0000000fU & ((IData)(3U) + 
                                     (vlSelfRef.icache_test_top__DOT__dut__DOT__req_paddr_q 
                                      >> 2U)))];
            } else {
                vlSelfRef.icache_test_top__DOT__dut__DOT__refill_set_q 
                    = vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_set;
                vlSelfRef.icache_test_top__DOT__dut__DOT__refill_tag_q 
                    = vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_tag;
                vlSelfRef.icache_test_top__DOT__dut__DOT__refill_way_q 
                    = vlSelfRef.icache_test_top__DOT__dut__DOT__lookup_victim_way;
                vlSelfRef.__Vdly__icache_test_top__DOT__dut__DOT__state_q = 2U;
            }
        } else if (((IData)(vlSelfRef.maint_valid) 
                    & (IData)(vlSelfRef.maint_ready))) {
            if (vlSelfRef.maint_all) {
                vlSelfRef.__VdlySet__icache_test_top__DOT__dut__DOT__valid_array__v1 = 1U;
            } else if ((2U != (IData)(vlSelfRef.maint_mode))) {
                __Vfunc_icache_test_top__DOT__dut__DOT__address_set__4__addr 
                    = vlSelfRef.maint_vaddr;
                vlSelfRef.icache_test_top__DOT__dut__DOT____VlemCall_1__address_set 
                    = (3U & (__Vfunc_icache_test_top__DOT__dut__DOT__address_set__4__addr 
                             >> 6U));
                vlSelfRef.__VdlyDim0__icache_test_top__DOT__dut__DOT__valid_array__v9 
                    = (1U & vlSelfRef.maint_vaddr);
                vlSelfRef.__VdlyDim1__icache_test_top__DOT__dut__DOT__valid_array__v9 
                    = vlSelfRef.icache_test_top__DOT__dut__DOT____VlemCall_1__address_set;
                vlSelfRef.__VdlySet__icache_test_top__DOT__dut__DOT__valid_array__v9 = 1U;
            } else {
                __Vfunc_icache_test_top__DOT__dut__DOT__address_set__5__addr 
                    = vlSelfRef.maint_paddr;
                vlSelfRef.icache_test_top__DOT__dut__DOT____VlemCall_2__address_set 
                    = (3U & (__Vfunc_icache_test_top__DOT__dut__DOT__address_set__5__addr 
                             >> 6U));
                __Vfunc_icache_test_top__DOT__dut__DOT__address_set__6__addr 
                    = vlSelfRef.maint_paddr;
                vlSelfRef.icache_test_top__DOT__dut__DOT____VlemCall_3__address_set 
                    = (3U & (__Vfunc_icache_test_top__DOT__dut__DOT__address_set__6__addr 
                             >> 6U));
                __Vfunc_icache_test_top__DOT__dut__DOT__address_tag__7__addr 
                    = vlSelfRef.maint_paddr;
                vlSelfRef.icache_test_top__DOT__dut__DOT____VlemCall_4__address_tag 
                    = (__Vfunc_icache_test_top__DOT__dut__DOT__address_tag__7__addr 
                       >> 8U);
                if ((vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array
                     [vlSelfRef.icache_test_top__DOT__dut__DOT____VlemCall_2__address_set][0U] 
                     & (vlSelfRef.icache_test_top__DOT__dut__DOT__tag_array
                        [vlSelfRef.icache_test_top__DOT__dut__DOT____VlemCall_3__address_set][0U] 
                        == vlSelfRef.icache_test_top__DOT__dut__DOT____VlemCall_4__address_tag))) {
                    __Vfunc_icache_test_top__DOT__dut__DOT__address_set__8__addr 
                        = vlSelfRef.maint_paddr;
                    vlSelfRef.icache_test_top__DOT__dut__DOT____VlemCall_5__address_set 
                        = (3U & (__Vfunc_icache_test_top__DOT__dut__DOT__address_set__8__addr 
                                 >> 6U));
                    vlSelfRef.__VdlyDim1__icache_test_top__DOT__dut__DOT__valid_array__v10 
                        = vlSelfRef.icache_test_top__DOT__dut__DOT____VlemCall_5__address_set;
                    vlSelfRef.__VdlySet__icache_test_top__DOT__dut__DOT__valid_array__v10 = 1U;
                }
                __Vfunc_icache_test_top__DOT__dut__DOT__address_set__5__addr 
                    = vlSelfRef.maint_paddr;
                vlSelfRef.icache_test_top__DOT__dut__DOT____VlemCall_2__address_set 
                    = (3U & (__Vfunc_icache_test_top__DOT__dut__DOT__address_set__5__addr 
                             >> 6U));
                __Vfunc_icache_test_top__DOT__dut__DOT__address_set__6__addr 
                    = vlSelfRef.maint_paddr;
                vlSelfRef.icache_test_top__DOT__dut__DOT____VlemCall_3__address_set 
                    = (3U & (__Vfunc_icache_test_top__DOT__dut__DOT__address_set__6__addr 
                             >> 6U));
                __Vfunc_icache_test_top__DOT__dut__DOT__address_tag__7__addr 
                    = vlSelfRef.maint_paddr;
                vlSelfRef.icache_test_top__DOT__dut__DOT____VlemCall_4__address_tag 
                    = (__Vfunc_icache_test_top__DOT__dut__DOT__address_tag__7__addr 
                       >> 8U);
                if ((vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array
                     [vlSelfRef.icache_test_top__DOT__dut__DOT____VlemCall_2__address_set][1U] 
                     & (vlSelfRef.icache_test_top__DOT__dut__DOT__tag_array
                        [vlSelfRef.icache_test_top__DOT__dut__DOT____VlemCall_3__address_set][1U] 
                        == vlSelfRef.icache_test_top__DOT__dut__DOT____VlemCall_4__address_tag))) {
                    __Vfunc_icache_test_top__DOT__dut__DOT__address_set__8__addr 
                        = vlSelfRef.maint_paddr;
                    vlSelfRef.icache_test_top__DOT__dut__DOT____VlemCall_5__address_set 
                        = (3U & (__Vfunc_icache_test_top__DOT__dut__DOT__address_set__8__addr 
                                 >> 6U));
                    vlSelfRef.__VdlyDim1__icache_test_top__DOT__dut__DOT__valid_array__v11 
                        = vlSelfRef.icache_test_top__DOT__dut__DOT____VlemCall_5__address_set;
                    vlSelfRef.__VdlySet__icache_test_top__DOT__dut__DOT__valid_array__v11 = 1U;
                }
            }
            if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
                if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
                    if (VL_UNLIKELY(((3U == (IData)(vlSelfRef.maint_mode))))) {
                        VL_WRITEF_NX("[%0t] %%Error: icache_reference.sv:187: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"icache_test_top.dut", 'T',-12
                                     , '#',64,VL_TIME_UNITED_Q(1));
                        VL_STOP_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/icache/icache_reference.sv", 187, "");
                    }
                }
            }
            vlSelfRef.icache_test_top__DOT__dut__DOT__maint_done_q = 1U;
        } else if (((IData)(vlSelfRef.req_valid) & (IData)(vlSelfRef.req_ready))) {
            vlSelfRef.icache_test_top__DOT__dut__DOT__req_paddr_q 
                = vlSelfRef.req_paddr;
            vlSelfRef.icache_test_top__DOT__dut__DOT__req_cacheable_q 
                = vlSelfRef.req_cacheable;
            vlSelfRef.__Vdly__icache_test_top__DOT__dut__DOT__state_q = 1U;
        }
    } else {
        vlSelfRef.icache_test_top__DOT__dut__DOT__refill_beat_q = 0U;
        vlSelfRef.__Vdly__icache_test_top__DOT__dut__DOT__state_q = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__req_paddr_q = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__req_cacheable_q = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__resp_insts_q[0U] = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__resp_insts_q[1U] = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__resp_insts_q[2U] = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__resp_insts_q[3U] = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__refill_set_q = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__refill_tag_q = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__refill_way_q = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__maint_done_q = 0U;
        vlSelfRef.__VdlySet__icache_test_top__DOT__dut__DOT__replace_way_q__v1 = 1U;
    }
}
