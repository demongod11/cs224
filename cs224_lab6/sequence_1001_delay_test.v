`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:09:16 02/15/2022
// Design Name:   sequence_1001_delay
// Module Name:   C:/cs221_lab/cs224_lab6/sequence_1001_delay_test.v
// Project Name:  cs224_lab6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sequence_1001_delay
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sequence_1001_delay_test;

	// Inputs
	reg x;
	reg clk;
	reg reset;

	// Outputs
	wire Dmealy;
	wire mealy;
	wire [2:0] curstate;

	// Instantiate the Unit Under Test (UUT)
	sequence_1001_delay uut (
		.x(x), 
		.clk(clk), 
		.reset(reset), 
		.Dmealy(Dmealy), 
		.mealy(mealy), 
		.curstate(curstate)
	);

	 initial begin 
        clk=0;
        forever #5 clk = ~clk;
    end

    initial begin
        $monitor($time," x=%b mealy=%b Dmealy=%b , reset=%b", x, mealy, Dmealy, reset );
        // Initialize Inputs
        x = 0;
        clk = 0;
        reset = 0;

        // Wait 100 ns for global reset to finish
        #10; reset = 1;
        #10; reset = 0;

        #10; x=0;
        #10; x=1;
        #10; x=0;
        #10; x=0;
        #10; x=1;
        #10; x=0; 
        #10; x=0;
        #10; x=1;
        #10; x=1;
        #10; x=0;
        #10; x=0;
        #10; x=0;
        #10; x=0;
        #10; x=1;
        #10; x=0;
        #10; x=0;
        #10; x=1;
        #10; x=0;
      #20 $finish;
        // Add stimulus here

    end
      
endmodule

