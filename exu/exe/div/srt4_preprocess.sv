module srt4_preprocess(
    input logic [31:0] dividend,
    input logic [31:0] divisor,

    output logic divisor_is_zero,
    output logic [35:0] initial_partial_remainder,
    output logic [35:0] aligned_divisor,
    output logic [4:0] iteration_count,
    output logic [5:0] recovery_shift
);
    logic [31:0] normalized_divisor;
    logic [5:0] normalized_shift;

    always_comb begin
        divisor_is_zero = (divisor == 32'b0);

        normalized_divisor = divisor;
        normalized_shift = 6'b0;

        initial_partial_remainder = 36'b0;
        aligned_divisor = 36'b0;
        iteration_count = 5'b0;
        recovery_shift = 6'b0;

        if(!divisor_is_zero) begin
            if(normalized_divisor[31:16] == 16'b0) begin
                normalized_divisor = normalized_divisor << 16;
                normalized_shift = normalized_shift + 6'd16;
            end
            if(normalized_divisor[31:24] == 8'b0) begin
                normalized_divisor = normalized_divisor << 8;
                normalized_shift = normalized_shift + 6'd8;
            end
            if(normalized_divisor[31:28] == 4'b0) begin
                normalized_divisor = normalized_divisor << 4;
                normalized_shift = normalized_shift + 6'd4;
            end
            if(normalized_divisor[31:30] == 2'b0) begin
                normalized_divisor = normalized_divisor << 2;
                normalized_shift = normalized_shift + 6'd2;
            end
            if(normalized_divisor[31] == 1'b0) begin
                normalized_divisor = normalized_divisor << 1;
                normalized_shift = normalized_shift + 6'd1;
            end

            aligned_divisor = {3'b0, normalized_divisor, 1'b0};

            if(normalized_shift[0]) initial_partial_remainder = {4'b0, dividend};
            else initial_partial_remainder = {3'b0, dividend, 1'b0};

            iteration_count = {1'b0, normalized_shift[4:1]} + {4'b0, normalized_shift[0]} + 5'd1;
            recovery_shift = 6'd32 - normalized_shift;
        end
    end
endmodule
