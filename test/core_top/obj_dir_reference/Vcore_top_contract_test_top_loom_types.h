// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore_top_contract_test_top.h for the primary calling header

#ifndef VERILATED_VCORE_TOP_CONTRACT_TEST_TOP_LOOM_TYPES_H_
#define VERILATED_VCORE_TOP_CONTRACT_TEST_TOP_LOOM_TYPES_H_  // guard

#include "verilated.h"
#include "Vcore_top_contract_test_top_loom_types.h"


class Vcore_top_contract_test_top__Syms;
struct Vcore_top_contract_test_top_commit_signal_t__struct__0 {
    CData/*1:0*/ __PVT__valids;
    CData/*1:0*/ __PVT__arch_valids;
    VlWide<26>/*821:0*/ __PVT__uops;
    CData/*5:0*/ __PVT__fp_flags;
    QData/*63:0*/ __PVT__debug_insts;
    QData/*63:0*/ __PVT__debug_wdata;

    bool operator==(const Vcore_top_contract_test_top_commit_signal_t__struct__0& rhs) const {
        return __PVT__valids == rhs.__PVT__valids
            && __PVT__arch_valids == rhs.__PVT__arch_valids
            && __PVT__uops == rhs.__PVT__uops
            && __PVT__fp_flags == rhs.__PVT__fp_flags
            && __PVT__debug_insts == rhs.__PVT__debug_insts
            && __PVT__debug_wdata == rhs.__PVT__debug_wdata;
    }
    bool operator!=(const Vcore_top_contract_test_top_commit_signal_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vcore_top_contract_test_top_commit_signal_t__struct__0& rhs) const {
        if (__PVT__valids < rhs.__PVT__valids) return true;
        if (rhs.__PVT__valids < __PVT__valids) return false;
        if (__PVT__arch_valids < rhs.__PVT__arch_valids) return true;
        if (rhs.__PVT__arch_valids < __PVT__arch_valids) return false;
        if (__PVT__uops < rhs.__PVT__uops) return true;
        if (rhs.__PVT__uops < __PVT__uops) return false;
        if (__PVT__fp_flags < rhs.__PVT__fp_flags) return true;
        if (rhs.__PVT__fp_flags < __PVT__fp_flags) return false;
        if (__PVT__debug_insts < rhs.__PVT__debug_insts) return true;
        if (rhs.__PVT__debug_insts < __PVT__debug_insts) return false;
        if (__PVT__debug_wdata < rhs.__PVT__debug_wdata) return true;
        if (rhs.__PVT__debug_wdata < __PVT__debug_wdata) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vcore_top_contract_test_top_commit_signal_t__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vcore_top_contract_test_top_loom_types final {
  public:

    // INTERNAL VARIABLES
    Vcore_top_contract_test_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcore_top_contract_test_top_loom_types();
    ~Vcore_top_contract_test_top_loom_types();
    void ctor(Vcore_top_contract_test_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcore_top_contract_test_top_loom_types);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
