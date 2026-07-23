// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VBOOM_CORE_H_
#define VERILATED_VBOOM_CORE_H_  // guard

#include "verilated.h"

class Vboom_core__Syms;
class Vboom_core___024root;
class VerilatedVcdC;
class Vboom_core_decode;
#include "Vboom_core_loom_types.h"


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vboom_core VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vboom_core__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst_n,0,0);
    VL_IN8(&fe_valid,3,0);
    VL_OUT8(&fe_ready,0,0);
    VL_OUT8(&lsu_agen_valid,0,0);
    VL_OUT8(&lsu_dgen_valid,0,0);
    VL_IN8(&lsu_resp_valid,0,0);
    VL_OUT8(&csr_req_valid,0,0);
    VL_OUT8(&csr_cmd,1,0);
    VL_OUT8(&rob_empty,0,0);
    VL_OUT8(&commit_valid_dbg,0,0);
    VL_OUT8(&commit_ldst_dbg,4,0);
    VL_OUT8(&rf_wr_en_dbg,0,0);
    VL_OUT8(&rf_wr_pdst_dbg,5,0);
    VL_OUT8(&rf_wr_ldst_dbg,4,0);
    VL_OUT8(&alu_imm_sel_dbg,2,0);
    VL_OUT8(&rob_ready_dbg,0,0);
    VL_OUT8(&ren_stalls_dbg,1,0);
    VL_OUT8(&rn2_mask_dbg,1,0);
    VL_OUT8(&dis_fire_dbg,1,0);
    VL_OUT8(&alu_iss_valid_dbg,2,0);
    VL_OUT8(&alu_res_valid_dbg,2,0);
    VL_OUT8(&rob_wb_valid_dbg,5,0);
    VL_OUT16(&csr_addr,13,0);
    VL_INW(&fe_insts,127,0,4);
    VL_OUT(&lsu_agen_addr,31,0);
    VL_OUT(&lsu_dgen_data,31,0);
    VL_OUT(&csr_wdata,31,0);
    VL_IN(&csr_rdata,31,0);
    VL_OUT(&debug_pc,31,0);
    VL_OUT(&rf_wr_data_dbg,31,0);
    VL_OUT(&alu_rs1_dbg,31,0);
    VL_OUT(&alu_imm_dbg,31,0);
    VL_OUT(&alu_imm_packed_dbg,25,0);
    VL_OUTW(&lsu_agen_uop,376,0,12);
    VL_OUTW(&lsu_dgen_uop,376,0,12);
    VL_INW(&lsu_resp,416,0,14);
    Vboom_core_commit_signal_t__struct__0 &commit;

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vboom_core_loom_types* const __PVT__loom_types;
    Vboom_core_decode* const __PVT__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst;
    Vboom_core_decode* const __PVT__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vboom_core___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vboom_core(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vboom_core(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vboom_core();
  private:
    VL_UNCOPYABLE(Vboom_core);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
