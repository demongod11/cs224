`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:19:57 03/22/2022
// Design Name:   second_part
// Module Name:   C:/cs221_lab/quiz_three/second_part_test_again.v
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

module second_part_test_again;

	// Inputs
	reg clk;
	reg reset;
	reg S;
	reg [3:0] A;

	// Outputs
	wire [2:0] x;
	wire [2:0] y;

	// Instantiate the Unit Under Test (UUT)
	second_part uut (
		.clk(clk), 
		.reset(reset), 
		.S(S), 
		.A(A), 
		.x(x), 
		.y(y)
	);

initial begin
clk = 0; forever clk = #5 ~clk;
end

initial begin
$monitor($time, " A=%b, x=%d, y=%d ", A, x, y);

S = 0; reset = 1; A = 4'b1001;
#10; reset = 0;
#10; S = 1;
#20; S=0;
end
      
endmodule

 //                 0 A=1001, x=0, y=0 
 //                 35 A=100, x=0, y=1 
 /*                 65 A=10, x=1, y=1 
                  95 A=1001, x=2, y=1 
                 125 A=1001, x=2, y=2 
                 145 A=1001, x=0, y=0 
					  
					  
					    0 A=1, x=0, y=0 
                  25 A=0, x=0, y=0 
                  35 A=0, x=0, y=1 
                  65 A=0, x=1, y=1 
                  85 A=1, x=1, y=1 
                  95 A=1, x=2, y=1 
                 115 A=0, x=2, y=1 
                 125 A=0, x=2, y=2 
                 145 A=1, x=0, y=0 
					  
					  
					                     0 A=1001, x=0, y=0 
                  25 A=0100, x=0, y=0 
                  35 A=0100, x=0, y=1 
                  55 A=0010, x=0, y=1 
                  65 A=0010, x=1, y=1 
                  85 A=0001, x=1, y=1 
                  95 A=0001, x=2, y=1 
                 115 A=0000, x=2, y=1 
                 125 A=0000, x=2, y=2 
                 145 A=1001, x=0, y=0 
					  

