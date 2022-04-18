`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:19:00 03/31/2022
// Design Name:   mem_controller
// Module Name:   C:/cs221_lab/lab_10_01/test_02.v
// Project Name:  lab_10_01
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

module test_02;

	// Inputs
	reg reset;
	reg clk;
	reg S;

	// Outputs
	wire [3:0] curr;
	wire [15:0] temp;
	wire [2:0] opcode;
	wire [3:0] dest;
	wire [3:0] src1;
	wire [3:0] src2;
	wire [15:0] opa1;
	wire [15:0] opa2;
	wire [15:0] alutemp;
	wire [3:0] x;

	// Instantiate the Unit Under Test (UUT)
	mem_controller uut (
		.reset(reset), 
		.clk(clk), 
		.S(S), 
		.curr(curr), 
		.temp(temp), 
		.opcode(opcode), 
		.dest(dest), 
		.src1(src1), 
		.src2(src2), 
		.opa1(opa1), 
		.opa2(opa2), 
		.alutemp(alutemp), 
		.x(x)
	);

	initial begin
		clk = 0;
		forever clk = #5~clk;
	end
	
	initial begin
		// Initialize Inputs
		reset = 1;
		clk = 0;
		S = 0;

		// Wait 100 ns for global reset to finish
		#10;
		reset = 0;
		S = 1;
        
		// Add stimulus here

	end
      
endmodule

