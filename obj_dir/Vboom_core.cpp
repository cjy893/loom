// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vboom_core__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vboom_core::Vboom_core(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vboom_core__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , fe_valid{vlSymsp->TOP.fe_valid}
    , fe_ready{vlSymsp->TOP.fe_ready}
    , lsu_agen_valid{vlSymsp->TOP.lsu_agen_valid}
    , lsu_dgen_valid{vlSymsp->TOP.lsu_dgen_valid}
    , lsu_resp_valid{vlSymsp->TOP.lsu_resp_valid}
    , csr_req_valid{vlSymsp->TOP.csr_req_valid}
    , csr_cmd{vlSymsp->TOP.csr_cmd}
    , rob_empty{vlSymsp->TOP.rob_empty}
    , commit_valid_dbg{vlSymsp->TOP.commit_valid_dbg}
    , commit_ldst_dbg{vlSymsp->TOP.commit_ldst_dbg}
    , rf_wr_en_dbg{vlSymsp->TOP.rf_wr_en_dbg}
    , rf_wr_pdst_dbg{vlSymsp->TOP.rf_wr_pdst_dbg}
    , rf_wr_ldst_dbg{vlSymsp->TOP.rf_wr_ldst_dbg}
    , alu_imm_sel_dbg{vlSymsp->TOP.alu_imm_sel_dbg}
    , rob_ready_dbg{vlSymsp->TOP.rob_ready_dbg}
    , ren_stalls_dbg{vlSymsp->TOP.ren_stalls_dbg}
    , rn2_mask_dbg{vlSymsp->TOP.rn2_mask_dbg}
    , dis_fire_dbg{vlSymsp->TOP.dis_fire_dbg}
    , alu_iss_valid_dbg{vlSymsp->TOP.alu_iss_valid_dbg}
    , alu_res_valid_dbg{vlSymsp->TOP.alu_res_valid_dbg}
    , rob_wb_valid_dbg{vlSymsp->TOP.rob_wb_valid_dbg}
    , csr_addr{vlSymsp->TOP.csr_addr}
    , fe_insts{vlSymsp->TOP.fe_insts}
    , lsu_agen_addr{vlSymsp->TOP.lsu_agen_addr}
    , lsu_dgen_data{vlSymsp->TOP.lsu_dgen_data}
    , csr_wdata{vlSymsp->TOP.csr_wdata}
    , csr_rdata{vlSymsp->TOP.csr_rdata}
    , debug_pc{vlSymsp->TOP.debug_pc}
    , rf_wr_data_dbg{vlSymsp->TOP.rf_wr_data_dbg}
    , alu_rs1_dbg{vlSymsp->TOP.alu_rs1_dbg}
    , alu_imm_dbg{vlSymsp->TOP.alu_imm_dbg}
    , alu_imm_packed_dbg{vlSymsp->TOP.alu_imm_packed_dbg}
    , lsu_agen_uop{vlSymsp->TOP.lsu_agen_uop}
    , lsu_dgen_uop{vlSymsp->TOP.lsu_dgen_uop}
    , lsu_resp{vlSymsp->TOP.lsu_resp}
    , commit{vlSymsp->TOP.commit}
    , __PVT__loom_types{vlSymsp->TOP.__PVT__loom_types}
    , __PVT__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst{vlSymsp->TOP.__PVT__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst}
    , __PVT__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst{vlSymsp->TOP.__PVT__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vboom_core::Vboom_core(const char* _vcname__)
    : Vboom_core(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vboom_core::~Vboom_core() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vboom_core___024root___eval_debug_assertions(Vboom_core___024root* vlSelf);
#endif  // VL_DEBUG
void Vboom_core___024root___eval_static(Vboom_core___024root* vlSelf);
void Vboom_core___024root___eval_initial(Vboom_core___024root* vlSelf);
void Vboom_core___024root___eval_settle(Vboom_core___024root* vlSelf);
void Vboom_core___024root___eval(Vboom_core___024root* vlSelf);

void Vboom_core::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vboom_core::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vboom_core___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vboom_core___024root___eval_static(&(vlSymsp->TOP));
        Vboom_core___024root___eval_initial(&(vlSymsp->TOP));
        Vboom_core___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vboom_core___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vboom_core::eventsPending() { return false; }

uint64_t Vboom_core::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vboom_core::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vboom_core___024root___eval_final(Vboom_core___024root* vlSelf);

VL_ATTR_COLD void Vboom_core::final() {
    contextp()->executingFinal(true);
    Vboom_core___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vboom_core::hierName() const { return vlSymsp->name(); }
const char* Vboom_core::modelName() const { return "Vboom_core"; }
unsigned Vboom_core::threads() const { return 1; }
void Vboom_core::prepareClone() const { contextp()->prepareClone(); }
void Vboom_core::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vboom_core::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vboom_core___024root__trace_decl_types(VerilatedVcd* tracep);

void Vboom_core___024root__trace_init_top(Vboom_core___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vboom_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vboom_core___024root*>(voidSelf);
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vboom_core___024root__trace_decl_types(tracep);
    Vboom_core___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vboom_core___024root__trace_register(Vboom_core___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vboom_core::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vboom_core::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 1481);
    Vboom_core___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
