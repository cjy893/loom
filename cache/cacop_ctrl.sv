module cacop_ctrl #(
    parameter int ROB_IDX_WIDTH = 6
)(
    input  logic                     clk,
    input  logic                     rst_n,

    input  logic                     req_valid,
    output logic                     req_ready,
    input  logic [ROB_IDX_WIDTH-1:0] req_rob_idx,
    input  logic [4:0]               req_code,
    input  logic [31:0]              req_vaddr,
    input  logic [31:0]              req_paddr,
    input  logic                     req_xcpt_valid,
    input  logic [5:0]               req_xcpt_code,
    input  logic [31:0]              req_badvaddr,

    output logic                     resp_valid,
    input  logic                     resp_ready,
    output logic [ROB_IDX_WIDTH-1:0] resp_rob_idx,
    output logic                     resp_xcpt_valid,
    output logic [5:0]               resp_xcpt_code,
    output logic [31:0]              resp_badvaddr,

    input  logic                     flush_pending,

    output logic                     icache_maint_valid,
    input  logic                     icache_maint_ready,
    output logic [1:0]               icache_maint_mode,
    output logic [31:0]              icache_maint_vaddr,
    output logic [31:0]              icache_maint_paddr,
    input  logic                     icache_maint_done,

    output logic                     dcache_maint_valid,
    input  logic                     dcache_maint_ready,
    output logic [1:0]               dcache_maint_op,
    output logic [1:0]               dcache_maint_mode,
    output logic [31:0]              dcache_maint_vaddr,
    output logic [31:0]              dcache_maint_paddr,
    input  logic                     dcache_maint_done
);
    localparam logic [1:0] MAINT_INVALIDATE = 2'd0;
    localparam logic [1:0] MAINT_FLUSH      = 2'd2;

    typedef enum logic [2:0] {
        S_IDLE,
        S_SEND_ICACHE,
        S_WAIT_ICACHE,
        S_SEND_DCACHE,
        S_WAIT_DCACHE,
        S_RESP
    } state_t;

    state_t state_q;

    logic [ROB_IDX_WIDTH-1:0] rob_idx_q;
    logic [4:0]               code_q;
    logic [31:0]              vaddr_q;
    logic [31:0]              paddr_q;
    logic                     xcpt_valid_q;
    logic [5:0]               xcpt_code_q;
    logic [31:0]              badvaddr_q;

    logic [1:0] req_mode;
    logic [2:0] req_cache_selector;
    logic       req_is_icache;
    logic       req_is_dcache;
    logic       req_supported;

    assign req_mode = req_code[4:3];
    assign req_cache_selector = req_code[2:0];
    assign req_is_icache = req_cache_selector == 3'd0;
    assign req_is_dcache = req_cache_selector == 3'd1;
    assign req_supported =
        (req_mode != 2'd3) && (req_is_icache || req_is_dcache);

    assign req_ready = rst_n && !flush_pending && state_q == S_IDLE;

    assign resp_valid = state_q == S_RESP;
    assign resp_rob_idx = rob_idx_q;
    assign resp_xcpt_valid = xcpt_valid_q;
    assign resp_xcpt_code = xcpt_code_q;
    assign resp_badvaddr = badvaddr_q;

    assign icache_maint_valid = state_q == S_SEND_ICACHE;
    assign icache_maint_mode = code_q[4:3];
    assign icache_maint_vaddr = vaddr_q;
    assign icache_maint_paddr = paddr_q;

    assign dcache_maint_valid = state_q == S_SEND_DCACHE;
    assign dcache_maint_op =
        code_q[4:3] == 2'd0 ? MAINT_INVALIDATE : MAINT_FLUSH;
    assign dcache_maint_mode = code_q[4:3];
    assign dcache_maint_vaddr = vaddr_q;
    assign dcache_maint_paddr = paddr_q;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state_q <= S_IDLE;
            rob_idx_q <= '0;
            code_q <= '0;
            vaddr_q <= '0;
            paddr_q <= '0;
            xcpt_valid_q <= 1'b0;
            xcpt_code_q <= '0;
            badvaddr_q <= '0;
        end else if (flush_pending) begin
            state_q <= S_IDLE;
            xcpt_valid_q <= 1'b0;
        end else begin
            unique case (state_q)
                S_IDLE: begin
                    if (req_valid && req_ready) begin
                        rob_idx_q <= req_rob_idx;
                        code_q <= req_code;
                        vaddr_q <= req_vaddr;
                        paddr_q <= req_paddr;
                        xcpt_valid_q <= 1'b0;
                        xcpt_code_q <= '0;
                        badvaddr_q <= '0;

                        if (!req_supported) begin
                            state_q <= S_RESP;
                        end else if (req_mode == 2'd2 && req_xcpt_valid) begin
                            xcpt_valid_q <= 1'b1;
                            xcpt_code_q <= req_xcpt_code;
                            badvaddr_q <= req_badvaddr;
                            state_q <= S_RESP;
                        end else if (req_is_icache) begin
                            state_q <= S_SEND_ICACHE;
                        end else begin
                            state_q <= S_SEND_DCACHE;
                        end
                    end
                end

                S_SEND_ICACHE: begin
                    if (icache_maint_ready) begin
                        state_q <= icache_maint_done ? S_RESP : S_WAIT_ICACHE;
                    end
                end

                S_WAIT_ICACHE: begin
                    if (icache_maint_done)
                        state_q <= S_RESP;
                end

                S_SEND_DCACHE: begin
                    if (dcache_maint_ready) begin
                        state_q <= dcache_maint_done ? S_RESP : S_WAIT_DCACHE;
                    end
                end

                S_WAIT_DCACHE: begin
                    if (dcache_maint_done)
                        state_q <= S_RESP;
                end

                S_RESP: begin
                    if (resp_valid && resp_ready) begin
                        state_q <= S_IDLE;
                        xcpt_valid_q <= 1'b0;
                    end
                end

                default: state_q <= S_IDLE;
            endcase
        end
    end
endmodule
