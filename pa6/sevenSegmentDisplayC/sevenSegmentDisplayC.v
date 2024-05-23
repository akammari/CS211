input [3:0] numeral_bit;

output c;

wire not_numeral_bit_3;
wire not_numeral_bit_2;
wire not_numeral_bit_1;
wire not_numeral_bit_0;

wire maxterm_02;

wire 0_not1;
wire 2_or_3;

assign not_numeral_bit_3 = ~ numeral_bit[3];
assign not_numeral_bit_2 = ~ numeral_bit[2];
assign not_numeral_bit_1 = ~ numeral_bit[1];
assign not_numeral_bit_0 = ~ numeral_bit[0];

assign 0_not1 = numeral_bit[0] | not_numeral_bit_1;
assign 2_or_3 = numeral_bit[2] | numeral_bit[3];
assign maxterm_02 = 0_not1 | 2_or_3;

assign c = maxterm_02;
