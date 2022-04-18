`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:13:48 02/15/2022 
// Design Name: 
// Module Name:    moore_1001 
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
module moore_1001(input x, input clk, input reset, output reg y, output reg[2:0] curstate);


    reg[2:0] nextstate;

    always @(posedge clk ) 
	 begin 
        if(reset) curstate = 3'b000;
       else curstate = nextstate;
    end
    always @(x or curstate)
	 begin 
        case (curstate)
            3'b000: if(x==0) nextstate = 3'b000; else nextstate = 3'b001;
            3'b001: if(x==0) nextstate = 3'b010; else nextstate = 3'b001;
            3'b010: if(x==0) nextstate = 3'b011; else nextstate = 3'b001;
            3'b011: if(x==0) nextstate = 3'b000; else nextstate = 3'b100;
            3'b100: if(x==0) nextstate = 3'b010; else nextstate = 3'b001;
            default: nextstate=3'b000;
        endcase
    end
    always @(curstate)
	 begin
        case(curstate)
            3'b000: y=0;
            3'b001: y=0;
            3'b010: y=0;
            3'b011: y=0;
            3'b100: y=1;
            default: y=0;
        endcase
    end

endmodule