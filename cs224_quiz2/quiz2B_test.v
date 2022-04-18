`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:29:57 02/23/2022
// Design Name:   quiz2B
// Module Name:   C:/cs221_lab/cs224_quiz2/quiz2B_test.v
// Project Name:  cs224_quiz2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: quiz2B
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module quiz2B_test;

	// Inputs
	reg [1:0] din;
	reg clk;
	reg en;
	reg ld;
	reg incr;

	// Outputs
	wire [1:0] q;
	wire overflow;

	// Instantiate the Unit Under Test (UUT)
	quiz2B uut (
		.din(din), 
		.clk(clk), 
		.en(en), 
		.ld(ld), 
		.incr(incr), 
		.q(q), 
		.overflow(overflow)
	);

	initial begin
		// Initialize Inputs
		$monitor($time, " ld=%d din=%d incr=%d en=%d overflow=%d q=%d", ld,din,incr,en,overflow,q);

		// Wait 100 ns for global reset to finish		
		ld=0; en=0; din=0;
		#10; ld=1; en=1;
		#10; din=1;
		#10; incr=1;
		#10; ld=0;
		#10; din=0;
		#60;
		$stop;
		
        
		// Add stimulus here

	end
      
endmodule





