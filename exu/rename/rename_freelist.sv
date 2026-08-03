module rename_freelist #(
    parameter int PHYSICAL_REGS = 48,
    parameter int ALLOC_PORTS = 2,
    parameter int FREE_PORTS = 2,
    parameter int MAX_BR_COUNT = 4
)(
    input logic clk,
    input logic rst_n,

    input logic [ALLOC_PORTS-1:0] alloc_en,
    output logic [ALLOC_PORTS-1:0] [$clog2(PHYSICAL_REGS)-1:0] alloc_preg,

    input logic [FREE_PORTS-1:0] free_en,
    input logic [FREE_PORTS-1:0] [$clog2(PHYSICAL_REGS)-1:0] free_preg,

    input logic [ALLOC_PORTS-1:0] br_snapshot_en,
    input logic [ALLOC_PORTS-1:0] [$clog2(MAX_BR_COUNT)-1:0] br_snapshot_tag,
    input logic br_mispredict,
    input logic [$clog2(MAX_BR_COUNT)-1:0] br_mispredict_tag,

    input logic rollback,
    input logic [PHYSICAL_REGS-1:0] rollback_busy_vec,
    output logic [$clog2(ALLOC_PORTS+1)-1:0] free_count,

    output logic busy
);
    localparam int PREG_SZ = $clog2(PHYSICAL_REGS);
    localparam int FREE_COUNT_W = $clog2(ALLOC_PORTS+1);
    localparam int PICK_GROUP_BITS = 8;
    localparam int PICK_GROUPS =
        (PHYSICAL_REGS + PICK_GROUP_BITS - 1) / PICK_GROUP_BITS;
    localparam int PICK_PAD_BITS = PICK_GROUPS * PICK_GROUP_BITS;

    // Select the lowest set bit with short local and group encoders instead of
    // a PHYSICAL_REGS-deep priority chain.
    function automatic logic [PHYSICAL_REGS-1:0] pick_first_onehot(
        input logic [PHYSICAL_REGS-1:0] vec
    );
        logic [PICK_PAD_BITS-1:0] padded_vec;
        logic [PICK_PAD_BITS-1:0] padded_pick;
        logic [PICK_GROUPS-1:0] group_valid;
        logic [PICK_GROUPS-1:0] group_pick;

        padded_vec = '0;
        padded_pick = '0;
        group_valid = '0;
        padded_vec[PHYSICAL_REGS-1:0] = vec;

        for (int g = 0; g < PICK_GROUPS; g++) begin
            group_valid[g] =
                |padded_vec[g*PICK_GROUP_BITS +: PICK_GROUP_BITS];
        end

        group_pick = group_valid & (~group_valid + PICK_GROUPS'(1));

        for (int g = 0; g < PICK_GROUPS; g++) begin
            padded_pick[g*PICK_GROUP_BITS +: PICK_GROUP_BITS] =
                (padded_vec[g*PICK_GROUP_BITS +: PICK_GROUP_BITS] &
                 (~padded_vec[g*PICK_GROUP_BITS +: PICK_GROUP_BITS] +
                  PICK_GROUP_BITS'(1))) &
                {PICK_GROUP_BITS{group_pick[g]}};
        end

        return padded_pick[PHYSICAL_REGS-1:0];
    endfunction

    logic [PHYSICAL_REGS-1:0] br_alloc_q [MAX_BR_COUNT-1:0];

    logic [PHYSICAL_REGS-1:0] alloc_mask [ALLOC_PORTS-1:0];
    logic [ALLOC_PORTS:0] [PHYSICAL_REGS-1:0] alloc_suffix;

    logic [PHYSICAL_REGS-1:0] alloc_mask_all;
    logic [PHYSICAL_REGS-1:0] commit_free_mask;
    logic [PHYSICAL_REGS-1:0] br_free_mask;
    logic [PHYSICAL_REGS-1:0] free_vec_next;
    logic [PHYSICAL_REGS-1:0] free_vec;
    assign busy = (free_count == '0);

    logic [ALLOC_PORTS:0][PHYSICAL_REGS-1:0] ranked_remaining;
    logic [ALLOC_PORTS-1:0][PHYSICAL_REGS-1:0] ranked_pick;
    logic [ALLOC_PORTS-1:0][PHYSICAL_REGS-1:0] alloc_pick;
    logic [ALLOC_PORTS-1:0][FREE_COUNT_W-1:0] prior_alloc_count;
    logic [ALLOC_PORTS-1:0][PREG_SZ-1:0]
          [PHYSICAL_REGS-1:0] alloc_index_terms;
    logic [ALLOC_PORTS-1:0][PREG_SZ-1:0] alloc_cand;

    always_comb begin
        ranked_remaining = '0;
        ranked_pick = '0;
        alloc_pick = '0;
        prior_alloc_count = '0;
        alloc_index_terms = '0;
        alloc_cand = '0;
        free_count = '0;

        ranked_remaining[0] = free_vec;
        for (int rank = 0; rank < ALLOC_PORTS; rank++) begin
            ranked_pick[rank] =
                pick_first_onehot(ranked_remaining[rank]);
            ranked_remaining[rank+1] =
                ranked_remaining[rank] & ~ranked_pick[rank];

            if (|ranked_pick[rank])
                free_count = FREE_COUNT_W'(rank + 1);
        end

        // A lane's rank is the number of older lanes that allocate a pdst.
        for (int w = 0; w < ALLOC_PORTS; w++) begin
            for (int p = 0; p < w; p++) begin
                prior_alloc_count[w] = prior_alloc_count[w] +
                    FREE_COUNT_W'(alloc_en[p]);
            end

            for (int rank = 0; rank < ALLOC_PORTS; rank++) begin
                if (prior_alloc_count[w] == FREE_COUNT_W'(rank))
                    alloc_pick[w] = ranked_pick[rank];
            end
        end

        // Encode one-hot candidates with parallel reduction trees.
        for (int w = 0; w < ALLOC_PORTS; w++) begin
            for (int b = 0; b < PREG_SZ; b++) begin
                for (int r = 1; r < PHYSICAL_REGS; r++) begin
                    alloc_index_terms[w][b][r] =
                        alloc_pick[w][r] && (((r >> b) & 1) != 0);
                end
                alloc_cand[w][b] = |alloc_index_terms[w][b];
            end
        end
    end

    always_comb begin
        for(int w = 0; w < ALLOC_PORTS; w++) begin
            alloc_mask[w] =
                alloc_pick[w] & {PHYSICAL_REGS{alloc_en[w]}};
        end

        alloc_suffix = '0;
        for(int w = ALLOC_PORTS-1; w >= 0; w--) begin
            alloc_suffix[w] = alloc_suffix[w+1] | alloc_mask[w];
        end

        alloc_mask_all = alloc_suffix[0];

        commit_free_mask = '0;
        for(int w = 0; w < FREE_PORTS; w++) begin
            if(free_en[w] && (free_preg[w] != '0)) commit_free_mask[free_preg[w]] = 1'b1;
        end

        br_free_mask = '0;
        if(br_mispredict) br_free_mask = br_alloc_q[br_mispredict_tag];

        free_vec_next = (free_vec & ~alloc_mask_all) | commit_free_mask | br_free_mask;
        free_vec_next[0] = 1'b0;
    end

    assign alloc_preg = alloc_cand;

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            for (int i = 0; i < PHYSICAL_REGS; i++) begin
                free_vec[i] <= (i >= 32);
            end

            for(int b = 0; b < MAX_BR_COUNT; b++) begin
                br_alloc_q[b] <= '0;
            end
        end else if(rollback) begin
            free_vec <= ~rollback_busy_vec;
            free_vec[0] <= 1'b0;

            for(int b = 0; b < MAX_BR_COUNT; b++) begin
                br_alloc_q[b] <= '0;
            end
        end else begin
            free_vec <= free_vec_next;

            for(int b = 0; b < MAX_BR_COUNT; b++) begin
                br_alloc_q[b] <= (br_alloc_q[b] & ~br_free_mask) | alloc_mask_all;
            end

            for(int w = 0; w < ALLOC_PORTS; w++) begin
                if(br_snapshot_en[w]) br_alloc_q[br_snapshot_tag[w]] <= alloc_suffix[w+1];
            end
        end
    end
endmodule
