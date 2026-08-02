import loom_params::*;
import loom_consts::*;
import loom_types::*;

module lsu_dmmu_test_top (
    input  logic                         clk,
    input  logic                         rst_n,

    input  logic                         dis_valid,
    input  logic                         dis_fire,
    input  logic                         dis_is_load,
    input  logic                         dis_is_store,
    input  logic [ROB_ADDR_SZ-1:0]       dis_rob_idx,
    input  logic [MAX_PREG_SZ-1:0]       dis_pdst,
    input  logic [1:0]                   dis_mem_size,
    input  logic                         dis_mem_signed,
    output logic                         dis_ready,
    output logic [LDQ_ADDR_SZ+1:0]       dis_ldq_idx,
    output logic [STQ_ADDR_SZ+1:0]       dis_stq_idx,

    input  logic                         agen_valid,
    output logic                         agen_ready,
    input  logic                         agen_is_load,
    input  logic                         agen_is_store,
    input  logic [LSU_ADDR_SZ+1:0]       agen_idx,
    input  logic [ROB_ADDR_SZ-1:0]       agen_rob_idx,
    input  logic [MAX_PREG_SZ-1:0]       agen_pdst,
    input  logic [1:0]                   agen_mem_size,
    input  logic                         agen_mem_signed,
    input  logic [XLEN-1:0]              agen_vaddr,

    input  logic                         dgen_valid,
    input  logic [STQ_ADDR_SZ+1:0]       dgen_idx,
    input  logic [XLEN-1:0]              dgen_data,

    input  logic                         commit_valid,
    input  logic                         commit_is_load,
    input  logic                         commit_is_store,
    input  logic [LSU_ADDR_SZ+1:0]       commit_idx,
    input  logic [ROB_ADDR_SZ-1:0]       rob_head_idx,

    input  logic [31:0]                  csr_crmd,
    input  logic [31:0]                  csr_asid,
    input  logic [31:0]                  csr_dmw0,
    input  logic [31:0]                  csr_dmw1,

    output logic                         tlb_req_valid,
    output logic [31:0]                  tlb_req_vaddr,
    output logic [9:0]                   tlb_req_asid,
    input  logic                         tlb_resp_valid,
    input  logic                         tlb_found,
    input  logic [5:0]                   tlb_ps,
    input  logic [19:0]                  tlb_ppn,
    input  logic                         tlb_v,
    input  logic                         tlb_d,
    input  logic [1:0]                   tlb_mat,
    input  logic [1:0]                   tlb_plv,

    output logic                         xlate_xcpt_valid,
    input  logic                         xlate_xcpt_ready,
    output logic [5:0]                   xlate_xcpt_code,
    output logic [31:0]                  xlate_xcpt_badvaddr,
    output logic [ROB_ADDR_SZ-1:0]       xlate_xcpt_rob_idx,
    output logic [LSU_ADDR_SZ+1:0]       xlate_xcpt_tag,
    output logic                         xlate_xcpt_is_store,

    output logic                         dcache_req_valid,
    input  logic                         dcache_req_ready,
    output logic                         dcache_req_is_store,
    output logic                         dcache_req_cacheable,
    output logic [XLEN-1:0]              dcache_req_addr,
    output logic [XLEN-1:0]              dcache_req_data,
    output logic [XLEN/8-1:0]            dcache_req_mask,
    output logic [1:0]                   dcache_req_size,
    output logic [LSU_ADDR_SZ+1:0]       dcache_req_idx,
    output logic [ROB_ADDR_SZ-1:0]       dcache_req_rob_idx,

    input  logic                         dcache_resp_valid,
    input  logic                         dcache_resp_is_store,
    input  logic [XLEN-1:0]              dcache_resp_data,
    input  logic [LSU_ADDR_SZ+1:0]       dcache_resp_idx,

    output logic                         clr_bsy_valid,
    output logic [ROB_ADDR_SZ-1:0]       clr_bsy_rob_idx,
    output logic                         load_wb_valid,
    output logic [XLEN-1:0]              load_wb_data,
    output logic [ROB_ADDR_SZ-1:0]       load_wb_rob_idx,
    output logic [LDQ_ADDR_SZ+1:0]       load_wb_ldq_idx,

    input  logic                         flush_pipeline,
    output logic                         ldq_empty,
    output logic                         stq_empty
);
    localparam int TAG_WIDTH = LSU_ADDR_SZ + 2;

    logic [0:0] dis_valid_vec;
    logic [0:0] dis_fire_vec;
    logic [0:0] dis_uses_ldq;
    logic [0:0] dis_uses_stq;
    uop_t [0:0] dis_uops;
    logic [0:0] dis_lsq_ready;
    logic [0:0][LDQ_ADDR_SZ+1:0] dis_ldq_idx_vec;
    logic [0:0][STQ_ADDR_SZ+1:0] dis_stq_idx_vec;

    logic [0:0] lsu_agen_valid;
    uop_t [0:0] lsu_agen_uops;
    logic [0:0][XLEN-1:0] lsu_agen_addr;

    logic [0:0] dgen_valid_vec;
    uop_t [0:0] dgen_uops;
    logic [0:0][XLEN-1:0] dgen_data_vec;

    logic [0:0] commit_valid_vec;
    uop_t [0:0] commit_uops;
    logic [0:0] clr_bsy_valid_vec;
    logic [0:0][ROB_ADDR_SZ-1:0] clr_bsy_rob_idx_vec;

    exe_unit_resp_t load_wb_resp;
    uop_t dcache_req_uop;
    br_update_info_t brupdate;

    logic dmmu_req_valid;
    logic dmmu_req_ready;
    logic [TAG_WIDTH-1:0] dmmu_req_tag;
    logic [31:0] dmmu_req_vaddr;
    logic [1:0] dmmu_req_access;
    logic dmmu_resp_valid;
    logic dmmu_resp_ready;
    logic [31:0] dmmu_resp_vaddr;
    logic [1:0] dmmu_resp_access;
    logic [TAG_WIDTH-1:0] dmmu_resp_tag;
    logic [31:0] dmmu_resp_paddr;
    logic [1:0] dmmu_resp_mat;
    logic dmmu_resp_cacheable;
    logic dmmu_resp_xcpt_valid;
    logic [5:0] dmmu_resp_xcpt_code;
    logic [31:0] dmmu_resp_badvaddr;

    uop_t xlate_uop_in;
    exception_t lsu_xlate_xcpt;

    always_comb begin
        dis_valid_vec[0] = dis_valid;
        dis_fire_vec[0] = dis_fire;
        dis_uses_ldq[0] = dis_is_load;
        dis_uses_stq[0] = dis_is_store;
        dis_uops[0] = '0;
        dis_uops[0].uses_ldq = dis_is_load;
        dis_uops[0].uses_stq = dis_is_store;
        dis_uops[0].rob_idx = dis_rob_idx;
        dis_uops[0].pdst = dis_pdst;
        dis_uops[0].mem_size = dis_mem_size;
        dis_uops[0].mem_signed = dis_mem_signed;

        xlate_uop_in = '0;
        xlate_uop_in.uses_ldq = agen_is_load;
        xlate_uop_in.uses_stq = agen_is_store;
        xlate_uop_in.ldq_idx = agen_idx[LDQ_ADDR_SZ+1:0];
        xlate_uop_in.stq_idx = agen_idx[STQ_ADDR_SZ+1:0];
        xlate_uop_in.rob_idx = agen_rob_idx;
        xlate_uop_in.pdst = agen_pdst;
        xlate_uop_in.mem_size = agen_mem_size;
        xlate_uop_in.mem_signed = agen_mem_signed;

        lsu_agen_valid[0] =
            agen_valid && (agen_is_load || agen_is_store) &&
            !flush_pipeline;
        lsu_agen_uops[0] = xlate_uop_in;
        lsu_agen_addr[0] = agen_vaddr;

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

    assign dis_ready = dis_lsq_ready[0];
    assign dis_ldq_idx = dis_ldq_idx_vec[0];
    assign dis_stq_idx = dis_stq_idx_vec[0];

    assign agen_ready = !flush_pipeline;
    assign xlate_xcpt_valid = lsu_xlate_xcpt.valid;
    assign xlate_xcpt_code = lsu_xlate_xcpt.cause;
    assign xlate_xcpt_badvaddr = lsu_xlate_xcpt.badvaddr;
    assign xlate_xcpt_rob_idx = lsu_xlate_xcpt.uop.rob_idx;
    assign xlate_xcpt_tag = lsu_xlate_xcpt.uop.uses_stq ?
                            lsu_xlate_xcpt.uop.stq_idx :
                            lsu_xlate_xcpt.uop.ldq_idx;
    assign xlate_xcpt_is_store = lsu_xlate_xcpt.uop.uses_stq;

    assign clr_bsy_valid = clr_bsy_valid_vec[0];
    assign clr_bsy_rob_idx = clr_bsy_rob_idx_vec[0];
    assign load_wb_data = load_wb_resp.data;
    assign load_wb_rob_idx = load_wb_resp.uop.rob_idx;
    assign load_wb_ldq_idx = load_wb_resp.uop.ldq_idx;
    assign dcache_req_rob_idx = dcache_req_uop.rob_idx;

    dmmu #(
        .ASID_WIDTH(10),
        .TAG_WIDTH (TAG_WIDTH)
    ) dmmu_i (
        .clk,
        .rst_n,
        .flush             (flush_pipeline),
        .req_valid         (dmmu_req_valid),
        .req_ready         (dmmu_req_ready),
        .req_tag           (dmmu_req_tag),
        .req_vaddr         (dmmu_req_vaddr),
        .req_access        (dmmu_req_access),
        .csr_crmd,
        .csr_asid,
        .csr_dmw0,
        .csr_dmw1,
        .tlb_req_valid,
        .tlb_req_vaddr,
        .tlb_req_asid,
        .tlb_resp_valid,
        .tlb_found,
        .tlb_ps,
        .tlb_ppn,
        .tlb_v,
        .tlb_d,
        .tlb_mat,
        .tlb_plv,
        .resp_valid        (dmmu_resp_valid),
        .resp_ready        (dmmu_resp_ready),
        .resp_tag          (dmmu_resp_tag),
        .resp_vaddr        (dmmu_resp_vaddr),
        .resp_access       (dmmu_resp_access),
        .resp_paddr        (dmmu_resp_paddr),
        .resp_mat          (dmmu_resp_mat),
        .resp_cacheable    (dmmu_resp_cacheable),
        .resp_xcpt_valid   (dmmu_resp_xcpt_valid),
        .resp_xcpt_code    (dmmu_resp_xcpt_code),
        .resp_badvaddr     (dmmu_resp_badvaddr)
    );

    lsu #(
        .DISPATCH_WIDTH(1),
        .AGEN_WIDTH    (1),
        .DGEN_WIDTH    (1),
        .COMMIT_WIDTH  (1),
        .CLR_WIDTH     (1)
    ) lsu_i (
        .clk,
        .rst_n,
        .dis_valid         (dis_valid_vec),
        .dis_uops          (dis_uops),
        .dis_uses_ldq      (dis_uses_ldq),
        .dis_uses_stq      (dis_uses_stq),
        .dis_lsq_ready     (dis_lsq_ready),
        .dis_ldq_idx       (dis_ldq_idx_vec),
        .dis_stq_idx       (dis_stq_idx_vec),
        .dis_fire          (dis_fire_vec),
        .agen_valid        (lsu_agen_valid),
        .agen_uops         (lsu_agen_uops),
        .agen_addr         (lsu_agen_addr),
        .dgen_valid        (dgen_valid_vec),
        .dgen_uops         (dgen_uops),
        .dgen_data         (dgen_data_vec),
        .xlate_req_valid   (dmmu_req_valid),
        .xlate_req_ready   (dmmu_req_ready),
        .xlate_req_tag     (dmmu_req_tag),
        .xlate_req_vaddr   (dmmu_req_vaddr),
        .xlate_req_access  (dmmu_req_access),
        .xlate_resp_valid  (dmmu_resp_valid),
        .xlate_resp_ready  (dmmu_resp_ready),
        .xlate_resp_tag    (dmmu_resp_tag),
        .xlate_resp_access (dmmu_resp_access),
        .xlate_resp_paddr  (dmmu_resp_paddr),
        .xlate_resp_mat    (dmmu_resp_mat),
        .xlate_resp_cacheable(dmmu_resp_cacheable),
        .xlate_resp_xcpt_valid(dmmu_resp_xcpt_valid),
        .xlate_resp_xcpt_code(dmmu_resp_xcpt_code),
        .xlate_resp_badvaddr(dmmu_resp_badvaddr),
        .xlate_xcpt        (lsu_xlate_xcpt),
        .xlate_xcpt_ready  (xlate_xcpt_ready),
        .commit_valid      (commit_valid_vec),
        .commit_uops       (commit_uops),
        .rob_head_idx,
        .clr_bsy_valid     (clr_bsy_valid_vec),
        .clr_bsy_rob_idx   (clr_bsy_rob_idx_vec),
        .load_wb_valid,
        .load_wb_resp,
        .dmem_req_valid    (dcache_req_valid),
        .dmem_req_ready    (dcache_req_ready),
        .dmem_req_is_store (dcache_req_is_store),
        .dmem_req_cacheable(dcache_req_cacheable),
        .dmem_req_addr     (dcache_req_addr),
        .dmem_req_data     (dcache_req_data),
        .dmem_req_mask     (dcache_req_mask),
        .dmem_req_size     (dcache_req_size),
        .dmem_req_idx      (dcache_req_idx),
        .dmem_req_uop      (dcache_req_uop),
        .dmem_resp_valid   (dcache_resp_valid),
        .dmem_resp_is_store(dcache_resp_is_store),
        .dmem_resp_data    (dcache_resp_data),
        .dmem_resp_idx     (dcache_resp_idx),
        .brupdate,
        .flush_pipeline,
        .ldq_empty,
        .stq_empty
    );
endmodule
