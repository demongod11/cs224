`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:22:35 02/08/2022 
// Design Name: 
// Module Name:    que1 
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

module que1(input x,input clk,input reset,output reg y);

    reg[1:0] curstate;
    reg[1:0] nextstate;

    always @(posedge clk ) 
	 begin
        if(reset) curstate = 2'b00;
       else curstate = nextstate;
    end
    always @(x or curstate) 
	 begin
        case (curstate)
            2'b00: if(x==0) nextstate = 2'b00; else nextstate = 2'b01;
            2'b01: if(x==0) nextstate = 2'b10; else nextstate = 2'b01;
            2'b10: if(x==0) nextstate = 2'b11; else nextstate = 2'b01;
            2'b11: if(x==0) nextstate = 2'b00; else nextstate = 2'b01;
        endcase
    end
    always @(curstate) 
	 begin
        case(curstate)
            2'b00: y=0;
            2'b01: y=0;
            2'b10: y=0;
            2'b11: y=1;
        endcase
    end

endmodule