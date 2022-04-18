`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:14:53 02/23/2022 
// Design Name: 
// Module Name:    quiz2A 
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

module quiz2A(input [3:0] din,input clk,input load,reset,lin,sh,output reg [3:0] ans);
     always @(posedge clk)
     begin
         if(reset)
             begin
             ans<=0;
         end
         else 
         begin
             if(load)
              begin
                  ans<=din;
              end
              else
              begin
                  if(sh)
                  begin
                        ans[0]<=ans[1];
                        ans[1]<=ans[2];
                        ans[2]<=ans[3];
                        ans[3]<=lin;
                  end
              end
          end
     end
endmodule

