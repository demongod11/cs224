`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:10:39 03/22/2022
// Design Name:   part_three
// Module Name:   C:/cs221_lab/demo_one/part_three_test.v
// Project Name:  demo_one
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: part_three
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module part_three_test;

	// Inputs
	reg clk;
	reg reset;
	reg S;
	reg [3:0] A;

	// Outputs
	wire [2:0] x;
	wire [2:0] y;

	// Instantiate the Unit Under Test (UUT)
	part_three uut (
		.clk(clk), 
		.reset(reset), 
		.S(S), 
		.A(A), 
		.x(x), 
		.y(y)
	);

	initial begin
	clk=0; forever clk = #5 ~clk;
	end
	
	initial begin
	$monitor($time, " A=%b, x=%d, y=%d ",A,x,y);
	S=0; reset=1;A=4'b1001;
	#10;reset=0;
	#10;S=1;
	#20;S=0;
	end
      
endmodule

