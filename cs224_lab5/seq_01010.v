`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:42:28 02/08/2022 
// Design Name: 
// Module Name:    seq_01010 
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
module seq_01010(output reg out, input xin, clk, rst);
  parameter s0 = 3'b000;
  parameter s1 = 3'b001;
  parameter s2 = 3'b010;
  parameter s3 = 3'b011;
  parameter s4 = 3'b100;
  parameter s5 = 3'b101;
  
  reg [2:0] nextstate;
  reg [2:0] state;
  
  always @ (posedge clk,posedge rst)
    begin
      if(rst) state <= s0;
      else state <= nextstate;
    end
  
  
  always @(state, xin)
    case(state)
      s0: begin
        if(xin) nextstate = s0;
        else nextstate = s1;
      end
      s1: begin
        if(xin) nextstate = s2;
        else nextstate = s1;
      end
      s2: begin
        if(xin) nextstate = s0;
        else nextstate = s3;
      end
      s3: begin
        if(xin) nextstate = s4;
        else nextstate = s1;
      end
      s4: begin
        if(xin) nextstate = s0;
        else nextstate = s5;
      end
      s5: begin
        if(xin) nextstate = s0;
        else nextstate = s1;
      end
    endcase
  
  always @(state)
    case(state)
      s0, s1, s2, s3, s4: out <= 1'b0;
      s5: out <= 1'b1;
    endcase
  
endmodule
