module mmu_test_top (
    input  logic        req_valid,
    input  logic [31:0] req_vaddr,
    input  logic [1:0]  req_access,
    input  logic [1:0]  csr_plv,
    input  logic        csr_da,
    input  logic        csr_pg,
    input  logic [1:0]  csr_datf,
    input  logic [1:0]  csr_datm,
    input  logic [31:0] csr_dmw0,
    input  logic [31:0] csr_dmw1,
    input  logic        tlb_resp_valid,
    input  logic        tlb_found,
    input  logic [5:0]  tlb_ps,
    input  logic [19:0] tlb_ppn,
    input  logic        tlb_v,
    input  logic        tlb_d,
    input  logic [1:0]  tlb_mat,
    input  logic [1:0]  tlb_plv,
    output logic        resp_valid,
    output logic [31:0] resp_paddr,
    output logic [1:0]  resp_mat,
    output logic        resp_cacheable,
    output logic        resp_use_tlb,
    output logic [1:0]  resp_dmw_hit,
    output logic        resp_xcpt_valid,
    output logic [5:0]  resp_xcpt_code,
    output logic [31:0] resp_badvaddr
);

    addr_trans dut (.*);

endmodule
