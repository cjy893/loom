import loom_params::*;
import loom_consts::*;
import loom_types::*;

`ifndef LSU_TEST_RTL_PRESENT
// Keeps the test harness buildable before the real LSU is introduced. The
// C++ test checks rtl_present first and intentionally fails in this mode.
module lsu_test (
    input  logic                         clk,
    input  logic                         rst_n,
    input  logic                         ldq_enq_valid,
    output logic                         ldq_enq_ready,
    input  uop_t                         ldq_enq_uop,
    output logic [LDQ_ADDR_SZ+1:0]       ldq_enq_idx,
    input  logic                         load_agen_valid,
    input  logic [LDQ_ADDR_SZ+1:0]       load_agen_idx,
    input  logic [31:0]                  load_agen_addr,
    output logic                         dmem_req_valid,
    input  logic                         dmem_req_ready,
    output logic [31:0]                  dmem_req_addr,
    output logic [LDQ_ADDR_SZ+1:0]       dmem_req_idx,
    input  logic                         dmem_resp_valid,
    input  logic [LDQ_ADDR_SZ+1:0]       dmem_resp_idx,
    input  logic [31:0]                  dmem_resp_data,
    output logic                         load_wb_valid,
    output exe_unit_resp_t               load_wb_resp,
    input  logic                         ldq_commit_valid,
    input  logic [LDQ_ADDR_SZ+1:0]       ldq_commit_idx,
    input  br_update_info_t              brupdate,
    input  logic                         flush_pipeline
);
    always_comb begin
        ldq_enq_ready = 1'b0;
        ldq_enq_idx = '0;
        dmem_req_valid = 1'b0;
        dmem_req_addr = '0;
        dmem_req_idx = '0;
        load_wb_valid = 1'b0;
        load_wb_resp = '0;
    end
endmodule
`endif

module lsu_test_top (
    input  logic                         clk,
    input  logic                         rst_n,

    input  logic                         ldq_enq_valid,
    input  logic [ROB_ADDR_SZ-1:0]       ldq_enq_rob_idx,
    input  logic [MAX_PREG_SZ-1:0]       ldq_enq_pdst,
    input  logic [4:0]                   ldq_enq_ldst,
    input  logic [MAX_BR_COUNT-1:0]      ldq_enq_br_mask,
    output logic                         ldq_enq_ready,
    output logic [LDQ_ADDR_SZ+1:0]       ldq_enq_idx,

    input  logic                         load_agen_valid,
    input  logic [LDQ_ADDR_SZ+1:0]       load_agen_idx,
    input  logic [31:0]                  load_agen_addr,

    output logic                         dmem_req_valid,
    input  logic                         dmem_req_ready,
    output logic [31:0]                  dmem_req_addr,
    output logic [LDQ_ADDR_SZ+1:0]       dmem_req_idx,

    input  logic                         dmem_resp_valid,
    input  logic [LDQ_ADDR_SZ+1:0]       dmem_resp_idx,
    input  logic [31:0]                  dmem_resp_data,

    output logic                         load_wb_valid,
    output logic [31:0]                  load_wb_data,
    output logic [ROB_ADDR_SZ-1:0]       load_wb_rob_idx,
    output logic [MAX_PREG_SZ-1:0]       load_wb_pdst,
    output logic [4:0]                   load_wb_ldst,
    output logic [LDQ_ADDR_SZ+1:0]       load_wb_ldq_idx,
    output logic [MAX_BR_COUNT-1:0]      load_wb_br_mask,

    input  logic                         ldq_commit_valid,
    input  logic [LDQ_ADDR_SZ+1:0]       ldq_commit_idx,

    input  logic [MAX_BR_COUNT-1:0]      resolve_mask,
    input  logic [MAX_BR_COUNT-1:0]      mispredict_mask,
    input  logic                         br_mispredict,
    input  logic                         flush_pipeline,

    output logic                         rtl_present
);
    uop_t ldq_enq_uop;
    exe_unit_resp_t load_wb_resp;
    br_update_info_t brupdate;

    always_comb begin
        ldq_enq_uop = '0;
        ldq_enq_uop.rob_idx = ldq_enq_rob_idx;
        ldq_enq_uop.pdst = ldq_enq_pdst;
        ldq_enq_uop.ldst = ldq_enq_ldst;
        ldq_enq_uop.dst_rtype = RT_FIX;
        ldq_enq_uop.uses_ldq = 1'b1;
        ldq_enq_uop.mem_cmd = 5'd0;
        ldq_enq_uop.mem_size = 2'd2;
        ldq_enq_uop.mem_signed = 1'b1;
        ldq_enq_uop.br_mask = ldq_enq_br_mask;

        brupdate = '0;
        brupdate.b1.resolve_mask = resolve_mask;
        brupdate.b1.mispredict_mask = mispredict_mask;
        brupdate.b2.mispredict = br_mispredict;
    end

    lsu_test dut (
        .clk,
        .rst_n,
        .ldq_enq_valid,
        .ldq_enq_ready,
        .ldq_enq_uop,
        .ldq_enq_idx,
        .load_agen_valid,
        .load_agen_idx,
        .load_agen_addr,
        .dmem_req_valid,
        .dmem_req_ready,
        .dmem_req_addr,
        .dmem_req_idx,
        .dmem_resp_valid,
        .dmem_resp_idx,
        .dmem_resp_data,
        .load_wb_valid,
        .load_wb_resp,
        .ldq_commit_valid,
        .ldq_commit_idx,
        .brupdate,
        .flush_pipeline
    );

    assign load_wb_data = load_wb_resp.data;
    assign load_wb_rob_idx = load_wb_resp.uop.rob_idx;
    assign load_wb_pdst = load_wb_resp.uop.pdst;
    assign load_wb_ldst = load_wb_resp.uop.ldst;
    assign load_wb_ldq_idx = load_wb_resp.uop.ldq_idx;
    assign load_wb_br_mask = load_wb_resp.uop.br_mask;

`ifdef LSU_TEST_RTL_PRESENT
    assign rtl_present = 1'b1;
`else
    assign rtl_present = 1'b0;
`endif
endmodule
