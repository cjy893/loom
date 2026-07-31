import loom_consts::*;

module addr_trans(
    input logic req_valid,
    input logic [31:0] req_vaddr,
    input logic [1:0] req_access,

    input logic [1:0] csr_plv,
    input logic csr_da,
    input logic csr_pg,
    input logic [1:0] csr_datf,
    input logic [1:0] csr_datm,
    input logic [31:0] csr_dmw0,
    input logic [31:0] csr_dmw1,

    input logic tlb_resp_valid,
    input logic tlb_found,
    input logic [5:0] tlb_ps,
    input logic [19:0] tlb_ppn,
    input logic tlb_v,
    input logic tlb_d,
    input logic [1:0] tlb_mat,
    input logic [1:0] tlb_plv,

    output logic resp_valid,
    output logic [31:0] resp_paddr,
    output logic [1:0] resp_mat,
    output logic resp_cacheable,

    output logic resp_use_tlb,
    output logic [1:0] resp_dmw_hit,

    output logic resp_xcpt_valid,
    output logic [5:0] resp_xcpt_code,
    output logic [31:0] resp_badvaddr
);
    function automatic logic dmw_matches(
        input logic [2:0] dmw_vseg,
        input logic dmw_plv0,
        input logic dmw_plv3,
        input logic [2:0] vaddr_vseg,
        input logic [1:0] plv
    );
        dmw_matches = (dmw_vseg == vaddr_vseg) && (((plv == 2'd0) && dmw_plv0) || ((plv == 2'd3) && dmw_plv3));
    endfunction

    always_comb begin
        logic dmw0_hit;
        logic dmw1_hit;
        logic [31:0] offset_mask;
        logic [31:0] ppn_base;

        resp_valid = 1'b0;
        resp_paddr = '0;
        resp_mat = '0;
        resp_cacheable = 1'b0;
        resp_use_tlb = 1'b0;
        resp_dmw_hit = '0;
        resp_xcpt_valid = 1'b0;
        resp_xcpt_code = '0;
        resp_badvaddr = '0;

        dmw0_hit = 1'b0;
        dmw1_hit = 1'b0;
        offset_mask = '0;
        ppn_base = {tlb_ppn, 12'b0};

        if(req_valid) begin
            if(csr_da && !csr_pg) begin
                resp_paddr = req_vaddr;
                resp_mat = (req_access == ACCESS_FETCH) ? csr_datf : csr_datm;
            end else if(!csr_da && csr_pg) begin
                dmw0_hit = dmw_matches(csr_dmw0[31:29], csr_dmw0[0], csr_dmw0[3], req_vaddr[31:29], csr_plv);
                dmw1_hit = dmw_matches(csr_dmw1[31:29], csr_dmw1[0], csr_dmw1[3], req_vaddr[31:29], csr_plv);

                resp_dmw_hit = {dmw1_hit, dmw0_hit};

                if(dmw0_hit) begin
                    resp_paddr = {csr_dmw0[27:25], req_vaddr[28:0]};
                    resp_mat = csr_dmw0[5:4];
                end else if(dmw1_hit) begin
                    resp_paddr = {csr_dmw1[27:25], req_vaddr[28:0]};
                    resp_mat = csr_dmw1[5:4];
                end else begin
                    resp_use_tlb = 1'b1;

                    if(tlb_resp_valid) begin
                        resp_mat = tlb_mat;
                        if((tlb_ps >= 6'd12) && (tlb_ps <= 6'd31)) offset_mask = 32'hffff_ffff >> (6'd32 - tlb_ps);
                        resp_paddr = (ppn_base & ~offset_mask) | (req_vaddr & offset_mask);

                        if(!tlb_found) begin
                            resp_xcpt_valid = 1'b1;
                            resp_xcpt_code = ECODE_TLBR;
                        end else if(!tlb_v) begin
                            resp_xcpt_valid = 1'b1;
                            case(req_access)
                                ACCESS_FETCH: resp_xcpt_code = ECODE_PIF;
                                ACCESS_STORE: resp_xcpt_code = ECODE_PIS;
                                default: resp_xcpt_code = ECODE_PIL;
                            endcase
                        end else if(csr_plv > tlb_plv) begin
                            resp_xcpt_valid = 1'b1;
                            resp_xcpt_code = ECODE_PPI;
                        end else if((req_access == ACCESS_STORE) && !tlb_d) begin
                            resp_xcpt_valid = 1'b1;
                            resp_xcpt_code = ECODE_PME;
                        end
                    end
                end
            end else begin
                resp_paddr = req_vaddr;
                resp_mat = (req_access == ACCESS_FETCH) ? csr_datf : csr_datm;
            end
        end

        resp_valid = req_valid && (!resp_use_tlb || tlb_resp_valid);
        resp_cacheable = resp_valid && (resp_mat == 2'd1);
        if(resp_xcpt_valid) resp_badvaddr = req_vaddr;
    end
endmodule
