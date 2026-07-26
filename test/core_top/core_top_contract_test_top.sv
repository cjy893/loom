import loom_params::*;

module core_top_contract_test_top (
    input  logic                         clk,
    input  logic                         rst_n,

    output logic                         imem_req_valid,
    input  logic                         imem_req_ready,
    output logic [31:0]                  imem_req_addr,
    input  logic                         imem_resp_valid,
    output logic                         imem_resp_ready,
    input  logic [3:0][31:0]             imem_resp_insts,

    output logic                         dmem_req_valid,
    input  logic                         dmem_req_ready,
    output logic                         dmem_req_is_store,
    output logic [31:0]                  dmem_req_addr,
    output logic [31:0]                  dmem_req_data,
    output logic [3:0]                   dmem_req_mask,
    output logic [1:0]                   dmem_req_size,
    output logic [LSU_ADDR_SZ+1:0]       dmem_req_idx,
    input  logic                         dmem_resp_valid,
    input  logic                         dmem_resp_is_store,
    input  logic [31:0]                  dmem_resp_data,
    input  logic [LSU_ADDR_SZ+1:0]       dmem_resp_idx,

    input  logic [7:0]                   hw_irq,
    input  logic                         ipi_irq,

    output logic [1:0]                   commit_valid,
    output logic [1:0][31:0]             commit_pc,
    output logic [1:0][31:0]             commit_inst,
    output logic [1:0][4:0]              commit_ldst,

    output logic                         exception_valid,
    output logic [31:0]                  exception_pc,
    output logic [31:0]                  exception_inst,
    output logic [31:0]                  exception_cause,
    output logic [31:0]                  exception_badvaddr
);
    localparam logic [31:0] RESET_PC = 32'h1c00_0000;

`ifdef CORE_TOP_CANDIDATE
    cpu_core #(
        .RESET_PC(RESET_PC)
    ) dut (
`else
    core_top_reference #(
        .RESET_PC(RESET_PC)
    ) dut (
`endif
        .clk,
        .rst_n,
        .imem_req_valid,
        .imem_req_ready,
        .imem_req_addr,
        .imem_resp_valid,
        .imem_resp_ready,
        .imem_resp_insts,
        .dmem_req_valid,
        .dmem_req_ready,
        .dmem_req_is_store,
        .dmem_req_addr,
        .dmem_req_data,
        .dmem_req_mask,
        .dmem_req_size,
        .dmem_req_idx,
        .dmem_resp_valid,
        .dmem_resp_is_store,
        .dmem_resp_data,
        .dmem_resp_idx,
        .hw_irq,
        .ipi_irq,
        .commit_valid,
        .commit_pc,
        .commit_inst,
        .commit_ldst,
        .exception_valid,
        .exception_pc,
        .exception_inst,
        .exception_cause,
        .exception_badvaddr
    );
endmodule
