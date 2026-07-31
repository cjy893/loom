module mmu_integration_test_top #(
    parameter int NUM_ENTRIES = 8,
    parameter int IDX_W =
        (NUM_ENTRIES <= 1) ? 1 : $clog2(NUM_ENTRIES)
) (
    input  logic                 clk,
    input  logic                 rst_n,

    input  logic                 req_valid,
    input  logic [31:0]          req_vaddr,
    input  logic [1:0]           req_access,
    input  logic [9:0]           csr_asid,
    input  logic [1:0]           csr_plv,
    input  logic                 csr_da,
    input  logic                 csr_pg,
    input  logic [1:0]           csr_datf,
    input  logic [1:0]           csr_datm,
    input  logic [31:0]          csr_dmw0,
    input  logic [31:0]          csr_dmw1,

    output logic                 resp_valid,
    output logic [31:0]          resp_paddr,
    output logic [1:0]           resp_mat,
    output logic                 resp_cacheable,
    output logic                 resp_use_tlb,
    output logic [1:0]           resp_dmw_hit,
    output logic                 resp_xcpt_valid,
    output logic [5:0]           resp_xcpt_code,
    output logic [31:0]          resp_badvaddr,

    input  logic                 wr_valid,
    input  logic [IDX_W-1:0]     wr_idx,
    input  logic                 wr_e,
    input  logic [18:0]          wr_vppn,
    input  logic [9:0]           wr_asid,
    input  logic                 wr_g,
    input  logic [5:0]           wr_ps,
    input  logic [19:0]          wr_ppn0,
    input  logic [19:0]          wr_ppn1,
    input  logic [1:0]           wr_mat0,
    input  logic [1:0]           wr_mat1,
    input  logic [1:0]           wr_plv0,
    input  logic [1:0]           wr_plv1,
    input  logic                 wr_d0,
    input  logic                 wr_d1,
    input  logic                 wr_v0,
    input  logic                 wr_v1,

    input  logic                 inv_valid,
    input  logic [4:0]           inv_op,
    input  logic [9:0]           inv_asid,
    input  logic [31:0]          inv_vaddr
);

    logic req_valid_q;
    logic [31:0] req_vaddr_q;
    logic [1:0] req_access_q;
    logic [1:0] csr_plv_q;
    logic csr_da_q;
    logic csr_pg_q;
    logic [1:0] csr_datf_q;
    logic [1:0] csr_datm_q;
    logic [31:0] csr_dmw0_q;
    logic [31:0] csr_dmw1_q;

    logic tlb_resp_valid;
    logic tlb_found;
    logic [5:0] tlb_ps;
    logic [19:0] tlb_ppn;
    logic tlb_v;
    logic tlb_d;
    logic [1:0] tlb_mat;
    logic [1:0] tlb_plv;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            req_valid_q <= 1'b0;
        end else begin
            req_valid_q <= req_valid;
            if (req_valid) begin
                req_vaddr_q  <= req_vaddr;
                req_access_q <= req_access;
                csr_plv_q    <= csr_plv;
                csr_da_q     <= csr_da;
                csr_pg_q     <= csr_pg;
                csr_datf_q   <= csr_datf;
                csr_datm_q   <= csr_datm;
                csr_dmw0_q   <= csr_dmw0;
                csr_dmw1_q   <= csr_dmw1;
            end
        end
    end

    tlb #(
        .NUM_ENTRIES  (NUM_ENTRIES),
        .TLB_IDX_WIDTH(IDX_W),
        .ASID_WIDTH   (10)
    ) tlb_i (
        .clk,
        .rst_n,
        .q0_valid      (req_valid),
        .q0_vaddr      (req_vaddr),
        .q0_asid       (csr_asid),
        .q0_resp_valid (tlb_resp_valid),
        .q0_found      (tlb_found),
        .q0_idx        (),
        .q0_ps         (tlb_ps),
        .q0_ppn        (tlb_ppn),
        .q0_v          (tlb_v),
        .q0_d          (tlb_d),
        .q0_mat        (tlb_mat),
        .q0_plv        (tlb_plv),
        .q1_valid      (1'b0),
        .q1_vaddr      ('0),
        .q1_asid       ('0),
        .q1_resp_valid (),
        .q1_found      (),
        .q1_idx        (),
        .q1_ps         (),
        .q1_ppn        (),
        .q1_v          (),
        .q1_d          (),
        .q1_mat        (),
        .q1_plv        (),
        .wr_valid,
        .wr_idx,
        .wr_e,
        .wr_vppn,
        .wr_asid,
        .wr_g,
        .wr_ps,
        .wr_ppn0,
        .wr_ppn1,
        .wr_mat0,
        .wr_mat1,
        .wr_plv0,
        .wr_plv1,
        .wr_d0,
        .wr_d1,
        .wr_v0,
        .wr_v1,
        .rd_idx        (IDX_W'(0)),
        .rd_e          (),
        .rd_vppn       (),
        .rd_asid       (),
        .rd_g          (),
        .rd_ps         (),
        .rd_ppn0       (),
        .rd_ppn1       (),
        .rd_mat0       (),
        .rd_mat1       (),
        .rd_plv0       (),
        .rd_plv1       (),
        .rd_d0         (),
        .rd_d1         (),
        .rd_v0         (),
        .rd_v1         (),
        .inv_valid,
        .inv_op,
        .inv_asid,
        .inv_vaddr
    );

    addr_trans addr_trans_i (
        .req_valid      (req_valid_q),
        .req_vaddr      (req_vaddr_q),
        .req_access     (req_access_q),
        .csr_plv        (csr_plv_q),
        .csr_da         (csr_da_q),
        .csr_pg         (csr_pg_q),
        .csr_datf       (csr_datf_q),
        .csr_datm       (csr_datm_q),
        .csr_dmw0       (csr_dmw0_q),
        .csr_dmw1       (csr_dmw1_q),
        .tlb_resp_valid,
        .tlb_found,
        .tlb_ps,
        .tlb_ppn,
        .tlb_v,
        .tlb_d,
        .tlb_mat,
        .tlb_plv,
        .resp_valid,
        .resp_paddr,
        .resp_mat,
        .resp_cacheable,
        .resp_use_tlb,
        .resp_dmw_hit,
        .resp_xcpt_valid,
        .resp_xcpt_code,
        .resp_badvaddr
    );

endmodule
