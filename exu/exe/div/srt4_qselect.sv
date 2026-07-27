module srt4_qselect (
    input logic signed [6:0] partial_remainder_index,
    input logic [3:0] divisor_index,

    output logic signed [2:0] quotient_digit
);
    logic index_valid;
    logic signed [6:0] plus_one_min;
    logic signed [6:0] plus_two_min;
    logic signed [6:0] zero_min;
    logic signed [6:0] minus_one_min;

    always_comb begin
        index_valid = 1'b1;
        plus_one_min = 7'sd0;
        plus_two_min = 7'sd0;
        zero_min = 7'sd0;
        minus_one_min = 7'sd0;

        case(divisor_index)
            4'h8: begin
                plus_one_min = 7'sd4;
                plus_two_min = 7'sd12;
                zero_min = -7'sd4;
                minus_one_min = -7'sd13;
            end
            4'h9: begin
                plus_one_min = 7'sd4;
                plus_two_min = 7'sd14;
                zero_min = -7'sd6;
                minus_one_min = -7'sd15;
            end
            4'ha: begin
                plus_one_min = 7'sd4;
                plus_two_min = 7'sd15;
                zero_min = -7'sd6;
                minus_one_min = -7'sd16;
            end
            4'hb: begin
                plus_one_min = 7'sd4;
                plus_two_min = 7'sd16;
                zero_min = -7'sd6;
                minus_one_min = -7'sd18;
            end
            4'hc: begin
                plus_one_min = 7'sd6;
                plus_two_min = 7'sd18;
                zero_min = -7'sd8;
                minus_one_min = -7'sd20;
            end
            4'hd: begin
                plus_one_min = 7'sd6;
                plus_two_min = 7'sd20;
                zero_min = -7'sd8;
                minus_one_min = -7'sd20;
            end
            4'he: begin
                plus_one_min = 7'sd8;
                plus_two_min = 7'sd20;
                zero_min = -7'sd8;
                minus_one_min = -7'sd22;
            end
            4'hf: begin
                plus_one_min = 7'sd8;
                plus_two_min = 7'sd24;
                zero_min = -7'sd8;
                minus_one_min = -7'sd24;
            end
            default: index_valid = 1'b0;
        endcase

        quotient_digit = 3'sd0;

        if(index_valid) begin
            if(partial_remainder_index >= plus_two_min) begin
                quotient_digit = 3'sd2;
            end else if(partial_remainder_index >= plus_one_min) begin
                quotient_digit = 3'sd1;
            end else if(partial_remainder_index >= zero_min) begin
                quotient_digit = 3'sd0;
            end else if(partial_remainder_index >= minus_one_min) begin
                quotient_digit = -3'sd1;
            end else begin
                quotient_digit = -3'sd2;
            end
        end
    end
endmodule