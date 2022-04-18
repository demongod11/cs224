`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:50:41 02/08/2022
// Design Name:   que1
// Module Name:   C:/cs221_lab/cs224_lab5/que1_test.v
// Project Name:  cs224_lab5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: que1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module que1_test;

	// Inputs
	reg x;
	reg clk;
	reg reset;

	// Outputs
	wire y;

	// Instantiate the Unit Under Test (UUT)
	que1 uut (
		.x(x), 
		.clk(clk), 
		.reset(reset), 
		.y(y)
	);

initial
    begin
        clk=0;
        forever #50 clk=~clk;
    end

    initial begin
        // Initialize Inputs
        x = 0;
        clk = 0;
        reset = 0;

        // Wait 100 ns for global reset to finish
        #100;reset=1;
        #100;reset=0;
        #100; x=0;
        #100; x=1;
        #100; x=0;
        #100; x=0;
        #100; x=0;
        #100; x=1;
        #100; x=0;
        #100; x=0;
        #100; x=1;
        #100; x=1;
        #100; x=0;
        #100; x=1;
        #100; x=0;
        #100; x=1;

        // Add stimulus here

    end
endmodule

