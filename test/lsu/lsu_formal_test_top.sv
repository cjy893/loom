import loom_params::*;
import loom_consts::*;
import loom_types::*;

module lsu_formal_test_top (
    input  logic                         clk,
    input  logic                         rst_n,

    input  logic                         dis0_valid,
    input  logic                         dis0_fire,
    input  logic                         dis0_is_load,
    input  logic                         dis0_is_store,
    input  logic [ROB_ADDR_SZ-1:0]       dis0_rob_idx,
    input  logic [MAX_PREG_SZ-1:0]       dis0_pdst,
    input  logic [1:0]                   dis0_mem_size,
    input  logic                         dis0_mem_signed,
    output logic                         dis0_ready,
    output logic [LDQ_ADDR_SZ+1:0]       dis0_ldq_idx,
    output logic [STQ_ADDR_SZ+1:0]       dis0_stq_idx,

    input  logic                         dis1_valid,
    input  logic                         dis1_fire,
    input  logic                         dis1_is_load,
    input  logic                         dis1_is_store,
    input  logic [ROB_ADDR_SZ-1:0]       dis1_rob_idx,
    input  logic [MAX_PREG_SZ-1:0]       dis1_pdst,
    input  logic [1:0]                   dis1_mem_size,
    input  logic                         dis1_mem_signed,
    output logic                         dis1_ready,
    output logic [LDQ_ADDR_SZ+1:0]       dis1_ldq_idx,
    output logic [STQ_ADDR_SZ+1:0]       dis1_stq_idx,

    input  logic                         agen_valid,
    input  logic                         agen_is_load,
    input  logic                         agen_is_store,
    input  logic [LSU_ADDR_SZ+1:0]       agen_idx,
    input  logic [XLEN-1:0]              agen_addr,

    input  logic                         dgen_valid,
    input  logic [STQ_ADDR_SZ+1:0]       dgen_idx,
    input  logic [XLEN-1:0]              dgen_data,

    input  logic                         commit_valid,
    input  logic                         commit_is_load,
    input  logic                         commit_is_store,
    input  logic [LSU_ADDR_SZ+1:0]       commit_idx,
    input  logic [ROB_ADDR_SZ-1:0]       rob_head_idx,

    output logic                         clr_bsy_valid,
    output logic [ROB_ADDR_SZ-1:0]       clr_bsy_rob_idx,

    output logic                         load_wb_valid,
    output logic [XLEN-1:0]              load_wb_data,
    output logic [ROB_ADDR_SZ-1:0]       load_wb_rob_idx,
    output logic [LDQ_ADDR_SZ+1:0]       load_wb_ldq_idx,

    output logic                         dmem_req_valid,
    input  logic                         dmem_req_ready,
    output logic                         dmem_req_is_store,
    output logic [XLEN-1:0]              dmem_req_addr,
    output logic [XLEN-1:0]              dmem_req_data,
    output logic [XLEN/8-1:0]            dmem_req_mask,
    output logic [1:0]                   dmem_req_size,
    output logic [LSU_ADDR_SZ+1:0]       dmem_req_idx,
    output logic [ROB_ADDR_SZ-1:0]       dmem_req_rob_idx,

    input  logic                         dmem_resp_valid,
    input  logic                         dmem_resp_is_store,
    input  logic [XLEN-1:0]              dmem_resp_data,
    input  logic [LSU_ADDR_SZ+1:0]       dmem_resp_idx,

    input  logic                         flush_pipeline,
    output logic                         ldq_empty,
    output logic                         stq_empty
);
    logic [1:0] dis_valid;
    logic [1:0] dis_fire;
    logic [1:0] dis_uses_ldq;
    logic [1:0] dis_uses_stq;
    uop_t [1:0] dis_uops;
    logic [1:0] dis_lsq_ready;
    logic [1:0][LDQ_ADDR_SZ+1:0] dis_ldq_idx;
    logic [1:0][STQ_ADDR_SZ+1:0] dis_stq_idx;

    logic [0:0] agen_valid_vec;
    uop_t [0:0] agen_uops;
    logic [0:0][XLEN-1:0] agen_addr_vec;

    logic [0:0] dgen_valid_vec;
    uop_t [0:0] dgen_uops;
    logic [0:0][XLEN-1:0] dgen_data_vec;

    logic [0:0] commit_valid_vec;
    uop_t [0:0] commit_uops;
    logic [0:0] clr_bsy_valid_vec;
    logic [0:0][ROB_ADDR_SZ-1:0] clr_bsy_rob_idx_vec;

    exe_unit_resp_t load_wb_resp;
    uop_t dmem_req_uop;
    br_update_info_t brupdate;

    logic xlate_req_valid, xlate_req_ready;
    logic [LSU_ADDR_SZ+1:0] xlate_req_tag, xlate_resp_tag;
    logic [XLEN-1:0] xlate_req_vaddr, xlate_resp_paddr;
    logic [1:0] xlate_req_access, xlate_resp_access;
    logic xlate_resp_valid, xlate_resp_ready;
    logic [1:0] xlate_resp_mat;
    logic xlate_resp_cacheable;
    exception_t xlate_xcpt_unused;

    always_comb begin
        dis_valid[0] = dis0_valid;
        dis_valid[1] = dis1_valid;
        dis_fire[0] = dis0_fire;
        dis_fire[1] = dis1_fire;
        dis_uses_ldq[0] = dis0_is_load;
        dis_uses_ldq[1] = dis1_is_load;
        dis_uses_stq[0] = dis0_is_store;
        dis_uses_stq[1] = dis1_is_store;
        dis_uops = '0;

        dis_uops[0].uses_ldq = dis0_is_load;
        dis_uops[0].uses_stq = dis0_is_store;
        dis_uops[0].rob_idx = dis0_rob_idx;
        dis_uops[0].pdst = dis0_pdst;
        dis_uops[0].mem_size = dis0_mem_size;
        dis_uops[0].mem_signed = dis0_mem_signed;

        dis_uops[1].uses_ldq = dis1_is_load;
        dis_uops[1].uses_stq = dis1_is_store;
        dis_uops[1].rob_idx = dis1_rob_idx;
        dis_uops[1].pdst = dis1_pdst;
        dis_uops[1].mem_size = dis1_mem_size;
        dis_uops[1].mem_signed = dis1_mem_signed;

        agen_valid_vec[0] = agen_valid;
        agen_uops[0] = '0;
        agen_uops[0].uses_ldq = agen_is_load;
        agen_uops[0].uses_stq = agen_is_store;
        agen_uops[0].ldq_idx = agen_idx[LDQ_ADDR_SZ+1:0];
        agen_uops[0].stq_idx = agen_idx[STQ_ADDR_SZ+1:0];
        agen_addr_vec[0] = agen_addr;

        dgen_valid_vec[0] = dgen_valid;
        dgen_uops[0] = '0;
        dgen_uops[0].uses_stq = 1'b1;
        dgen_uops[0].stq_idx = dgen_idx;
        dgen_data_vec[0] = dgen_data;

        commit_valid_vec[0] = commit_valid;
        commit_uops[0] = '0;
        commit_uops[0].uses_ldq = commit_is_load;
        commit_uops[0].uses_stq = commit_is_store;
        commit_uops[0].ldq_idx = commit_idx[LDQ_ADDR_SZ+1:0];
        commit_uops[0].stq_idx = commit_idx[STQ_ADDR_SZ+1:0];

        brupdate = '0;
    end

    assign dis0_ready = dis_lsq_ready[0];
    assign dis0_ldq_idx = dis_ldq_idx[0];
    assign dis0_stq_idx = dis_stq_idx[0];
    assign dis1_ready = dis_lsq_ready[1];
    assign dis1_ldq_idx = dis_ldq_idx[1];
    assign dis1_stq_idx = dis_stq_idx[1];
    assign clr_bsy_valid = clr_bsy_valid_vec[0];
    assign clr_bsy_rob_idx = clr_bsy_rob_idx_vec[0];
    assign load_wb_data = load_wb_resp.data;
    assign load_wb_rob_idx = load_wb_resp.uop.rob_idx;
    assign load_wb_ldq_idx = load_wb_resp.uop.ldq_idx;
    assign dmem_req_rob_idx = dmem_req_uop.rob_idx;

    lsq_identity_xlate #(.TAG_WIDTH(LSU_ADDR_SZ + 2)) xlate (
        .clk, .rst_n, .flush(flush_pipeline),
        .req_valid(xlate_req_valid), .req_ready(xlate_req_ready),
        .req_tag(xlate_req_tag), .req_vaddr(xlate_req_vaddr),
        .req_access(xlate_req_access),
        .resp_valid(xlate_resp_valid), .resp_ready(xlate_resp_ready),
        .resp_tag(xlate_resp_tag), .resp_paddr(xlate_resp_paddr),
        .resp_access(xlate_resp_access), .resp_mat(xlate_resp_mat),
        .resp_cacheable(xlate_resp_cacheable)
    );

    lsu #(
        .DISPATCH_WIDTH(2),
        .AGEN_WIDTH(1),
        .DGEN_WIDTH(1),
        .COMMIT_WIDTH(1),
        .CLR_WIDTH(1)
    ) dut (
        .clk,
        .rst_n,
        .dis_valid,
        .dis_uops,
        .dis_uses_ldq,
        .dis_uses_stq,
        .dis_lsq_ready,
        .dis_ldq_idx,
        .dis_stq_idx,
        .dis_fire,
        .agen_valid(agen_valid_vec),
        .agen_uops,
        .agen_addr(agen_addr_vec),
        .dgen_valid(dgen_valid_vec),
        .dgen_uops,
        .dgen_data(dgen_data_vec),
        .xlate_req_valid,
        .xlate_req_ready,
        .xlate_req_tag,
        .xlate_req_vaddr,
        .xlate_req_access,
        .xlate_resp_valid,
        .xlate_resp_ready,
        .xlate_resp_tag,
        .xlate_resp_access,
        .xlate_resp_paddr,
        .xlate_resp_mat,
        .xlate_resp_cacheable,
        .xlate_resp_xcpt_valid(1'b0),
        .xlate_resp_xcpt_code('0),
        .xlate_resp_badvaddr('0),
        .xlate_xcpt(xlate_xcpt_unused),
        .xlate_xcpt_ready(1'b1),
        .commit_valid(commit_valid_vec),
        .commit_uops,
        .rob_head_idx,
        .clr_bsy_valid(clr_bsy_valid_vec),
        .clr_bsy_rob_idx(clr_bsy_rob_idx_vec),
        .load_wb_valid,
        .load_wb_resp,
        .dmem_req_valid,
        .dmem_req_ready,
        .dmem_req_is_store,
        .dmem_req_cacheable(),
        .dmem_req_addr,
        .dmem_req_data,
        .dmem_req_mask,
        .dmem_req_size,
        .dmem_req_idx,
        .dmem_req_uop,
        .dmem_resp_valid,
        .dmem_resp_is_store,
        .dmem_resp_data,
        .dmem_resp_idx,
        .brupdate,
        .flush_pipeline,
        .ldq_empty,
        .stq_empty
    );
endmodule
