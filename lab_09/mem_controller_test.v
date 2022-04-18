`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:53:32 03/29/2022
// Design Name:   mem_controller
// Module Name:   /home/chandrabhushan/coding/cs224_labs/lab_09/mem_controller_test.v
// Project Name:  lab_09
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
	reg start;
	reg reset;
	reg clk;

	// Outputs
	wire [4:0] state;
	wire [7:0] temp1;
	wire [7:0] temp2;
	wire [7:0] dout;
	wire [7:0] output_alu;
	wire [4:0] address;
	wire [3:0] reg_address;

	// Instantiate the Unit Under Test (UUT)
	mem_controller uut (
		.start(start), 
		.reset(reset), 
		.clk(clk), 
		.state(state), 
		.temp1(temp1), 
		.temp2(temp2), 
		.dout(dout), 
		.output_alu(output_alu), 
		.address(address), 
		.reg_address(reg_address)
	);
	
	initial begin
		clk=0;
		forever clk = #5~clk;
	end

	initial begin
		// Initialize Inputs
		start = 0;
		reset = 1;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#10;
		reset=0;
		start=1;
        
		// Add stimulus here

	end
      
endmodule

