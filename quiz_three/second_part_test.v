`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:24:10 03/22/2022
// Design Name:   second_part
// Module Name:   C:/cs221_lab/quiz_three/second_part_test.v
// Project Name:  quiz_three
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: second_part
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module second_part_test;

	// Inputs
	reg clk;
	reg reset;
	reg S;
	reg [3:0] A;

	// Outputs
	wire [2:0] x;
	wire [2:0] y;
	wire [3:0] B;

	// Instantiate the Unit Under Test (UUT)
	second_part uut (
		.clk(clk), 
		.reset(reset), 
		.S(S), 
		.A(A), 
		.x(x), 
		.y(y), 
		.B(B)
	);

initial begin
clk = 0; forever clk = #5 ~clk;
end

initial begin
$monitor($time, " A=%b, x=%d, y=%d ", B, x, y);

S = 0; reset = 1; A = 4'b1001;
#10; reset = 0;
#10; S = 1;
#20; S=0;
end
      
endmodule

