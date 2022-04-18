`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:33:48 03/24/2022
// Design Name:   mem_controller
// Module Name:   C:/cs221_lab/cs224_lab_09/mem_controller_test.v
// Project Name:  cs224_lab_09
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
	wire [4:0] MAR_one;
	wire [3:0] MAR_two;
	wire [7:0] MDR_one;
	wire [7:0] MDR_two;
	wire [3:0] curstate;

	// Instantiate the Unit Under Test (UUT)
	mem_controller uut (
		.clk(clk), 
		.reset(reset), 
		.s(s), 
		.MAR_one(MAR_one), 
		.MAR_two(MAR_two), 
		.MDR_one(MDR_one), 
		.MDR_two(MDR_two), 
		.curstate(curstate)
	);
	
	initial begin
	 clk=0;
	 forever clk = #5 ~clk;
	end

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		s = 0;

		// Wait 100 ns for global reset to finish
		#10;
		s=1;
		reset=0;
        
		// Add stimulus here

	end
      
endmodule

