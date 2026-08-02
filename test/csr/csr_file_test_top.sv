import loom_params::*;
import loom_consts::*;
import loom_types::*;

`ifdef CSR_USE_REFERENCE
`define CSR_FILE_DUT csr_file_reference
`else
`define CSR_FILE_DUT csr_file
`endif

module csr_file_test_top (
    input  logic        clk,
    input  logic        rst_n,

    input  logic        csr_req_valid,
    output logic        csr_req_ready,
    input  logic [5:0]  csr_req_rob_idx,
    input  logic [13:0] csr_req_addr,
    input  logic [1:0]  csr_cmd,
    input  logic [31:0] csr_wdata,
    input  logic [31:0] csr_wmask,

    output logic        csr_resp_valid,
    input  logic        csr_resp_ready,
    output logic [5:0]  csr_resp_rob_idx,
    output logic [31:0] csr_rdata,

    input  logic        csr_commit_valid,
    input  logic [5:0]  csr_commit_rob_idx,
    input  logic        csr_flush_pending,

    input  logic        tlb_update_valid,
    input  logic [4:0]  tlb_update_mask,
    input  logic [31:0] tlb_update_tlbidx,
    input  logic [31:0] tlb_update_tlbehi,
    input  logic [31:0] tlb_update_tlbelo0,
    input  logic [31:0] tlb_update_tlbelo1,
    input  logic [31:0] tlb_update_asid,

    input  logic        xcpt_valid,
    input  logic [31:0] xcpt_inst,
    input  logic [31:0] xcpt_pc,
    input  logic [5:0]  xcpt_code,
    input  logic [8:0]  xcpt_esubcode,
    input  logic [31:0] xcpt_badvaddr,
    input  logic        ertn_valid,

    input  logic [7:0]  hw_irq,
    input  logic        ipi_irq,

    output logic        interrupt_pending,
    output logic [12:0] interrupt_pending_bits,
    output logic [1:0]  current_plv,
    output logic        current_ie,
    output logic [31:0] xcpt_target,
    output logic [31:0] ertn_target,
    output logic [31:0] crmd_value,
    output logic [31:0] asid_value,
    output logic [31:0] dmw0_value,
    output logic [31:0] dmw1_value,
    output logic [31:0] tlbidx_value,
    output logic [31:0] tlbehi_value,
    output logic [31:0] tlbelo0_value,
    output logic [31:0] tlbelo1_value,
    output logic [31:0] era_value,
    output logic [31:0] eentry_value,
    output logic [31:0] tlbrentry_value,
    output logic [63:0] counter_value,
    output logic [31:0] tid_value
);
    `CSR_FILE_DUT #(
        .CSR_ADDR_WIDTH(14),
        .ROB_IDX_WIDTH(6),
        .NUM_HW_IRQS(8),
        .CORE_ID(32'h1234_5678),
        .RESET_CRMD(32'h0000_0008),
        .RESET_STABLE_COUNTER(64'd0)
    ) dut (
        .clk,
        .rst_n,
        .csr_req_valid,
        .csr_req_ready,
        .csr_req_rob_idx,
        .csr_req_addr,
        .csr_cmd,
        .csr_wdata,
        .csr_wmask,
        .csr_resp_valid,
        .csr_resp_ready,
        .csr_resp_rob_idx,
        .csr_rdata,
        .csr_commit_valid,
        .csr_commit_rob_idx,
        .csr_flush_pending,
        .tlb_update_valid,
        .tlb_update_mask,
        .tlb_update_tlbidx,
        .tlb_update_tlbehi,
        .tlb_update_tlbelo0,
        .tlb_update_tlbelo1,
        .tlb_update_asid,
        .xcpt_valid,
        .xcpt_inst,
        .xcpt_pc,
        .xcpt_code,
        .xcpt_esubcode,
        .xcpt_badvaddr,
        .ertn_valid,
        .hw_irq,
        .ipi_irq,
        .interrupt_pending,
        .interrupt_pending_bits,
        .current_plv,
        .current_ie,
        .xcpt_target,
        .ertn_target,
        .crmd_value,
        .asid_value,
        .dmw0_value,
        .dmw1_value,
        .tlbidx_value,
        .tlbehi_value,
        .tlbelo0_value,
        .tlbelo1_value,
        .era_value,
        .eentry_value,
        .tlbrentry_value,
        .counter_value,
        .tid_value
    );
endmodule

`undef CSR_FILE_DUT
