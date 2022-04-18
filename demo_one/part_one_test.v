`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:11:30 03/22/2022
// Design Name:   part_one
// Module Name:   C:/cs221_lab/demo_one/part_one_test.v
// Project Name:  demo_one
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: part_one
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module part_one_test;

	// Inputs
	reg x;
	reg clk;
	reg reset;

	// Outputs
	wire y;

	// Instantiate the Unit Under Test (UUT)
	part_one uut (
		.x(x), 
		.clk(clk), 
		.reset(reset), 
		.y(y)
	);

	initial begin
	clk=0; forever clk = #5 ~clk;
	end
	
	initial begin
	$monitor($time, " x=%b, y=%b ",x,y);
	reset=1;x=0;
#10; reset=0;
#10; x=0;
#12; x=1; #5; x=0;
#17; x=1; #3; x=0;
#17; x=1; #18; x=0;
#12; x=1; #5; x=0;


	end
      
endmodule

