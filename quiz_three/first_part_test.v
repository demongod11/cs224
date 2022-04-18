`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:36:16 03/22/2022
// Design Name:   first_part
// Module Name:   C:/cs221_lab/quiz_three/first_part_test.v
// Project Name:  quiz_three
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: first_part
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module first_part_test;

	// Inputs
	reg x;
	reg clk;
	reg reset;

	// Outputs
	wire y;

	// Instantiate the Unit Under Test (UUT)
	first_part uut (
		.x(x), 
		.clk(clk), 
		.reset(reset), 
		.y(y)
	);

initial begin
clk = 0; forever clk = #5 ~clk;
end

initial begin
$monitor($time, " x=%b, y=%b ", x, y);
reset = 1; x=0;
#10; reset = 0;
#10; x = 0;
#12; x = 1; #5; x=0;
#17; x = 1; #3; x=0;
#17; x = 1; #18; x = 0;
#12; x = 1; #5; x=0;
end
      
endmodule

