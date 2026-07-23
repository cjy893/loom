module rename_busytable #(
    parameter int PHYSICAL_REGS = 48,
    parameter int READ_PORTS = 3 * 2,
    parameter int WRITE_PORTS = 2,
    parameter int WAKEUP_PORTS = 6
)(
    input logic clk,
    input logic rst_n,

    input logic [READ_PORTS-1:0] read_en,
    input logic [READ_PORTS-1:0] [$clog2(PHYSICAL_REGS)-1:0] read_preg,
    output logic [READ_PORTS-1:0] busy,

    input logic [WRITE_PORTS-1:0] write_en,
    input logic [WRITE_PORTS-1:0] [$clog2(PHYSICAL_REGS)-1:0] write_preg,

    input logic [WAKEUP_PORTS-1:0] wakeup_en,
    input logic [WAKEUP_PORTS-1:0] [$clog2(PHYSICAL_REGS)-1:0] wakeup_preg,

    input logic rollback
);
    logic [PHYSICAL_REGS-1:0] busy_vec;

    always_comb begin
        for(int i = 0; i < READ_PORTS; i++) begin
            busy[i] = busy_vec[read_preg[i]];

            if(read_preg[i] == '0) busy[i] = 1'b0;

            for(int j = 0; j < WRITE_PORTS; j++) begin
                if(write_en[j] && (write_preg[j] == read_preg[i]) && (read_preg[i] != '0)) begin
                    busy[i] = 1'b1;
                end
            end
            for(int j = 0; j < WAKEUP_PORTS; j++) begin
                if(wakeup_en[j] && (wakeup_preg[j] == read_preg[i])) begin
                    busy[i] = 1'b0;
                end
            end
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            busy_vec <= '0;
        end else if(rollback) begin
            busy_vec <= '0;
        end else begin
            for(int i = 0; i < WRITE_PORTS; i++) begin
                if(write_en[i] && (write_preg[i] != '0)) begin
                    busy_vec[write_preg[i]] <= 1'b1;
                end
            end
            for(int i = 0; i < WAKEUP_PORTS; i++) begin
                if(wakeup_en[i]) begin
                    busy_vec[wakeup_preg[i]] <= 1'b0;
                end
            end
        end
    end
endmodule