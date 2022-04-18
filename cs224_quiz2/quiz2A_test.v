`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:15:05 02/23/2022
// Design Name:   quiz2A
// Module Name:   C:/cs221_lab/cs224_quiz2/quiz2A_test.v
// Project Name:  cs224_quiz2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: quiz2A
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module quiz2A_test;

	// Inputs
	reg [3:0] din;
	reg clk;
	reg load;
	reg reset;
	reg lin;
	reg sh;

	// Outputs
	wire [3:0] ans;

	// Instantiate the Unit Under Test (UUT)
	quiz2A uut (
		.din(din), 
		.clk(clk), 
		.load(load), 
		.reset(reset), 
		.lin(lin), 
		.sh(sh), 
		.ans(ans)
	);

	initial begin
		// Initialize Inputs
		din = 0;
		clk = 0;
		load = 0;
		reset = 0;
		lin = 0;
		sh = 0;
$monitor( "din=%d reset=%b load=%b sh=%b lin=%b ans=%d", din,reset,load,sh,lin,ans);
		// Wait 100 ns for global reset to finish
		#10 reset = 1;
#10 load = 1;
#10 din = 4; sh=1; lin=1;
#10 reset = 0;
#10 din = 6;
#10 din = 3;
#10 sh = 1; lin=1;
#10 load=0;
#10 din = 8; lin=0;
#60;$stop;
        
		// Add stimulus here

	end
      
endmodule

