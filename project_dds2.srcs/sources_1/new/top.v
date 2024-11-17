module top(
    input clk,
    input[23:0] freq_conf_l,freq_conf_h,offset_conf,
    input mode,en,config_valid,dds_rst_n,cnt_rst_n,conf,
    output[15:0] I_out,Q_out
    );
    
reg[23:0]       config_data_pinc;
wire            data_tvalid,phase_tvalid;
wire[23:0]      phase_tdata;
wire[23:0]      cout;




dds_001 dds0 (
  .aclk(clk),                                  // input wire aclk
  .aresetn(dds_rst_n),                            // input wire aresetn
  .s_axis_phase_tvalid(config_valid),    // input wire s_axis_phase_tvalid
  .s_axis_phase_tdata(config_data_pinc),      // input wire [23 : 0] s_axis_phase_tdata
  .s_axis_config_tvalid(config_valid),  // input wire s_axis_config_tvalid
  .s_axis_config_tdata(offset_conf),    // input wire [23 : 0] s_axis_config_tdata
  .m_axis_data_tvalid(data_tvalid),      // output wire m_axis_data_tvalid
  .m_axis_data_tdata({I_out,Q_out}),        // output wire [31 : 0] m_axis_data_tdata
  .m_axis_phase_tvalid(phase_tvalid),    // output wire m_axis_phase_tvalid
  .m_axis_phase_tdata(phase_tdata)      // output wire [23 : 0] m_axis_phase_tdata
);

pinc_counter cnt0(
    .clk(clk),
    .rst_n(cnt_rst_n),
    .conf_start(freq_conf_l),
    .conf_end(freq_conf_h),
    .c_out(cout),
    .conf(conf),
    .en(en),
    .mode(mode)
);


always @(cout) begin
        config_data_pinc <= cout; // 将 cout的值赋给 tb_config_data_pinc
end

always @(posedge config_valid) begin
        config_data_pinc <= 24'd1000;
end
    
endmodule
