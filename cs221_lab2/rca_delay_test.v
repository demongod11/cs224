`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:04:23 01/18/2022
// Design Name:   rca_delay
// Module Name:   C:/cs221_lab/cs221_lab2/rca_delay_test.v
// Project Name:  cs221_lab2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: rca_delay
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module rca_delay_test;

	// Inputs
	reg [3:0] X;
	reg [3:0] Y;
	reg [3:0] Cin;

	// Outputs
	wire [3:0] S;
	wire Cout;

	// Instantiate the Unit Under Test (UUT)
	rca_delay uut (
		.X(X), 
		.Y(Y), 
		.Cin(Cin), 
		.S(S), 
		.Cout(Cout)
	);

	initial begin
	$monitor( $time, ", X = %b, Y = %b, Cin = %b, S = %b, Cout = %b", X,Y,Cin,S,Cout);
		// Initialize Inputs
		X = 0;
		Y = 0;
		Cin = 0;

		// Wait 100 ns for global reset to finish
		
		/*#100; // For 8s
		X = 3;
		Y = 4;
		Cin = 0;*/
		
		#100 // For 4s
		X = 4;
		Y = 5;
		Cin = 1;
        
		// Add stimulus here

	end
      
endmodule

