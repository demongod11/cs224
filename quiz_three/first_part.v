 `timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:12:12 03/22/2022 
// Design Name: 
// Module Name:    first_part 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

module first_part(input x, input clk, input reset, output reg y);

	reg[2:0] nextstate;
	reg[2:0] curstate;

	always @(posedge clk or posedge reset)
	begin
		if(reset) curstate = 3'b000;
		else curstate = nextstate;
	end
	
	always @(x or curstate)
	begin
		case (curstate)
			3'b000: if(x==0) 	begin nextstate = 3'b000; y=0; end  
					  else 		begin nextstate = 3'b001; y=0; end
			3'b001: if(x==0) 	begin nextstate = 3'b010; y=0; end  
					  else 		begin nextstate = 3'b011; y=0; end
			3'b010: if(x==0) 	begin nextstate = 3'b000; y=0; end  
					  else 		begin nextstate = 3'b011; y=0; end
			3'b011: if(x==0) 	begin nextstate = 3'b100; y=0; end  
					  else 		begin nextstate = 3'b011; y=1; end
			3'b100: if(x==0) 	begin nextstate = 3'b000; y=0; end  
					  else 		begin nextstate = 3'b011; y=1; end
			default:  			begin nextstate = 3'b000; y=0; end
		endcase
	end

endmodule
