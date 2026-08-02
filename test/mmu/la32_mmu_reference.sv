module la32_mmu_reference (
    input  logic        req_valid,
    input  logic [31:0] req_vaddr,
    input  logic [1:0]  req_access,

    input  logic [1:0]  csr_plv,
    input  logic        csr_da,
    input  logic        csr_pg,
    input  logic [1:0]  csr_datf,
    input  logic [1:0]  csr_datm,
    /* verilator lint_off UNUSEDSIGNAL */
    input  logic [31:0] csr_dmw0,
    input  logic [31:0] csr_dmw1,
    /* verilator lint_on UNUSEDSIGNAL */

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

    localparam logic [1:0] ACCESS_FETCH = 2'd0;
    localparam logic [1:0] ACCESS_STORE = 2'd2;

    localparam logic [5:0] ECODE_PIL  = 6'h01;
    localparam logic [5:0] ECODE_PIS  = 6'h02;
    localparam logic [5:0] ECODE_PIF  = 6'h03;
    localparam logic [5:0] ECODE_PME  = 6'h04;
    localparam logic [5:0] ECODE_PPI  = 6'h07;
    localparam logic [5:0] ECODE_TLBR = 6'h3f;

    logic dmw0_match;
    logic dmw1_match;
    logic [31:0] page_offset_mask;
    logic [31:0] ppn_base;

    function automatic logic dmw_matches(
        input logic [2:0] dmw_vseg,
        input logic       dmw_plv0,
        input logic       dmw_plv3,
        input logic [2:0] vaddr_vseg,
        input logic [1:0]  plv
    );
        logic plv_enabled;
        begin
            plv_enabled = ((plv == 2'd0) && dmw_plv0) ||
                          ((plv == 2'd3) && dmw_plv3);
            dmw_matches = plv_enabled && (vaddr_vseg == dmw_vseg);
        end
    endfunction

    always_comb begin
        resp_valid     = req_valid;
        resp_paddr     = '0;
        resp_mat       = '0;
        resp_cacheable = 1'b0;
        resp_use_tlb   = 1'b0;
        resp_dmw_hit   = '0;
        resp_xcpt_valid = 1'b0;
        resp_xcpt_code = '0;
        resp_badvaddr  = '0;

        dmw0_match = 1'b0;
        dmw1_match = 1'b0;
        page_offset_mask = '0;
        ppn_base = {tlb_ppn, 12'b0};

        if (req_valid) begin
            if (csr_da && !csr_pg) begin
                resp_paddr = req_vaddr;
                resp_mat = (req_access == ACCESS_FETCH) ?
                           csr_datf : csr_datm;
            end else if (!csr_da && csr_pg) begin
                dmw0_match = dmw_matches(
                    csr_dmw0[31:29], csr_dmw0[0], csr_dmw0[3],
                    req_vaddr[31:29], csr_plv
                );
                dmw1_match = dmw_matches(
                    csr_dmw1[31:29], csr_dmw1[0], csr_dmw1[3],
                    req_vaddr[31:29], csr_plv
                );
                resp_dmw_hit = {dmw1_match, dmw0_match};

                if (dmw0_match) begin
                    resp_paddr = {csr_dmw0[27:25], req_vaddr[28:0]};
                    resp_mat = csr_dmw0[5:4];
                end else if (dmw1_match) begin
                    resp_paddr = {csr_dmw1[27:25], req_vaddr[28:0]};
                    resp_mat = csr_dmw1[5:4];
                end else begin
                    resp_use_tlb = 1'b1;
                    resp_mat = tlb_mat;

                    if ((tlb_ps >= 6'd12) && (tlb_ps <= 6'd31)) begin
                        page_offset_mask =
                            32'hffff_ffff >> (6'd32 - tlb_ps);
                    end
                    resp_paddr = (ppn_base & ~page_offset_mask) |
                                 (req_vaddr & page_offset_mask);

                    if (!tlb_found) begin
                        resp_xcpt_valid = 1'b1;
                        resp_xcpt_code = ECODE_TLBR;
                    end else if (!tlb_v) begin
                        resp_xcpt_valid = 1'b1;
                        unique case (req_access)
                            ACCESS_FETCH: resp_xcpt_code = ECODE_PIF;
                            ACCESS_STORE: resp_xcpt_code = ECODE_PIS;
                            default:      resp_xcpt_code = ECODE_PIL;
                        endcase
                    end else if (csr_plv > tlb_plv) begin
                        resp_xcpt_valid = 1'b1;
                        resp_xcpt_code = ECODE_PPI;
                    end else if ((req_access == ACCESS_STORE) && !tlb_d) begin
                        resp_xcpt_valid = 1'b1;
                        resp_xcpt_code = ECODE_PME;
                    end
                end
            end else begin
                // DA/PG=00 or 11 is architecturally invalid. Keep outputs
                // deterministic so integration bugs remain observable.
                resp_paddr = req_vaddr;
                resp_mat = (req_access == ACCESS_FETCH) ?
                           csr_datf : csr_datm;
            end

            resp_cacheable = (resp_mat == 2'd1);
            if (resp_xcpt_valid) begin
                resp_badvaddr = req_vaddr;
            end
        end
    end

endmodule
