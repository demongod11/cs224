`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:56:35 02/08/2022
// Design Name:   seq_11000
// Module Name:   C:/cs221_lab/cs224_lab5/t_seq_11000.v
// Project Name:  cs224_lab5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: seq_11000
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module t_seq_11000;

    // Inputs
    reg xin;
    reg clk;
    reg rst;

    // Outputs
    wire out;

    // Instantiate the Unit Under Test (UUT)
    seq_11000 uut (
        .out(out), 
        .xin(xin), 
        .clk(clk), 
        .rst(rst)
    );
    initial
    begin
        clk=0;
        forever #5 clk=~clk;
    end
    initial begin
        // Initialize Inputs
        xin = 0;
        clk = 0;
        rst = 0;

        // Wait 100 ns for global reset to finish
        #10;rst=1;
        #10;rst=0;
        #10; xin=0;
        #10; xin=0;
        #10; xin=1;
        #10; xin=1;
        rst=1;
        #10; xin=0;
        #10; xin=0;
        rst=0;
        #10; xin=1;
        #10; xin=0;
        #10; xin=1;
        #10; xin=1;
        #10; xin=0;
        #10; xin=0;
        #10; xin=0; rst = 1;
        #10; xin=0;

    end

endmodule

