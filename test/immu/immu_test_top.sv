module immu_test_top #(
    parameter int ASID_WIDTH = 10
) (
    input  logic                  clk,
    input  logic                  rst_n,
    input  logic                  flush,

    input  logic                  req_valid,
    output logic                  req_ready,
    input  logic [31:0]           req_vaddr,

    input  logic [31:0]           csr_crmd,
    input  logic [31:0]           csr_asid,
    input  logic [31:0]           csr_dmw0,
    input  logic [31:0]           csr_dmw1,

    output logic                  tlb_req_valid,
    input  logic                  tlb_req_ready,
    output logic [31:0]           tlb_req_vaddr,
    output logic [ASID_WIDTH-1:0] tlb_req_asid,
    input  logic                  tlb_resp_valid,
    input  logic                  tlb_found,
    input  logic [5:0]            tlb_ps,
    input  logic [19:0]           tlb_ppn,
    input  logic                  tlb_v,
    input  logic                  tlb_d,
    input  logic [1:0]            tlb_mat,
    input  logic [1:0]            tlb_plv,

    output logic                  resp_valid,
    input  logic                  resp_ready,
    output logic [31:0]           resp_vaddr,
    output logic [31:0]           resp_paddr,
    output logic [1:0]            resp_mat,
    output logic                  resp_cacheable,
    output logic                  resp_xcpt_valid,
    output logic [5:0]            resp_xcpt_code,
    output logic [31:0]           resp_badvaddr
);
    immu #(
        .ASID_WIDTH(ASID_WIDTH)
    ) dut (
        .clk,
        .rst_n,
        .flush,
        .req_valid,
        .req_ready,
        .req_vaddr,
        .csr_crmd,
        .csr_asid,
        .csr_dmw0,
        .csr_dmw1,
        .tlb_req_valid,
        .tlb_req_ready,
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
        .resp_valid,
        .resp_ready,
        .resp_vaddr,
        .resp_paddr,
        .resp_mat,
        .resp_cacheable,
        .resp_xcpt_valid,
        .resp_xcpt_code,
        .resp_badvaddr
    );
endmodule
