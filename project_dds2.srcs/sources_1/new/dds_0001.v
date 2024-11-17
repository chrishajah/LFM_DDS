`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2024/10/21 17:11:59
// Design Name: 
// Module Name: dds_0001
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module dds_0001(
    output [15:0] dds_data_sin0,dds_data_cos0,
    input[15:0]  config_data_poff,config_data_pinc,
    input config_valid,
    input clk_sys,
    input rst_n
    );
    
    wire m_axis_data_tvalid_0,m_axis_phase_tvalid_0;
    wire[15:0] m_axis_phase_tdata_0;
    
dds_001 dds (
  .aclk(clk_sys),                                  // input wire aclk
  .aresetn(rst_n),                            // input wire aresetn
  .s_axis_config_tvalid(config_valid),  // input wire s_axis_config_tvalid
  .s_axis_config_tdata({16'd0,config_data_pinc}),    // input wire [31 : 0] s_axis_config_tdata
  .m_axis_data_tvalid(m_axis_data_tvalid_0),      // output wire m_axis_data_tvalid
  .m_axis_data_tdata({dds_data_sin0,dds_data_cos0}),        // output wire [31 : 0] m_axis_data_tdata
  .m_axis_phase_tvalid(m_axis_phase_tvalid_0),    // output wire m_axis_phase_tvalid
  .m_axis_phase_tdata(m_axis_phase_tdata_0)      // output wire [15 : 0] m_axis_phase_tdata
);


    
endmodule
