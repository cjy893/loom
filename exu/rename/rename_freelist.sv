module rename_freelist #(
    parameter int PHYSICAL_REGS = 48,
    parameter int ALLOC_PORTS = 2,
    parameter int FREE_PORTS = 2
)(
    input logic clk,
    input logic rst_n,

    input logic [ALLOC_PORTS-1:0] alloc_en,
    output logic [ALLOC_PORTS-1:0] [$clog2(PHYSICAL_REGS)-1:0] alloc_preg,

    input logic [FREE_PORTS-1:0] free_en,
    input logic [FREE_PORTS-1:0] [$clog2(PHYSICAL_REGS)-1:0] free_preg,

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

    assign alloc_preg = alloc_cand;

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            // The reset map table maps architectural r0-r31 to p0-p31.
            // Only physical registers above that committed mapping are free.
            for (int i = 0; i < PHYSICAL_REGS; i++) begin
                free_vec[i] <= (i >= 32);
            end
        end else if(rollback) begin
            free_vec <= ~rollback_busy_vec;
            free_vec[0] <= 1'b0;
        end else begin
            for(int i = 0; i < ALLOC_PORTS; i++) begin
                if(alloc_en[i]) begin
                    free_vec[alloc_cand[i]] <= 1'b0;
                end
            end
            for(int i = 0; i < FREE_PORTS; i++) begin
                if(free_en[i] && (free_preg[i] != '0)) begin
                    free_vec[free_preg[i]] <= 1'b1;
                end
            end
        end
    end
endmodule
