`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:05:47 01/18/2022
// Design Name:   delay_rca
// Module Name:   C:/cs221_lab/cs221_lab2/test_delay_rca.v
// Project Name:  cs221_lab2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: delay_rca
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_delay_rca;

	// Inputs
	reg [3:0] X;
	reg [3:0] Y;
	reg [3:0] Cin;

	// Outputs
	wire [3:0] S;
	wire Cout;

	// Instantiate the Unit Under Test (UUT)
	delay_rca uut (
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
		
   	/*#100;  //For 2s
		X = 2;
		Y = 1;
		Cin = 0;  */
		
	/*	#200;  //For 4s
		X = 4;
		Y = 5;
		Cin = 1; */
		
		#100;  //For 6s
		X = 15;
		Y = 13;
		Cin = 1; 
		
		#100;  //For 8s
		X = 1;
		Y = 15;
		Cin = 1; 
		       
		// Add stimulus here

	end
      
endmodule

