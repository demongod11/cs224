`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:11:23 03/08/2022
// Design Name:   sram_chip
// Module Name:   C:/cs221_lab/cs224_lab08/sram_chip_test.v
// Project Name:  cs224_lab08
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sram_chip
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sram_chip_test;

	// Inputs
	reg [4:0] address;
	reg [7:0] data_in;
	reg CS;
	reg OE;
	reg WE;

	// Outputs
	wire [7:0] data_out;

	// Instantiate the Unit Under Test (UUT)
	sram_chip uut (
		.address(address), 
		.data_in(data_in), 
		.CS(CS), 
		.OE(OE), 
		.WE(WE), 
		.data_out(data_out)
	);

	initial begin
		// Initialize Inputs
		address = 0;
		data_in = 0;
		CS = 0;
		OE = 0;
		WE = 0;

		// Wait 100 ns for global reset to finish
		#100;
		#5 CS=0;OE=1;WE=1;address = 1;data_in = 0;
      #5 CS=0;OE=0;WE=1;address = 1;data_in = 12;
      #5 CS=1;OE=1;WE=1;address = 3;data_in = 9;
      #5 CS=1;OE=1;WE=0;address = 3;
      #5 CS=1;OE=1;WE=0;address = 1;
        
		// Add stimulus here

	end
      
endmodule

