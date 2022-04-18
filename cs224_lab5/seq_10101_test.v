`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:37:26 02/08/2022
// Design Name:   seq_10101
// Module Name:   C:/cs221_lab/cs224_lab5/seq_10101_test.v
// Project Name:  cs224_lab5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: seq_10101
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

// Code your design here
module seq_10101(output reg out, input xin, clk, rst);
  parameter s0 = 3'b000;
  parameter s1 = 3'b001;
  parameter s2 = 3'b010;
  parameter s3 = 3'b011;
  parameter s4 = 3'b100;
  parameter s5 = 3'b101;
  
  reg [2:0] nextstate;
  reg [2:0] state;
  
  always @ (posedge clk,negedge rst)
    begin
      if(!rst) state <= s0;
      else state <= nextstate;
    end
  
  
  always @(state, xin)
    case(state)
      s0: begin
        if(xin) nextstate = s1;
        else nextstate = s0;
      end
      s1: begin
        if(xin) nextstate = s1;
        else nextstate = s2;
      end
      s2: begin
        if(xin) nextstate = s3;
        else nextstate = s0;
      end
      s3: begin
        if(xin) nextstate = s1;
        else nextstate = s4;
      end
      s4: begin
        if(xin) nextstate = s5;
        else nextstate = s0;
      end
      s5: begin
        if(xin) nextstate = s1;
        else nextstate = s0;
      end
    endcase
  
  always @(state)
    case(state)
      s0, s1, s2, s3, s4: out <= 1'b0;
      s5: out <= 1'b1;
    endcase
  
endmodule

