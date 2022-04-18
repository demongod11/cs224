`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:41:19 02/15/2022 
// Design Name: 
// Module Name:    sequence_1001 
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
module sequence_1001(input x, input clk, input reset, output reg moore,	output reg mealy, output reg[2:0] curstate);
		
	reg[2:0] nextstate;
	
	always @(posedge clk )
	begin
		if(reset) curstate = 3'b000;
	   else curstate = nextstate;
	end
	always @(x or curstate)
	begin
		case (curstate)
			3'b000: if(x==0) 	begin nextstate = 3'b000; mealy=0; end  
					  else 		begin nextstate = 3'b001; mealy=0; end
			3'b001: if(x==0) 	begin nextstate = 3'b010; mealy=0; end  
					  else 		begin nextstate = 3'b001; mealy=0; end
			3'b010: if(x==0) 	begin nextstate = 3'b011; mealy=0; end  
					  else 		begin nextstate = 3'b001; mealy=0; end
			3'b011: if(x==0) 	begin nextstate = 3'b000; mealy=0; end  
					  else 		begin nextstate = 3'b100; mealy=1; end
			3'b100: if(x==0) 	begin nextstate = 3'b010; mealy=0; end  
					  else 		begin nextstate = 3'b001; mealy=0; end
			default:  			begin nextstate = 3'b000; mealy=0; end
		endcase
	end
	always @(curstate)
	begin 
		case(curstate)
			3'b000: moore=0;
			3'b001: moore=0;
			3'b010: moore=0;
			3'b011: moore=0;
			3'b100: moore=1;
			default: moore=0;
		endcase
	end

endmodule
