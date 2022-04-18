`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:49:11 03/09/2022
// Design Name:   mem_controller
// Module Name:   C:/cs221_lab/cs224_lab_8/mem_controller_test.v
// Project Name:  cs224_lab_8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mem_controller
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mem_controller_test;

	// Inputs
	reg clk;
	reg reset;
	reg s;

	// Outputs
	wire [4:0] MAR;
	wire [7:0] MDR;
	wire [2:0] curstate;

	// Instantiate the Unit Under Test (UUT)
	mem_controller uut (
		.clk(clk), 
		.reset(reset), 
		.s(s), 
		.MAR(MAR), 
		.MDR(MDR), 
		.curstate(curstate)
	);

	initial begin
		clk=1;
		forever #5 clk=~clk;
	end
	initial begin
	$monitor("MAR = %b,MDR = %b",MAR,MDR);

		// Initialize Inputs
		clk = 1;
		reset = 0;
		s = 0;

		// Wait 100 ns for global reset to finish
		#10;s=0;reset=1;
		#10;s=1;reset=0;

		
        
		// Add stimulus here

	end
      
endmodule

