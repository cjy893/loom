// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboom_core.h for the primary calling header

#include "Vboom_core__pch.h"

VL_ATTR_COLD void Vboom_core___024root___eval_static(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___eval_static\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
        vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__unnamedblk2__DOT__taken_mask = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 9266595447897523980ull);
        vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__available = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15734906403584204420ull);
        vlSelfRef.boom_core__DOT__unq_iq__DOT__unnamedblk1__DOT__port_used = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14342654653071567662ull);
        vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3755582692174865210ull);
        vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17494701908669830001ull);
        vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3874901994230595309ull);
        vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15124748008854915249ull);
    }
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
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__fe_valid__0 = vlSelfRef.fe_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__fe_insts__0[0U] 
        = vlSelfRef.fe_insts[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__fe_insts__0[1U] 
        = vlSelfRef.fe_insts[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__fe_insts__0[2U] 
        = vlSelfRef.fe_insts[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__fe_insts__0[3U] 
        = vlSelfRef.fe_insts[3U];
    vlSelfRef.__Vtrigprevexpr___TOP__lsu_resp_valid__0 
        = vlSelfRef.lsu_resp_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__lsu_resp__0[0U] 
        = vlSelfRef.lsu_resp[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__lsu_resp__0[1U] 
        = vlSelfRef.lsu_resp[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__lsu_resp__0[2U] 
        = vlSelfRef.lsu_resp[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__lsu_resp__0[3U] 
        = vlSelfRef.lsu_resp[3U];
    vlSelfRef.__Vtrigprevexpr___TOP__lsu_resp__0[4U] 
        = vlSelfRef.lsu_resp[4U];
    vlSelfRef.__Vtrigprevexpr___TOP__lsu_resp__0[5U] 
        = vlSelfRef.lsu_resp[5U];
    vlSelfRef.__Vtrigprevexpr___TOP__lsu_resp__0[6U] 
        = vlSelfRef.lsu_resp[6U];
    vlSelfRef.__Vtrigprevexpr___TOP__lsu_resp__0[7U] 
        = vlSelfRef.lsu_resp[7U];
    vlSelfRef.__Vtrigprevexpr___TOP__lsu_resp__0[8U] 
        = vlSelfRef.lsu_resp[8U];
    vlSelfRef.__Vtrigprevexpr___TOP__lsu_resp__0[9U] 
        = vlSelfRef.lsu_resp[9U];
    vlSelfRef.__Vtrigprevexpr___TOP__lsu_resp__0[10U] 
        = vlSelfRef.lsu_resp[10U];
    vlSelfRef.__Vtrigprevexpr___TOP__lsu_resp__0[11U] 
        = vlSelfRef.lsu_resp[11U];
    vlSelfRef.__Vtrigprevexpr___TOP__lsu_resp__0[12U] 
        = vlSelfRef.lsu_resp[12U];
    vlSelfRef.__Vtrigprevexpr___TOP__lsu_resp__0[13U] 
        = vlSelfRef.lsu_resp[13U];
    vlSelfRef.__Vtrigprevexpr___TOP__csr_rdata__0 = vlSelfRef.csr_rdata;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__1 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vboom_core___024root___eval_initial(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___eval_initial\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSelfRef.debug_pc = 0U;
    }
}

VL_ATTR_COLD void Vboom_core___024root___eval_final(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___eval_final\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vboom_core___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vboom_core___024root___eval_phase__stl(Vboom_core___024root* vlSelf);

VL_ATTR_COLD void Vboom_core___024root___eval_settle(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___eval_settle\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vboom_core___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("boom_core.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vboom_core___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vboom_core___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vboom_core___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vboom_core___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vboom_core___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___trigger_anySet__stl\n"); );
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

extern const VlWide<12>/*383:0*/ Vboom_core__ConstPool__CONST_hdb31f06b_0;
extern const VlWide<15>/*479:0*/ Vboom_core__ConstPool__CONST_hb6297e5e_0;
extern const VlWide<24>/*767:0*/ Vboom_core__ConstPool__CONST_h4465c659_0;
extern const VlWide<36>/*1151:0*/ Vboom_core__ConstPool__CONST_h0fa36855_0;

VL_ATTR_COLD void Vboom_core___024root___stl_sequent__TOP__0(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___stl_sequent__TOP__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_36;
    __VdfgRegularize_h6e95ff9d_0_36 = 0;
    VlWide<5>/*156:0*/ __VdfgRegularize_h6e95ff9d_0_37;
    VL_ZERO_W(157, __VdfgRegularize_h6e95ff9d_0_37);
    VlWide<5>/*156:0*/ __VdfgRegularize_h6e95ff9d_0_38;
    VL_ZERO_W(157, __VdfgRegularize_h6e95ff9d_0_38);
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_67;
    __VdfgRegularize_h6e95ff9d_0_67 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_71;
    __VdfgRegularize_h6e95ff9d_0_71 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_72;
    __VdfgRegularize_h6e95ff9d_0_72 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_73;
    __VdfgRegularize_h6e95ff9d_0_73 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_74;
    __VdfgRegularize_h6e95ff9d_0_74 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_75;
    __VdfgRegularize_h6e95ff9d_0_75 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_76;
    __VdfgRegularize_h6e95ff9d_0_76 = 0;
    VlWide<3>/*85:0*/ __VdfgRegularize_h6e95ff9d_0_187;
    VL_ZERO_W(86, __VdfgRegularize_h6e95ff9d_0_187);
    VlWide<3>/*85:0*/ __VdfgRegularize_h6e95ff9d_0_188;
    VL_ZERO_W(86, __VdfgRegularize_h6e95ff9d_0_188);
    SData/*11:0*/ __VdfgRegularize_h6e95ff9d_0_190;
    __VdfgRegularize_h6e95ff9d_0_190 = 0;
    SData/*9:0*/ __VdfgRegularize_h6e95ff9d_0_191;
    __VdfgRegularize_h6e95ff9d_0_191 = 0;
    SData/*11:0*/ __VdfgRegularize_h6e95ff9d_0_194;
    __VdfgRegularize_h6e95ff9d_0_194 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_195;
    __VdfgRegularize_h6e95ff9d_0_195 = 0;
    VlWide<12>/*383:0*/ __Vtemp_4;
    VlWide<12>/*383:0*/ __Vtemp_6;
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_LoShift_1;
    CData/*0:0*/ __VExpandSel_Aligned_1;
    IData/*31:0*/ __VExpandSel_HiShift_1;
    IData/*31:0*/ __VExpandSel_HiMask_1;
    IData/*31:0*/ __VExpandSel_WordIdx_2;
    IData/*31:0*/ __VExpandSel_LoShift_2;
    CData/*0:0*/ __VExpandSel_Aligned_2;
    IData/*31:0*/ __VExpandSel_HiShift_2;
    IData/*31:0*/ __VExpandSel_HiMask_2;
    // Body
    vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec = 0ULL;
    vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
        = (1ULL | vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec);
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[1U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[1U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[2U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[2U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[3U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[3U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[4U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[4U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[5U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[5U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[6U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[6U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[7U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[7U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[8U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[8U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[9U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[9U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[10U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[10U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[11U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[11U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[12U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[12U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[13U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[13U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[14U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[14U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[15U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[15U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[16U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[16U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[17U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[17U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[18U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[18U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[19U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[19U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[20U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[20U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[21U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[21U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[22U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[22U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[23U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[23U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[24U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[24U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[25U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[25U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[26U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[26U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[27U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[27U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[28U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[28U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[29U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[29U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[30U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[30U])));
    }
    if ((0x2fU >= vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[31U])) {
        vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
            = (vlSelfRef.boom_core__DOT__rename__DOT__mt_arch_busy_vec 
               | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_map_q[31U])));
    }
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup[0U] 
        = (1U | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[0U] 
                 << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup[1U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[0U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[1U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup[2U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[1U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[2U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup[3U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[2U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[3U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup[4U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[3U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup[5U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[5U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup[6U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[5U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[6U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup[7U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[6U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[7U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup[8U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[7U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[8U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup[9U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[8U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[9U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup[10U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[9U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[10U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup[11U] 
        = ((0x80000000U & vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__2__KET____DOT__alu_inst__wakeup[11U]) 
           | ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[10U] 
               >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[11U] 
                                  << 6U)));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup[0U] 
        = (1U | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[0U] 
                 << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup[1U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[0U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[1U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup[2U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[1U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[2U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup[3U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[2U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[3U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup[4U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[3U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup[5U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[5U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup[6U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[5U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[6U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup[7U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[6U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[7U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup[8U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[7U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[8U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup[9U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[8U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[9U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup[10U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[9U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[10U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup[11U] 
        = ((0x80000000U & vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__1__KET____DOT__alu_inst__wakeup[11U]) 
           | ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[10U] 
               >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[11U] 
                                  << 6U)));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup[0U] 
        = (1U | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[0U] 
                 << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup[1U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[0U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[1U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup[2U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[1U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[2U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup[3U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[2U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[3U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup[4U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[3U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup[5U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[5U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup[6U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[5U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[6U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup[7U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[6U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[7U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup[8U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[7U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[8U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup[9U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[8U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[9U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup[10U] 
        = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[9U] 
            >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[10U] 
                               << 6U));
    vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup[11U] 
        = ((0x80000000U & vlSelfRef.boom_core__DOT____Vcellout__gen_alu__BRA__0__KET____DOT__alu_inst__wakeup[11U]) 
           | ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[10U] 
               >> 0x0000001aU) | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[11U] 
                                  << 6U)));
    vlSelfRef.lsu_agen_uop[0U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[0U];
    vlSelfRef.lsu_agen_uop[1U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[1U];
    vlSelfRef.lsu_agen_uop[2U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[2U];
    vlSelfRef.lsu_agen_uop[3U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[3U];
    vlSelfRef.lsu_agen_uop[4U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[4U];
    vlSelfRef.lsu_agen_uop[5U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[5U];
    vlSelfRef.lsu_agen_uop[6U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[6U];
    vlSelfRef.lsu_agen_uop[7U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[7U];
    vlSelfRef.lsu_agen_uop[8U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[8U];
    vlSelfRef.lsu_agen_uop[9U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[9U];
    vlSelfRef.lsu_agen_uop[10U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[10U];
    vlSelfRef.lsu_agen_uop[11U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[11U];
    vlSelfRef.lsu_dgen_uop[0U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[0U];
    vlSelfRef.lsu_dgen_uop[1U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[1U];
    vlSelfRef.lsu_dgen_uop[2U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[2U];
    vlSelfRef.lsu_dgen_uop[3U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[3U];
    vlSelfRef.lsu_dgen_uop[4U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[4U];
    vlSelfRef.lsu_dgen_uop[5U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[5U];
    vlSelfRef.lsu_dgen_uop[6U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[6U];
    vlSelfRef.lsu_dgen_uop[7U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[7U];
    vlSelfRef.lsu_dgen_uop[8U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[8U];
    vlSelfRef.lsu_dgen_uop[9U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[9U];
    vlSelfRef.lsu_dgen_uop[10U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[10U];
    vlSelfRef.lsu_dgen_uop[11U] = vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[11U];
    vlSelfRef.lsu_dgen_data = vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_rs2;
    vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head_idx 
        = (((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head) 
            << 1U) | (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head_lsb));
    vlSelfRef.lsu_agen_valid = ((IData)(vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_valid) 
                                & (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_uop[8U] 
                                   >> 0x0000000bU));
    vlSelfRef.lsu_dgen_valid = ((IData)(vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_valid) 
                                & (vlSelfRef.boom_core__DOT__gen_mem__BRA__0__KET____DOT__mem_inst__DOT__exe_uop[8U] 
                                   >> 0x0000000cU));
    vlSelfRef.lsu_agen_addr = (vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_rs1 
                               + vlSelfRef.boom_core__DOT__gen_mem__BRA__1__KET____DOT__mem_inst__DOT__exe_imm);
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
    vlSelfRef.alu_res_valid_dbg = (((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_valid) 
                                    << 2U) | (((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_valid) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_valid)));
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
    vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail_idx 
        = (((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail) 
            << 1U) | (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail_lsb));
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
    if ((0x2f1fU >= (0x00003fffU & ((IData)(0x00000179U) 
                                    * (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head))))) {
        __VExpandSel_WordIdx_1 = (0x000001ffU & (((IData)(0x00000179U) 
                                                  * (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)) 
                                                 >> 5U));
        __VExpandSel_LoShift_1 = (0x0000001fU & ((IData)(0x00000179U) 
                                                 * (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)));
        __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
        if (__VExpandSel_Aligned_1) {
            __VExpandSel_HiShift_1 = 0U;
            __VExpandSel_HiMask_1 = 0U;
        } else {
            __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_1);
            __VExpandSel_HiMask_1 = 0xffffffffU;
        }
        __Vtemp_4[0U] = (((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[0U]
                           [((IData)(1U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[0U]
                            [__VExpandSel_WordIdx_1] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_4[1U] = (((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[0U]
                           [((IData)(2U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[0U]
                            [((IData)(1U) + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_4[2U] = (((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[0U]
                           [((IData)(3U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[0U]
                            [((IData)(2U) + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_4[3U] = (((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[0U]
                           [((IData)(4U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[0U]
                            [((IData)(3U) + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_4[4U] = (((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[0U]
                           [((IData)(5U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[0U]
                            [((IData)(4U) + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_4[5U] = (((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[0U]
                           [((IData)(6U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[0U]
                            [((IData)(5U) + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_4[6U] = (((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[0U]
                           [((IData)(7U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[0U]
                            [((IData)(6U) + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_4[7U] = (((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[0U]
                           [((IData)(8U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[0U]
                            [((IData)(7U) + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_4[8U] = (((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[0U]
                           [((IData)(9U) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[0U]
                            [((IData)(8U) + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_4[9U] = (((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[0U]
                           [((IData)(0x0000000aU) + __VExpandSel_WordIdx_1)] 
                           << __VExpandSel_HiShift_1) 
                          & __VExpandSel_HiMask_1) 
                         | (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[0U]
                            [((IData)(9U) + __VExpandSel_WordIdx_1)] 
                            >> __VExpandSel_LoShift_1));
        __Vtemp_4[10U] = (((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[0U]
                            [((IData)(0x0000000bU) 
                              + __VExpandSel_WordIdx_1)] 
                            << __VExpandSel_HiShift_1) 
                           & __VExpandSel_HiMask_1) 
                          | (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[0U]
                             [((IData)(0x0000000aU) 
                               + __VExpandSel_WordIdx_1)] 
                             >> __VExpandSel_LoShift_1));
        __Vtemp_4[11U] = (((((0x0000016dU <= __VExpandSel_WordIdx_1)
                              ? 0U : vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[0U]
                             [((IData)(0x0000000cU) 
                               + __VExpandSel_WordIdx_1)]) 
                            << __VExpandSel_HiShift_1) 
                           & __VExpandSel_HiMask_1) 
                          | (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[0U]
                             [((IData)(0x0000000bU) 
                               + __VExpandSel_WordIdx_1)] 
                             >> __VExpandSel_LoShift_1));
        __VExpandSel_WordIdx_2 = (0x000001ffU & (((IData)(0x00000179U) 
                                                  * (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)) 
                                                 >> 5U));
        __VExpandSel_LoShift_2 = (0x0000001fU & ((IData)(0x00000179U) 
                                                 * (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)));
        __VExpandSel_Aligned_2 = (0U == __VExpandSel_LoShift_2);
        if (__VExpandSel_Aligned_2) {
            __VExpandSel_HiShift_2 = 0U;
            __VExpandSel_HiMask_2 = 0U;
        } else {
            __VExpandSel_HiShift_2 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_2);
            __VExpandSel_HiMask_2 = 0xffffffffU;
        }
        __Vtemp_6[0U] = (((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[1U]
                           [((IData)(1U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[1U]
                            [__VExpandSel_WordIdx_2] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_6[1U] = (((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[1U]
                           [((IData)(2U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[1U]
                            [((IData)(1U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_6[2U] = (((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[1U]
                           [((IData)(3U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[1U]
                            [((IData)(2U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_6[3U] = (((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[1U]
                           [((IData)(4U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[1U]
                            [((IData)(3U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_6[4U] = (((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[1U]
                           [((IData)(5U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[1U]
                            [((IData)(4U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_6[5U] = (((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[1U]
                           [((IData)(6U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[1U]
                            [((IData)(5U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_6[6U] = (((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[1U]
                           [((IData)(7U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[1U]
                            [((IData)(6U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_6[7U] = (((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[1U]
                           [((IData)(8U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[1U]
                            [((IData)(7U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_6[8U] = (((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[1U]
                           [((IData)(9U) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[1U]
                            [((IData)(8U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_6[9U] = (((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[1U]
                           [((IData)(0x0000000aU) + __VExpandSel_WordIdx_2)] 
                           << __VExpandSel_HiShift_2) 
                          & __VExpandSel_HiMask_2) 
                         | (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[1U]
                            [((IData)(9U) + __VExpandSel_WordIdx_2)] 
                            >> __VExpandSel_LoShift_2));
        __Vtemp_6[10U] = (((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[1U]
                            [((IData)(0x0000000bU) 
                              + __VExpandSel_WordIdx_2)] 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[1U]
                             [((IData)(0x0000000aU) 
                               + __VExpandSel_WordIdx_2)] 
                             >> __VExpandSel_LoShift_2));
        __Vtemp_6[11U] = (((((0x0000016dU <= __VExpandSel_WordIdx_2)
                              ? 0U : vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[1U]
                             [((IData)(0x0000000cU) 
                               + __VExpandSel_WordIdx_2)]) 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_uop[1U]
                             [((IData)(0x0000000bU) 
                               + __VExpandSel_WordIdx_2)] 
                             >> __VExpandSel_LoShift_2));
    } else {
        VL_ASSIGN_W(377, __Vtemp_4, Vboom_core__ConstPool__CONST_hdb31f06b_0);
        VL_ASSIGN_W(377, __Vtemp_6, Vboom_core__ConstPool__CONST_hdb31f06b_0);
    }
    vlSelfRef.commit.__PVT__uops[0U] = __Vtemp_4[0U];
    vlSelfRef.commit.__PVT__uops[1U] = __Vtemp_4[1U];
    vlSelfRef.commit.__PVT__uops[2U] = __Vtemp_4[2U];
    vlSelfRef.commit.__PVT__uops[3U] = __Vtemp_4[3U];
    vlSelfRef.commit.__PVT__uops[4U] = __Vtemp_4[4U];
    vlSelfRef.commit.__PVT__uops[5U] = __Vtemp_4[5U];
    vlSelfRef.commit.__PVT__uops[6U] = __Vtemp_4[6U];
    vlSelfRef.commit.__PVT__uops[7U] = __Vtemp_4[7U];
    vlSelfRef.commit.__PVT__uops[8U] = __Vtemp_4[8U];
    vlSelfRef.commit.__PVT__uops[9U] = __Vtemp_4[9U];
    vlSelfRef.commit.__PVT__uops[10U] = __Vtemp_4[10U];
    vlSelfRef.commit.__PVT__uops[11U] = ((0xfe000000U 
                                          & vlSelfRef.commit
                                          .__PVT__uops[11U]) 
                                         | (0x01ffffffU 
                                            & __Vtemp_4[11U]));
    vlSelfRef.commit.__PVT__uops[11U] = ((0x01ffffffU 
                                          & vlSelfRef.commit
                                          .__PVT__uops[11U]) 
                                         | (__Vtemp_6[0U] 
                                            << 0x00000019U));
    vlSelfRef.commit.__PVT__uops[12U] = ((__Vtemp_6[0U] 
                                          >> 7U) | 
                                         (__Vtemp_6[1U] 
                                          << 0x00000019U));
    vlSelfRef.commit.__PVT__uops[13U] = ((__Vtemp_6[1U] 
                                          >> 7U) | 
                                         (__Vtemp_6[2U] 
                                          << 0x00000019U));
    vlSelfRef.commit.__PVT__uops[14U] = ((__Vtemp_6[2U] 
                                          >> 7U) | 
                                         (__Vtemp_6[3U] 
                                          << 0x00000019U));
    vlSelfRef.commit.__PVT__uops[15U] = ((__Vtemp_6[3U] 
                                          >> 7U) | 
                                         (__Vtemp_6[4U] 
                                          << 0x00000019U));
    vlSelfRef.commit.__PVT__uops[16U] = ((__Vtemp_6[4U] 
                                          >> 7U) | 
                                         (__Vtemp_6[5U] 
                                          << 0x00000019U));
    vlSelfRef.commit.__PVT__uops[17U] = ((__Vtemp_6[5U] 
                                          >> 7U) | 
                                         (__Vtemp_6[6U] 
                                          << 0x00000019U));
    vlSelfRef.commit.__PVT__uops[18U] = ((__Vtemp_6[6U] 
                                          >> 7U) | 
                                         (__Vtemp_6[7U] 
                                          << 0x00000019U));
    vlSelfRef.commit.__PVT__uops[19U] = ((__Vtemp_6[7U] 
                                          >> 7U) | 
                                         (__Vtemp_6[8U] 
                                          << 0x00000019U));
    vlSelfRef.commit.__PVT__uops[20U] = ((__Vtemp_6[8U] 
                                          >> 7U) | 
                                         (__Vtemp_6[9U] 
                                          << 0x00000019U));
    vlSelfRef.commit.__PVT__uops[21U] = ((__Vtemp_6[9U] 
                                          >> 7U) | 
                                         (__Vtemp_6[10U] 
                                          << 0x00000019U));
    vlSelfRef.commit.__PVT__uops[22U] = ((__Vtemp_6[10U] 
                                          >> 7U) | 
                                         (__Vtemp_6[11U] 
                                          << 0x00000019U));
    vlSelfRef.commit.__PVT__uops[23U] = (0x0003ffffU 
                                         & (__Vtemp_6[11U] 
                                            >> 7U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_102 = (3U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.boom_core__DOT__brmask__DOT__br_mask_q) 
                                                                     >> 3U))))) 
                                                     | ((4U 
                                                         & (IData)(vlSelfRef.boom_core__DOT__brmask__DOT__br_mask_q))
                                                         ? 
                                                        (1U 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (~ 
                                                                          ((IData)(vlSelfRef.boom_core__DOT__brmask__DOT__br_mask_q) 
                                                                           >> 1U))))))
                                                         : 2U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = ((IData)(vlSelfRef.lsu_resp_valid) 
                                                & (0U 
                                                   == 
                                                   (0x0000000cU 
                                                    & vlSelfRef.lsu_resp[2U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_valid) 
                                                & (0U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_valid) 
                                                & (0U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_valid) 
                                                & (0U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U])));
    vlSelfRef.boom_core__DOT__wakeups[36U] = ((0x0000003fU 
                                               & vlSelfRef.boom_core__DOT__wakeups[36U]) 
                                              | ((vlSelfRef.lsu_resp[2U] 
                                                  << 0x0000001fU) 
                                                 | (0x7fffffc0U 
                                                    & (vlSelfRef.lsu_resp[1U] 
                                                       >> 1U))));
    vlSelfRef.boom_core__DOT__wakeups[37U] = ((0x0000003fU 
                                               & (vlSelfRef.lsu_resp[2U] 
                                                  >> 1U)) 
                                              | ((vlSelfRef.lsu_resp[3U] 
                                                  << 0x0000001fU) 
                                                 | (0x7fffffc0U 
                                                    & (vlSelfRef.lsu_resp[2U] 
                                                       >> 1U))));
    vlSelfRef.boom_core__DOT__wakeups[38U] = ((0x0000003fU 
                                               & (vlSelfRef.lsu_resp[3U] 
                                                  >> 1U)) 
                                              | ((vlSelfRef.lsu_resp[4U] 
                                                  << 0x0000001fU) 
                                                 | (0x7fffffc0U 
                                                    & (vlSelfRef.lsu_resp[3U] 
                                                       >> 1U))));
    vlSelfRef.boom_core__DOT__wakeups[39U] = ((0x0000003fU 
                                               & (vlSelfRef.lsu_resp[4U] 
                                                  >> 1U)) 
                                              | ((vlSelfRef.lsu_resp[5U] 
                                                  << 0x0000001fU) 
                                                 | (0x7fffffc0U 
                                                    & (vlSelfRef.lsu_resp[4U] 
                                                       >> 1U))));
    vlSelfRef.boom_core__DOT__wakeups[40U] = ((0x0000003fU 
                                               & (vlSelfRef.lsu_resp[5U] 
                                                  >> 1U)) 
                                              | ((vlSelfRef.lsu_resp[6U] 
                                                  << 0x0000001fU) 
                                                 | (0x7fffffc0U 
                                                    & (vlSelfRef.lsu_resp[5U] 
                                                       >> 1U))));
    vlSelfRef.boom_core__DOT__wakeups[41U] = ((0x0000003fU 
                                               & (vlSelfRef.lsu_resp[6U] 
                                                  >> 1U)) 
                                              | ((vlSelfRef.lsu_resp[7U] 
                                                  << 0x0000001fU) 
                                                 | (0x7fffffc0U 
                                                    & (vlSelfRef.lsu_resp[6U] 
                                                       >> 1U))));
    vlSelfRef.boom_core__DOT__wakeups[42U] = ((0x0000003fU 
                                               & (vlSelfRef.lsu_resp[7U] 
                                                  >> 1U)) 
                                              | ((vlSelfRef.lsu_resp[8U] 
                                                  << 0x0000001fU) 
                                                 | (0x7fffffc0U 
                                                    & (vlSelfRef.lsu_resp[7U] 
                                                       >> 1U))));
    vlSelfRef.boom_core__DOT__wakeups[43U] = ((0x0000003fU 
                                               & (vlSelfRef.lsu_resp[8U] 
                                                  >> 1U)) 
                                              | ((vlSelfRef.lsu_resp[9U] 
                                                  << 0x0000001fU) 
                                                 | (0x7fffffc0U 
                                                    & (vlSelfRef.lsu_resp[8U] 
                                                       >> 1U))));
    vlSelfRef.boom_core__DOT__wakeups[44U] = ((0x0000003fU 
                                               & (vlSelfRef.lsu_resp[9U] 
                                                  >> 1U)) 
                                              | ((vlSelfRef.lsu_resp[10U] 
                                                  << 0x0000001fU) 
                                                 | (0x7fffffc0U 
                                                    & (vlSelfRef.lsu_resp[9U] 
                                                       >> 1U))));
    vlSelfRef.boom_core__DOT__wakeups[45U] = ((0x0000003fU 
                                               & (vlSelfRef.lsu_resp[10U] 
                                                  >> 1U)) 
                                              | ((vlSelfRef.lsu_resp[11U] 
                                                  << 0x0000001fU) 
                                                 | (0x7fffffc0U 
                                                    & (vlSelfRef.lsu_resp[10U] 
                                                       >> 1U))));
    vlSelfRef.boom_core__DOT__wakeups[46U] = ((0x0000003fU 
                                               & (vlSelfRef.lsu_resp[11U] 
                                                  >> 1U)) 
                                              | ((vlSelfRef.lsu_resp[12U] 
                                                  << 0x0000001fU) 
                                                 | (0x7fffffc0U 
                                                    & (vlSelfRef.lsu_resp[11U] 
                                                       >> 1U))));
    vlSelfRef.boom_core__DOT__wakeups[47U] = ((0x0000003fU 
                                               & (vlSelfRef.lsu_resp[12U] 
                                                  >> 1U)) 
                                              | (((IData)(vlSelfRef.lsu_resp_valid) 
                                                  << 0x0000001fU) 
                                                 | (0x7fffffc0U 
                                                    & (vlSelfRef.lsu_resp[12U] 
                                                       >> 1U))));
    vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op1 
        = ((0U == (3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                         >> 0x00000011U))) ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs1
            : (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs1 
               & ((- (IData)((1U != (3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                           >> 0x00000011U))))) 
                  & (- (IData)((2U != (3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                             >> 0x00000011U))))))));
    vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op1 
        = ((0U == (3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                         >> 0x00000011U))) ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs1
            : (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs1 
               & ((- (IData)((1U != (3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                           >> 0x00000011U))))) 
                  & (- (IData)((2U != (3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                             >> 0x00000011U))))))));
    vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op2 
        = ((0x00010000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U])
            ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs2
            : ((0x00008000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U])
                ? (4U & (- (IData)((1U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                          >> 0x0000000eU)))))
                : ((0x00004000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U])
                    ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm
                    : vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs2)));
    vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op2 
        = ((0x00010000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U])
            ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs2
            : ((0x00008000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U])
                ? (4U & (- (IData)((1U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                          >> 0x0000000eU)))))
                : ((0x00004000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U])
                    ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm
                    : vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs2)));
    vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op1 
        = ((0U == (3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                         >> 0x00000011U))) ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs1
            : (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs1 
               & ((- (IData)((1U != (3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                           >> 0x00000011U))))) 
                  & (- (IData)((2U != (3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                             >> 0x00000011U))))))));
    vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op2 
        = ((0x00010000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U])
            ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs2
            : ((0x00008000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U])
                ? (4U & (- (IData)((1U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                          >> 0x0000000eU)))))
                : ((0x00004000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U])
                    ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm
                    : vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs2)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_96 = ((8U 
                                                  & (IData)(vlSelfRef.boom_core__DOT__brmask__DOT__br_mask_q))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.boom_core__DOT__brmask__DOT__br_mask_q))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.boom_core__DOT__brmask__DOT__br_mask_q))
                                                    ? 
                                                   (1U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSelfRef.boom_core__DOT__brmask__DOT__br_mask_q))))))
                                                    : 2U)
                                                   : 4U)
                                                  : 8U);
    vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid 
        = ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_valid) 
           & (0U == (0x18000000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[0U])));
    vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid 
        = ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_valid) 
           & (0U == (0x18000000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[0U])));
    vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid 
        = ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_valid) 
           & (0U == (0x18000000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[0U])));
    vlSelfRef.boom_core__DOT__unq_inst__DOT__busy_done 
        = (((2U == (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state)) 
            & (2U == (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__busy_cnt))) 
           | ((3U == (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state)) 
              & (5U <= (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__busy_cnt))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_82 = ((0U 
                                                  != (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_state)) 
                                                 & (1U 
                                                    != (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_state)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48 = (1U 
                                                 & (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_val[1U] 
                                                    >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47 = (1U 
                                                 & (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_val[0U] 
                                                    >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_90 = ((0x03fff000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.fe_insts[1U] 
                                                                    >> 0x00000015U)))) 
                                                     << 0x0000000cU)) 
                                                 | (0x00000fffU 
                                                    & (vlSelfRef.fe_insts[1U] 
                                                       >> 0x0000000aU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_92 = ((0x03ff0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.fe_insts[1U] 
                                                                    >> 0x00000019U)))) 
                                                     << 0x00000010U)) 
                                                 | (0x0000ffffU 
                                                    & (vlSelfRef.fe_insts[1U] 
                                                       >> 0x0000000aU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_184 = ((0x000007c0U 
                                                   & (vlSelfRef.fe_insts[1U] 
                                                      << 1U)) 
                                                  | (0x0000001fU 
                                                     & vlSelfRef.fe_insts[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_85 = ((0x03fff000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.fe_insts[0U] 
                                                                    >> 0x00000015U)))) 
                                                     << 0x0000000cU)) 
                                                 | (0x00000fffU 
                                                    & (vlSelfRef.fe_insts[0U] 
                                                       >> 0x0000000aU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87 = ((0x03ff0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.fe_insts[0U] 
                                                                    >> 0x00000019U)))) 
                                                     << 0x00000010U)) 
                                                 | (0x0000ffffU 
                                                    & (vlSelfRef.fe_insts[0U] 
                                                       >> 0x0000000aU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 = (1U 
                                                 & (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_val[0U] 
                                                    >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79 = (1U 
                                                 & (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_val[1U] 
                                                    >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183 = ((0x000007c0U 
                                                   & (vlSelfRef.fe_insts[0U] 
                                                      << 1U)) 
                                                  | (0x0000001fU 
                                                     & vlSelfRef.fe_insts[0U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30 = ((0x000007c0U 
                                                  & (vlSelfRef.fe_insts[1U] 
                                                     << 6U)) 
                                                 | (0x0000001fU 
                                                    & (vlSelfRef.fe_insts[1U] 
                                                       >> 5U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88 = ((0x0001f000U 
                                                  & (vlSelfRef.fe_insts[1U] 
                                                     << 7U)) 
                                                 | (0x000007c0U 
                                                    & (vlSelfRef.fe_insts[1U] 
                                                       >> 4U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29 = ((0x000007c0U 
                                                  & (vlSelfRef.fe_insts[0U] 
                                                     << 6U)) 
                                                 | (0x0000001fU 
                                                    & (vlSelfRef.fe_insts[0U] 
                                                       >> 5U)));
    vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__brinfo_valid 
        = ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_valid) 
           & (0U != (7U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                           >> 2U))));
    vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__brinfo_valid 
        = ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_valid) 
           & (0U != (7U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                           >> 2U))));
    vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__brinfo_valid 
        = ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_valid) 
           & (0U != (7U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                           >> 2U))));
    vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__cond_true 
        = ((~ (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
               >> 0x00000014U)) & ((0x00080000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                    ? ((0x00040000U 
                                        & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                        ? ((~ (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                               >> 0x00000011U)) 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs1 
                                              < vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs2))
                                        : ((0x00020000U 
                                            & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                            ? VL_LTS_III(32, vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs1, vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs2)
                                            : (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs1 
                                               >= vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs2)))
                                    : ((0x00040000U 
                                        & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                        ? ((0x00020000U 
                                            & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                            ? VL_GTES_III(32, vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs1, vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs2)
                                            : (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs1 
                                               == vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs2))
                                        : ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                            >> 0x00000011U) 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs1 
                                              != vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs2)))));
    vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__cond_true 
        = ((~ (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
               >> 0x00000014U)) & ((0x00080000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                    ? ((0x00040000U 
                                        & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                        ? ((~ (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                               >> 0x00000011U)) 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs1 
                                              < vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs2))
                                        : ((0x00020000U 
                                            & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                            ? VL_LTS_III(32, vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs1, vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs2)
                                            : (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs1 
                                               >= vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs2)))
                                    : ((0x00040000U 
                                        & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                        ? ((0x00020000U 
                                            & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                            ? VL_GTES_III(32, vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs1, vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs2)
                                            : (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs1 
                                               == vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs2))
                                        : ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                            >> 0x00000011U) 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs1 
                                              != vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs2)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83 = ((0x0001f000U 
                                                  & (vlSelfRef.fe_insts[0U] 
                                                     << 7U)) 
                                                 | (0x000007c0U 
                                                    & (vlSelfRef.fe_insts[0U] 
                                                       >> 4U)));
    vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__cond_true 
        = ((~ (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
               >> 0x00000014U)) & ((0x00080000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                    ? ((0x00040000U 
                                        & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                        ? ((~ (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                               >> 0x00000011U)) 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs1 
                                              < vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs2))
                                        : ((0x00020000U 
                                            & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                            ? VL_LTS_III(32, vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs1, vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs2)
                                            : (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs1 
                                               >= vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs2)))
                                    : ((0x00040000U 
                                        & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                        ? ((0x00020000U 
                                            & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                            ? VL_GTES_III(32, vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs1, vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs2)
                                            : (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs1 
                                               == vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs2))
                                        : ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                            >> 0x00000011U) 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs1 
                                              != vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs2)))));
    vlSelfRef.boom_core__DOT__wakeup_pdst_w = ((0x0000000fc0000000ULL 
                                                & vlSelfRef.boom_core__DOT__wakeup_pdst_w) 
                                               | (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_69)));
    __VdfgRegularize_h6e95ff9d_0_71 = (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op1 
                                       + vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op2);
    __VdfgRegularize_h6e95ff9d_0_72 = (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op1 
                                       | vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op2);
    __VdfgRegularize_h6e95ff9d_0_73 = (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op1 
                                       + vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op2);
    __VdfgRegularize_h6e95ff9d_0_74 = (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op1 
                                       | vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op2);
    __VdfgRegularize_h6e95ff9d_0_75 = (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op1 
                                       + vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op2);
    __VdfgRegularize_h6e95ff9d_0_76 = (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op1 
                                       | vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op2);
    vlSelfRef.boom_core__DOT__wakeups[24U] = ((0x0000003fU 
                                               & vlSelfRef.boom_core__DOT__wakeups[24U]) 
                                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[0U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[25U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[0U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[1U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[26U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[1U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[2U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[27U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[2U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[3U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[28U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[3U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[29U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[5U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[30U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[5U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[6U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[31U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[6U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[7U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[32U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[7U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[8U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[33U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[8U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[9U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[34U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[9U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[10U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[35U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[10U] 
                                               >> 0x0000001aU) 
                                              | (((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                  << 0x0000001fU) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[11U] 
                                                    << 6U)));
    vlSelfRef.boom_core__DOT__wakeups[12U] = ((0x0000003fU 
                                               & vlSelfRef.boom_core__DOT__wakeups[12U]) 
                                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[0U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[13U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[0U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[1U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[14U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[1U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[2U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[15U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[2U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[3U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[16U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[3U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[17U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[5U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[18U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[5U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[6U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[19U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[6U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[7U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[20U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[7U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[8U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[21U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[8U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[9U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[22U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[9U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[10U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[23U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[10U] 
                                               >> 0x0000001aU) 
                                              | (((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                  << 0x0000001fU) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[11U] 
                                                    << 6U)));
    vlSelfRef.boom_core__DOT__wakeups[0U] = ((0x0000003fU 
                                              & vlSelfRef.boom_core__DOT__wakeups[0U]) 
                                             | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[0U] 
                                                << 6U));
    vlSelfRef.boom_core__DOT__wakeups[1U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[0U] 
                                              >> 0x0000001aU) 
                                             | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[1U] 
                                                << 6U));
    vlSelfRef.boom_core__DOT__wakeups[2U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[1U] 
                                              >> 0x0000001aU) 
                                             | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[2U] 
                                                << 6U));
    vlSelfRef.boom_core__DOT__wakeups[3U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[2U] 
                                              >> 0x0000001aU) 
                                             | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[3U] 
                                                << 6U));
    vlSelfRef.boom_core__DOT__wakeups[4U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[3U] 
                                              >> 0x0000001aU) 
                                             | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                << 6U));
    vlSelfRef.boom_core__DOT__wakeups[5U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                              >> 0x0000001aU) 
                                             | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[5U] 
                                                << 6U));
    vlSelfRef.boom_core__DOT__wakeups[6U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[5U] 
                                              >> 0x0000001aU) 
                                             | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[6U] 
                                                << 6U));
    vlSelfRef.boom_core__DOT__wakeups[7U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[6U] 
                                              >> 0x0000001aU) 
                                             | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[7U] 
                                                << 6U));
    vlSelfRef.boom_core__DOT__wakeups[8U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[7U] 
                                              >> 0x0000001aU) 
                                             | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[8U] 
                                                << 6U));
    vlSelfRef.boom_core__DOT__wakeups[9U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[8U] 
                                              >> 0x0000001aU) 
                                             | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[9U] 
                                                << 6U));
    vlSelfRef.boom_core__DOT__wakeups[10U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[9U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[10U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[11U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[10U] 
                                               >> 0x0000001aU) 
                                              | (((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                  << 0x0000001fU) 
                                                 | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[11U] 
                                                    << 6U)));
    vlSelfRef.boom_core__DOT__unq_inst__DOT__res_valid 
        = ((1U == (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state)) 
           | ((IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__busy_done) 
              & ((2U == (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state)) 
                 | (3U == (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state)))));
    vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head_vals 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48) 
            << 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47));
    vlSelfRef.rob_ready_dbg = ((~ (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78) 
                                    | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79)) 
                                   & ((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head) 
                                      == (0x0000001fU 
                                          & (((IData)(1U) 
                                              + (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail)) 
                                             & (- (IData)(
                                                          (0x1fU 
                                                           != (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail))))))))) 
                               & (0U == (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_state)));
    if ((0x01000000U & vlSelfRef.fe_insts[1U])) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[0U] 
            = (IData)((1ULL | ((QData)((IData)((0x09000000U 
                                                | (((0x24U 
                                                     >> 
                                                     (6U 
                                                      & (vlSelfRef.fe_insts[1U] 
                                                         >> 0x00000015U))) 
                                                    << 0x0000001eU) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_184))))) 
                               << 7U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[1U] 
            = (0x00000080U | (IData)(((1ULL | ((QData)((IData)(
                                                               (0x09000000U 
                                                                | (((0x24U 
                                                                     >> 
                                                                     (6U 
                                                                      & (vlSelfRef.fe_insts[1U] 
                                                                         >> 0x00000015U))) 
                                                                    << 0x0000001eU) 
                                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_184))))) 
                                               << 7U)) 
                                      >> 0x00000020U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[2U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[3U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[4U] = 0x00040000U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[5U] = 0x03000000U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[6U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[7U] = 0x00018000U;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[0U] 
            = (IData)((((QData)((IData)((0x0440U | 
                                         ((0x00003000U 
                                           & ((0x24U 
                                               >> (6U 
                                                   & (vlSelfRef.fe_insts[1U] 
                                                      >> 0x00000015U))) 
                                              << 0x0000000cU)) 
                                          | (0x00000800U 
                                             & ((~ 
                                                 (vlSelfRef.fe_insts[1U] 
                                                  >> 0x00000016U)) 
                                                << 0x0000000bU)))))) 
                        << 0x00000019U) | (QData)((IData)(
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30) 
                                                           << 0x0000000dU)))));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[1U] 
            = (IData)(((((QData)((IData)((0x0440U | 
                                          ((0x00003000U 
                                            & ((0x24U 
                                                >> 
                                                (6U 
                                                 & (vlSelfRef.fe_insts[1U] 
                                                    >> 0x00000015U))) 
                                               << 0x0000000cU)) 
                                           | (0x00000800U 
                                              & ((~ 
                                                  (vlSelfRef.fe_insts[1U] 
                                                   >> 0x00000016U)) 
                                                 << 0x0000000bU)))))) 
                         << 0x00000019U) | (QData)((IData)(
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30) 
                                                            << 0x0000000dU)))) 
                       >> 0x00000020U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[2U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[3U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[4U] = 0x00040000U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[5U] = 0x03000000U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[6U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58[7U] = 0x00008000U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62 = ((0x3e000000U 
                                                  & (vlSelfRef.fe_insts[1U] 
                                                     << 0x00000019U)) 
                                                 | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88 
                                                    << 7U));
    __VdfgRegularize_h6e95ff9d_0_37[0U] = (IData)((
                                                   ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30)) 
                                                    << 0x00000018U) 
                                                   | (QData)((IData)(
                                                                     (0x00fff000U 
                                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88 
                                                                         << 0x0000000cU))))));
    __VdfgRegularize_h6e95ff9d_0_37[1U] = ((0xfffffff0U 
                                            & __VdfgRegularize_h6e95ff9d_0_37[1U]) 
                                           | (IData)(
                                                     ((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30)) 
                                                        << 0x00000018U) 
                                                       | (QData)((IData)(
                                                                         (0x00fff000U 
                                                                          & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88 
                                                                             << 0x0000000cU))))) 
                                                      >> 0x00000020U)));
    __VdfgRegularize_h6e95ff9d_0_37[1U] = (0x0000000fU 
                                           & __VdfgRegularize_h6e95ff9d_0_37[1U]);
    __VdfgRegularize_h6e95ff9d_0_37[2U] = 0U;
    __VdfgRegularize_h6e95ff9d_0_37[3U] = 0U;
    __VdfgRegularize_h6e95ff9d_0_37[4U] = 0U;
    if ((0x01000000U & vlSelfRef.fe_insts[0U])) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57[0U] 
            = (IData)((1ULL | ((QData)((IData)((0x09000000U 
                                                | (((0x24U 
                                                     >> 
                                                     (6U 
                                                      & (vlSelfRef.fe_insts[0U] 
                                                         >> 0x00000015U))) 
                                                    << 0x0000001eU) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183))))) 
                               << 7U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57[1U] 
            = (0x00000080U | (IData)(((1ULL | ((QData)((IData)(
                                                               (0x09000000U 
                                                                | (((0x24U 
                                                                     >> 
                                                                     (6U 
                                                                      & (vlSelfRef.fe_insts[0U] 
                                                                         >> 0x00000015U))) 
                                                                    << 0x0000001eU) 
                                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_183))))) 
                                               << 7U)) 
                                      >> 0x00000020U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57[2U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57[3U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57[4U] = 0x00040000U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57[5U] = 0x03000000U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57[6U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57[7U] = 0x00018000U;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57[0U] 
            = (IData)((((QData)((IData)((0x0440U | 
                                         ((0x00003000U 
                                           & ((0x24U 
                                               >> (6U 
                                                   & (vlSelfRef.fe_insts[0U] 
                                                      >> 0x00000015U))) 
                                              << 0x0000000cU)) 
                                          | (0x00000800U 
                                             & ((~ 
                                                 (vlSelfRef.fe_insts[0U] 
                                                  >> 0x00000016U)) 
                                                << 0x0000000bU)))))) 
                        << 0x00000019U) | (QData)((IData)(
                                                          ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29) 
                                                           << 0x0000000dU)))));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57[1U] 
            = (IData)(((((QData)((IData)((0x0440U | 
                                          ((0x00003000U 
                                            & ((0x24U 
                                                >> 
                                                (6U 
                                                 & (vlSelfRef.fe_insts[0U] 
                                                    >> 0x00000015U))) 
                                               << 0x0000000cU)) 
                                           | (0x00000800U 
                                              & ((~ 
                                                  (vlSelfRef.fe_insts[0U] 
                                                   >> 0x00000016U)) 
                                                 << 0x0000000bU)))))) 
                         << 0x00000019U) | (QData)((IData)(
                                                           ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29) 
                                                            << 0x0000000dU)))) 
                       >> 0x00000020U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57[2U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57[3U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57[4U] = 0x00040000U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57[5U] = 0x03000000U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57[6U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57[7U] = 0x00008000U;
    }
    vlSelfRef.boom_core__DOT__resolve_mask = (0x0000000fU 
                                              & (((- (IData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__brinfo_valid))) 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                         >> 0x00000016U)))) 
                                                 | (((- (IData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__brinfo_valid))) 
                                                     & ((IData)(1U) 
                                                        << 
                                                        (3U 
                                                         & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                            >> 0x00000016U)))) 
                                                    | ((- (IData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__brinfo_valid))) 
                                                       & ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                              >> 0x00000016U)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45 = ((0x00000010U 
                                                  & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                  ? 
                                                 ((1U 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                      >> 0x0000000fU)) 
                                                  != (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__cond_true))
                                                  : 
                                                 (0U 
                                                  != 
                                                  (3U 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                      >> 2U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46 = ((0x00000010U 
                                                  & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                  ? 
                                                 ((1U 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                      >> 0x0000000fU)) 
                                                  != (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__cond_true))
                                                  : 
                                                 (0U 
                                                  != 
                                                  (3U 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                      >> 2U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_61 = ((0x3e000000U 
                                                  & (vlSelfRef.fe_insts[0U] 
                                                     << 0x00000019U)) 
                                                 | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83 
                                                    << 7U));
    __VdfgRegularize_h6e95ff9d_0_38[0U] = (IData)((
                                                   ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29)) 
                                                    << 0x00000018U) 
                                                   | (QData)((IData)(
                                                                     (0x00fff000U 
                                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83 
                                                                         << 0x0000000cU))))));
    __VdfgRegularize_h6e95ff9d_0_38[1U] = ((0xfffffff0U 
                                            & __VdfgRegularize_h6e95ff9d_0_38[1U]) 
                                           | (IData)(
                                                     ((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29)) 
                                                        << 0x00000018U) 
                                                       | (QData)((IData)(
                                                                         (0x00fff000U 
                                                                          & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83 
                                                                             << 0x0000000cU))))) 
                                                      >> 0x00000020U)));
    __VdfgRegularize_h6e95ff9d_0_38[1U] = (0x0000000fU 
                                           & __VdfgRegularize_h6e95ff9d_0_38[1U]);
    __VdfgRegularize_h6e95ff9d_0_38[2U] = 0U;
    __VdfgRegularize_h6e95ff9d_0_38[3U] = 0U;
    __VdfgRegularize_h6e95ff9d_0_38[4U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77 = ((0x00000010U 
                                                  & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                  ? 
                                                 ((1U 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                      >> 0x0000000fU)) 
                                                  != (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__cond_true))
                                                  : 
                                                 (0U 
                                                  != 
                                                  (3U 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                      >> 2U))));
    vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result 
        = ((0x00100000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U])
            ? ((0x00080000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U])
                ? __VdfgRegularize_h6e95ff9d_0_71 : 
               ((0x00040000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U])
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
                        ? (~ __VdfgRegularize_h6e95ff9d_0_72)
                        : (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op1 
                           ^ vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__op2))
                    : ((0x00020000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U])
                        ? __VdfgRegularize_h6e95ff9d_0_72
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
                        : __VdfgRegularize_h6e95ff9d_0_71))));
    vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result 
        = ((0x00100000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U])
            ? ((0x00080000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U])
                ? __VdfgRegularize_h6e95ff9d_0_73 : 
               ((0x00040000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U])
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
                        ? (~ __VdfgRegularize_h6e95ff9d_0_74)
                        : (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op1 
                           ^ vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__op2))
                    : ((0x00020000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U])
                        ? __VdfgRegularize_h6e95ff9d_0_74
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
                        : __VdfgRegularize_h6e95ff9d_0_73))));
    vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result 
        = ((0x00100000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U])
            ? ((0x00080000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U])
                ? __VdfgRegularize_h6e95ff9d_0_75 : 
               ((0x00040000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U])
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
                        ? (~ __VdfgRegularize_h6e95ff9d_0_76)
                        : (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op1 
                           ^ vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__op2))
                    : ((0x00020000U & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U])
                        ? __VdfgRegularize_h6e95ff9d_0_76
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
                        : __VdfgRegularize_h6e95ff9d_0_75))));
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_93 = ((((IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__res_valid) 
                                                   << 4U) 
                                                  | (((IData)(vlSelfRef.lsu_resp_valid) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                        << 2U))) 
                                                 | (((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid)));
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
    vlSelfRef.rob_empty = (((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head) 
                            == (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail)) 
                           & (0U == (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head_vals)));
    vlSelfRef.boom_core__DOT__rob_inst__DOT__can_throw_exception 
        = ((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head_vals) 
           & ((2U & ((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_exception[1U] 
                      >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)) 
                     << 1U)) | (1U & (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_exception[0U] 
                                      >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179[1U] = 0x00080000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179[2U] = 0x00040000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179[3U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179[4U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179[5U] = 0xc0000000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179[6U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179[7U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41[0U] = 
        ((0xfff00000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41[0U]) 
         | ((0x0007c000U & (vlSelfRef.fe_insts[1U] 
                            << 4U)) | (0x00003f00U 
                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88 
                                          << 8U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41[0U] = 
        ((0x000fffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41[0U]) 
         | ((__VdfgRegularize_h6e95ff9d_0_37[1U] << 0x0000001cU) 
            | (0x0ff00000U & (__VdfgRegularize_h6e95ff9d_0_37[0U] 
                              >> 4U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41[1U] = 
        ((0x000fffffU & (__VdfgRegularize_h6e95ff9d_0_37[1U] 
                         >> 4U)) | ((__VdfgRegularize_h6e95ff9d_0_37[2U] 
                                     << 0x0000001cU) 
                                    | (0x0ff00000U 
                                       & (__VdfgRegularize_h6e95ff9d_0_37[1U] 
                                          >> 4U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41[2U] = 
        ((0x000fffffU & (__VdfgRegularize_h6e95ff9d_0_37[2U] 
                         >> 4U)) | ((__VdfgRegularize_h6e95ff9d_0_37[3U] 
                                     << 0x0000001cU) 
                                    | (0x0ff00000U 
                                       & (__VdfgRegularize_h6e95ff9d_0_37[2U] 
                                          >> 4U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41[3U] = 
        ((0x000fffffU & (__VdfgRegularize_h6e95ff9d_0_37[3U] 
                         >> 4U)) | ((__VdfgRegularize_h6e95ff9d_0_37[4U] 
                                     << 0x0000001cU) 
                                    | (0x0ff00000U 
                                       & (__VdfgRegularize_h6e95ff9d_0_37[3U] 
                                          >> 4U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41[4U] = 
        ((0x000fffffU & (__VdfgRegularize_h6e95ff9d_0_37[4U] 
                         >> 4U)) | (0x01f00000U & (__VdfgRegularize_h6e95ff9d_0_37[4U] 
                                                   >> 4U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41[5U] = 0x80000000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41[6U] = 1U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41[7U] = 0x00200000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41[8U] = 2U;
    __VdfgRegularize_h6e95ff9d_0_188[0U] = (IData)(
                                                   (0x00000003ffffffffULL 
                                                    & (((QData)((IData)(__VdfgRegularize_h6e95ff9d_0_37[1U])) 
                                                        << 0x0000001eU) 
                                                       | ((QData)((IData)(__VdfgRegularize_h6e95ff9d_0_37[0U])) 
                                                          >> 2U))));
    __VdfgRegularize_h6e95ff9d_0_188[1U] = (IData)(
                                                   ((0x00000003ffffffffULL 
                                                     & (((QData)((IData)(__VdfgRegularize_h6e95ff9d_0_37[1U])) 
                                                         << 0x0000001eU) 
                                                        | ((QData)((IData)(__VdfgRegularize_h6e95ff9d_0_37[0U])) 
                                                           >> 2U))) 
                                                    >> 0x00000020U));
    __VdfgRegularize_h6e95ff9d_0_188[2U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[0U] = (IData)(
                                                            (0x007fffffffffffffULL 
                                                             & (((QData)((IData)(__VdfgRegularize_h6e95ff9d_0_37[1U])) 
                                                                 << 0x00000020U) 
                                                                | (QData)((IData)(__VdfgRegularize_h6e95ff9d_0_37[0U])))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[1U] = 
        (0x01000000U | (IData)(((0x007fffffffffffffULL 
                                 & (((QData)((IData)(__VdfgRegularize_h6e95ff9d_0_37[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__VdfgRegularize_h6e95ff9d_0_37[0U])))) 
                                >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[2U] = 0x00800000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[3U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[4U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[5U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[6U] = 0x00000018U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[7U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[8U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52 = (((QData)((IData)(
                                                                  (0x000fffffU 
                                                                   & ((__VdfgRegularize_h6e95ff9d_0_37[1U] 
                                                                       << 8U) 
                                                                      | (__VdfgRegularize_h6e95ff9d_0_37[0U] 
                                                                         >> 0x00000018U))))) 
                                                  << 0x00000013U) 
                                                 | (QData)((IData)(
                                                                   ((0x0003e000U 
                                                                     & (vlSelfRef.fe_insts[1U] 
                                                                        << 3U)) 
                                                                    | (0x00001f80U 
                                                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_88 
                                                                          << 7U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_61;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180[1U] = 0x00080000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180[2U] = 0x00040000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180[3U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180[4U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180[5U] = 0xc0000000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180[6U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180[7U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42[0U] = 
        ((0xfff00000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42[0U]) 
         | ((0x0007c000U & (vlSelfRef.fe_insts[0U] 
                            << 4U)) | (0x00003f00U 
                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83 
                                          << 8U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42[0U] = 
        ((0x000fffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42[0U]) 
         | ((__VdfgRegularize_h6e95ff9d_0_38[1U] << 0x0000001cU) 
            | (0x0ff00000U & (__VdfgRegularize_h6e95ff9d_0_38[0U] 
                              >> 4U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42[1U] = 
        ((0x000fffffU & (__VdfgRegularize_h6e95ff9d_0_38[1U] 
                         >> 4U)) | ((__VdfgRegularize_h6e95ff9d_0_38[2U] 
                                     << 0x0000001cU) 
                                    | (0x0ff00000U 
                                       & (__VdfgRegularize_h6e95ff9d_0_38[1U] 
                                          >> 4U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42[2U] = 
        ((0x000fffffU & (__VdfgRegularize_h6e95ff9d_0_38[2U] 
                         >> 4U)) | ((__VdfgRegularize_h6e95ff9d_0_38[3U] 
                                     << 0x0000001cU) 
                                    | (0x0ff00000U 
                                       & (__VdfgRegularize_h6e95ff9d_0_38[2U] 
                                          >> 4U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42[3U] = 
        ((0x000fffffU & (__VdfgRegularize_h6e95ff9d_0_38[3U] 
                         >> 4U)) | ((__VdfgRegularize_h6e95ff9d_0_38[4U] 
                                     << 0x0000001cU) 
                                    | (0x0ff00000U 
                                       & (__VdfgRegularize_h6e95ff9d_0_38[3U] 
                                          >> 4U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42[4U] = 
        ((0x000fffffU & (__VdfgRegularize_h6e95ff9d_0_38[4U] 
                         >> 4U)) | (0x01f00000U & (__VdfgRegularize_h6e95ff9d_0_38[4U] 
                                                   >> 4U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42[5U] = 0x80000000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42[6U] = 1U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42[7U] = 0x00200000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42[8U] = 2U;
    __VdfgRegularize_h6e95ff9d_0_187[0U] = (IData)(
                                                   (0x00000003ffffffffULL 
                                                    & (((QData)((IData)(__VdfgRegularize_h6e95ff9d_0_38[1U])) 
                                                        << 0x0000001eU) 
                                                       | ((QData)((IData)(__VdfgRegularize_h6e95ff9d_0_38[0U])) 
                                                          >> 2U))));
    __VdfgRegularize_h6e95ff9d_0_187[1U] = (IData)(
                                                   ((0x00000003ffffffffULL 
                                                     & (((QData)((IData)(__VdfgRegularize_h6e95ff9d_0_38[1U])) 
                                                         << 0x0000001eU) 
                                                        | ((QData)((IData)(__VdfgRegularize_h6e95ff9d_0_38[0U])) 
                                                           >> 2U))) 
                                                    >> 0x00000020U));
    __VdfgRegularize_h6e95ff9d_0_187[2U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[0U] = (IData)(
                                                            (0x007fffffffffffffULL 
                                                             & (((QData)((IData)(__VdfgRegularize_h6e95ff9d_0_38[1U])) 
                                                                 << 0x00000020U) 
                                                                | (QData)((IData)(__VdfgRegularize_h6e95ff9d_0_38[0U])))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[1U] = 
        (0x01000000U | (IData)(((0x007fffffffffffffULL 
                                 & (((QData)((IData)(__VdfgRegularize_h6e95ff9d_0_38[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__VdfgRegularize_h6e95ff9d_0_38[0U])))) 
                                >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[2U] = 0x00800000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[3U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[4U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[5U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[6U] = 0x00000018U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[7U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[8U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53 = (((QData)((IData)(
                                                                  (0x000fffffU 
                                                                   & ((__VdfgRegularize_h6e95ff9d_0_38[1U] 
                                                                       << 8U) 
                                                                      | (__VdfgRegularize_h6e95ff9d_0_38[0U] 
                                                                         >> 0x00000018U))))) 
                                                  << 0x00000013U) 
                                                 | (QData)((IData)(
                                                                   ((0x0003e000U 
                                                                     & (vlSelfRef.fe_insts[0U] 
                                                                        << 3U)) 
                                                                    | (0x00001f80U 
                                                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_83 
                                                                          << 7U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_178 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77) 
                                                  & (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__brinfo_valid));
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
    vlSelfRef.boom_core__DOT__wakeup_valid_w = ((0x20U 
                                                 & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w)) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_93));
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44[0U] = 
        ((__VdfgRegularize_h6e95ff9d_0_188[1U] << 0x0000001eU) 
         | (__VdfgRegularize_h6e95ff9d_0_188[0U] >> 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44[1U] = 
        ((__VdfgRegularize_h6e95ff9d_0_188[2U] << 0x0000001eU) 
         | (__VdfgRegularize_h6e95ff9d_0_188[1U] >> 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44[2U] = 
        (0x000fffffU & (__VdfgRegularize_h6e95ff9d_0_188[2U] 
                        >> 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185[0U] 
        = (IData)((0x001fffffffffffffULL & (((QData)((IData)(__VdfgRegularize_h6e95ff9d_0_188[1U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(__VdfgRegularize_h6e95ff9d_0_188[0U])))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185[1U] 
        = (0x00400000U | (IData)(((0x001fffffffffffffULL 
                                   & (((QData)((IData)(__VdfgRegularize_h6e95ff9d_0_188[1U])) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(__VdfgRegularize_h6e95ff9d_0_188[0U])))) 
                                  >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185[2U] = 0x00200000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26[0U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[1U] 
          << 0x0000001bU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[0U] 
                             >> 5U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26[1U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[2U] 
          << 0x0000001bU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[1U] 
                             >> 5U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26[2U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[3U] 
          << 0x0000001bU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[2U] 
                             >> 5U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26[3U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[4U] 
          << 0x0000001bU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[3U] 
                             >> 5U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26[4U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[5U] 
          << 0x0000001bU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[4U] 
                             >> 5U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26[5U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[6U] 
          << 0x0000001bU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[5U] 
                             >> 5U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26[6U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[7U] 
          << 0x0000001bU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[6U] 
                             >> 5U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26[7U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[8U] 
          << 0x0000001bU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[7U] 
                             >> 5U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65[0U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[1U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[0U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65[1U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[2U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[1U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65[2U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[3U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[2U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65[3U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[4U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[3U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65[4U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[5U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[4U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65[5U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[6U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[5U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65[6U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[7U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[6U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65[7U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[8U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[7U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65[8U] = 
        (0x0000001fU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21[8U] 
                        >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_97[0U] = (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_97[1U] = 
        (0x00000080U | (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52 
                                >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_97[2U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_97[3U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_97[4U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_97[5U] = 0xc0000000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_97[6U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_97[7U] = 0x80800000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30)) 
                    << 0x00000017U) | (QData)((IData)(
                                                      (0x007ff800U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52 
                                                                   >> 7U)) 
                                                          << 0x0000000bU))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181[1U] 
        = ((0xfffffff8U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30)) 
                        << 0x00000017U) | (QData)((IData)(
                                                          (0x007ff800U 
                                                           & ((IData)(
                                                                      (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52 
                                                                       >> 7U)) 
                                                              << 0x0000000bU))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181[1U] 
        = (7U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181[1U]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181[2U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43[0U] = 
        ((__VdfgRegularize_h6e95ff9d_0_187[1U] << 0x0000001eU) 
         | (__VdfgRegularize_h6e95ff9d_0_187[0U] >> 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43[1U] = 
        ((__VdfgRegularize_h6e95ff9d_0_187[2U] << 0x0000001eU) 
         | (__VdfgRegularize_h6e95ff9d_0_187[1U] >> 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43[2U] = 
        (0x000fffffU & (__VdfgRegularize_h6e95ff9d_0_187[2U] 
                        >> 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_186[0U] 
        = (IData)((0x001fffffffffffffULL & (((QData)((IData)(__VdfgRegularize_h6e95ff9d_0_187[1U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(__VdfgRegularize_h6e95ff9d_0_187[0U])))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_186[1U] 
        = (0x00400000U | (IData)(((0x001fffffffffffffULL 
                                   & (((QData)((IData)(__VdfgRegularize_h6e95ff9d_0_187[1U])) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(__VdfgRegularize_h6e95ff9d_0_187[0U])))) 
                                  >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_186[2U] = 0x00200000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[0U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[1U] 
          << 0x0000001bU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[0U] 
                             >> 5U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[1U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[2U] 
          << 0x0000001bU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[1U] 
                             >> 5U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[2U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[3U] 
          << 0x0000001bU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[2U] 
                             >> 5U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[3U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[4U] 
          << 0x0000001bU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[3U] 
                             >> 5U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[4U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[5U] 
          << 0x0000001bU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[4U] 
                             >> 5U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[5U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[6U] 
          << 0x0000001bU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[5U] 
                             >> 5U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[6U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[7U] 
          << 0x0000001bU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[6U] 
                             >> 5U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[7U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[8U] 
          << 0x0000001bU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[7U] 
                             >> 5U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66[0U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[1U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[0U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66[1U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[2U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[1U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66[2U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[3U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[2U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66[3U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[4U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[3U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66[4U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[5U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[4U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66[5U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[6U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[5U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66[6U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[7U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[6U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66[7U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[8U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[7U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66[8U] = 
        (0x0000001fU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22[8U] 
                        >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_99[0U] = (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_99[1U] = 
        (0x00000080U | (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53 
                                >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_99[2U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_99[3U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_99[4U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_99[5U] = 0xc0000000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_99[6U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_99[7U] = 0x80800000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29)) 
                    << 0x00000017U) | (QData)((IData)(
                                                      (0x007ff800U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53 
                                                                   >> 7U)) 
                                                          << 0x0000000bU))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182[1U] 
        = ((0xfffffff8U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29)) 
                        << 0x00000017U) | (QData)((IData)(
                                                          (0x007ff800U 
                                                           & ((IData)(
                                                                      (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53 
                                                                       >> 7U)) 
                                                              << 0x0000000bU))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182[1U] 
        = (7U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182[1U]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182[2U] = 0U;
    if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_178) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[0U] 
            = (IData)((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[1U] 
            = (((IData)((0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm)) 
                                                  + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs1))))) 
                << 1U) | (IData)(((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm)) 
                                  >> 0x00000020U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[2U] 
            = (((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                 << 9U) | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77) 
                              << 6U) | (((0x00000010U 
                                          & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                          ? 1U : ((8U 
                                                   & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                   ? 2U
                                                   : 
                                                  (3U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                                    >> 2U))))))) 
                                        << 3U)) | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__cond_true) 
                                                   << 2U)) 
                           << 2U)) | (((IData)((0x00000001ffffffffULL 
                                                & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm)) 
                                                   + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs1))))) 
                                       >> 0x0000001fU) 
                                      | ((IData)(((0x00000001ffffffffULL 
                                                   & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_imm)) 
                                                      + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_rs1)))) 
                                                  >> 0x00000020U)) 
                                         << 1U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[3U] 
            = (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                       >> 0x00000017U)) | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77) 
                                              << 6U) 
                                             | (((0x00000010U 
                                                  & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                  ? 1U
                                                  : 
                                                 ((8U 
                                                   & vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                   ? 2U
                                                   : 
                                                  (3U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                                    >> 2U))))))) 
                                                << 3U)) 
                                            | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__cond_true) 
                                               << 2U)) 
                                           >> 0x0000001eU)) 
               | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                  >> 0x00000017U)) 
                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                     << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[4U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[5U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[6U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[7U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[8U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[9U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[10U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[11U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[12U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[13U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[14U] 
            = (3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                     >> 0x00000017U));
    } else if (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46) 
                & (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__brinfo_valid))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[0U] 
            = (IData)((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[1U] 
            = (((IData)((0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm)) 
                                                  + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs1))))) 
                << 1U) | (IData)(((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm)) 
                                  >> 0x00000020U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[2U] 
            = (((vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                 << 9U) | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46) 
                              << 6U) | (((0x00000010U 
                                          & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                          ? 1U : ((8U 
                                                   & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                   ? 2U
                                                   : 
                                                  (3U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                                    >> 2U))))))) 
                                        << 3U)) | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__cond_true) 
                                                   << 2U)) 
                           << 2U)) | (((IData)((0x00000001ffffffffULL 
                                                & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm)) 
                                                   + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs1))))) 
                                       >> 0x0000001fU) 
                                      | ((IData)(((0x00000001ffffffffULL 
                                                   & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_imm)) 
                                                      + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_rs1)))) 
                                                  >> 0x00000020U)) 
                                         << 1U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[3U] 
            = (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                       >> 0x00000017U)) | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46) 
                                              << 6U) 
                                             | (((0x00000010U 
                                                  & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                  ? 1U
                                                  : 
                                                 ((8U 
                                                   & vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                   ? 2U
                                                   : 
                                                  (3U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                                    >> 2U))))))) 
                                                << 3U)) 
                                            | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__cond_true) 
                                               << 2U)) 
                                           >> 0x0000001eU)) 
               | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                  >> 0x00000017U)) 
                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                     << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[4U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[5U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[6U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[7U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[8U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[9U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[10U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[11U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[12U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[13U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[14U] 
            = (3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                     >> 0x00000017U));
    } else if (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45) 
                & (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__brinfo_valid))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[0U] 
            = (IData)((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[1U] 
            = (((IData)((0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm)) 
                                                  + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs1))))) 
                << 1U) | (IData)(((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm)) 
                                  >> 0x00000020U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[2U] 
            = (((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                 << 9U) | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45) 
                              << 6U) | (((0x00000010U 
                                          & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                          ? 1U : ((8U 
                                                   & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                   ? 2U
                                                   : 
                                                  (3U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                                    >> 2U))))))) 
                                        << 3U)) | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__cond_true) 
                                                   << 2U)) 
                           << 2U)) | (((IData)((0x00000001ffffffffULL 
                                                & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm)) 
                                                   + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs1))))) 
                                       >> 0x0000001fU) 
                                      | ((IData)(((0x00000001ffffffffULL 
                                                   & ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_imm)) 
                                                      + (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_rs1)))) 
                                                  >> 0x00000020U)) 
                                         << 1U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[3U] 
            = (((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                       >> 0x00000017U)) | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45) 
                                              << 6U) 
                                             | (((0x00000010U 
                                                  & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                  ? 1U
                                                  : 
                                                 ((8U 
                                                   & vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U])
                                                   ? 2U
                                                   : 
                                                  (3U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                                    >> 2U))))))) 
                                                << 3U)) 
                                            | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__cond_true) 
                                               << 2U)) 
                                           >> 0x0000001eU)) 
               | ((0x000001fcU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                  >> 0x00000017U)) 
                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                     << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[4U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[5U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[6U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[7U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[8U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[9U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[10U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[11U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[12U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[13U] 
            = ((3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                      >> 0x00000017U)) | ((0x000001fcU 
                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                              >> 0x00000017U)) 
                                          | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                             << 9U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[14U] 
            = (3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                     >> 0x00000017U));
    } else {
        VL_ASSIGN_W(450, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68, Vboom_core__ConstPool__CONST_hb6297e5e_0);
    }
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63[0U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181[1U] 
          << 0x0000001dU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181[0U] 
                             >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63[1U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181[2U] 
          << 0x0000001dU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181[1U] 
                             >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63[2U] = 
        (0x000fffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181[2U] 
                        >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64[0U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182[1U] 
          << 0x0000001dU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182[0U] 
                             >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64[1U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182[2U] 
          << 0x0000001dU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182[1U] 
                             >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64[2U] = 
        (0x000fffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182[2U] 
                        >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51 = ((~ 
                                                  ((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_bsy[0U] 
                                                    >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[2U] 
                                                      >> 8U))) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47));
    vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[0U];
    vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[1U];
    vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[2U];
    vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[3U];
    vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[4U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[4U];
    vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[5U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[5U];
    vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[6U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[6U];
    vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[7U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[7U];
    vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[8U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[8U];
    vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[9U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[9U];
    vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[10U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[10U];
    vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[11U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[11U];
    vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[12U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[12U];
    vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[13U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[13U];
    vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
        = ((0x000003fcU & vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U]) 
           | (0x000003ffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68[14U]));
    vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
        = ((0x000003c3U & vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U]) 
           | (0x0000003cU & ((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_178))) 
                               & ((IData)(1U) << (3U 
                                                  & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                     >> 0x00000016U)))) 
                              | ((((IData)(1U) << (3U 
                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                      >> 0x00000016U))) 
                                  & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45))) 
                                     & (- (IData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__brinfo_valid))))) 
                                 | (((IData)(1U) << 
                                     (3U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                            >> 0x00000016U))) 
                                    & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46))) 
                                       & (- (IData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__brinfo_valid))))))) 
                             << 2U)));
    vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
        = ((0x0000003fU & vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U]) 
           | (0x000003ffU & ((IData)(vlSelfRef.boom_core__DOT__resolve_mask) 
                             << 6U)));
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
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed = 0U;
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready = 0U;
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant = 0U;
    vlSelfRef.boom_core__DOT__mem_iss_valid = 0U;
    VL_ASSIGN_W(754, vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop, Vboom_core__ConstPool__CONST_h4465c659_0);
    vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used = 0U;
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed 
        = ((0xfffeU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed)) 
           | (0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[7U] 
                                      << 8U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[7U] 
                                                >> 0x00000018U)) 
                                    & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                        << 0x0000001eU) 
                                       | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                          >> 2U))))));
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready 
        = ((0xfffeU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready)) 
           | (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_valid) 
               & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed))) 
              & (0U == (0x00070000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[3U]))));
    {
        if ((1U & ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                   & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                = vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[0U];
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                = vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[1U];
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                = vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[2U];
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                = vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[3U];
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                = vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[4U];
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                = vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[5U];
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                = vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[6U];
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                = vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[7U];
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                = vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[8U];
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                = vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[9U];
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                = vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[10U];
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0x01ffffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[11U]));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel0;
        }
        if ((1U & ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                   & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used) 
                         >> 1U))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[0U] 
                      << 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[0U] 
                    >> 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[1U] 
                              << 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[1U] 
                    >> 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[2U] 
                              << 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[2U] 
                    >> 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[3U] 
                              << 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[3U] 
                    >> 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[4U] 
                              << 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[4U] 
                    >> 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[5U] 
                              << 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[5U] 
                    >> 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[6U] 
                              << 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[6U] 
                    >> 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[7U] 
                              << 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[7U] 
                    >> 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[8U] 
                              << 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[8U] 
                    >> 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[9U] 
                              << 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[9U] 
                    >> 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[10U] 
                              << 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[10U] 
                    >> 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[11U] 
                              << 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                = (0x0003ffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[11U] 
                                  >> 7U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel0: ;
    }
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed 
        = ((0xfffdU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[19U] 
                                       << 0x0000000fU) 
                                      | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[19U] 
                                         >> 0x00000011U)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 1U));
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready 
        = ((0xfffdU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_valid) 
                         >> 1U) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed) 
                                      >> 1U))) & (0U 
                                                  == 
                                                  (0x00000e00U 
                                                   & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[15U])))) 
              << 1U));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 1U) & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[12U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[11U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[13U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[12U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[14U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[13U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[15U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[14U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[16U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[15U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[17U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[16U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[18U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[17U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[19U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[18U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[20U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[19U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[21U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[20U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[22U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[21U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[23U] 
                                      << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[22U] 
                                                >> 0x00000019U))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel1;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 1U) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 1U))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0xfe000000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[11U]));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[12U]) 
                   | (0xfe000000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[12U]));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[13U]) 
                   | (0xfe000000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[13U]));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[14U]) 
                   | (0xfe000000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[14U]));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[15U]) 
                   | (0xfe000000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[15U]));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[16U]) 
                   | (0xfe000000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[16U]));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[17U]) 
                   | (0xfe000000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[17U]));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[18U]) 
                   | (0xfe000000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[18U]));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[19U]) 
                   | (0xfe000000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[19U]));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[20U]) 
                   | (0xfe000000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[20U]));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[21U]) 
                   | (0xfe000000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[21U]));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[22U]) 
                   | (0xfe000000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[22U]));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                = (0x0003ffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[23U]);
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel1: ;
    }
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed 
        = ((0xfffbU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[31U] 
                                       << 0x00000016U) 
                                      | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[31U] 
                                         >> 0x0000000aU)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 2U));
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready 
        = ((0xfffbU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_valid) 
                         >> 2U) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed) 
                                      >> 2U))) & (0U 
                                                  == 
                                                  (0x0000001cU 
                                                   & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[27U])))) 
              << 2U));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 2U) & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[24U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[23U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[25U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[24U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[26U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[25U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[27U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[26U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[28U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[27U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[29U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[28U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[30U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[29U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[31U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[30U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[32U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[31U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[33U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[32U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[34U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[33U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[35U] 
                                      << 0x0000000eU) 
                                     | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[34U] 
                                        >> 0x00000012U))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel2;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 2U) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 1U))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[23U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[24U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[23U] 
                                               >> 0x00000019U)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[24U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[25U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[24U] 
                                               >> 0x00000019U)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[25U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[26U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[25U] 
                                               >> 0x00000019U)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[26U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[27U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[26U] 
                                               >> 0x00000019U)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[27U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[28U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[27U] 
                                               >> 0x00000019U)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[28U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[29U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[28U] 
                                               >> 0x00000019U)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[29U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[30U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[29U] 
                                               >> 0x00000019U)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[30U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[31U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[30U] 
                                               >> 0x00000019U)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[31U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[32U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[31U] 
                                               >> 0x00000019U)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[32U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[33U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[32U] 
                                               >> 0x00000019U)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[33U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[34U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[33U] 
                                               >> 0x00000019U)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[34U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                = (0x0003ffffU & ((0x01ffff80U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[35U] 
                                                  << 7U)) 
                                  | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[34U] 
                                     >> 0x00000019U)));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel2: ;
    }
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed 
        = ((0xfff7U & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[43U] 
                                       << 0x0000001dU) 
                                      | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[43U] 
                                         >> 3U)) & 
                                     ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                       << 0x0000001eU) 
                                      | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         >> 2U))))) 
              << 3U));
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready 
        = ((0xfff7U & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_valid) 
                         >> 3U) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed) 
                                      >> 3U))) & (0U 
                                                  == 
                                                  (0x38000000U 
                                                   & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[38U])))) 
              << 3U));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 3U) & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[36U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[35U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[37U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[36U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[38U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[37U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[39U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[38U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[40U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[39U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[41U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[40U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[42U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[41U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[43U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[42U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[44U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[43U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[45U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[44U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[46U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[45U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[47U] 
                                      << 0x00000015U) 
                                     | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[46U] 
                                        >> 0x0000000bU))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (8U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel3;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 3U) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 1U))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[35U] 
                                     << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[36U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[35U] 
                       >> 0x00000012U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[36U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[37U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[36U] 
                       >> 0x00000012U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[37U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[38U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[37U] 
                       >> 0x00000012U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[38U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[39U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[38U] 
                       >> 0x00000012U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[39U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[40U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[39U] 
                       >> 0x00000012U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[40U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[41U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[40U] 
                       >> 0x00000012U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[41U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[42U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[41U] 
                       >> 0x00000012U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[42U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[43U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[42U] 
                       >> 0x00000012U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[43U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[44U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[43U] 
                       >> 0x00000012U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[44U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[45U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[44U] 
                       >> 0x00000012U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[45U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[46U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[45U] 
                       >> 0x00000012U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[46U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                = (0x0003ffffU & ((0x01ffc000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[47U] 
                                                  << 0x0000000eU)) 
                                  | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[46U] 
                                     >> 0x00000012U)));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (8U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel3: ;
    }
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed 
        = ((0xffefU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[54U] 
                                       << 4U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[54U] 
                                                 >> 0x0000001cU)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 4U));
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready 
        = ((0xffefU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_valid) 
                         >> 4U) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed) 
                                      >> 4U))) & (0U 
                                                  == 
                                                  (0x00700000U 
                                                   & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[50U])))) 
              << 4U));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 4U) & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[48U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[47U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[49U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[48U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[50U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[49U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[51U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[50U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[52U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[51U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[53U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[52U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[54U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[53U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[55U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[54U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[56U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[55U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[57U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[56U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[58U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[57U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[58U] 
                                     >> 4U)));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (0x00000010U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel4;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 4U) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 1U))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[47U] 
                                     << 0x00000015U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                = (((0x01e00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[48U] 
                                    << 0x00000015U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[47U] 
                       >> 0x0000000bU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[48U] 
                                              << 0x00000015U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                = (((0x01e00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[49U] 
                                    << 0x00000015U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[48U] 
                       >> 0x0000000bU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[49U] 
                                              << 0x00000015U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                = (((0x01e00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[50U] 
                                    << 0x00000015U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[49U] 
                       >> 0x0000000bU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[50U] 
                                              << 0x00000015U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                = (((0x01e00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[51U] 
                                    << 0x00000015U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[50U] 
                       >> 0x0000000bU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[51U] 
                                              << 0x00000015U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                = (((0x01e00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[52U] 
                                    << 0x00000015U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[51U] 
                       >> 0x0000000bU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[52U] 
                                              << 0x00000015U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                = (((0x01e00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[53U] 
                                    << 0x00000015U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[52U] 
                       >> 0x0000000bU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[53U] 
                                              << 0x00000015U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                = (((0x01e00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[54U] 
                                    << 0x00000015U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[53U] 
                       >> 0x0000000bU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[54U] 
                                              << 0x00000015U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                = (((0x01e00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[55U] 
                                    << 0x00000015U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[54U] 
                       >> 0x0000000bU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[55U] 
                                              << 0x00000015U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                = (((0x01e00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[56U] 
                                    << 0x00000015U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[55U] 
                       >> 0x0000000bU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[56U] 
                                              << 0x00000015U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                = (((0x01e00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[57U] 
                                    << 0x00000015U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[56U] 
                       >> 0x0000000bU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[57U] 
                                              << 0x00000015U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                = (((0x01e00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[58U] 
                                    << 0x00000015U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[57U] 
                       >> 0x0000000bU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[58U] 
                                              << 0x00000015U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                = (0x0003ffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[58U] 
                                  >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (0x00000010U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel4: ;
    }
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed 
        = ((0xffdfU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[66U] 
                                       << 0x0000000bU) 
                                      | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[66U] 
                                         >> 0x00000015U)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 5U));
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready 
        = ((0xffdfU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_valid) 
                         >> 5U) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed) 
                                      >> 5U))) & (0U 
                                                  == 
                                                  (0x0000e000U 
                                                   & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[62U])))) 
              << 5U));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 5U) & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[59U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[58U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[60U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[59U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[61U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[60U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[62U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[61U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[63U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[62U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[64U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[63U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[65U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[64U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[66U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[65U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[67U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[66U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[68U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[67U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[69U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[68U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[70U] 
                                      << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[69U] 
                                                >> 0x0000001dU))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (0x00000020U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel5;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 5U) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 1U))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[59U] 
                       << 0x0000001cU) | (0x0e000000U 
                                          & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[58U] 
                                             >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[59U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[60U] 
                                               << 0x0000001cU) 
                                              | (0x0e000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[59U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[60U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[61U] 
                                               << 0x0000001cU) 
                                              | (0x0e000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[60U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[61U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[62U] 
                                               << 0x0000001cU) 
                                              | (0x0e000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[61U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[62U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[63U] 
                                               << 0x0000001cU) 
                                              | (0x0e000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[62U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[63U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[64U] 
                                               << 0x0000001cU) 
                                              | (0x0e000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[63U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[64U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[65U] 
                                               << 0x0000001cU) 
                                              | (0x0e000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[64U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[65U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[66U] 
                                               << 0x0000001cU) 
                                              | (0x0e000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[65U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[66U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[67U] 
                                               << 0x0000001cU) 
                                              | (0x0e000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[66U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[67U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[68U] 
                                               << 0x0000001cU) 
                                              | (0x0e000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[67U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[68U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[69U] 
                                               << 0x0000001cU) 
                                              | (0x0e000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[68U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[69U] 
                                   >> 4U)) | (0xfe000000U 
                                              & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[70U] 
                                                  << 0x0000001cU) 
                                                 | (0x0e000000U 
                                                    & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[69U] 
                                                       >> 4U)))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                = (0x0003ffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[70U] 
                                  >> 4U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (0x00000020U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel5: ;
    }
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed 
        = ((0xffbfU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[78U] 
                                       << 0x00000012U) 
                                      | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[78U] 
                                         >> 0x0000000eU)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 6U));
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready 
        = ((0xffbfU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_valid) 
                         >> 6U) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed) 
                                      >> 6U))) & (0U 
                                                  == 
                                                  (0x000001c0U 
                                                   & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[74U])))) 
              << 6U));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 6U) & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[71U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[70U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[72U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[71U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[73U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[72U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[74U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[73U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[75U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[74U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[76U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[75U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[77U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[76U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[78U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[77U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[79U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[78U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[80U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[79U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[81U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[80U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[82U] 
                                      << 0x0000000aU) 
                                     | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[81U] 
                                        >> 0x00000016U))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (0x00000040U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel6;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 6U) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 1U))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[70U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[71U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[70U] 
                                               >> 0x0000001dU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[71U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[72U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[71U] 
                                               >> 0x0000001dU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[72U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[73U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[72U] 
                                               >> 0x0000001dU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[73U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[74U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[73U] 
                                               >> 0x0000001dU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[74U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[75U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[74U] 
                                               >> 0x0000001dU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[75U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[76U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[75U] 
                                               >> 0x0000001dU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[76U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[77U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[76U] 
                                               >> 0x0000001dU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[77U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[78U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[77U] 
                                               >> 0x0000001dU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[78U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[79U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[78U] 
                                               >> 0x0000001dU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[79U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[80U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[79U] 
                                               >> 0x0000001dU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[80U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[81U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[80U] 
                                               >> 0x0000001dU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[81U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                = (0x0003ffffU & ((0x01fffff8U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[82U] 
                                                  << 3U)) 
                                  | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[81U] 
                                     >> 0x0000001dU)));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (0x00000040U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel6: ;
    }
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed 
        = ((0xff7fU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[90U] 
                                       << 0x00000019U) 
                                      | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[90U] 
                                         >> 7U)) & 
                                     ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                       << 0x0000001eU) 
                                      | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         >> 2U))))) 
              << 7U));
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready 
        = ((0xff7fU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready)) 
           | (0x00000080U & (((((((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_valid) 
                                  >> 7U) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed) 
                                               >> 7U))) 
                                & (~ (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[86U] 
                                      >> 1U))) & (~ vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[86U])) 
                              & (~ (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[85U] 
                                    >> 0x0000001fU))) 
                             << 7U)));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 7U) & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[83U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[82U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[84U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[83U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[85U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[84U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[86U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[85U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[87U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[86U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[88U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[87U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[89U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[88U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[90U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[89U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[91U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[90U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[92U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[91U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[93U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[92U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[94U] 
                                      << 0x00000011U) 
                                     | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[93U] 
                                        >> 0x0000000fU))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (0x00000080U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel7;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 7U) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 1U))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[82U] 
                                     << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[83U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[82U] 
                       >> 0x00000016U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[83U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[84U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[83U] 
                       >> 0x00000016U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[84U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[85U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[84U] 
                       >> 0x00000016U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[85U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[86U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[85U] 
                       >> 0x00000016U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[86U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[87U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[86U] 
                       >> 0x00000016U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[87U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[88U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[87U] 
                       >> 0x00000016U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[88U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[89U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[88U] 
                       >> 0x00000016U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[89U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[90U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[89U] 
                       >> 0x00000016U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[90U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[91U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[90U] 
                       >> 0x00000016U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[91U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[92U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[91U] 
                       >> 0x00000016U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[92U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[93U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[92U] 
                       >> 0x00000016U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[93U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                = (0x0003ffffU & ((0x01fffc00U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[94U] 
                                                  << 0x0000000aU)) 
                                  | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[93U] 
                                     >> 0x00000016U)));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (0x00000080U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel7: ;
    }
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed 
        = ((0xfeffU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[102U] 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 8U));
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready 
        = ((0xfeffU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_valid) 
                         >> 8U) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed) 
                                      >> 8U))) & (0U 
                                                  == 
                                                  (0x07000000U 
                                                   & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[97U])))) 
              << 8U));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 8U) & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[95U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[94U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[96U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[95U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[97U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[96U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[98U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[97U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[99U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[98U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[100U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[99U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[101U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[100U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[102U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[101U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[103U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[102U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[104U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[103U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[105U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[104U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[106U] 
                                      << 0x00000018U) 
                                     | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[105U] 
                                        >> 8U))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (0x00000100U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel8;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 8U) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 1U))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[94U] 
                                     << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[95U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[94U] 
                       >> 0x0000000fU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[95U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[96U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[95U] 
                       >> 0x0000000fU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[96U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[97U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[96U] 
                       >> 0x0000000fU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[97U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[98U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[97U] 
                       >> 0x0000000fU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[98U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[99U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[98U] 
                       >> 0x0000000fU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[99U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[100U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[99U] 
                       >> 0x0000000fU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[100U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[101U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[100U] 
                       >> 0x0000000fU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[101U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[102U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[101U] 
                       >> 0x0000000fU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[102U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[103U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[102U] 
                       >> 0x0000000fU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[103U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[104U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[103U] 
                       >> 0x0000000fU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[104U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[105U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[104U] 
                       >> 0x0000000fU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[105U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                = (0x0003ffffU & ((0x01fe0000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[106U] 
                                                  << 0x00000011U)) 
                                  | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[105U] 
                                     >> 0x0000000fU)));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (0x00000100U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel8: ;
    }
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed 
        = ((0xfdffU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[113U] 
                                       << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[113U] 
                                                 >> 0x00000019U)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 9U));
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready 
        = ((0xfdffU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_valid) 
                         >> 9U) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed) 
                                      >> 9U))) & (0U 
                                                  == 
                                                  (0x000e0000U 
                                                   & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[109U])))) 
              << 9U));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 9U) & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[107U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[106U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[108U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[107U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[109U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[108U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[110U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[109U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[111U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[110U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[112U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[111U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[113U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[112U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[114U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[113U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[115U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[114U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[116U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[115U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[117U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[116U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[117U] 
                                     >> 1U)));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (0x00000200U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel9;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 9U) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 1U))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[106U] 
                                     << 0x00000018U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                = (((0x01000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[107U] 
                                    << 0x00000018U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[106U] 
                       >> 8U)) | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[107U] 
                                                 << 0x00000018U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                = (((0x01000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[108U] 
                                    << 0x00000018U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[107U] 
                       >> 8U)) | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[108U] 
                                                 << 0x00000018U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                = (((0x01000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[109U] 
                                    << 0x00000018U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[108U] 
                       >> 8U)) | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[109U] 
                                                 << 0x00000018U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                = (((0x01000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[110U] 
                                    << 0x00000018U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[109U] 
                       >> 8U)) | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[110U] 
                                                 << 0x00000018U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                = (((0x01000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[111U] 
                                    << 0x00000018U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[110U] 
                       >> 8U)) | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[111U] 
                                                 << 0x00000018U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                = (((0x01000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[112U] 
                                    << 0x00000018U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[111U] 
                       >> 8U)) | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[112U] 
                                                 << 0x00000018U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                = (((0x01000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[113U] 
                                    << 0x00000018U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[112U] 
                       >> 8U)) | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[113U] 
                                                 << 0x00000018U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                = (((0x01000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[114U] 
                                    << 0x00000018U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[113U] 
                       >> 8U)) | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[114U] 
                                                 << 0x00000018U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                = (((0x01000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[115U] 
                                    << 0x00000018U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[114U] 
                       >> 8U)) | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[115U] 
                                                 << 0x00000018U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                = (((0x01000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[116U] 
                                    << 0x00000018U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[115U] 
                       >> 8U)) | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[116U] 
                                                 << 0x00000018U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                = (((0x01000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[117U] 
                                    << 0x00000018U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[116U] 
                       >> 8U)) | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[117U] 
                                                 << 0x00000018U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                = (0x0003ffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[117U] 
                                  >> 8U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (0x00000200U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel9: ;
    }
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed 
        = ((0xfbffU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[125U] 
                                       << 0x0000000eU) 
                                      | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[125U] 
                                         >> 0x00000012U)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 0x0000000aU));
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready 
        = ((0xfbffU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_valid) 
                         >> 0x0000000aU) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed) 
                                               >> 0x0000000aU))) 
                       & (0U == (0x00001c00U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[121U])))) 
              << 0x0000000aU));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 0x0aU) & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[118U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[117U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[119U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[118U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[120U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[119U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[121U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[120U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[122U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[121U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[123U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[122U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[124U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[123U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[125U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[124U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[126U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[125U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[127U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[126U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[128U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[127U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[129U] 
                                      << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[128U] 
                                                >> 0x0000001aU))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (0x00000400U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel10;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 0x0aU) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used) 
                                    >> 1U))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[118U] 
                       << 0x0000001fU) | (0x7e000000U 
                                          & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[117U] 
                                             >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[118U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[119U] 
                                               << 0x0000001fU) 
                                              | (0x7e000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[118U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[119U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[120U] 
                                               << 0x0000001fU) 
                                              | (0x7e000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[119U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[120U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[121U] 
                                               << 0x0000001fU) 
                                              | (0x7e000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[120U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[121U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[122U] 
                                               << 0x0000001fU) 
                                              | (0x7e000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[121U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[122U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[123U] 
                                               << 0x0000001fU) 
                                              | (0x7e000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[122U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[123U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[124U] 
                                               << 0x0000001fU) 
                                              | (0x7e000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[123U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[124U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[125U] 
                                               << 0x0000001fU) 
                                              | (0x7e000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[124U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[125U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[126U] 
                                               << 0x0000001fU) 
                                              | (0x7e000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[125U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[126U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[127U] 
                                               << 0x0000001fU) 
                                              | (0x7e000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[126U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[127U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[128U] 
                                               << 0x0000001fU) 
                                              | (0x7e000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[127U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[128U] 
                                   >> 1U)) | (0xfe000000U 
                                              & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[129U] 
                                                  << 0x0000001fU) 
                                                 | (0x7e000000U 
                                                    & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[128U] 
                                                       >> 1U)))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                = (0x0003ffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[129U] 
                                  >> 1U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (0x00000400U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel10: ;
    }
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed 
        = ((0xf7ffU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[137U] 
                                       << 0x00000015U) 
                                      | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[137U] 
                                         >> 0x0000000bU)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 0x0000000bU));
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready 
        = ((0xf7ffU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_valid) 
                         >> 0x0000000bU) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed) 
                                               >> 0x0000000bU))) 
                       & (0U == (0x00000038U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[133U])))) 
              << 0x0000000bU));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 0x0bU) & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[130U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[129U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[131U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[130U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[132U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[131U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[133U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[132U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[134U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[133U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[135U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[134U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[136U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[135U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[137U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[136U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[138U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[137U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[139U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[138U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[140U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[139U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[141U] 
                                      << 0x0000000dU) 
                                     | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[140U] 
                                        >> 0x00000013U))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (0x00000800U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel11;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 0x0bU) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used) 
                                    >> 1U))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[129U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[130U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[129U] 
                                               >> 0x0000001aU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[130U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[131U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[130U] 
                                               >> 0x0000001aU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[131U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[132U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[131U] 
                                               >> 0x0000001aU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[132U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[133U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[132U] 
                                               >> 0x0000001aU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[133U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[134U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[133U] 
                                               >> 0x0000001aU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[134U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[135U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[134U] 
                                               >> 0x0000001aU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[135U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[136U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[135U] 
                                               >> 0x0000001aU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[136U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[137U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[136U] 
                                               >> 0x0000001aU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[137U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[138U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[137U] 
                                               >> 0x0000001aU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[138U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[139U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[138U] 
                                               >> 0x0000001aU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[139U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[140U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[139U] 
                                               >> 0x0000001aU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[140U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                = (0x0003ffffU & ((0x01ffffc0U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[141U] 
                                                  << 6U)) 
                                  | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[140U] 
                                     >> 0x0000001aU)));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (0x00000800U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel11: ;
    }
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed 
        = ((0xefffU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[149U] 
                                       << 0x0000001cU) 
                                      | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[149U] 
                                         >> 4U)) & 
                                     ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                       << 0x0000001eU) 
                                      | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         >> 2U))))) 
              << 0x0000000cU));
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready 
        = ((0xefffU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_valid) 
                         >> 0x0000000cU) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed) 
                                               >> 0x0000000cU))) 
                       & (0U == (0x70000000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[144U])))) 
              << 0x0000000cU));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 0x0cU) & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[142U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[141U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[143U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[142U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[144U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[143U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[145U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[144U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[146U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[145U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[147U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[146U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[148U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[147U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[149U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[148U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[150U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[149U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[151U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[150U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[152U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[151U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[153U] 
                                      << 0x00000014U) 
                                     | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[152U] 
                                        >> 0x0000000cU))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (0x00001000U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel12;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 0x0cU) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used) 
                                    >> 1U))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[141U] 
                                     << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[142U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[141U] 
                       >> 0x00000013U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[142U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[143U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[142U] 
                       >> 0x00000013U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[143U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[144U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[143U] 
                       >> 0x00000013U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[144U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[145U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[144U] 
                       >> 0x00000013U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[145U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[146U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[145U] 
                       >> 0x00000013U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[146U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[147U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[146U] 
                       >> 0x00000013U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[147U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[148U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[147U] 
                       >> 0x00000013U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[148U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[149U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[148U] 
                       >> 0x00000013U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[149U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[150U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[149U] 
                       >> 0x00000013U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[150U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[151U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[150U] 
                       >> 0x00000013U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[151U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[152U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[151U] 
                       >> 0x00000013U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[152U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                = (0x0003ffffU & ((0x01ffe000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[153U] 
                                                  << 0x0000000dU)) 
                                  | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[152U] 
                                     >> 0x00000013U)));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (0x00001000U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel12: ;
    }
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed 
        = ((0xdfffU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[161U] 
                                       << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[160U] 
                                                 >> 0x0000001dU)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 0x0000000dU));
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready 
        = ((0xdfffU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_valid) 
                         >> 0x0000000dU) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed) 
                                               >> 0x0000000dU))) 
                       & (0U == (0x00e00000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[156U])))) 
              << 0x0000000dU));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 0x0dU) & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[154U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[153U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[155U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[154U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[156U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[155U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[157U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[156U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[158U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[157U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[159U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[158U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[160U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[159U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[161U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[160U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[162U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[161U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[163U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[162U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[164U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[163U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[164U] 
                                     >> 5U)));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (0x00002000U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel13;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 0x0dU) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used) 
                                    >> 1U))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[153U] 
                                     << 0x00000014U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                = (((0x01f00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[154U] 
                                    << 0x00000014U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[153U] 
                       >> 0x0000000cU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[154U] 
                                              << 0x00000014U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                = (((0x01f00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[155U] 
                                    << 0x00000014U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[154U] 
                       >> 0x0000000cU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[155U] 
                                              << 0x00000014U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                = (((0x01f00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[156U] 
                                    << 0x00000014U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[155U] 
                       >> 0x0000000cU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[156U] 
                                              << 0x00000014U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                = (((0x01f00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[157U] 
                                    << 0x00000014U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[156U] 
                       >> 0x0000000cU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[157U] 
                                              << 0x00000014U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                = (((0x01f00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[158U] 
                                    << 0x00000014U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[157U] 
                       >> 0x0000000cU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[158U] 
                                              << 0x00000014U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                = (((0x01f00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[159U] 
                                    << 0x00000014U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[158U] 
                       >> 0x0000000cU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[159U] 
                                              << 0x00000014U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                = (((0x01f00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[160U] 
                                    << 0x00000014U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[159U] 
                       >> 0x0000000cU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[160U] 
                                              << 0x00000014U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                = (((0x01f00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[161U] 
                                    << 0x00000014U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[160U] 
                       >> 0x0000000cU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[161U] 
                                              << 0x00000014U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                = (((0x01f00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[162U] 
                                    << 0x00000014U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[161U] 
                       >> 0x0000000cU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[162U] 
                                              << 0x00000014U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                = (((0x01f00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[163U] 
                                    << 0x00000014U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[162U] 
                       >> 0x0000000cU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[163U] 
                                              << 0x00000014U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                = (((0x01f00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[164U] 
                                    << 0x00000014U)) 
                    | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[163U] 
                       >> 0x0000000cU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[164U] 
                                              << 0x00000014U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                = (0x0003ffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[164U] 
                                  >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (0x00002000U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel13: ;
    }
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed 
        = ((0xbfffU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[172U] 
                                       << 0x0000000aU) 
                                      | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[172U] 
                                         >> 0x00000016U)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 0x0000000eU));
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready 
        = ((0xbfffU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_valid) 
                         >> 0x0000000eU) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed) 
                                               >> 0x0000000eU))) 
                       & (0U == (0x0001c000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[168U])))) 
              << 0x0000000eU));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 0x0eU) & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[165U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[164U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[166U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[165U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[167U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[166U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[168U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[167U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[169U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[168U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[170U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[169U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[171U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[170U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[172U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[171U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[173U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[172U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[174U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[173U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[175U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[174U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[176U] 
                                      << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[175U] 
                                                >> 0x0000001eU))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (0x00004000U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel14;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                    >> 0x0eU) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used) 
                                    >> 1U))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[165U] 
                       << 0x0000001bU) | (0x06000000U 
                                          & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[164U] 
                                             >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[165U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[166U] 
                                               << 0x0000001bU) 
                                              | (0x06000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[165U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[166U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[167U] 
                                               << 0x0000001bU) 
                                              | (0x06000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[166U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[167U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[168U] 
                                               << 0x0000001bU) 
                                              | (0x06000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[167U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[168U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[169U] 
                                               << 0x0000001bU) 
                                              | (0x06000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[168U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[169U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[170U] 
                                               << 0x0000001bU) 
                                              | (0x06000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[169U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[170U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[171U] 
                                               << 0x0000001bU) 
                                              | (0x06000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[170U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[171U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[172U] 
                                               << 0x0000001bU) 
                                              | (0x06000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[171U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[172U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[173U] 
                                               << 0x0000001bU) 
                                              | (0x06000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[172U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[173U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[174U] 
                                               << 0x0000001bU) 
                                              | (0x06000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[173U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[174U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[175U] 
                                               << 0x0000001bU) 
                                              | (0x06000000U 
                                                 & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[174U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[175U] 
                                   >> 5U)) | (0xfe000000U 
                                              & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[176U] 
                                                  << 0x0000001bU) 
                                                 | (0x06000000U 
                                                    & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[175U] 
                                                       >> 5U)))));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                = (0x0003ffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[176U] 
                                  >> 5U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (0x00004000U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel14: ;
    }
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed 
        = ((0x7fffU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[184U] 
                                       << 0x00000011U) 
                                      | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[184U] 
                                         >> 0x0000000fU)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 0x0000000fU));
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready 
        = ((0x7fffU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_valid) 
                         >> 0x0000000fU) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed) 
                                               >> 0x0000000fU))) 
                       & (0U == (0x00000380U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[180U])))) 
              << 0x0000000fU));
    {
        if ((IData)((((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                      >> 0x0000000fU) & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[177U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[176U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[178U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[177U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[179U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[178U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[180U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[179U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[181U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[180U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[182U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[181U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[183U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[182U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[184U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[183U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[185U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[184U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[186U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[185U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[187U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[186U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[188U] 
                                      << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[187U] 
                                                >> 0x00000017U))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (0x00008000U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel15;
        }
        if ((IData)((((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_ready) 
                      >> 0x0000000fU) & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used) 
                                            >> 1U))))) {
            vlSelfRef.boom_core__DOT__mem_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[176U] 
                                     << 2U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[177U] 
                                    << 2U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[176U] 
                                               >> 0x0000001eU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[177U] 
                                     << 2U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[178U] 
                                    << 2U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[177U] 
                                               >> 0x0000001eU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[178U] 
                                     << 2U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[179U] 
                                    << 2U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[178U] 
                                               >> 0x0000001eU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[179U] 
                                     << 2U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[180U] 
                                    << 2U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[179U] 
                                               >> 0x0000001eU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[180U] 
                                     << 2U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[181U] 
                                    << 2U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[180U] 
                                               >> 0x0000001eU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[181U] 
                                     << 2U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[182U] 
                                    << 2U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[181U] 
                                               >> 0x0000001eU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[182U] 
                                     << 2U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[183U] 
                                    << 2U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[182U] 
                                               >> 0x0000001eU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[183U] 
                                     << 2U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[184U] 
                                    << 2U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[183U] 
                                               >> 0x0000001eU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[184U] 
                                     << 2U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[185U] 
                                    << 2U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[184U] 
                                               >> 0x0000001eU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[185U] 
                                     << 2U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[186U] 
                                    << 2U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[185U] 
                                               >> 0x0000001eU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[186U] 
                                     << 2U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[187U] 
                                    << 2U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[186U] 
                                               >> 0x0000001eU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[187U] 
                                     << 2U)));
            vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                = (0x0003ffffU & ((0x01fffffcU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[188U] 
                                                  << 2U)) 
                                  | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_uop[187U] 
                                     >> 0x0000001eU)));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                = (0x00008000U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel15: ;
    }
    vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available 
        = (0x0000ffffU & (((~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_valid)) 
                           | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant)) 
                          | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_killed)));
    vlSelfRef.boom_core__DOT__mem_iq_dis_ready = 0U;
    vlSelfRef.boom_core__DOT__mem_iq__DOT__dis_slot = 0U;
    if ((1U & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available))) {
        vlSelfRef.boom_core__DOT__mem_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dis_slot = 0U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available 
            = (0xfffeU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__mem_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available) 
                  >> 1U)))) {
        vlSelfRef.boom_core__DOT__mem_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dis_slot = 1U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available 
            = (0xfffdU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__mem_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available) 
                  >> 2U)))) {
        vlSelfRef.boom_core__DOT__mem_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dis_slot = 2U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available 
            = (0xfffbU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__mem_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available) 
                  >> 3U)))) {
        vlSelfRef.boom_core__DOT__mem_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dis_slot = 3U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available 
            = (0xfff7U & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__mem_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available) 
                  >> 4U)))) {
        vlSelfRef.boom_core__DOT__mem_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dis_slot = 4U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available 
            = (0xffefU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__mem_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available) 
                  >> 5U)))) {
        vlSelfRef.boom_core__DOT__mem_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dis_slot = 5U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available 
            = (0xffdfU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__mem_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available) 
                  >> 6U)))) {
        vlSelfRef.boom_core__DOT__mem_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dis_slot = 6U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available 
            = (0xffbfU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__mem_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available) 
                  >> 7U)))) {
        vlSelfRef.boom_core__DOT__mem_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dis_slot = 7U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available 
            = (0xff7fU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__mem_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available) 
                  >> 8U)))) {
        vlSelfRef.boom_core__DOT__mem_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dis_slot = 8U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available 
            = (0xfeffU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__mem_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available) 
                  >> 9U)))) {
        vlSelfRef.boom_core__DOT__mem_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dis_slot = 9U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available 
            = (0xfdffU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__mem_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available) 
                  >> 0x0aU)))) {
        vlSelfRef.boom_core__DOT__mem_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dis_slot = 0x0aU;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available 
            = (0xfbffU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__mem_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available) 
                  >> 0x0bU)))) {
        vlSelfRef.boom_core__DOT__mem_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dis_slot = 0x0bU;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available 
            = (0xf7ffU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__mem_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available) 
                  >> 0x0cU)))) {
        vlSelfRef.boom_core__DOT__mem_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dis_slot = 0x0cU;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available 
            = (0xefffU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__mem_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available) 
                  >> 0x0dU)))) {
        vlSelfRef.boom_core__DOT__mem_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dis_slot = 0x0dU;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available 
            = (0xdfffU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__mem_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available) 
                  >> 0x0eU)))) {
        vlSelfRef.boom_core__DOT__mem_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dis_slot = 0x0eU;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available 
            = (0xbfffU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available));
    }
    if (((~ (IData)(vlSelfRef.boom_core__DOT__mem_iq_dis_ready)) 
         & ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available) 
            >> 0x0000000fU))) {
        vlSelfRef.boom_core__DOT__mem_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dis_slot = 0x0fU;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available 
            = (0x7fffU & (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__unnamedblk1__DOT__available));
    }
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
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed = 0U;
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready = 0U;
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant = 0U;
    vlSelfRef.boom_core__DOT__alu_iss_valid = 0U;
    VL_ASSIGN_W(1131, vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop, Vboom_core__ConstPool__CONST_h0fa36855_0);
    vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used = 0U;
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed 
        = ((0xfffeU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed)) 
           | (0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[7U] 
                                      << 8U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[7U] 
                                                >> 0x00000018U)) 
                                    & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                        << 0x0000001eU) 
                                       | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                          >> 2U))))));
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready 
        = ((0xfffeU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready)) 
           | (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_valid) 
               & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed))) 
              & (0U == (0x00070000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[3U]))));
    {
        if ((1U & ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                   & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                = vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[0U];
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                = vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[1U];
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                = vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[2U];
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                = vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[3U];
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                = vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[4U];
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                = vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[5U];
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                = vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[6U];
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                = vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[7U];
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                = vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[8U];
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                = vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[9U];
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                = vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[10U];
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0x01ffffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[11U]));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel16;
        }
        if ((1U & ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                   & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                         >> 1U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[0U] 
                      << 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[0U] 
                    >> 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[1U] 
                              << 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[1U] 
                    >> 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[2U] 
                              << 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[2U] 
                    >> 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[3U] 
                              << 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[3U] 
                    >> 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[4U] 
                              << 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[4U] 
                    >> 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[5U] 
                              << 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[5U] 
                    >> 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[6U] 
                              << 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[6U] 
                    >> 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[7U] 
                              << 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[7U] 
                    >> 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[8U] 
                              << 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[8U] 
                    >> 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[9U] 
                              << 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[9U] 
                    >> 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[10U] 
                              << 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[10U] 
                    >> 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[11U] 
                              << 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | (0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[11U] 
                                     >> 7U)));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel16;
        }
        if ((1U & ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                   & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                         >> 2U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[0U] 
                      << 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[0U] 
                    >> 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[1U] 
                                       << 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[1U] 
                    >> 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[2U] 
                                       << 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[2U] 
                    >> 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[3U] 
                                       << 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[3U] 
                    >> 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[4U] 
                                       << 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[4U] 
                    >> 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[5U] 
                                       << 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[5U] 
                    >> 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[6U] 
                                       << 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[6U] 
                    >> 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[7U] 
                                       << 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[7U] 
                    >> 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[8U] 
                                       << 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[8U] 
                    >> 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[9U] 
                                       << 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[9U] 
                    >> 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[10U] 
                                       << 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[10U] 
                    >> 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[11U] 
                                       << 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                = (0x000007ffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[11U] 
                                  >> 0x0000000eU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel16: ;
    }
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed 
        = ((0xfffdU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[19U] 
                                       << 0x0000000fU) 
                                      | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[19U] 
                                         >> 0x00000011U)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 1U));
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready 
        = ((0xfffdU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_valid) 
                         >> 1U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed) 
                                      >> 1U))) & (0U 
                                                  == 
                                                  (0x00000e00U 
                                                   & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[15U])))) 
              << 1U));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 1U) & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[12U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[11U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[13U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[12U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[14U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[13U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[15U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[14U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[16U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[15U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[17U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[16U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[18U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[17U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[19U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[18U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[20U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[19U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[21U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[20U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[22U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[21U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[23U] 
                                      << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[22U] 
                                                >> 0x00000019U))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel17;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 1U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 1U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0xfe000000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[11U]));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[12U]) 
                   | (0xfe000000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[12U]));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[13U]) 
                   | (0xfe000000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[13U]));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[14U]) 
                   | (0xfe000000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[14U]));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[15U]) 
                   | (0xfe000000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[15U]));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[16U]) 
                   | (0xfe000000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[16U]));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[17U]) 
                   | (0xfe000000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[17U]));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[18U]) 
                   | (0xfe000000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[18U]));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[19U]) 
                   | (0xfe000000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[19U]));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[20U]) 
                   | (0xfe000000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[20U]));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[21U]) 
                   | (0xfe000000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[21U]));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[22U]) 
                   | (0xfe000000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[22U]));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | (0x0003ffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[23U]));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel17;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 1U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 2U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[12U] 
                       << 0x00000019U) | (0x01fc0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[11U] 
                                             >> 7U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[12U] 
                                   >> 7U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[13U] 
                                               << 0x00000019U) 
                                              | (0x01fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[12U] 
                                                    >> 7U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[13U] 
                                   >> 7U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[14U] 
                                               << 0x00000019U) 
                                              | (0x01fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[13U] 
                                                    >> 7U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[14U] 
                                   >> 7U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[15U] 
                                               << 0x00000019U) 
                                              | (0x01fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[14U] 
                                                    >> 7U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[15U] 
                                   >> 7U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[16U] 
                                               << 0x00000019U) 
                                              | (0x01fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[15U] 
                                                    >> 7U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[16U] 
                                   >> 7U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[17U] 
                                               << 0x00000019U) 
                                              | (0x01fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[16U] 
                                                    >> 7U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[17U] 
                                   >> 7U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[18U] 
                                               << 0x00000019U) 
                                              | (0x01fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[17U] 
                                                    >> 7U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[18U] 
                                   >> 7U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[19U] 
                                               << 0x00000019U) 
                                              | (0x01fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[18U] 
                                                    >> 7U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[19U] 
                                   >> 7U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[20U] 
                                               << 0x00000019U) 
                                              | (0x01fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[19U] 
                                                    >> 7U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[20U] 
                                   >> 7U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[21U] 
                                               << 0x00000019U) 
                                              | (0x01fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[20U] 
                                                    >> 7U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[21U] 
                                   >> 7U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[22U] 
                                               << 0x00000019U) 
                                              | (0x01fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[21U] 
                                                    >> 7U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[22U] 
                                   >> 7U)) | (0xfffc0000U 
                                              & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[23U] 
                                                  << 0x00000019U) 
                                                 | (0x01fc0000U 
                                                    & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[22U] 
                                                       >> 7U)))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                = (0x000007ffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[23U] 
                                  >> 7U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel17: ;
    }
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed 
        = ((0xfffbU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[31U] 
                                       << 0x00000016U) 
                                      | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[31U] 
                                         >> 0x0000000aU)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 2U));
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready 
        = ((0xfffbU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_valid) 
                         >> 2U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed) 
                                      >> 2U))) & (0U 
                                                  == 
                                                  (0x0000001cU 
                                                   & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[27U])))) 
              << 2U));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 2U) & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[24U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[23U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[25U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[24U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[26U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[25U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[27U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[26U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[28U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[27U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[29U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[28U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[30U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[29U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[31U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[30U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[32U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[31U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[33U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[32U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[34U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[33U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[35U] 
                                      << 0x0000000eU) 
                                     | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[34U] 
                                        >> 0x00000012U))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel18;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 2U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 1U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[23U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[24U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[23U] 
                                               >> 0x00000019U)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[24U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[25U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[24U] 
                                               >> 0x00000019U)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[25U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[26U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[25U] 
                                               >> 0x00000019U)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[26U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[27U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[26U] 
                                               >> 0x00000019U)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[27U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[28U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[27U] 
                                               >> 0x00000019U)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[28U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[29U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[28U] 
                                               >> 0x00000019U)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[29U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[30U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[29U] 
                                               >> 0x00000019U)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[30U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[31U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[30U] 
                                               >> 0x00000019U)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[31U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[32U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[31U] 
                                               >> 0x00000019U)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[32U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[33U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[32U] 
                                               >> 0x00000019U)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[33U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[34U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[33U] 
                                               >> 0x00000019U)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[34U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | (0x0003ffffU & ((0x01ffff80U & 
                                      (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[35U] 
                                       << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[34U] 
                                                  >> 0x00000019U))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel18;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 2U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 2U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | (0xfffc0000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[23U]));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[24U]) 
                   | (0xfffc0000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[24U]));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[25U]) 
                   | (0xfffc0000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[25U]));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[26U]) 
                   | (0xfffc0000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[26U]));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[27U]) 
                   | (0xfffc0000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[27U]));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[28U]) 
                   | (0xfffc0000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[28U]));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[29U]) 
                   | (0xfffc0000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[29U]));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[30U]) 
                   | (0xfffc0000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[30U]));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[31U]) 
                   | (0xfffc0000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[31U]));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[32U]) 
                   | (0xfffc0000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[32U]));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[33U]) 
                   | (0xfffc0000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[33U]));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[34U]) 
                   | (0xfffc0000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[34U]));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                = (0x000007ffU & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[35U]);
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel18: ;
    }
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed 
        = ((0xfff7U & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[43U] 
                                       << 0x0000001dU) 
                                      | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[43U] 
                                         >> 3U)) & 
                                     ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                       << 0x0000001eU) 
                                      | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         >> 2U))))) 
              << 3U));
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready 
        = ((0xfff7U & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_valid) 
                         >> 3U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed) 
                                      >> 3U))) & (0U 
                                                  == 
                                                  (0x38000000U 
                                                   & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[38U])))) 
              << 3U));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 3U) & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[36U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[35U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[37U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[36U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[38U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[37U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[39U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[38U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[40U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[39U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[41U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[40U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[42U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[41U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[43U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[42U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[44U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[43U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[45U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[44U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[46U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[45U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[47U] 
                                      << 0x00000015U) 
                                     | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[46U] 
                                        >> 0x0000000bU))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (8U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel19;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 3U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 1U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[35U] 
                                     << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[36U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[35U] 
                       >> 0x00000012U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[36U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[37U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[36U] 
                       >> 0x00000012U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[37U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[38U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[37U] 
                       >> 0x00000012U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[38U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[39U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[38U] 
                       >> 0x00000012U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[39U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[40U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[39U] 
                       >> 0x00000012U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[40U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[41U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[40U] 
                       >> 0x00000012U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[41U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[42U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[41U] 
                       >> 0x00000012U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[42U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[43U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[42U] 
                       >> 0x00000012U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[43U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[44U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[43U] 
                       >> 0x00000012U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[44U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[45U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[44U] 
                       >> 0x00000012U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[45U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[46U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[45U] 
                       >> 0x00000012U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[46U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | (0x0003ffffU & ((0x01ffc000U & 
                                      (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[47U] 
                                       << 0x0000000eU)) 
                                     | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[46U] 
                                        >> 0x00000012U))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (8U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel19;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 3U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 2U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[35U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                = (((0x0003ff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[36U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[35U] 
                                               >> 0x00000019U)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[36U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                = (((0x0003ff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[37U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[36U] 
                                               >> 0x00000019U)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[37U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                = (((0x0003ff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[38U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[37U] 
                                               >> 0x00000019U)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[38U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                = (((0x0003ff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[39U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[38U] 
                                               >> 0x00000019U)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[39U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                = (((0x0003ff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[40U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[39U] 
                                               >> 0x00000019U)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[40U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                = (((0x0003ff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[41U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[40U] 
                                               >> 0x00000019U)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[41U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                = (((0x0003ff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[42U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[41U] 
                                               >> 0x00000019U)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[42U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                = (((0x0003ff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[43U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[42U] 
                                               >> 0x00000019U)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[43U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                = (((0x0003ff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[44U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[43U] 
                                               >> 0x00000019U)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[44U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                = (((0x0003ff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[45U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[44U] 
                                               >> 0x00000019U)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[45U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                = (((0x0003ff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[46U] 
                                    << 7U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[45U] 
                                               >> 0x00000019U)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[46U] 
                                     << 7U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                = (0x000007ffU & ((0x0003ff80U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[47U] 
                                                  << 7U)) 
                                  | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[46U] 
                                     >> 0x00000019U)));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (8U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel19: ;
    }
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed 
        = ((0xffefU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[54U] 
                                       << 4U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[54U] 
                                                 >> 0x0000001cU)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 4U));
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready 
        = ((0xffefU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_valid) 
                         >> 4U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed) 
                                      >> 4U))) & (0U 
                                                  == 
                                                  (0x00700000U 
                                                   & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[50U])))) 
              << 4U));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 4U) & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[48U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[47U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[49U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[48U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[50U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[49U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[51U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[50U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[52U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[51U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[53U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[52U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[54U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[53U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[55U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[54U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[56U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[55U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[57U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[56U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[58U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[57U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[58U] 
                                     >> 4U)));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00000010U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel20;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 4U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 1U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[47U] 
                                     << 0x00000015U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                = (((0x01e00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[48U] 
                                    << 0x00000015U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[47U] 
                       >> 0x0000000bU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[48U] 
                                              << 0x00000015U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                = (((0x01e00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[49U] 
                                    << 0x00000015U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[48U] 
                       >> 0x0000000bU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[49U] 
                                              << 0x00000015U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                = (((0x01e00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[50U] 
                                    << 0x00000015U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[49U] 
                       >> 0x0000000bU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[50U] 
                                              << 0x00000015U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                = (((0x01e00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[51U] 
                                    << 0x00000015U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[50U] 
                       >> 0x0000000bU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[51U] 
                                              << 0x00000015U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                = (((0x01e00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[52U] 
                                    << 0x00000015U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[51U] 
                       >> 0x0000000bU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[52U] 
                                              << 0x00000015U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                = (((0x01e00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[53U] 
                                    << 0x00000015U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[52U] 
                       >> 0x0000000bU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[53U] 
                                              << 0x00000015U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                = (((0x01e00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[54U] 
                                    << 0x00000015U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[53U] 
                       >> 0x0000000bU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[54U] 
                                              << 0x00000015U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                = (((0x01e00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[55U] 
                                    << 0x00000015U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[54U] 
                       >> 0x0000000bU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[55U] 
                                              << 0x00000015U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                = (((0x01e00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[56U] 
                                    << 0x00000015U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[55U] 
                       >> 0x0000000bU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[56U] 
                                              << 0x00000015U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                = (((0x01e00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[57U] 
                                    << 0x00000015U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[56U] 
                       >> 0x0000000bU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[57U] 
                                              << 0x00000015U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                = (((0x01e00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[58U] 
                                    << 0x00000015U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[57U] 
                       >> 0x0000000bU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[58U] 
                                              << 0x00000015U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | (0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[58U] 
                                     >> 0x0000000bU)));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00000010U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel20;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 4U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 2U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[47U] 
                                     << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                = (((0x0003c000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[48U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[47U] 
                       >> 0x00000012U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[48U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                = (((0x0003c000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[49U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[48U] 
                       >> 0x00000012U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[49U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                = (((0x0003c000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[50U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[49U] 
                       >> 0x00000012U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[50U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                = (((0x0003c000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[51U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[50U] 
                       >> 0x00000012U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[51U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                = (((0x0003c000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[52U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[51U] 
                       >> 0x00000012U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[52U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                = (((0x0003c000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[53U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[52U] 
                       >> 0x00000012U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[53U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                = (((0x0003c000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[54U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[53U] 
                       >> 0x00000012U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[54U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                = (((0x0003c000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[55U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[54U] 
                       >> 0x00000012U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[55U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                = (((0x0003c000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[56U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[55U] 
                       >> 0x00000012U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[56U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                = (((0x0003c000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[57U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[56U] 
                       >> 0x00000012U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[57U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                = (((0x0003c000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[58U] 
                                    << 0x0000000eU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[57U] 
                       >> 0x00000012U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[58U] 
                                              << 0x0000000eU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                = (0x000007ffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[58U] 
                                  >> 0x00000012U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00000010U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel20: ;
    }
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed 
        = ((0xffdfU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[66U] 
                                       << 0x0000000bU) 
                                      | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[66U] 
                                         >> 0x00000015U)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 5U));
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready 
        = ((0xffdfU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_valid) 
                         >> 5U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed) 
                                      >> 5U))) & (0U 
                                                  == 
                                                  (0x0000e000U 
                                                   & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[62U])))) 
              << 5U));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 5U) & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[59U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[58U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[60U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[59U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[61U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[60U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[62U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[61U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[63U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[62U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[64U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[63U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[65U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[64U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[66U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[65U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[67U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[66U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[68U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[67U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[69U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[68U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[70U] 
                                      << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[69U] 
                                                >> 0x0000001dU))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00000020U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel21;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 5U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 1U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[59U] 
                       << 0x0000001cU) | (0x0e000000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[58U] 
                                             >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[59U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[60U] 
                                               << 0x0000001cU) 
                                              | (0x0e000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[59U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[60U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[61U] 
                                               << 0x0000001cU) 
                                              | (0x0e000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[60U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[61U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[62U] 
                                               << 0x0000001cU) 
                                              | (0x0e000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[61U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[62U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[63U] 
                                               << 0x0000001cU) 
                                              | (0x0e000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[62U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[63U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[64U] 
                                               << 0x0000001cU) 
                                              | (0x0e000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[63U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[64U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[65U] 
                                               << 0x0000001cU) 
                                              | (0x0e000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[64U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[65U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[66U] 
                                               << 0x0000001cU) 
                                              | (0x0e000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[65U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[66U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[67U] 
                                               << 0x0000001cU) 
                                              | (0x0e000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[66U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[67U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[68U] 
                                               << 0x0000001cU) 
                                              | (0x0e000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[67U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[68U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[69U] 
                                               << 0x0000001cU) 
                                              | (0x0e000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[68U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[69U] 
                                   >> 4U)) | (0xfe000000U 
                                              & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[70U] 
                                                  << 0x0000001cU) 
                                                 | (0x0e000000U 
                                                    & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[69U] 
                                                       >> 4U)))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | (0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[70U] 
                                     >> 4U)));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00000020U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel21;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 5U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 2U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[59U] 
                       << 0x00000015U) | (0x001c0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[58U] 
                                             >> 0x0000000bU))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[59U] 
                                   >> 0x0000000bU)) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[60U] 
                       << 0x00000015U) | (0x001c0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[59U] 
                                             >> 0x0000000bU))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[60U] 
                                   >> 0x0000000bU)) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[61U] 
                       << 0x00000015U) | (0x001c0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[60U] 
                                             >> 0x0000000bU))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[61U] 
                                   >> 0x0000000bU)) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[62U] 
                       << 0x00000015U) | (0x001c0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[61U] 
                                             >> 0x0000000bU))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[62U] 
                                   >> 0x0000000bU)) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[63U] 
                       << 0x00000015U) | (0x001c0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[62U] 
                                             >> 0x0000000bU))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[63U] 
                                   >> 0x0000000bU)) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[64U] 
                       << 0x00000015U) | (0x001c0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[63U] 
                                             >> 0x0000000bU))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[64U] 
                                   >> 0x0000000bU)) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[65U] 
                       << 0x00000015U) | (0x001c0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[64U] 
                                             >> 0x0000000bU))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[65U] 
                                   >> 0x0000000bU)) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[66U] 
                       << 0x00000015U) | (0x001c0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[65U] 
                                             >> 0x0000000bU))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[66U] 
                                   >> 0x0000000bU)) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[67U] 
                       << 0x00000015U) | (0x001c0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[66U] 
                                             >> 0x0000000bU))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[67U] 
                                   >> 0x0000000bU)) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[68U] 
                       << 0x00000015U) | (0x001c0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[67U] 
                                             >> 0x0000000bU))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[68U] 
                                   >> 0x0000000bU)) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[69U] 
                       << 0x00000015U) | (0x001c0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[68U] 
                                             >> 0x0000000bU))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[69U] 
                                   >> 0x0000000bU)) 
                   | (0xfffc0000U & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[70U] 
                                      << 0x00000015U) 
                                     | (0x001c0000U 
                                        & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[69U] 
                                           >> 0x0000000bU)))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                = (0x000007ffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[70U] 
                                  >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00000020U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel21: ;
    }
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed 
        = ((0xffbfU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[78U] 
                                       << 0x00000012U) 
                                      | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[78U] 
                                         >> 0x0000000eU)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 6U));
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready 
        = ((0xffbfU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_valid) 
                         >> 6U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed) 
                                      >> 6U))) & (0U 
                                                  == 
                                                  (0x000001c0U 
                                                   & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[74U])))) 
              << 6U));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 6U) & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[71U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[70U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[72U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[71U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[73U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[72U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[74U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[73U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[75U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[74U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[76U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[75U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[77U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[76U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[78U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[77U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[79U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[78U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[80U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[79U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[81U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[80U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[82U] 
                                      << 0x0000000aU) 
                                     | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[81U] 
                                        >> 0x00000016U))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00000040U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel22;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 6U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 1U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[70U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[71U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[70U] 
                                               >> 0x0000001dU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[71U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[72U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[71U] 
                                               >> 0x0000001dU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[72U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[73U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[72U] 
                                               >> 0x0000001dU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[73U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[74U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[73U] 
                                               >> 0x0000001dU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[74U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[75U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[74U] 
                                               >> 0x0000001dU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[75U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[76U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[75U] 
                                               >> 0x0000001dU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[76U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[77U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[76U] 
                                               >> 0x0000001dU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[77U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[78U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[77U] 
                                               >> 0x0000001dU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[78U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[79U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[78U] 
                                               >> 0x0000001dU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[79U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[80U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[79U] 
                                               >> 0x0000001dU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[80U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[81U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[80U] 
                                               >> 0x0000001dU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[81U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | (0x0003ffffU & ((0x01fffff8U & 
                                      (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[82U] 
                                       << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[81U] 
                                                  >> 0x0000001dU))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00000040U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel22;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 6U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 2U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[71U] 
                       << 0x0000001cU) | (0x0ffc0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[70U] 
                                             >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[71U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[72U] 
                                               << 0x0000001cU) 
                                              | (0x0ffc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[71U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[72U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[73U] 
                                               << 0x0000001cU) 
                                              | (0x0ffc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[72U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[73U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[74U] 
                                               << 0x0000001cU) 
                                              | (0x0ffc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[73U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[74U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[75U] 
                                               << 0x0000001cU) 
                                              | (0x0ffc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[74U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[75U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[76U] 
                                               << 0x0000001cU) 
                                              | (0x0ffc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[75U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[76U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[77U] 
                                               << 0x0000001cU) 
                                              | (0x0ffc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[76U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[77U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[78U] 
                                               << 0x0000001cU) 
                                              | (0x0ffc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[77U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[78U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[79U] 
                                               << 0x0000001cU) 
                                              | (0x0ffc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[78U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[79U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[80U] 
                                               << 0x0000001cU) 
                                              | (0x0ffc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[79U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[80U] 
                                   >> 4U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[81U] 
                                               << 0x0000001cU) 
                                              | (0x0ffc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[80U] 
                                                    >> 4U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[81U] 
                                   >> 4U)) | (0xfffc0000U 
                                              & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[82U] 
                                                  << 0x0000001cU) 
                                                 | (0x0ffc0000U 
                                                    & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[81U] 
                                                       >> 4U)))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                = (0x000007ffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[82U] 
                                  >> 4U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00000040U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel22: ;
    }
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed 
        = ((0xff7fU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[90U] 
                                       << 0x00000019U) 
                                      | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[90U] 
                                         >> 7U)) & 
                                     ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                       << 0x0000001eU) 
                                      | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         >> 2U))))) 
              << 7U));
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready 
        = ((0xff7fU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready)) 
           | (0x00000080U & (((((((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_valid) 
                                  >> 7U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed) 
                                               >> 7U))) 
                                & (~ (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[86U] 
                                      >> 1U))) & (~ vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[86U])) 
                              & (~ (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[85U] 
                                    >> 0x0000001fU))) 
                             << 7U)));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 7U) & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[83U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[82U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[84U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[83U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[85U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[84U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[86U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[85U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[87U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[86U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[88U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[87U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[89U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[88U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[90U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[89U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[91U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[90U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[92U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[91U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[93U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[92U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[94U] 
                                      << 0x00000011U) 
                                     | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[93U] 
                                        >> 0x0000000fU))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00000080U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel23;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 7U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 1U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[82U] 
                                     << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[83U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[82U] 
                       >> 0x00000016U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[83U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[84U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[83U] 
                       >> 0x00000016U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[84U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[85U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[84U] 
                       >> 0x00000016U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[85U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[86U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[85U] 
                       >> 0x00000016U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[86U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[87U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[86U] 
                       >> 0x00000016U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[87U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[88U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[87U] 
                       >> 0x00000016U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[88U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[89U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[88U] 
                       >> 0x00000016U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[89U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[90U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[89U] 
                       >> 0x00000016U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[90U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[91U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[90U] 
                       >> 0x00000016U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[91U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[92U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[91U] 
                       >> 0x00000016U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[92U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[93U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[92U] 
                       >> 0x00000016U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[93U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | (0x0003ffffU & ((0x01fffc00U & 
                                      (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[94U] 
                                       << 0x0000000aU)) 
                                     | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[93U] 
                                        >> 0x00000016U))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00000080U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel23;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 7U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 2U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[82U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                = (((0x0003fff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[83U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[82U] 
                                               >> 0x0000001dU)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[83U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                = (((0x0003fff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[84U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[83U] 
                                               >> 0x0000001dU)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[84U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                = (((0x0003fff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[85U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[84U] 
                                               >> 0x0000001dU)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[85U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                = (((0x0003fff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[86U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[85U] 
                                               >> 0x0000001dU)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[86U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                = (((0x0003fff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[87U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[86U] 
                                               >> 0x0000001dU)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[87U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                = (((0x0003fff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[88U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[87U] 
                                               >> 0x0000001dU)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[88U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                = (((0x0003fff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[89U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[88U] 
                                               >> 0x0000001dU)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[89U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                = (((0x0003fff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[90U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[89U] 
                                               >> 0x0000001dU)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[90U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                = (((0x0003fff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[91U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[90U] 
                                               >> 0x0000001dU)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[91U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                = (((0x0003fff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[92U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[91U] 
                                               >> 0x0000001dU)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[92U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                = (((0x0003fff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[93U] 
                                    << 3U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[92U] 
                                               >> 0x0000001dU)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[93U] 
                                     << 3U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                = (0x000007ffU & ((0x0003fff8U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[94U] 
                                                  << 3U)) 
                                  | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[93U] 
                                     >> 0x0000001dU)));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00000080U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel23: ;
    }
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed 
        = ((0xfeffU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[102U] 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 8U));
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready 
        = ((0xfeffU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_valid) 
                         >> 8U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed) 
                                      >> 8U))) & (0U 
                                                  == 
                                                  (0x07000000U 
                                                   & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[97U])))) 
              << 8U));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 8U) & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[95U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[94U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[96U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[95U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[97U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[96U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[98U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[97U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[99U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[98U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[100U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[99U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[101U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[100U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[102U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[101U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[103U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[102U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[104U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[103U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[105U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[104U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[106U] 
                                      << 0x00000018U) 
                                     | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[105U] 
                                        >> 8U))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00000100U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel24;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 8U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 1U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[94U] 
                                     << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[95U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[94U] 
                       >> 0x0000000fU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[95U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[96U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[95U] 
                       >> 0x0000000fU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[96U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[97U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[96U] 
                       >> 0x0000000fU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[97U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[98U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[97U] 
                       >> 0x0000000fU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[98U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[99U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[98U] 
                       >> 0x0000000fU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[99U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[100U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[99U] 
                       >> 0x0000000fU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[100U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[101U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[100U] 
                       >> 0x0000000fU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[101U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[102U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[101U] 
                       >> 0x0000000fU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[102U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[103U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[102U] 
                       >> 0x0000000fU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[103U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[104U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[103U] 
                       >> 0x0000000fU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[104U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[105U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[104U] 
                       >> 0x0000000fU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[105U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | (0x0003ffffU & ((0x01fe0000U & 
                                      (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[106U] 
                                       << 0x00000011U)) 
                                     | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[105U] 
                                        >> 0x0000000fU))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00000100U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel24;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 8U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 2U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[94U] 
                                     << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                = (((0x0003fc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[95U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[94U] 
                       >> 0x00000016U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[95U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                = (((0x0003fc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[96U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[95U] 
                       >> 0x00000016U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[96U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                = (((0x0003fc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[97U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[96U] 
                       >> 0x00000016U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[97U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                = (((0x0003fc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[98U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[97U] 
                       >> 0x00000016U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[98U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                = (((0x0003fc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[99U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[98U] 
                       >> 0x00000016U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[99U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                = (((0x0003fc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[100U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[99U] 
                       >> 0x00000016U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[100U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                = (((0x0003fc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[101U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[100U] 
                       >> 0x00000016U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[101U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                = (((0x0003fc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[102U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[101U] 
                       >> 0x00000016U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[102U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                = (((0x0003fc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[103U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[102U] 
                       >> 0x00000016U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[103U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                = (((0x0003fc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[104U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[103U] 
                       >> 0x00000016U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[104U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                = (((0x0003fc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[105U] 
                                    << 0x0000000aU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[104U] 
                       >> 0x00000016U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[105U] 
                                              << 0x0000000aU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                = (0x000007ffU & ((0x0003fc00U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[106U] 
                                                  << 0x0000000aU)) 
                                  | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[105U] 
                                     >> 0x00000016U)));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00000100U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel24: ;
    }
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed 
        = ((0xfdffU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[113U] 
                                       << 7U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[113U] 
                                                 >> 0x00000019U)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 9U));
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready 
        = ((0xfdffU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_valid) 
                         >> 9U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed) 
                                      >> 9U))) & (0U 
                                                  == 
                                                  (0x000e0000U 
                                                   & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[109U])))) 
              << 9U));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 9U) & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[107U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[106U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[108U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[107U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[109U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[108U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[110U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[109U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[111U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[110U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[112U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[111U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[113U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[112U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[114U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[113U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[115U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[114U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[116U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[115U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[117U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[116U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[117U] 
                                     >> 1U)));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00000200U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel25;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 9U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 1U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[106U] 
                                     << 0x00000018U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                = (((0x01000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[107U] 
                                    << 0x00000018U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[106U] 
                       >> 8U)) | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[107U] 
                                                 << 0x00000018U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                = (((0x01000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[108U] 
                                    << 0x00000018U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[107U] 
                       >> 8U)) | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[108U] 
                                                 << 0x00000018U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                = (((0x01000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[109U] 
                                    << 0x00000018U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[108U] 
                       >> 8U)) | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[109U] 
                                                 << 0x00000018U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                = (((0x01000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[110U] 
                                    << 0x00000018U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[109U] 
                       >> 8U)) | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[110U] 
                                                 << 0x00000018U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                = (((0x01000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[111U] 
                                    << 0x00000018U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[110U] 
                       >> 8U)) | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[111U] 
                                                 << 0x00000018U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                = (((0x01000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[112U] 
                                    << 0x00000018U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[111U] 
                       >> 8U)) | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[112U] 
                                                 << 0x00000018U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                = (((0x01000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[113U] 
                                    << 0x00000018U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[112U] 
                       >> 8U)) | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[113U] 
                                                 << 0x00000018U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                = (((0x01000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[114U] 
                                    << 0x00000018U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[113U] 
                       >> 8U)) | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[114U] 
                                                 << 0x00000018U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                = (((0x01000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[115U] 
                                    << 0x00000018U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[114U] 
                       >> 8U)) | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[115U] 
                                                 << 0x00000018U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                = (((0x01000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[116U] 
                                    << 0x00000018U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[115U] 
                       >> 8U)) | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[116U] 
                                                 << 0x00000018U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                = (((0x01000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[117U] 
                                    << 0x00000018U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[116U] 
                       >> 8U)) | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[117U] 
                                                 << 0x00000018U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | (0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[117U] 
                                     >> 8U)));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00000200U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel25;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 9U) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                 >> 2U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[106U] 
                                     << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                = (((0x00020000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[107U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[106U] 
                       >> 0x0000000fU)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[107U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                = (((0x00020000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[108U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[107U] 
                       >> 0x0000000fU)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[108U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                = (((0x00020000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[109U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[108U] 
                       >> 0x0000000fU)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[109U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                = (((0x00020000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[110U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[109U] 
                       >> 0x0000000fU)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[110U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                = (((0x00020000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[111U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[110U] 
                       >> 0x0000000fU)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[111U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                = (((0x00020000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[112U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[111U] 
                       >> 0x0000000fU)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[112U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                = (((0x00020000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[113U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[112U] 
                       >> 0x0000000fU)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[113U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                = (((0x00020000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[114U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[113U] 
                       >> 0x0000000fU)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[114U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                = (((0x00020000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[115U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[114U] 
                       >> 0x0000000fU)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[115U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                = (((0x00020000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[116U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[115U] 
                       >> 0x0000000fU)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[116U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                = (((0x00020000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[117U] 
                                    << 0x00000011U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[116U] 
                       >> 0x0000000fU)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[117U] 
                                              << 0x00000011U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                = (0x000007ffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[117U] 
                                  >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00000200U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel25: ;
    }
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed 
        = ((0xfbffU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[125U] 
                                       << 0x0000000eU) 
                                      | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[125U] 
                                         >> 0x00000012U)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 0x0000000aU));
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready 
        = ((0xfbffU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_valid) 
                         >> 0x0000000aU) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed) 
                                               >> 0x0000000aU))) 
                       & (0U == (0x00001c00U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[121U])))) 
              << 0x0000000aU));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 0x0aU) & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[118U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[117U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[119U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[118U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[120U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[119U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[121U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[120U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[122U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[121U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[123U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[122U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[124U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[123U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[125U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[124U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[126U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[125U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[127U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[126U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[128U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[127U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[129U] 
                                      << 6U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[128U] 
                                                >> 0x0000001aU))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00000400U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel26;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 0x0aU) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                    >> 1U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[118U] 
                       << 0x0000001fU) | (0x7e000000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[117U] 
                                             >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[118U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[119U] 
                                               << 0x0000001fU) 
                                              | (0x7e000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[118U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[119U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[120U] 
                                               << 0x0000001fU) 
                                              | (0x7e000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[119U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[120U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[121U] 
                                               << 0x0000001fU) 
                                              | (0x7e000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[120U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[121U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[122U] 
                                               << 0x0000001fU) 
                                              | (0x7e000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[121U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[122U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[123U] 
                                               << 0x0000001fU) 
                                              | (0x7e000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[122U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[123U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[124U] 
                                               << 0x0000001fU) 
                                              | (0x7e000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[123U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[124U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[125U] 
                                               << 0x0000001fU) 
                                              | (0x7e000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[124U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[125U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[126U] 
                                               << 0x0000001fU) 
                                              | (0x7e000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[125U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[126U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[127U] 
                                               << 0x0000001fU) 
                                              | (0x7e000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[126U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[127U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[128U] 
                                               << 0x0000001fU) 
                                              | (0x7e000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[127U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[128U] 
                                   >> 1U)) | (0xfe000000U 
                                              & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[129U] 
                                                  << 0x0000001fU) 
                                                 | (0x7e000000U 
                                                    & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[128U] 
                                                       >> 1U)))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | (0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[129U] 
                                     >> 1U)));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00000400U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel26;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 0x0aU) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                    >> 2U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[118U] 
                       << 0x00000018U) | (0x00fc0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[117U] 
                                             >> 8U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[118U] 
                                   >> 8U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[119U] 
                                               << 0x00000018U) 
                                              | (0x00fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[118U] 
                                                    >> 8U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[119U] 
                                   >> 8U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[120U] 
                                               << 0x00000018U) 
                                              | (0x00fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[119U] 
                                                    >> 8U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[120U] 
                                   >> 8U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[121U] 
                                               << 0x00000018U) 
                                              | (0x00fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[120U] 
                                                    >> 8U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[121U] 
                                   >> 8U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[122U] 
                                               << 0x00000018U) 
                                              | (0x00fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[121U] 
                                                    >> 8U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[122U] 
                                   >> 8U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[123U] 
                                               << 0x00000018U) 
                                              | (0x00fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[122U] 
                                                    >> 8U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[123U] 
                                   >> 8U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[124U] 
                                               << 0x00000018U) 
                                              | (0x00fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[123U] 
                                                    >> 8U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[124U] 
                                   >> 8U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[125U] 
                                               << 0x00000018U) 
                                              | (0x00fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[124U] 
                                                    >> 8U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[125U] 
                                   >> 8U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[126U] 
                                               << 0x00000018U) 
                                              | (0x00fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[125U] 
                                                    >> 8U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[126U] 
                                   >> 8U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[127U] 
                                               << 0x00000018U) 
                                              | (0x00fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[126U] 
                                                    >> 8U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[127U] 
                                   >> 8U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[128U] 
                                               << 0x00000018U) 
                                              | (0x00fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[127U] 
                                                    >> 8U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[128U] 
                                   >> 8U)) | (0xfffc0000U 
                                              & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[129U] 
                                                  << 0x00000018U) 
                                                 | (0x00fc0000U 
                                                    & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[128U] 
                                                       >> 8U)))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                = (0x000007ffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[129U] 
                                  >> 8U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00000400U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel26: ;
    }
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed 
        = ((0xf7ffU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[137U] 
                                       << 0x00000015U) 
                                      | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[137U] 
                                         >> 0x0000000bU)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 0x0000000bU));
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready 
        = ((0xf7ffU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_valid) 
                         >> 0x0000000bU) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed) 
                                               >> 0x0000000bU))) 
                       & (0U == (0x00000038U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[133U])))) 
              << 0x0000000bU));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 0x0bU) & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[130U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[129U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[131U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[130U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[132U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[131U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[133U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[132U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[134U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[133U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[135U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[134U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[136U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[135U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[137U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[136U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[138U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[137U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[139U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[138U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[140U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[139U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[141U] 
                                      << 0x0000000dU) 
                                     | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[140U] 
                                        >> 0x00000013U))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00000800U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel27;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 0x0bU) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                    >> 1U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[129U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[130U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[129U] 
                                               >> 0x0000001aU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[130U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[131U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[130U] 
                                               >> 0x0000001aU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[131U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[132U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[131U] 
                                               >> 0x0000001aU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[132U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[133U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[132U] 
                                               >> 0x0000001aU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[133U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[134U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[133U] 
                                               >> 0x0000001aU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[134U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[135U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[134U] 
                                               >> 0x0000001aU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[135U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[136U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[135U] 
                                               >> 0x0000001aU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[136U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[137U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[136U] 
                                               >> 0x0000001aU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[137U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[138U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[137U] 
                                               >> 0x0000001aU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[138U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[139U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[138U] 
                                               >> 0x0000001aU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[139U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[140U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[139U] 
                                               >> 0x0000001aU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[140U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | (0x0003ffffU & ((0x01ffffc0U & 
                                      (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[141U] 
                                       << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[140U] 
                                                  >> 0x0000001aU))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00000800U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel27;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 0x0bU) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                    >> 2U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[130U] 
                       << 0x0000001fU) | (0x7ffc0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[129U] 
                                             >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[130U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[131U] 
                                               << 0x0000001fU) 
                                              | (0x7ffc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[130U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[131U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[132U] 
                                               << 0x0000001fU) 
                                              | (0x7ffc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[131U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[132U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[133U] 
                                               << 0x0000001fU) 
                                              | (0x7ffc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[132U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[133U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[134U] 
                                               << 0x0000001fU) 
                                              | (0x7ffc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[133U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[134U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[135U] 
                                               << 0x0000001fU) 
                                              | (0x7ffc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[134U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[135U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[136U] 
                                               << 0x0000001fU) 
                                              | (0x7ffc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[135U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[136U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[137U] 
                                               << 0x0000001fU) 
                                              | (0x7ffc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[136U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[137U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[138U] 
                                               << 0x0000001fU) 
                                              | (0x7ffc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[137U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[138U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[139U] 
                                               << 0x0000001fU) 
                                              | (0x7ffc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[138U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[139U] 
                                   >> 1U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[140U] 
                                               << 0x0000001fU) 
                                              | (0x7ffc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[139U] 
                                                    >> 1U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[140U] 
                                   >> 1U)) | (0xfffc0000U 
                                              & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[141U] 
                                                  << 0x0000001fU) 
                                                 | (0x7ffc0000U 
                                                    & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[140U] 
                                                       >> 1U)))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                = (0x000007ffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[141U] 
                                  >> 1U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00000800U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel27: ;
    }
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed 
        = ((0xefffU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[149U] 
                                       << 0x0000001cU) 
                                      | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[149U] 
                                         >> 4U)) & 
                                     ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                       << 0x0000001eU) 
                                      | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         >> 2U))))) 
              << 0x0000000cU));
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready 
        = ((0xefffU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_valid) 
                         >> 0x0000000cU) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed) 
                                               >> 0x0000000cU))) 
                       & (0U == (0x70000000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[144U])))) 
              << 0x0000000cU));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 0x0cU) & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[142U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[141U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[143U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[142U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[144U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[143U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[145U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[144U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[146U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[145U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[147U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[146U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[148U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[147U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[149U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[148U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[150U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[149U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[151U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[150U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[152U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[151U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[153U] 
                                      << 0x00000014U) 
                                     | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[152U] 
                                        >> 0x0000000cU))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00001000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel28;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 0x0cU) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                    >> 1U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[141U] 
                                     << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[142U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[141U] 
                       >> 0x00000013U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[142U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[143U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[142U] 
                       >> 0x00000013U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[143U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[144U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[143U] 
                       >> 0x00000013U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[144U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[145U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[144U] 
                       >> 0x00000013U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[145U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[146U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[145U] 
                       >> 0x00000013U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[146U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[147U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[146U] 
                       >> 0x00000013U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[147U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[148U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[147U] 
                       >> 0x00000013U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[148U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[149U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[148U] 
                       >> 0x00000013U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[149U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[150U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[149U] 
                       >> 0x00000013U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[150U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[151U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[150U] 
                       >> 0x00000013U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[151U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[152U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[151U] 
                       >> 0x00000013U)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[152U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | (0x0003ffffU & ((0x01ffe000U & 
                                      (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[153U] 
                                       << 0x0000000dU)) 
                                     | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[152U] 
                                        >> 0x00000013U))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00001000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel28;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 0x0cU) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                    >> 2U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[141U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                = (((0x0003ffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[142U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[141U] 
                                               >> 0x0000001aU)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[142U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                = (((0x0003ffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[143U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[142U] 
                                               >> 0x0000001aU)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[143U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                = (((0x0003ffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[144U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[143U] 
                                               >> 0x0000001aU)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[144U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                = (((0x0003ffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[145U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[144U] 
                                               >> 0x0000001aU)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[145U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                = (((0x0003ffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[146U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[145U] 
                                               >> 0x0000001aU)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[146U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                = (((0x0003ffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[147U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[146U] 
                                               >> 0x0000001aU)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[147U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                = (((0x0003ffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[148U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[147U] 
                                               >> 0x0000001aU)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[148U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                = (((0x0003ffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[149U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[148U] 
                                               >> 0x0000001aU)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[149U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                = (((0x0003ffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[150U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[149U] 
                                               >> 0x0000001aU)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[150U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                = (((0x0003ffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[151U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[150U] 
                                               >> 0x0000001aU)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[151U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                = (((0x0003ffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[152U] 
                                    << 6U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[151U] 
                                               >> 0x0000001aU)) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[152U] 
                                     << 6U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                = (0x000007ffU & ((0x0003ffc0U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[153U] 
                                                  << 6U)) 
                                  | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[152U] 
                                     >> 0x0000001aU)));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00001000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel28: ;
    }
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed 
        = ((0xdfffU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[161U] 
                                       << 3U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[160U] 
                                                 >> 0x0000001dU)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 0x0000000dU));
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready 
        = ((0xdfffU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_valid) 
                         >> 0x0000000dU) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed) 
                                               >> 0x0000000dU))) 
                       & (0U == (0x00e00000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[156U])))) 
              << 0x0000000dU));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 0x0dU) & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[154U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[153U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[155U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[154U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[156U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[155U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[157U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[156U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[158U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[157U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[159U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[158U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[160U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[159U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[161U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[160U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[162U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[161U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[163U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[162U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[164U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[163U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[164U] 
                                     >> 5U)));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00002000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel29;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 0x0dU) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                    >> 1U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[153U] 
                                     << 0x00000014U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                = (((0x01f00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[154U] 
                                    << 0x00000014U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[153U] 
                       >> 0x0000000cU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[154U] 
                                              << 0x00000014U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                = (((0x01f00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[155U] 
                                    << 0x00000014U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[154U] 
                       >> 0x0000000cU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[155U] 
                                              << 0x00000014U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                = (((0x01f00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[156U] 
                                    << 0x00000014U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[155U] 
                       >> 0x0000000cU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[156U] 
                                              << 0x00000014U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                = (((0x01f00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[157U] 
                                    << 0x00000014U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[156U] 
                       >> 0x0000000cU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[157U] 
                                              << 0x00000014U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                = (((0x01f00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[158U] 
                                    << 0x00000014U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[157U] 
                       >> 0x0000000cU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[158U] 
                                              << 0x00000014U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                = (((0x01f00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[159U] 
                                    << 0x00000014U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[158U] 
                       >> 0x0000000cU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[159U] 
                                              << 0x00000014U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                = (((0x01f00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[160U] 
                                    << 0x00000014U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[159U] 
                       >> 0x0000000cU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[160U] 
                                              << 0x00000014U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                = (((0x01f00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[161U] 
                                    << 0x00000014U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[160U] 
                       >> 0x0000000cU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[161U] 
                                              << 0x00000014U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                = (((0x01f00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[162U] 
                                    << 0x00000014U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[161U] 
                       >> 0x0000000cU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[162U] 
                                              << 0x00000014U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                = (((0x01f00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[163U] 
                                    << 0x00000014U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[162U] 
                       >> 0x0000000cU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[163U] 
                                              << 0x00000014U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                = (((0x01f00000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[164U] 
                                    << 0x00000014U)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[163U] 
                       >> 0x0000000cU)) | (0xfe000000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[164U] 
                                              << 0x00000014U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | (0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[164U] 
                                     >> 0x0000000cU)));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00002000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel29;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 0x0dU) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                    >> 2U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | (0xfffc0000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[153U] 
                                     << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                = (((0x0003e000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[154U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[153U] 
                       >> 0x00000013U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[154U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                = (((0x0003e000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[155U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[154U] 
                       >> 0x00000013U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[155U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                = (((0x0003e000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[156U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[155U] 
                       >> 0x00000013U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[156U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                = (((0x0003e000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[157U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[156U] 
                       >> 0x00000013U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[157U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                = (((0x0003e000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[158U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[157U] 
                       >> 0x00000013U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[158U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                = (((0x0003e000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[159U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[158U] 
                       >> 0x00000013U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[159U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                = (((0x0003e000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[160U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[159U] 
                       >> 0x00000013U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[160U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                = (((0x0003e000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[161U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[160U] 
                       >> 0x00000013U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[161U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                = (((0x0003e000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[162U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[161U] 
                       >> 0x00000013U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[162U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                = (((0x0003e000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[163U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[162U] 
                       >> 0x00000013U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[163U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                = (((0x0003e000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[164U] 
                                    << 0x0000000dU)) 
                    | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[163U] 
                       >> 0x00000013U)) | (0xfffc0000U 
                                           & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[164U] 
                                              << 0x0000000dU)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                = (0x000007ffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[164U] 
                                  >> 0x00000013U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00002000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel29: ;
    }
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed 
        = ((0xbfffU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[172U] 
                                       << 0x0000000aU) 
                                      | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[172U] 
                                         >> 0x00000016U)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 0x0000000eU));
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready 
        = ((0xbfffU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_valid) 
                         >> 0x0000000eU) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed) 
                                               >> 0x0000000eU))) 
                       & (0U == (0x0001c000U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[168U])))) 
              << 0x0000000eU));
    {
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 0x0eU) & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[165U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[164U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[166U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[165U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[167U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[166U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[168U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[167U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[169U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[168U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[170U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[169U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[171U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[170U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[172U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[171U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[173U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[172U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[174U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[173U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[175U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[174U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[176U] 
                                      << 2U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[175U] 
                                                >> 0x0000001eU))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00004000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel30;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 0x0eU) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                    >> 1U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[165U] 
                       << 0x0000001bU) | (0x06000000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[164U] 
                                             >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[165U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[166U] 
                                               << 0x0000001bU) 
                                              | (0x06000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[165U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[166U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[167U] 
                                               << 0x0000001bU) 
                                              | (0x06000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[166U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[167U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[168U] 
                                               << 0x0000001bU) 
                                              | (0x06000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[167U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[168U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[169U] 
                                               << 0x0000001bU) 
                                              | (0x06000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[168U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[169U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[170U] 
                                               << 0x0000001bU) 
                                              | (0x06000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[169U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[170U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[171U] 
                                               << 0x0000001bU) 
                                              | (0x06000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[170U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[171U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[172U] 
                                               << 0x0000001bU) 
                                              | (0x06000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[171U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[172U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[173U] 
                                               << 0x0000001bU) 
                                              | (0x06000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[172U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[173U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[174U] 
                                               << 0x0000001bU) 
                                              | (0x06000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[173U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[174U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[175U] 
                                               << 0x0000001bU) 
                                              | (0x06000000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[174U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[175U] 
                                   >> 5U)) | (0xfe000000U 
                                              & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[176U] 
                                                  << 0x0000001bU) 
                                                 | (0x06000000U 
                                                    & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[175U] 
                                                       >> 5U)))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | (0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[176U] 
                                     >> 5U)));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00004000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel30;
        }
        if ((1U & (((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                    >> 0x0eU) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                    >> 2U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[165U] 
                       << 0x00000014U) | (0x000c0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[164U] 
                                             >> 0x0000000cU))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[165U] 
                                   >> 0x0000000cU)) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[166U] 
                       << 0x00000014U) | (0x000c0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[165U] 
                                             >> 0x0000000cU))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[166U] 
                                   >> 0x0000000cU)) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[167U] 
                       << 0x00000014U) | (0x000c0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[166U] 
                                             >> 0x0000000cU))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[167U] 
                                   >> 0x0000000cU)) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[168U] 
                       << 0x00000014U) | (0x000c0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[167U] 
                                             >> 0x0000000cU))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[168U] 
                                   >> 0x0000000cU)) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[169U] 
                       << 0x00000014U) | (0x000c0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[168U] 
                                             >> 0x0000000cU))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[169U] 
                                   >> 0x0000000cU)) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[170U] 
                       << 0x00000014U) | (0x000c0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[169U] 
                                             >> 0x0000000cU))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[170U] 
                                   >> 0x0000000cU)) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[171U] 
                       << 0x00000014U) | (0x000c0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[170U] 
                                             >> 0x0000000cU))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[171U] 
                                   >> 0x0000000cU)) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[172U] 
                       << 0x00000014U) | (0x000c0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[171U] 
                                             >> 0x0000000cU))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[172U] 
                                   >> 0x0000000cU)) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[173U] 
                       << 0x00000014U) | (0x000c0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[172U] 
                                             >> 0x0000000cU))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[173U] 
                                   >> 0x0000000cU)) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[174U] 
                       << 0x00000014U) | (0x000c0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[173U] 
                                             >> 0x0000000cU))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[174U] 
                                   >> 0x0000000cU)) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[175U] 
                       << 0x00000014U) | (0x000c0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[174U] 
                                             >> 0x0000000cU))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[175U] 
                                   >> 0x0000000cU)) 
                   | (0xfffc0000U & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[176U] 
                                      << 0x00000014U) 
                                     | (0x000c0000U 
                                        & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[175U] 
                                           >> 0x0000000cU)))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                = (0x000007ffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[176U] 
                                  >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00004000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel30: ;
    }
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed 
        = ((0x7fffU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[184U] 
                                       << 0x00000011U) 
                                      | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[184U] 
                                         >> 0x0000000fU)) 
                                     & ((vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.boom_core__DOT__brmask__DOT__brupdate[14U] 
                                           >> 2U))))) 
              << 0x0000000fU));
    vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready 
        = ((0x7fffU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_valid) 
                         >> 0x0000000fU) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed) 
                                               >> 0x0000000fU))) 
                       & (0U == (0x00000380U & vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[180U])))) 
              << 0x0000000fU));
    {
        if ((IData)((((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                      >> 0x0000000fU) & (~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[177U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[176U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[178U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[177U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[179U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[178U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[180U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[179U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[181U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[180U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[182U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[181U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[183U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[182U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[184U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[183U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[185U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[184U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[186U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[185U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[187U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[186U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[188U] 
                                      << 9U) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[187U] 
                                                >> 0x00000017U))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00008000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel31;
        }
        if ((IData)((((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                      >> 0x0000000fU) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                            >> 1U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U] 
                = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[11U]) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[176U] 
                                     << 2U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[12U] 
                = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[177U] 
                                    << 2U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[176U] 
                                               >> 0x0000001eU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[177U] 
                                     << 2U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[13U] 
                = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[178U] 
                                    << 2U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[177U] 
                                               >> 0x0000001eU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[178U] 
                                     << 2U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[14U] 
                = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[179U] 
                                    << 2U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[178U] 
                                               >> 0x0000001eU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[179U] 
                                     << 2U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[15U] 
                = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[180U] 
                                    << 2U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[179U] 
                                               >> 0x0000001eU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[180U] 
                                     << 2U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[16U] 
                = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[181U] 
                                    << 2U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[180U] 
                                               >> 0x0000001eU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[181U] 
                                     << 2U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[17U] 
                = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[182U] 
                                    << 2U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[181U] 
                                               >> 0x0000001eU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[182U] 
                                     << 2U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[18U] 
                = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[183U] 
                                    << 2U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[182U] 
                                               >> 0x0000001eU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[183U] 
                                     << 2U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[19U] 
                = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[184U] 
                                    << 2U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[183U] 
                                               >> 0x0000001eU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[184U] 
                                     << 2U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[20U] 
                = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[185U] 
                                    << 2U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[184U] 
                                               >> 0x0000001eU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[185U] 
                                     << 2U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[21U] 
                = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[186U] 
                                    << 2U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[185U] 
                                               >> 0x0000001eU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[186U] 
                                     << 2U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[22U] 
                = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[187U] 
                                    << 2U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[186U] 
                                               >> 0x0000001eU)) 
                   | (0xfe000000U & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[187U] 
                                     << 2U)));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0xfffc0000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | (0x0003ffffU & ((0x01fffffcU & 
                                      (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[188U] 
                                       << 2U)) | (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[187U] 
                                                  >> 0x0000001eU))));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00008000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
            goto __Vlabel31;
        }
        if ((IData)((((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_ready) 
                      >> 0x0000000fU) & (~ ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used) 
                                            >> 2U))))) {
            vlSelfRef.boom_core__DOT__alu_iss_valid 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iss_valid));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U] 
                = ((0x0003ffffU & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[23U]) 
                   | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[177U] 
                       << 0x0000001bU) | (0x07fc0000U 
                                          & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[176U] 
                                             >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[24U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[177U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[178U] 
                                               << 0x0000001bU) 
                                              | (0x07fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[177U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[25U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[178U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[179U] 
                                               << 0x0000001bU) 
                                              | (0x07fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[178U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[26U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[179U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[180U] 
                                               << 0x0000001bU) 
                                              | (0x07fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[179U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[27U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[180U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[181U] 
                                               << 0x0000001bU) 
                                              | (0x07fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[180U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[28U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[181U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[182U] 
                                               << 0x0000001bU) 
                                              | (0x07fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[181U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[29U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[182U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[183U] 
                                               << 0x0000001bU) 
                                              | (0x07fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[182U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[30U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[183U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[184U] 
                                               << 0x0000001bU) 
                                              | (0x07fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[183U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[31U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[184U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[185U] 
                                               << 0x0000001bU) 
                                              | (0x07fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[184U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[32U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[185U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[186U] 
                                               << 0x0000001bU) 
                                              | (0x07fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[185U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[33U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[186U] 
                                   >> 5U)) | ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[187U] 
                                               << 0x0000001bU) 
                                              | (0x07fc0000U 
                                                 & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[186U] 
                                                    >> 5U))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[34U] 
                = ((0x0003ffffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[187U] 
                                   >> 5U)) | (0xfffc0000U 
                                              & ((vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[188U] 
                                                  << 0x0000001bU) 
                                                 | (0x07fc0000U 
                                                    & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[187U] 
                                                       >> 5U)))));
            vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[35U] 
                = (0x000007ffU & (vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_uop[188U] 
                                  >> 5U));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant 
                = (0x00008000U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant));
            vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__port_used));
        }
        __Vlabel31: ;
    }
    vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available 
        = (0x0000ffffU & (((~ (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_valid)) 
                           | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_grant)) 
                          | (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__slot_killed)));
    vlSelfRef.boom_core__DOT__alu_iq_dis_ready = 0U;
    vlSelfRef.boom_core__DOT__alu_iq__DOT__dis_slot = 0U;
    if ((1U & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available))) {
        vlSelfRef.boom_core__DOT__alu_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dis_slot = 0U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available 
            = (0xfffeU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__alu_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available) 
                  >> 1U)))) {
        vlSelfRef.boom_core__DOT__alu_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dis_slot = 1U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available 
            = (0xfffdU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__alu_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available) 
                  >> 2U)))) {
        vlSelfRef.boom_core__DOT__alu_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dis_slot = 2U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available 
            = (0xfffbU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__alu_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available) 
                  >> 3U)))) {
        vlSelfRef.boom_core__DOT__alu_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dis_slot = 3U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available 
            = (0xfff7U & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__alu_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available) 
                  >> 4U)))) {
        vlSelfRef.boom_core__DOT__alu_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dis_slot = 4U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available 
            = (0xffefU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__alu_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available) 
                  >> 5U)))) {
        vlSelfRef.boom_core__DOT__alu_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dis_slot = 5U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available 
            = (0xffdfU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__alu_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available) 
                  >> 6U)))) {
        vlSelfRef.boom_core__DOT__alu_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dis_slot = 6U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available 
            = (0xffbfU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__alu_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available) 
                  >> 7U)))) {
        vlSelfRef.boom_core__DOT__alu_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dis_slot = 7U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available 
            = (0xff7fU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__alu_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available) 
                  >> 8U)))) {
        vlSelfRef.boom_core__DOT__alu_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dis_slot = 8U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available 
            = (0xfeffU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__alu_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available) 
                  >> 9U)))) {
        vlSelfRef.boom_core__DOT__alu_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dis_slot = 9U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available 
            = (0xfdffU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__alu_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available) 
                  >> 0x0aU)))) {
        vlSelfRef.boom_core__DOT__alu_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dis_slot = 0x0aU;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available 
            = (0xfbffU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__alu_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available) 
                  >> 0x0bU)))) {
        vlSelfRef.boom_core__DOT__alu_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dis_slot = 0x0bU;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available 
            = (0xf7ffU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__alu_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available) 
                  >> 0x0cU)))) {
        vlSelfRef.boom_core__DOT__alu_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dis_slot = 0x0cU;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available 
            = (0xefffU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__alu_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available) 
                  >> 0x0dU)))) {
        vlSelfRef.boom_core__DOT__alu_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dis_slot = 0x0dU;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available 
            = (0xdfffU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.boom_core__DOT__alu_iq_dis_ready)) 
               & ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available) 
                  >> 0x0eU)))) {
        vlSelfRef.boom_core__DOT__alu_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dis_slot = 0x0eU;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available 
            = (0xbfffU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available));
    }
    if (((~ (IData)(vlSelfRef.boom_core__DOT__alu_iq_dis_ready)) 
         & ((IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available) 
            >> 0x0000000fU))) {
        vlSelfRef.boom_core__DOT__alu_iq_dis_ready = 1U;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__dis_slot = 0x0fU;
        vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available 
            = (0x7fffU & (IData)(vlSelfRef.boom_core__DOT__alu_iq__DOT__unnamedblk1__DOT__available));
    }
    vlSelfRef.boom_core__DOT__rob_inst__DOT__will_commit 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153) 
            << 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_155));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_115 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                                                           << 4U) 
                                                          | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                                                             >> 0x0000001cU)))) 
                                                     & ((0x0000003fU 
                                                         & ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                                                             << 4U) 
                                                            | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                                                               >> 0x0000001cU))) 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                            >> 9U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_116 = ((0U 
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
                                                       & (vlSelfRef.lsu_resp[5U] 
                                                          >> 0x00000010U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_117 = ((0U 
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
                                                       & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 9U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118 = ((0U 
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
                                                       & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 9U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_120 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                          >> 3U))) 
                                                     & ((0x0000003fU 
                                                         & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                            >> 3U)) 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                            >> 9U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_121 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                       >> 3U))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                          >> 3U)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.lsu_resp[5U] 
                                                          >> 0x00000010U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_122 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                       >> 3U))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                          >> 3U)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 9U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_123 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                       >> 3U))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                          >> 3U)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 9U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)));
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107 = ((0U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108 = ((0U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_110 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_111 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_112 = ((0U 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_113 = ((0U 
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
    vlSelfRef.alu_iss_valid_dbg = vlSelfRef.boom_core__DOT__alu_iss_valid;
    vlSelfRef.alu_imm_sel_dbg = (7U & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                                       >> 0x00000013U));
    vlSelfRef.alu_imm_packed_dbg = (0x03ffffffU & (
                                                   (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                                                    << 0x0000000dU) 
                                                   | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                                                      >> 0x00000013U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_125 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_126 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_127 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_128 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_131 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_132 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_133 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_135 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_138 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_140 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_141 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_142 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_143 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_145 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_146 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_147 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_148 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_149 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_150 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_151 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_152 = ((0U 
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
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)));
    vlSelfRef.fe_ready = ((IData)(vlSelfRef.rob_ready_dbg) 
                          & ((IData)(vlSelfRef.boom_core__DOT__alu_iq_dis_ready) 
                             & ((IData)(vlSelfRef.boom_core__DOT__unq_iq_dis_ready) 
                                & (IData)(vlSelfRef.boom_core__DOT__mem_iq_dis_ready))));
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
    vlSelfRef.alu_imm_dbg = ((0x00200000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U])
                              ? (((0x00080000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U])
                                   ? (0x0000001fU & 
                                      (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                                       >> 0x00000013U))
                                   : (((- (IData)((1U 
                                                   & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                                                      >> 0x0000000cU)))) 
                                       << 0x0000001aU) 
                                      | vlSelfRef.alu_imm_packed_dbg)) 
                                 & (- (IData)((1U & 
                                               (~ (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                                                   >> 0x00000014U))))))
                              : ((0x00100000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U])
                                  ? ((0x00080000U & vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U])
                                      ? (0xfffff000U 
                                         & ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                                             << 0x00000019U) 
                                            | (0x01fff000U 
                                               & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                                                  >> 7U))))
                                      : (((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                                                         >> 2U)))) 
                                          << 0x00000010U) 
                                         | (0x0000ffffU 
                                            & ((vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[6U] 
                                                << 0x0000000dU) 
                                               | (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                                                  >> 0x00000013U)))))
                                  : (((- (IData)((1U 
                                                  & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                                                     >> 0x0000001eU)))) 
                                      << 0x0000000cU) 
                                     | (0x00000fffU 
                                        & (vlSelfRef.boom_core__DOT____Vcellout__alu_iq__iss_uop[5U] 
                                           >> 0x00000013U)))));
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
    vlSelfRef.boom_core__DOT__rename__DOT__dec_fire 
        = (3U & ((- (IData)((IData)(vlSelfRef.fe_ready))) 
                 & (IData)(vlSelfRef.fe_valid)));
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
    vlSelfRef.rn2_mask_dbg = vlSelfRef.boom_core__DOT__rename__DOT__dec_fire;
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
