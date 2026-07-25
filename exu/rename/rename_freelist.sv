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

    function automatic logic [PREG_SZ-1:0] priority_encoder(logic [PHYSICAL_REGS-1:0] vec);
        for(int i = 1; i < PHYSICAL_REGS; i++) begin
            if(vec[i]) return i;
        end
        return '0;
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

    always_comb begin
        free_count = '0;

        for(int i = 1; i < PHYSICAL_REGS; i++) begin
            if(free_vec[i] && free_count < FREE_COUNT_W'(ALLOC_PORTS)) free_count = free_count + FREE_COUNT_W'(1);
        end
    end

    logic [ALLOC_PORTS-1:0] [PREG_SZ-1:0] alloc_cand;
    always_comb begin
        logic [PHYSICAL_REGS-1:0] taken_mask;
        taken_mask = '0;
        for(int i = 0; i < ALLOC_PORTS; i++) begin
            alloc_cand[i] = priority_encoder(free_vec & ~taken_mask);
            if(alloc_en[i]) begin
                taken_mask[alloc_cand[i]] = 1'b1;
            end
        end
    end

    always_comb begin
        for(int w = 0; w < ALLOC_PORTS; w++) begin
            alloc_mask[w] = 0;
            if(alloc_en[w] && (alloc_cand[w] != '0)) alloc_mask[w][alloc_cand[w]] = 1'b1;
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
