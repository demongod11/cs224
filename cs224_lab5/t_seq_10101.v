`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:41:48 02/08/2022
// Design Name:   seq_10101
// Module Name:   C:/cs221_lab/cs224_lab5/t_seq_10101.v
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

module t_seq_10101;
  wire t_out;
  reg t_xin, t_clk, t_rst;
  
  seq_10101 M2(t_out, t_xin, t_clk, t_rst);
  
  initial begin
    $dumpfile("dump.vcd");
    $dumpvars(0,M2);
  end
  
  initial t_clk = 1'b0;
  always #5 t_clk = !t_clk;
  
  initial begin
    t_rst = 1'b0;
    #5 t_rst = 1'b1;
  end
  
  initial begin
    #5  t_xin = 1'b0;
    #10 t_xin = 1'b0;
    #10 t_xin = 1'b1;
    #10 t_xin = 1'b1; t_rst = 1'b1;
    #10 t_xin = 1'b0;
    #10 t_xin = 1'b1;
    #10 t_xin = 1'b0; t_rst = 1'b0;
    #10 t_xin = 1'b1; 
    #10 t_xin = 1'b1;
    #10 t_xin = 1'b0;
    #10 t_xin = 1'b1;
    #10 t_xin = 1'b1;
    #10 t_xin = 1'b0;
    #10 t_xin = 1'b1;
    #10 t_xin = 1'b0;
    #10 t_xin = 1'b1;
    #10 t_xin = 1'b0;
    #10 t_xin = 1'b1;
    #10 t_xin = 1'b1;
    #20 $finish;
  end
  
  initial begin   
    #5 $display($time,, "%b   %b",t_xin, t_out);
    repeat(25) begin  
      #10 $display($time,, "%b   %b", t_xin, t_out);   
    end   
  end
  
endmodule

