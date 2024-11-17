`timescale 1ns / 1ps


module dds_tb();

reg             clk_sys;
parameter       CYCLE = 5;
always# (CYCLE) clk_sys=~clk_sys;

reg dds_rst_n,cnt_rst_n;
wire[15:0]      tb_dds_data_sin0,tb_dds_data_cos0;
wire[23:0]      tb_phase_tdata;
reg[23:0]       tb_config_data_poff,tb_config_data_pinc;
reg             config_valid;

reg[23:0]       conf_start,conf_end;
wire[23:0]      cout;
reg             en,conf,mode;

wire tb_data_tvalid,tb_phase_tvalid;

/*dds_001 dds_test (
  .aclk(clk_sys),                                  // input wire aclk
  .aresetn(rst_n),                            // input wire aresetn
  .s_axis_config_tvalid(config_valid),  // input wire s_axis_config_tvalid
  .s_axis_config_tdata({tb_config_data_poff,tb_config_data_pinc}),    // input wire [31 : 0] s_axis_config_tdata
  .m_axis_data_tvalid(tb_data_tvalid),      // output wire m_axis_data_tvalid
  .m_axis_data_tdata({tb_dds_data_sin0,tb_dds_data_cos0}),        // output wire [31 : 0] m_axis_data_tdata
  .m_axis_phase_tvalid(tb_phase_tvalid),    // output wire m_axis_phase_tvalid
  .m_axis_phase_tdata(tb_phase_tdata)      // output wire [15 : 0] m_axis_phase_tdata
);
*/

dds_001 dds_test (
  .aclk(clk_sys),                                  // input wire aclk
  .aresetn(dds_rst_n),                            // input wire aresetn
  .s_axis_phase_tvalid(config_valid),    // input wire s_axis_phase_tvalid
  .s_axis_phase_tdata(tb_config_data_pinc),      // input wire [23 : 0] s_axis_phase_tdata
  .s_axis_config_tvalid(config_valid),  // input wire s_axis_config_tvalid
  .s_axis_config_tdata(tb_config_data_poff),    // input wire [23 : 0] s_axis_config_tdata
  .m_axis_data_tvalid(tb_data_tvalid),      // output wire m_axis_data_tvalid
  .m_axis_data_tdata({tb_dds_data_sin0,tb_dds_data_cos0}),        // output wire [31 : 0] m_axis_data_tdata
  .m_axis_phase_tvalid(tb_phase_tvalid),    // output wire m_axis_phase_tvalid
  .m_axis_phase_tdata(tb_phase_tdata)      // output wire [23 : 0] m_axis_phase_tdata
);

pinc_counter tb_cnt(
    .clk(clk_sys),
    .rst_n(cnt_rst_n),
    .conf_start(conf_start),
    .conf_end(conf_end),
    .c_out(cout),
    .conf(conf),
    .en(en),
    .mode(mode)
);

    always @(cout) begin
        tb_config_data_pinc <= cout; // 将 cout的值赋给 tb_config_data_pinc
    end
    
initial begin

    clk_sys=0;
    tb_config_data_pinc=24'd10000;
    en=0;
    cnt_rst_n=1;
    conf = 1;
    #1000;
    conf_start=24'd1000;
    conf_end=24'd50000;
    #1000;
    conf = 0;
    mode = 1;
    en=1;
    
    
    dds_rst_n=1;
    tb_config_data_poff=24'd100;
    //tb_config_data_pinc=24'd10000;
    config_valid=1'b1;
    #100000;

    $stop;
end

endmodule

