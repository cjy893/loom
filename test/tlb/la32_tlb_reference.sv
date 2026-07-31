module la32_tlb_reference #(
    parameter int NUM_ENTRIES = 8,
    parameter int IDX_W = (NUM_ENTRIES <= 1) ? 1 : $clog2(NUM_ENTRIES)
) (
    input  logic                 clk,
    input  logic                 rst_n,

    input  logic                 q0_valid,
    input  logic [31:0]          q0_vaddr,
    input  logic [9:0]           q0_asid,
    output logic                 q0_resp_valid,
    output logic                 q0_found,
    output logic [IDX_W-1:0]     q0_index,
    output logic [5:0]           q0_ps,
    output logic [19:0]          q0_ppn,
    output logic                 q0_v,
    output logic                 q0_d,
    output logic [1:0]           q0_mat,
    output logic [1:0]           q0_plv,

    input  logic                 q1_valid,
    input  logic [31:0]          q1_vaddr,
    input  logic [9:0]           q1_asid,
    output logic                 q1_resp_valid,
    output logic                 q1_found,
    output logic [IDX_W-1:0]     q1_index,
    output logic [5:0]           q1_ps,
    output logic [19:0]          q1_ppn,
    output logic                 q1_v,
    output logic                 q1_d,
    output logic [1:0]           q1_mat,
    output logic [1:0]           q1_plv,

    input  logic                 wr_valid,
    input  logic [IDX_W-1:0]     wr_index,
    input  logic                 wr_e,
    input  logic [18:0]          wr_vppn,
    input  logic [9:0]           wr_asid,
    input  logic                 wr_g,
    input  logic [5:0]           wr_ps,
    input  logic [19:0]          wr_ppn0,
    input  logic [1:0]           wr_plv0,
    input  logic [1:0]           wr_mat0,
    input  logic                 wr_d0,
    input  logic                 wr_v0,
    input  logic [19:0]          wr_ppn1,
    input  logic [1:0]           wr_plv1,
    input  logic [1:0]           wr_mat1,
    input  logic                 wr_d1,
    input  logic                 wr_v1,

    input  logic [IDX_W-1:0]     rd_index,
    output logic                 rd_e,
    output logic [18:0]          rd_vppn,
    output logic [9:0]           rd_asid,
    output logic                 rd_g,
    output logic [5:0]           rd_ps,
    output logic [19:0]          rd_ppn0,
    output logic [1:0]           rd_plv0,
    output logic [1:0]           rd_mat0,
    output logic                 rd_d0,
    output logic                 rd_v0,
    output logic [19:0]          rd_ppn1,
    output logic [1:0]           rd_plv1,
    output logic [1:0]           rd_mat1,
    output logic                 rd_d1,
    output logic                 rd_v1,

    input  logic                 inv_valid,
    input  logic [4:0]           inv_op,
    input  logic [9:0]           inv_asid,
    input  logic [31:0]          inv_vaddr
);

    logic                 entry_e     [NUM_ENTRIES];
    logic [18:0]          entry_vppn  [NUM_ENTRIES];
    logic [9:0]           entry_asid  [NUM_ENTRIES];
    logic                 entry_g     [NUM_ENTRIES];
    logic [5:0]           entry_ps    [NUM_ENTRIES];
    logic [19:0]          entry_ppn0  [NUM_ENTRIES];
    logic [1:0]           entry_plv0  [NUM_ENTRIES];
    logic [1:0]           entry_mat0  [NUM_ENTRIES];
    logic                 entry_d0    [NUM_ENTRIES];
    logic                 entry_v0    [NUM_ENTRIES];
    logic [19:0]          entry_ppn1  [NUM_ENTRIES];
    logic [1:0]           entry_plv1  [NUM_ENTRIES];
    logic [1:0]           entry_mat1  [NUM_ENTRIES];
    logic                 entry_d1    [NUM_ENTRIES];
    logic                 entry_v1    [NUM_ENTRIES];

    logic                 q0_valid_q;
    logic [31:0]          q0_vaddr_q;
    logic [9:0]           q0_asid_q;
    logic                 q1_valid_q;
    logic [31:0]          q1_vaddr_q;
    logic [9:0]           q1_asid_q;

    function automatic logic addr_matches(
        input logic [31:0] addr,
        input logic [18:0] vppn,
        input logic [5:0]  ps
    );
        logic [31:0] pair_mask;
        logic [31:0] entry_base;
        begin
            entry_base = {vppn, 13'b0};
            if ((ps < 6'd12) || (ps > 6'd30)) begin
                addr_matches = 1'b0;
            end else begin
                pair_mask = 32'hffff_ffff << (ps + 1'b1);
                addr_matches = (addr & pair_mask) == (entry_base & pair_mask);
            end
        end
    endfunction

    function automatic logic entry_invalidated(
        input logic        e,
        input logic        g,
        input logic [9:0]  asid,
        input logic [18:0] vppn,
        input logic [5:0]  ps
    );
        logic vpn_match;
        begin
            vpn_match = addr_matches(inv_vaddr, vppn, ps);
            unique case (inv_op)
                5'd0, 5'd1: entry_invalidated = e;
                5'd2:       entry_invalidated = e && g;
                5'd3:       entry_invalidated = e && !g;
                5'd4:       entry_invalidated = e && !g && (asid == inv_asid);
                5'd5:       entry_invalidated =
                                e && !g && (asid == inv_asid) && vpn_match;
                5'd6:       entry_invalidated =
                                e && (g || (asid == inv_asid)) && vpn_match;
                default:    entry_invalidated = 1'b0;
            endcase
        end
    endfunction

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            q0_valid_q <= 1'b0;
            q0_vaddr_q <= '0;
            q0_asid_q  <= '0;
            q1_valid_q <= 1'b0;
            q1_vaddr_q <= '0;
            q1_asid_q  <= '0;
            for (int i = 0; i < NUM_ENTRIES; i++) begin
                entry_e[i] <= 1'b0;
            end
        end else begin
            q0_valid_q <= q0_valid;
            q0_vaddr_q <= q0_vaddr;
            q0_asid_q  <= q0_asid;
            q1_valid_q <= q1_valid;
            q1_vaddr_q <= q1_vaddr;
            q1_asid_q  <= q1_asid;

            for (int i = 0; i < NUM_ENTRIES; i++) begin
                if (wr_valid && (wr_index == IDX_W'(i))) begin
                    entry_e[i] <= wr_e;
                end else if (inv_valid &&
                             entry_invalidated(entry_e[i], entry_g[i],
                                               entry_asid[i], entry_vppn[i],
                                               entry_ps[i])) begin
                    entry_e[i] <= 1'b0;
                end
            end

            if (wr_valid && (int'(wr_index) < NUM_ENTRIES)) begin
                entry_vppn[wr_index] <= wr_vppn;
                entry_asid[wr_index] <= wr_asid;
                entry_g[wr_index]    <= wr_g;
                entry_ps[wr_index]   <= wr_ps;
                entry_ppn0[wr_index] <= wr_ppn0;
                entry_plv0[wr_index] <= wr_plv0;
                entry_mat0[wr_index] <= wr_mat0;
                entry_d0[wr_index]   <= wr_d0;
                entry_v0[wr_index]   <= wr_v0;
                entry_ppn1[wr_index] <= wr_ppn1;
                entry_plv1[wr_index] <= wr_plv1;
                entry_mat1[wr_index] <= wr_mat1;
                entry_d1[wr_index]   <= wr_d1;
                entry_v1[wr_index]   <= wr_v1;
            end
        end
    end

    always_comb begin
        q0_resp_valid = q0_valid_q;
        q0_found      = 1'b0;
        q0_index      = '0;
        q0_ps         = '0;
        q0_ppn        = '0;
        q0_v          = 1'b0;
        q0_d          = 1'b0;
        q0_mat        = '0;
        q0_plv        = '0;

        for (int i = 0; i < NUM_ENTRIES; i++) begin
            if (!q0_found && entry_e[i] &&
                (entry_g[i] || (entry_asid[i] == q0_asid_q)) &&
                addr_matches(q0_vaddr_q, entry_vppn[i], entry_ps[i])) begin
                q0_found = 1'b1;
                q0_index = IDX_W'(i);
                q0_ps    = entry_ps[i];
                if (q0_vaddr_q[entry_ps[i][4:0]]) begin
                    q0_ppn = entry_ppn1[i];
                    q0_v   = entry_v1[i];
                    q0_d   = entry_d1[i];
                    q0_mat = entry_mat1[i];
                    q0_plv = entry_plv1[i];
                end else begin
                    q0_ppn = entry_ppn0[i];
                    q0_v   = entry_v0[i];
                    q0_d   = entry_d0[i];
                    q0_mat = entry_mat0[i];
                    q0_plv = entry_plv0[i];
                end
            end
        end
    end

    always_comb begin
        q1_resp_valid = q1_valid_q;
        q1_found      = 1'b0;
        q1_index      = '0;
        q1_ps         = '0;
        q1_ppn        = '0;
        q1_v          = 1'b0;
        q1_d          = 1'b0;
        q1_mat        = '0;
        q1_plv        = '0;

        for (int i = 0; i < NUM_ENTRIES; i++) begin
            if (!q1_found && entry_e[i] &&
                (entry_g[i] || (entry_asid[i] == q1_asid_q)) &&
                addr_matches(q1_vaddr_q, entry_vppn[i], entry_ps[i])) begin
                q1_found = 1'b1;
                q1_index = IDX_W'(i);
                q1_ps    = entry_ps[i];
                if (q1_vaddr_q[entry_ps[i][4:0]]) begin
                    q1_ppn = entry_ppn1[i];
                    q1_v   = entry_v1[i];
                    q1_d   = entry_d1[i];
                    q1_mat = entry_mat1[i];
                    q1_plv = entry_plv1[i];
                end else begin
                    q1_ppn = entry_ppn0[i];
                    q1_v   = entry_v0[i];
                    q1_d   = entry_d0[i];
                    q1_mat = entry_mat0[i];
                    q1_plv = entry_plv0[i];
                end
            end
        end
    end

    always_comb begin
        rd_e     = 1'b0;
        rd_vppn = '0;
        rd_asid  = '0;
        rd_g     = 1'b0;
        rd_ps    = '0;
        rd_ppn0  = '0;
        rd_plv0  = '0;
        rd_mat0  = '0;
        rd_d0    = 1'b0;
        rd_v0    = 1'b0;
        rd_ppn1  = '0;
        rd_plv1  = '0;
        rd_mat1  = '0;
        rd_d1    = 1'b0;
        rd_v1    = 1'b0;

        if (int'(rd_index) < NUM_ENTRIES) begin
            rd_e     = entry_e[rd_index];
            rd_vppn = entry_vppn[rd_index];
            rd_asid  = entry_asid[rd_index];
            rd_g     = entry_g[rd_index];
            rd_ps    = entry_ps[rd_index];
            rd_ppn0  = entry_ppn0[rd_index];
            rd_plv0  = entry_plv0[rd_index];
            rd_mat0  = entry_mat0[rd_index];
            rd_d0    = entry_d0[rd_index];
            rd_v0    = entry_v0[rd_index];
            rd_ppn1  = entry_ppn1[rd_index];
            rd_plv1  = entry_plv1[rd_index];
            rd_mat1  = entry_mat1[rd_index];
            rd_d1    = entry_d1[rd_index];
            rd_v1    = entry_v1[rd_index];
        end
    end

endmodule
