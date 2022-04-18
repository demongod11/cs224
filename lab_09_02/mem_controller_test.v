`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:42:29 03/29/2022
// Design Name:   mem_controller
// Module Name:   /home/chandrabhushan/coding/cs224_labs/lab_09_02/mem_controller_test.v
// Project Name:  lab_09_02
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
	reg reset;
	reg clk;
	reg S;

	// Outputs
	wire [3:0] curr;
	wire [7:0] op1;
	wire [7:0] op2;
	wire [3:0] y;
	wire [7:0] temp;
	wire [7:0] temp2;
	wire [7:0] alutemp;

	// Instantiate the Unit Under Test (UUT)
	mem_controller uut (
		.reset(reset), 
		.clk(clk), 
		.S(S), 
		.curr(curr), 
		.op1(op1), 
		.op2(op2), 
		.y(y), 
		.temp(temp), 
		.temp2(temp2), 
		.alutemp(alutemp)
	);
	
	initial begin
		clk=0;
		forever clk=#5~clk;
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

