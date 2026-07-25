module rename_maptable #(
    parameter int LOGICAL_REGS = 32,
    parameter int PHYSICAL_REGS = 48,
    parameter int READ_PORTS = 4,
    parameter int WRITE_PORTS = 2,
    parameter int COMMIT_PORTS = 2,
    parameter int MAX_BR_COUNT = 4
)(
    input logic clk,
    input logic rst_n,

    input logic [READ_PORTS-1:0] read_en,
    input logic [READ_PORTS-1:0] [$clog2(LOGICAL_REGS)-1:0] lreg,
    output logic [READ_PORTS-1:0] [$clog2(PHYSICAL_REGS)-1:0] preg,

    input logic [WRITE_PORTS-1:0] write_en,
    input logic [WRITE_PORTS-1:0] [$clog2(LOGICAL_REGS)-1:0] write_lreg,
    input logic [WRITE_PORTS-1:0] [$clog2(PHYSICAL_REGS)-1:0] write_preg,

    input logic [COMMIT_PORTS-1:0] commit_en,
    input logic [COMMIT_PORTS-1:0] [$clog2(LOGICAL_REGS)-1:0] commit_lreg,
    input logic [COMMIT_PORTS-1:0] [$clog2(PHYSICAL_REGS)-1:0] commit_preg,

    input logic [WRITE_PORTS-1:0] br_snapshot_en,
    input logic [WRITE_PORTS-1:0] [$clog2(MAX_BR_COUNT)-1:0] br_snapshot_tag,
    input logic br_mispredict,
    input logic [$clog2(MAX_BR_COUNT)-1:0] br_mispredict_tag,

    input logic rollback,
    output logic [PHYSICAL_REGS-1:0] arch_busy_vec
);
    localparam int LREG_SZ = $clog2(LOGICAL_REGS);
    localparam int PREG_SZ = $clog2(PHYSICAL_REGS);

    logic [PREG_SZ-1:0] map_q [LOGICAL_REGS-1:0];
    logic [PREG_SZ-1:0] commit_map_q [LOGICAL_REGS-1:0];

    logic [PREG_SZ-1:0] br_snapshot_q [MAX_BR_COUNT-1:0][LOGICAL_REGS-1:0];
    logic [PREG_SZ-1:0] map_after_lane [WRITE_PORTS:0][LOGICAL_REGS-1:0];

    always_comb begin
        for(int r = 0; r < LOGICAL_REGS; r++) begin
            map_after_lane[0][r] = map_q[r];
        end

        for(int w = 0; w < WRITE_PORTS; w++) begin
            for(int r = 0; r < LOGICAL_REGS; r++) begin
                map_after_lane[w+1][r] = map_after_lane[w][r];
            end

            if(write_en[w] && write_lreg[w] != '0) begin
                map_after_lane[w+1][write_lreg[w]] = write_preg[w];
            end
        end
    end

    always_comb begin
        for(int i = 0; i < READ_PORTS; i++) begin
            preg[i] = map_q[lreg[i]];
            if(lreg[i] == '0) preg[i] = '0;
            // Read ports are grouped per rename lane (rs1, rs2, stale dst).
            // Only an older lane may bypass its newly allocated mapping to a
            // younger lane. A lane must never see its own destination here.
            for(int j = 0; j < WRITE_PORTS; j++) begin
                if(write_en[j] && (write_lreg[j] == lreg[i]) && (write_lreg[j] != '0)) begin
                    if (j < (i / 3))
                        preg[i] = write_preg[j];
                end
            end
        end
    end

    always_comb begin
        arch_busy_vec = '0;
        arch_busy_vec[0] = 1'b1;
        for(int i = 1; i < LOGICAL_REGS; i++) begin
            arch_busy_vec[commit_map_q[i]] = 1'b1;
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            for(int i = 0; i < LOGICAL_REGS; i++) begin
                map_q[i] <= PREG_SZ'(i);
                commit_map_q[i] <= PREG_SZ'(i);
            end

            for(int b = 0; b < MAX_BR_COUNT; b++) begin
                for(int i = 0; i < LOGICAL_REGS; i++) begin
                    br_snapshot_q[b][i] <= PREG_SZ'(i);
                end
            end
        end else begin
            for(int i = 0; i < COMMIT_PORTS; i++) begin
                if(commit_en[i] && (commit_lreg[i] != '0)) begin
                    commit_map_q[commit_lreg[i]] <= commit_preg[i];
                end
            end

            if(br_mispredict) begin
                for(int i = 0; i < LOGICAL_REGS; i++) begin
                    map_q[i] <= br_snapshot_q[br_mispredict_tag][i];
                end
            end else if(rollback) begin
                for(int i = 0; i < LOGICAL_REGS; i++) begin
                    map_q[i] <= commit_map_q[i];
                end
            end else begin
                for(int i = 0; i < LOGICAL_REGS; i++) begin
                    map_q[i] <= map_after_lane[WRITE_PORTS][i];
                end
            end

            if(!rollback && !br_mispredict) begin
                for(int w = 0; w < WRITE_PORTS; w++) begin
                    if(br_snapshot_en[w]) begin
                        for(int i = 0; i < LOGICAL_REGS; i++) begin
                            br_snapshot_q[br_snapshot_tag[w]][i] <= map_after_lane[w+1][i];
                        end
                    end
                end
            end
        end
    end
endmodule
