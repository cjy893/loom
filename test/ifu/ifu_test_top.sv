module ifu_test_top (
    input  logic                 clk,
    input  logic                 rst_n,

    input  logic                 redirect_valid,
    input  logic [31:0]          redirect_pc,

    output logic                 xlate_req_valid,
    input  logic                 xlate_req_ready,
    output logic [31:0]          xlate_req_vaddr,
    input  logic                 xlate_resp_valid,
    output logic                 xlate_resp_ready,
    input  logic [31:0]          xlate_resp_vaddr,
    input  logic [31:0]          xlate_resp_paddr,
    input  logic [1:0]           xlate_resp_mat,
    input  logic                 xlate_resp_cacheable,
    input  logic                 xlate_resp_xcpt_valid,
    input  logic [5:0]           xlate_resp_xcpt_code,

    output logic                 imem_req_valid,
    input  logic                 imem_req_ready,
    output logic [31:0]          imem_req_addr,
    output logic [1:0]           imem_req_mat,
    output logic                 imem_req_cacheable,

    input  logic                 imem_resp_valid,
    output logic                 imem_resp_ready,
    input  logic [3:0][31:0]     imem_resp_insts,

    output logic [3:0]           fetch_valid,
    output logic [3:0]           fetch_xcpt_valid,
    output logic [3:0][5:0]      fetch_xcpt_code,
    output logic [3:0][31:0]     fetch_pc,
    output logic [3:0][31:0]     fetch_insts,
    input  logic                 fetch_ready
);
    localparam logic [31:0] RESET_PC = 32'h1c00_0000;

    ifu #(
        .FETCH_WIDTH(4),
        .RESET_PC(RESET_PC)
    ) dut (
        .clk,
        .rst_n,
        .redirect_valid,
        .redirect_pc,
        .xlate_req_valid,
        .xlate_req_ready,
        .xlate_req_vaddr,
        .xlate_resp_valid,
        .xlate_resp_ready,
        .xlate_resp_vaddr,
        .xlate_resp_paddr,
        .xlate_resp_mat,
        .xlate_resp_cacheable,
        .xlate_resp_xcpt_valid,
        .xlate_resp_xcpt_code,
        .imem_req_mat,
        .imem_req_cacheable,
        .fetch_xcpt_valid,
        .fetch_xcpt_code,
        .imem_req_valid,
        .imem_req_ready,
        .imem_req_addr,
        .imem_resp_valid,
        .imem_resp_ready,
        .imem_resp_insts,
        .fetch_valid,
        .fetch_pc,
        .fetch_insts,
        .fetch_ready
    );
endmodule
