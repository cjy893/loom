import loom_params::*;

module tlb_ctrl_test_top #(
    parameter int NUM_ENTRIES = 8,
    parameter bit USE_REFERENCE = 1'b0,
    parameter int TLB_IDX_WIDTH =
        (NUM_ENTRIES <= 1) ? 1 : $clog2(NUM_ENTRIES),
    parameter int ASID_WIDTH = ASID_BITS,
    parameter int ROB_IDX_WIDTH = ROB_ADDR_SZ
)(
    input  logic clk,
    input  logic rst_n,

    input  logic req_valid,
    output logic req_ready,
    input  logic [ROB_IDX_WIDTH-1:0] req_rob_idx,
    input  logic [2:0] req_cmd,
    input  logic [4:0] req_inv_op,
    input  logic [ASID_WIDTH-1:0] req_inv_asid,
    input  logic [31:0] req_inv_vaddr,

    output logic resp_valid,
    input  logic resp_ready,
    output logic [ROB_IDX_WIDTH-1:0] resp_rob_idx,

    input  logic commit_valid,
    input  logic [ROB_IDX_WIDTH-1:0] commit_rob_idx,
    input  logic flush_pending,

    input  logic [31:0] csr_tlbidx,
    input  logic [31:0] csr_tlbehi,
    input  logic [31:0] csr_tlbelo0,
    input  logic [31:0] csr_tlbelo1,
    input  logic [31:0] csr_asid,

    output logic csr_update_valid,
    output logic [4:0] csr_update_mask,
    output logic [31:0] csr_tlbidx_wdata,
    output logic [31:0] csr_tlbehi_wdata,
    output logic [31:0] csr_tlbelo0_wdata,
    output logic [31:0] csr_tlbelo1_wdata,
    output logic [31:0] csr_asid_wdata,

    output logic search_active,
    output logic search_req_valid,
    output logic [31:0] search_req_vaddr,
    output logic [ASID_WIDTH-1:0] search_req_asid,
    input  logic search_resp_valid,
    input  logic search_resp_found,
    input  logic [TLB_IDX_WIDTH-1:0] search_idx,

    output logic [TLB_IDX_WIDTH-1:0] rd_idx,
    input  logic rd_e,
    input  logic [18:0] rd_vppn,
    input  logic [ASID_WIDTH-1:0] rd_asid,
    input  logic rd_g,
    input  logic [5:0] rd_ps,
    input  logic [19:0] rd_ppn0,
    input  logic [19:0] rd_ppn1,
    input  logic [1:0] rd_mat0,
    input  logic [1:0] rd_mat1,
    input  logic [1:0] rd_plv0,
    input  logic [1:0] rd_plv1,
    input  logic rd_d0,
    input  logic rd_d1,
    input  logic rd_v0,
    input  logic rd_v1,

    output logic wr_valid,
    output logic [TLB_IDX_WIDTH-1:0] wr_idx,
    output logic wr_e,
    output logic [18:0] wr_vppn,
    output logic [ASID_WIDTH-1:0] wr_asid,
    output logic wr_g,
    output logic [5:0] wr_ps,
    output logic [19:0] wr_ppn0,
    output logic [19:0] wr_ppn1,
    output logic [1:0] wr_mat0,
    output logic [1:0] wr_mat1,
    output logic [1:0] wr_plv0,
    output logic [1:0] wr_plv1,
    output logic wr_d0,
    output logic wr_d1,
    output logic wr_v0,
    output logic wr_v1,

    output logic inv_valid,
    output logic [4:0] inv_op,
    output logic [ASID_WIDTH-1:0] inv_asid,
    output logic [31:0] inv_vaddr,

    output logic [31:0] config_num_entries
);

    assign config_num_entries = NUM_ENTRIES;

    generate
        if (USE_REFERENCE) begin : gen_reference
            tlb_ctrl_reference #(
                .NUM_ENTRIES  (NUM_ENTRIES),
                .TLB_IDX_WIDTH(TLB_IDX_WIDTH),
                .ASID_WIDTH   (ASID_WIDTH),
                .ROB_IDX_WIDTH(ROB_IDX_WIDTH)
            ) dut (.*);
        end else begin : gen_production
            tlb_ctrl #(
                .NUM_ENTRIES  (NUM_ENTRIES),
                .TLB_IDX_WIDTH(TLB_IDX_WIDTH),
                .ASID_WIDTH   (ASID_WIDTH),
                .ROB_IDX_WIDTH(ROB_IDX_WIDTH)
            ) dut (.*);
        end
    endgenerate

endmodule
