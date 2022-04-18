`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:22:13 02/15/2022 
// Design Name: 
// Module Name:    mealy_1001 
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
module mealy_1001(input x, input clk, input reset, output reg y, output reg[1:0] curstate );

     reg[1:0] nextstate;
	  always @(posedge clk )
	  begin
        if(reset) curstate = 2'b00;
       else curstate = nextstate;
    end
	 always @(x or curstate) 
	 begin
        case (curstate)
		    2'b00: if(x==0) begin  nextstate = 2'b00;y=0;end
						else begin nextstate = 2'b01;y=0;end
          2'b01: if(x==0)begin  nextstate = 2'b10;y=0; end
						else begin nextstate = 2'b01;y=0 ;end
          2'b10: if(x==0) begin nextstate = 2'b11;y=0; end
						else begin nextstate = 2'b01;y=0 ;end
          2'b11: if(x==0) begin  nextstate = 2'b00;y=0; end
						else begin nextstate = 2'b01;y=1; end
			 default: nextstate=2'b00;
        endcase
    end

endmodule
