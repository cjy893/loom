module cacop_ctrl_test_top #(
    parameter int ROB_IDX_WIDTH = 6
)(
    input  logic                     clk,
    input  logic                     rst_n,

    input  logic                     req_valid,
    output logic                     req_ready,
    input  logic [ROB_IDX_WIDTH-1:0] req_rob_idx,
    input  logic [4:0]               req_code,
    input  logic [31:0]              req_vaddr,
    input  logic [31:0]              req_paddr,
    input  logic                     req_xcpt_valid,
    input  logic [5:0]               req_xcpt_code,
    input  logic [31:0]              req_badvaddr,

    output logic                     resp_valid,
    input  logic                     resp_ready,
    output logic [ROB_IDX_WIDTH-1:0] resp_rob_idx,
    output logic                     resp_xcpt_valid,
    output logic [5:0]               resp_xcpt_code,
    output logic [31:0]              resp_badvaddr,

    input  logic                     flush_pending,

    output logic                     icache_maint_valid,
    input  logic                     icache_maint_ready,
    output logic [1:0]               icache_maint_mode,
    output logic [31:0]              icache_maint_vaddr,
    output logic [31:0]              icache_maint_paddr,
    input  logic                     icache_maint_done,

    output logic                     dcache_maint_valid,
    input  logic                     dcache_maint_ready,
    output logic [1:0]               dcache_maint_op,
    output logic [1:0]               dcache_maint_mode,
    output logic [31:0]              dcache_maint_vaddr,
    output logic [31:0]              dcache_maint_paddr,
    input  logic                     dcache_maint_done
);
    cacop_ctrl #(
        .ROB_IDX_WIDTH(ROB_IDX_WIDTH)
    ) dut (.*);
endmodule
