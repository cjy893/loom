// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VFTQ_TEST_TOP_H_
#define VERILATED_VFTQ_TEST_TOP_H_  // guard

#include "verilated.h"

class Vftq_test_top__Syms;
class Vftq_test_top___024root;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vftq_test_top VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vftq_test_top__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst_n,0,0);
    VL_IN8(&enq_valid,0,0);
    VL_OUT8(&enq_ready,0,0);
    VL_IN8(&enq_br_mask,3,0);
    VL_IN8(&enq_cfi_valid,0,0);
    VL_IN8(&enq_cfi_idx,1,0);
    VL_IN8(&enq_cfi_type,2,0);
    VL_IN8(&enq_cfi_is_call,0,0);
    VL_IN8(&enq_cfi_is_ret,0,0);
    VL_IN8(&enq_cfi_npc_plus4,0,0);
    VL_IN8(&enq_cfi_taken,0,0);
    VL_IN8(&enq_ras_idx,4,0);
    VL_IN8(&enq_start_bank,0,0);
    VL_OUT8(&enq_idx,3,0);
    VL_IN8(&commit_valid,0,0);
    VL_IN8(&commit_ftq_idx,3,0);
    VL_IN8(&redirect_valid,0,0);
    VL_IN8(&redirect_ftq_idx,3,0);
    VL_IN8(&brupdate_b2_mispredict,0,0);
    VL_IN8(&brupdate_b2_ftq_idx,3,0);
    VL_IN8(&brupdate_b2_taken,0,0);
    VL_IN8(&brupdate_b2_pc_lob,5,0);
    VL_IN8(&brupdate_b2_cfi_type,2,0);
    VL_OUT8(&bpd_update_valid,0,0);
    VL_OUT8(&bpd_update_is_mispredict_update,0,0);
    VL_OUT8(&bpd_update_is_repair_update,0,0);
    VL_OUT8(&bpd_update_br_mask,3,0);
    VL_OUT8(&bpd_update_cfi_valid,0,0);
    VL_OUT8(&bpd_update_cfi_idx,1,0);
    VL_OUT8(&bpd_update_cfi_taken,0,0);
    VL_OUT8(&bpd_update_cfi_mispredicted,0,0);
    VL_OUT8(&bpd_update_cfi_is_br,0,0);
    VL_OUT8(&bpd_update_cfi_is_b_bl,0,0);
    VL_OUT8(&bpd_update_cfi_is_jirl,0,0);
    VL_OUT8(&ghist_restore_valid,0,0);
    VL_OUT8(&ras_repair_valid,0,0);
    VL_OUT8(&ras_repair_idx,4,0);
    VL_IN8(&query_valid,0,0);
    VL_IN8(&query_idx,3,0);
    VL_OUT8(&query_resp_valid,0,0);
    VL_OUT8(&query_br_mask,3,0);
    VL_OUT8(&query_cfi_valid,0,0);
    VL_OUT8(&query_cfi_idx,1,0);
    VL_OUT8(&query_cfi_type,2,0);
    VL_OUT8(&query_cfi_is_call,0,0);
    VL_OUT8(&query_cfi_is_ret,0,0);
    VL_OUT8(&query_cfi_npc_plus4,0,0);
    VL_OUT8(&query_cfi_taken,0,0);
    VL_OUT8(&query_ras_idx,4,0);
    VL_OUT8(&query_start_bank,0,0);
    VL_IN8(&exec_query_valid,2,0);
    VL_IN16(&exec_query_idx,11,0);
    VL_OUT8(&exec_query_resp_valid,2,0);
    VL_OUT8(&exec_query_cfi_match,2,0);
    VL_IN8(&flush_valid,0,0);
    VL_IN(&enq_pc,31,0);
    VL_IN(&enq_next_pc,31,0);
    VL_IN(&enq_ras_top,31,0);
    VL_INW(&enq_meta,239,0,8);
    VL_IN(&brupdate_b2_target,31,0);
    VL_OUT(&bpd_update_pc,31,0);
    VL_OUT(&bpd_update_target,31,0);
    VL_OUTW(&bpd_update_meta,239,0,8);
    VL_OUT(&ras_repair_addr,31,0);
    VL_OUT(&query_pc,31,0);
    VL_OUT(&query_next_pc,31,0);
    VL_OUT(&query_ras_top,31,0);
    VL_INW(&exec_query_pc,95,0,3);
    VL_OUTW(&exec_query_next_pc,95,0,3);
    VL_INW(&enq_ghist,71,0,3);
    VL_OUTW(&bpd_update_ghist,71,0,3);
    VL_OUTW(&ghist_restore,71,0,3);
    VL_OUTW(&query_ghist,71,0,3);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vftq_test_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vftq_test_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vftq_test_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vftq_test_top();
  private:
    VL_UNCOPYABLE(Vftq_test_top);  ///< Copying not allowed

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
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
