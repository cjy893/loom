// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VMEM_ISSUE_TEST_TOP_H_
#define VERILATED_VMEM_ISSUE_TEST_TOP_H_  // guard

#include "verilated.h"

class Vmem_issue_test_top__Syms;
class Vmem_issue_test_top___024root;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vmem_issue_test_top VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vmem_issue_test_top__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst_n,0,0);
    VL_IN8(&dis_valid,0,0);
    VL_OUT8(&dis_ready,0,0);
    VL_IN8(&dis_rob_idx,5,0);
    VL_IN8(&dis_prs1,5,0);
    VL_IN8(&dis_prs2,5,0);
    VL_IN8(&dis_prs1_busy,0,0);
    VL_IN8(&dis_prs2_busy,0,0);
    VL_IN8(&dis_use_agen,0,0);
    VL_IN8(&dis_use_dgen,0,0);
    VL_IN8(&wakeup_valid_0,0,0);
    VL_IN8(&wakeup_pdst_0,5,0);
    VL_IN8(&wakeup_valid_1,0,0);
    VL_IN8(&wakeup_pdst_1,5,0);
    VL_IN8(&resolve_mask,3,0);
    VL_IN8(&mispredict_mask,3,0);
    VL_IN8(&br_mispredict,0,0);
    VL_IN8(&flush_pipeline,0,0);
    VL_OUT8(&iss_valid,0,0);
    VL_OUT8(&iss_rob_idx,5,0);
    VL_OUT8(&iss_use_agen,0,0);
    VL_OUT8(&iss_use_dgen,0,0);
    VL_OUT8(&agen_valid,0,0);
    VL_OUT8(&agen_rob_idx,5,0);
    VL_OUT8(&dgen_valid,0,0);
    VL_OUT8(&dgen_rob_idx,5,0);
    VL_IN(&rs1_data,31,0);
    VL_IN(&rs2_data,31,0);
    VL_IN(&imm_data,31,0);
    VL_OUT(&agen_addr,31,0);
    VL_OUT(&dgen_data,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vmem_issue_test_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vmem_issue_test_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vmem_issue_test_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vmem_issue_test_top();
  private:
    VL_UNCOPYABLE(Vmem_issue_test_top);  ///< Copying not allowed

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
