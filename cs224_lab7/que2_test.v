`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:58:01 02/22/2022
// Design Name:   que2
// Module Name:   C:/cs221_lab/cs224_lab7/que2_test.v
// Project Name:  cs224_lab7
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: que2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module que2_test;

	// Inputs
	reg clk;
	reg reset;
	reg s;
	reg [3:0] Ain;
	reg [3:0] Bin;

	// Outputs
	wire [3:0] C;
	wire [2:0] curstate;
	wire done;

	// Instantiate the Unit Under Test (UUT)
	que2 uut (
		.clk(clk), 
		.reset(reset), 
		.s(s), 
		.Ain(Ain), 
		.Bin(Bin), 
		.C(C), 
		.curstate(curstate), 
		.done(done)
	);

initial begin
        clk=0;
        forever #5 clk=~clk;
    end
    initial begin
        // Initialize Inputs
        clk = 0;
        reset = 0;
        s = 0;
        Ain = 0;
        Bin = 0;

        // Wait 100 ns for global reset to finish
        #10; reset = 1; #10 reset=0;

        #10; s=1; Ain=4'b1011; Bin=4'b1111;
        #20; s=0;
        #100 ;

        // Add stimulus here

    end
      
endmodule

