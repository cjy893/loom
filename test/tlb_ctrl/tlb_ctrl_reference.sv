import loom_params::*;
import loom_consts::*;

module tlb_ctrl_reference #(
    parameter int NUM_ENTRIES = 8,
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
    output logic [31:0] inv_vaddr
);

    typedef enum logic [1:0] {
        S_IDLE,
        S_SEARCH,
        S_PENDING
    } state_t;

    state_t state_q;
    logic [ROB_IDX_WIDTH-1:0] pending_rob_idx_q;
    logic [2:0] pending_cmd_q;
    logic [4:0] pending_inv_op_q;
    logic [ASID_WIDTH-1:0] pending_inv_asid_q;
    logic [31:0] pending_inv_vaddr_q;

    logic [31:0] pending_tlbidx_q;
    logic [31:0] pending_tlbehi_q;
    logic [31:0] pending_tlbelo0_q;
    logic [31:0] pending_tlbelo1_q;
    logic [31:0] pending_asid_q;

    logic pending_rd_e_q;
    logic [18:0] pending_rd_vppn_q;
    logic [ASID_WIDTH-1:0] pending_rd_asid_q;
    logic pending_rd_g_q;
    logic [5:0] pending_rd_ps_q;
    logic [19:0] pending_rd_ppn0_q, pending_rd_ppn1_q;
    logic [1:0] pending_rd_mat0_q, pending_rd_mat1_q;
    logic [1:0] pending_rd_plv0_q, pending_rd_plv1_q;
    logic pending_rd_d0_q, pending_rd_d1_q;
    logic pending_rd_v0_q, pending_rd_v1_q;

    logic pending_search_found_q;
    logic [TLB_IDX_WIDTH-1:0] pending_search_idx_q;
    logic [TLB_IDX_WIDTH-1:0] fill_idx_q;
    logic resp_valid_q;

    logic req_fire;
    logic commit_match;

    assign req_ready = (state_q == S_IDLE) && !flush_pending;
    assign req_fire = req_valid && req_ready;
    assign commit_match =
        (state_q == S_PENDING) && commit_valid &&
        (commit_rob_idx == pending_rob_idx_q);

    assign resp_valid = resp_valid_q;
    assign resp_rob_idx = pending_rob_idx_q;

    assign search_req_valid =
        req_fire && (req_cmd == TLB_CMD_SEARCH);
    assign search_active =
        (state_q == S_SEARCH) || search_req_valid;
    assign search_req_vaddr = {csr_tlbehi[31:13], 13'b0};
    assign search_req_asid = csr_asid[ASID_WIDTH-1:0];

    assign rd_idx = csr_tlbidx[TLB_IDX_WIDTH-1:0];

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state_q <= S_IDLE;
            pending_rob_idx_q <= '0;
            pending_cmd_q <= TLB_CMD_NONE;
            pending_inv_op_q <= '0;
            pending_inv_asid_q <= '0;
            pending_inv_vaddr_q <= '0;
            pending_tlbidx_q <= '0;
            pending_tlbehi_q <= '0;
            pending_tlbelo0_q <= '0;
            pending_tlbelo1_q <= '0;
            pending_asid_q <= '0;
            pending_rd_e_q <= 1'b0;
            pending_rd_vppn_q <= '0;
            pending_rd_asid_q <= '0;
            pending_rd_g_q <= 1'b0;
            pending_rd_ps_q <= '0;
            pending_rd_ppn0_q <= '0;
            pending_rd_ppn1_q <= '0;
            pending_rd_mat0_q <= '0;
            pending_rd_mat1_q <= '0;
            pending_rd_plv0_q <= '0;
            pending_rd_plv1_q <= '0;
            pending_rd_d0_q <= 1'b0;
            pending_rd_d1_q <= 1'b0;
            pending_rd_v0_q <= 1'b0;
            pending_rd_v1_q <= 1'b0;
            pending_search_found_q <= 1'b0;
            pending_search_idx_q <= '0;
            fill_idx_q <= '0;
            resp_valid_q <= 1'b0;
        end else if (commit_match) begin
            state_q <= S_IDLE;
            resp_valid_q <= 1'b0;
            if (pending_cmd_q == TLB_CMD_FILL) begin
                if (fill_idx_q == TLB_IDX_WIDTH'(NUM_ENTRIES - 1))
                    fill_idx_q <= '0;
                else
                    fill_idx_q <= fill_idx_q + 1'b1;
            end
        end else if (flush_pending) begin
            state_q <= S_IDLE;
            resp_valid_q <= 1'b0;
        end else begin
            if (resp_valid_q && resp_ready)
                resp_valid_q <= 1'b0;

            if (req_fire) begin
                pending_rob_idx_q <= req_rob_idx;
                pending_cmd_q <= req_cmd;
                pending_inv_op_q <= req_inv_op;
                pending_inv_asid_q <= req_inv_asid;
                pending_inv_vaddr_q <= req_inv_vaddr;
                pending_tlbidx_q <= csr_tlbidx;
                pending_tlbehi_q <= csr_tlbehi;
                pending_tlbelo0_q <= csr_tlbelo0;
                pending_tlbelo1_q <= csr_tlbelo1;
                pending_asid_q <= csr_asid;

                if (req_cmd == TLB_CMD_SEARCH) begin
                    state_q <= S_SEARCH;
                end else begin
                    state_q <= S_PENDING;
                    resp_valid_q <= 1'b1;
                    if (req_cmd == TLB_CMD_READ) begin
                        pending_rd_e_q <= rd_e;
                        pending_rd_vppn_q <= rd_vppn;
                        pending_rd_asid_q <= rd_asid;
                        pending_rd_g_q <= rd_g;
                        pending_rd_ps_q <= rd_ps;
                        pending_rd_ppn0_q <= rd_ppn0;
                        pending_rd_ppn1_q <= rd_ppn1;
                        pending_rd_mat0_q <= rd_mat0;
                        pending_rd_mat1_q <= rd_mat1;
                        pending_rd_plv0_q <= rd_plv0;
                        pending_rd_plv1_q <= rd_plv1;
                        pending_rd_d0_q <= rd_d0;
                        pending_rd_d1_q <= rd_d1;
                        pending_rd_v0_q <= rd_v0;
                        pending_rd_v1_q <= rd_v1;
                    end
                end
            end else if ((state_q == S_SEARCH) && search_resp_valid) begin
                pending_search_found_q <= search_resp_found;
                pending_search_idx_q <= search_idx;
                state_q <= S_PENDING;
                resp_valid_q <= 1'b1;
            end
        end
    end

    always_comb begin
        wr_valid = 1'b0;
        wr_idx = '0;
        wr_e = 1'b0;
        wr_vppn = pending_tlbehi_q[31:13];
        wr_asid = pending_asid_q[ASID_WIDTH-1:0];
        wr_g = pending_tlbelo0_q[6] && pending_tlbelo1_q[6];
        wr_ps = pending_tlbidx_q[29:24];
        wr_ppn0 = pending_tlbelo0_q[27:8];
        wr_ppn1 = pending_tlbelo1_q[27:8];
        wr_mat0 = pending_tlbelo0_q[5:4];
        wr_mat1 = pending_tlbelo1_q[5:4];
        wr_plv0 = pending_tlbelo0_q[3:2];
        wr_plv1 = pending_tlbelo1_q[3:2];
        wr_d0 = pending_tlbelo0_q[1];
        wr_d1 = pending_tlbelo1_q[1];
        wr_v0 = pending_tlbelo0_q[0];
        wr_v1 = pending_tlbelo1_q[0];

        if (commit_match &&
            ((pending_cmd_q == TLB_CMD_WRITE) ||
             (pending_cmd_q == TLB_CMD_FILL))) begin
            wr_valid = 1'b1;
            if (pending_cmd_q == TLB_CMD_FILL) begin
                wr_idx = fill_idx_q;
                wr_e = 1'b1;
            end else begin
                wr_idx = pending_tlbidx_q[TLB_IDX_WIDTH-1:0];
                wr_e = !pending_tlbidx_q[31];
            end
        end
    end

    always_comb begin
        inv_valid = commit_match && (pending_cmd_q == TLB_CMD_INV);
        inv_op = pending_inv_op_q;
        inv_asid = pending_inv_asid_q;
        inv_vaddr = pending_inv_vaddr_q;
    end

    always_comb begin
        csr_update_valid = 1'b0;
        csr_update_mask = '0;
        csr_tlbidx_wdata = pending_tlbidx_q;
        csr_tlbehi_wdata = pending_tlbehi_q;
        csr_tlbelo0_wdata = pending_tlbelo0_q;
        csr_tlbelo1_wdata = pending_tlbelo1_q;
        csr_asid_wdata = pending_asid_q;

        if (commit_match && (pending_cmd_q == TLB_CMD_SEARCH)) begin
            csr_update_valid = 1'b1;
            csr_update_mask = 5'b00001;
            if (pending_search_found_q) begin
                csr_tlbidx_wdata[31] = 1'b0;
                csr_tlbidx_wdata[4:0] = '0;
                csr_tlbidx_wdata[TLB_IDX_WIDTH-1:0] =
                    pending_search_idx_q;
            end else begin
                csr_tlbidx_wdata[31] = 1'b1;
            end
        end else if (commit_match &&
                     (pending_cmd_q == TLB_CMD_READ)) begin
            csr_update_valid = 1'b1;
            csr_update_mask = 5'b11111;
            csr_tlbidx_wdata[31] = !pending_rd_e_q;
            csr_tlbidx_wdata[29:24] =
                pending_rd_e_q ? pending_rd_ps_q : 6'b0;

            if (pending_rd_e_q) begin
                csr_tlbehi_wdata = {pending_rd_vppn_q, 13'b0};
                csr_tlbelo0_wdata = {
                    4'b0, pending_rd_ppn0_q, 1'b0, pending_rd_g_q,
                    pending_rd_mat0_q, pending_rd_plv0_q,
                    pending_rd_d0_q, pending_rd_v0_q
                };
                csr_tlbelo1_wdata = {
                    4'b0, pending_rd_ppn1_q, 1'b0, pending_rd_g_q,
                    pending_rd_mat1_q, pending_rd_plv1_q,
                    pending_rd_d1_q, pending_rd_v1_q
                };
                csr_asid_wdata[ASID_WIDTH-1:0] = pending_rd_asid_q;
            end else begin
                csr_tlbehi_wdata = '0;
                csr_tlbelo0_wdata = '0;
                csr_tlbelo1_wdata = '0;
                csr_asid_wdata[ASID_WIDTH-1:0] = '0;
            end
        end
    end

endmodule
