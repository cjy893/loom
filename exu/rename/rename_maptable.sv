module rename_maptable #(
    parameter int LOGICAL_REGS = 32,
    parameter int PHYSICAL_REGS = 48,
    parameter int READ_PORTS = 4,
    parameter int WRITE_PORTS = 2,
    parameter int COMMIT_PORTS = 2
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

    input logic rollback,
    output logic [PHYSICAL_REGS-1:0] arch_busy_vec
);
    localparam int LREG_SZ = $clog2(LOGICAL_REGS);
    localparam int PREG_SZ = $clog2(PHYSICAL_REGS);

    logic [PREG_SZ-1:0] map_q [LOGICAL_REGS-1:0];
    logic [PREG_SZ-1:0] commit_map_q [LOGICAL_REGS-1:0];

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
        end else if(rollback) begin
            for(int i = 0; i < LOGICAL_REGS; i++) begin
                map_q[i] <= commit_map_q[i];
            end
        end else begin
            for(int i = 0; i < WRITE_PORTS; i++) begin
                if(write_en[i] && (write_lreg[i] != '0)) begin
                    map_q[write_lreg[i]] <= write_preg[i];
                end
            end
            for(int i = 0; i < COMMIT_PORTS; i++) begin
                if(commit_en[i] && (commit_lreg[i] != '0)) begin
                    commit_map_q[commit_lreg[i]] <= commit_preg[i];
                end
            end
        end
    end
endmodule
