`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:40:35 02/01/2022
// Design Name:   upcounter
// Module Name:   C:/cs221_lab/cs224_lab4/upcounter_test.v
// Project Name:  cs224_lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: upcounter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module upcounter_test;

	// Inputs
	reg [3:0] d;
	reg clk;
	reg load;
	reg clear;
	reg incr;

	// Outputs
	wire [3:0] q;

	// Instantiate the Unit Under Test (UUT)
	upcounter uut (
		.d(d), 
		.clk(clk), 
		.load(load), 
		.clear(clear), 
		.incr(incr), 
		.q(q)
	);

	initial begin
		// Initialize Inputs
		d = 0;
		clk = 0;
		load = 0;
		clear = 0;
		incr = 0;

		// Wait 100 ns for global reset to finish
		#100;
        d = 13;
        load = 1;
        clear= 0;
        incr = 0;
		  clk=1;

       #100;
        d= 9;
        load = 1;
        clear = 0;
        incr = 1;
		  clk=0;
		  
		 #100;
			d = 14;
        load = 0;
        clear= 0;
        incr = 1;
		  clk=1;
		  
		 #100;
			d = 11;
        load = 0;
        clear= 1;
        incr = 1;
		  clk=0;
		  
		 #100;
			d = 11;
        load = 0;
        clear= 1;
        incr = 1;
		  clk=1;
        
		// Add stimulus here

	end
      
endmodule

