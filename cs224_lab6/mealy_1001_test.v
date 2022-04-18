`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:23:29 02/15/2022
// Design Name:   mealy_1001
// Module Name:   C:/cs221_lab/cs224_lab6/mealy_1001_test.v
// Project Name:  cs224_lab6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mealy_1001
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mealy_1001_test;

	// Inputs
	reg x;
	reg clk;
	reg reset;

	// Outputs
	wire y;
	wire [1:0] curstate;

	// Instantiate the Unit Under Test (UUT)
	mealy_1001 uut (
		.x(x), 
		.clk(clk), 
		.reset(reset), 
		.y(y), 
		.curstate(curstate)
	);
	
initial begin 
        clk=0;
        forever #5 clk = ~clk;
    end

    initial begin
        $monitor($time," x=%b y=%b, reset=%b", x,y, reset );
        // Initialize Inputs
        x = 0;
        clk = 0;
        reset = 0;

        // Wait 100 ns for global reset to finish
        #10; reset = 1;
        #10; reset = 0;
        #10; x=1;
        #10; x=0;
        #10; x=0;
        #10; x=1;
        #10; x=0;
        #10; x=0;
        #10; x=1;
      #20 $finish;
        // Add stimulus here

    end
      
endmodule

