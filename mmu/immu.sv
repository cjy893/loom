import loom_consts::*;

module immu #(
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
    typedef enum logic [1:0] {
        S_IDLE,
        S_CHECK,
        S_TLB_WAIT,
        S_RESPONSE
    } state_t;

    state_t state;

    logic [31:0] req_vaddr_q;
    logic [31:0] csr_crmd_q;
    logic [31:0] csr_asid_q;
    logic [31:0] csr_dmw0_q;
    logic [31:0] csr_dmw1_q;

    logic [31:0] resp_vaddr_q;
    logic [31:0] resp_paddr_q;
    logic [1:0]  resp_mat_q;
    logic        resp_cacheable_q;
    logic        resp_xcpt_valid_q;
    logic [5:0]  resp_xcpt_code_q;
    logic [31:0] resp_badvaddr_q;

    logic        trans_req_valid;
    logic        trans_resp_valid;
    logic [31:0] trans_paddr;
    logic [1:0]  trans_mat;
    logic        trans_cacheable;
    logic        trans_use_tlb;
    logic [1:0]  trans_dmw_hit;
    logic        trans_xcpt_valid;
    logic [5:0]  trans_xcpt_code;
    logic [31:0] trans_badvaddr;

    logic tlb_req_fire;

    assign tlb_req_fire = tlb_req_valid && tlb_req_ready;
    assign trans_req_valid = (state == S_CHECK) || ((state == S_TLB_WAIT) && tlb_resp_valid);

    addr_trans trans (
        .req_valid       (trans_req_valid),
        .req_vaddr       (req_vaddr_q),
        .req_access      (ACCESS_FETCH),
        .csr_plv         (csr_crmd_q[1:0]),
        .csr_da          (csr_crmd_q[3]),
        .csr_pg          (csr_crmd_q[4]),
        .csr_datf        (csr_crmd_q[6:5]),
        .csr_datm        (csr_crmd_q[8:7]),
        .csr_dmw0        (csr_dmw0_q),
        .csr_dmw1        (csr_dmw1_q),
        .tlb_resp_valid  ((state == S_TLB_WAIT) && tlb_resp_valid),
        .tlb_found,
        .tlb_ps,
        .tlb_ppn,
        .tlb_v,
        .tlb_d,
        .tlb_mat,
        .tlb_plv,
        .resp_valid      (trans_resp_valid),
        .resp_paddr      (trans_paddr),
        .resp_mat        (trans_mat),
        .resp_cacheable  (trans_cacheable),
        .resp_use_tlb    (trans_use_tlb),
        .resp_dmw_hit    (trans_dmw_hit),
        .resp_xcpt_valid (trans_xcpt_valid),
        .resp_xcpt_code  (trans_xcpt_code),
        .resp_badvaddr   (trans_badvaddr)
    );

    always_comb begin
        req_ready = (state == S_IDLE) && !flush;

        tlb_req_valid = (state == S_CHECK) && trans_use_tlb && !flush;
        tlb_req_vaddr = req_vaddr_q;
        tlb_req_asid = csr_asid_q[ASID_WIDTH-1:0];

        resp_valid = (state == S_RESPONSE) && !flush;
        resp_vaddr = resp_vaddr_q;
        resp_paddr = resp_paddr_q;
        resp_mat = resp_mat_q;
        resp_cacheable = resp_cacheable_q;
        resp_xcpt_valid = resp_xcpt_valid_q;
        resp_xcpt_code = resp_xcpt_code_q;
        resp_badvaddr = resp_badvaddr_q;
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= S_IDLE;
            req_vaddr_q <= '0;
            csr_crmd_q <= '0;
            csr_asid_q <= '0;
            csr_dmw0_q <= '0;
            csr_dmw1_q <= '0;
            resp_vaddr_q <= '0;
            resp_paddr_q <= '0;
            resp_mat_q <= '0;
            resp_cacheable_q <= 1'b0;
            resp_xcpt_valid_q <= 1'b0;
            resp_xcpt_code_q <= '0;
            resp_badvaddr_q <= '0;
        end else if (flush) begin
            state <= S_IDLE;
        end else begin
            unique case (state)
                S_IDLE: begin
                    if (req_valid && req_ready) begin
                        req_vaddr_q <= req_vaddr;
                        csr_crmd_q <= csr_crmd;
                        csr_asid_q <= csr_asid;
                        csr_dmw0_q <= csr_dmw0;
                        csr_dmw1_q <= csr_dmw1;
                        state <= S_CHECK;
                    end
                end

                S_CHECK: begin
                    if (trans_resp_valid) begin
                        resp_vaddr_q <= req_vaddr_q;
                        resp_paddr_q <= trans_paddr;
                        resp_mat_q <= trans_mat;
                        resp_cacheable_q <= trans_cacheable;
                        resp_xcpt_valid_q <= trans_xcpt_valid;
                        resp_xcpt_code_q <= trans_xcpt_code;
                        resp_badvaddr_q <= trans_badvaddr;
                        state <= S_RESPONSE;
                    end else if (trans_use_tlb && tlb_req_fire) begin
                        state <= S_TLB_WAIT;
                    end
                end

                S_TLB_WAIT: begin
                    if (trans_resp_valid) begin
                        resp_vaddr_q <= req_vaddr_q;
                        resp_paddr_q <= trans_paddr;
                        resp_mat_q <= trans_mat;
                        resp_cacheable_q <= trans_cacheable;
                        resp_xcpt_valid_q <= trans_xcpt_valid;
                        resp_xcpt_code_q <= trans_xcpt_code;
                        resp_badvaddr_q <= trans_badvaddr;
                        state <= S_RESPONSE;
                    end
                end

                S_RESPONSE: begin
                    if (resp_valid && resp_ready) state <= S_IDLE;
                end

                default: state <= S_IDLE;
            endcase
        end
    end
endmodule
