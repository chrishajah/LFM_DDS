`timescale 1ns / 1ps



module tb_top();

    reg             clk_sys;
    parameter       CYCLE = 5;
    always# (CYCLE) clk_sys=~clk_sys;
    
    reg dds_rst_n,cnt_rst_n,en,mode,config_valid,conf;
    reg[23:0]      freq_l,freq_h,offset_conf;
    wire[15:0]      I_out,Q_out;
    
    top top_test(
    .clk(clk_sys),
    .freq_conf_l(freq_l),
    .freq_conf_h(freq_h),
    .offset_conf(offset_conf),
    .mode(mode),
    .en(en),
    .config_valid(config_valid),
    .dds_rst_n(dds_rst_n),
    .cnt_rst_n(cnt_rst_n),
    .conf(conf),
    .I_out(I_out),
    .Q_out(Q_out)
    );


initial begin
    
    clk_sys=0;
    en=0;
    offset_conf = 24'd0;
    cnt_rst_n=1;
    dds_rst_n=1;
    conf = 1;
    #1000;
    freq_l=24'd1000;
    freq_h=24'd50000;
    #1000;
    conf = 0;
    mode = 1;
    en=1;
    config_valid=1'b1;
    #20000000;
    conf = 1;
    #1000;
    freq_l=24'd10000;
    freq_h=24'd50000;
    conf = 0;
    #10000000;
    conf = 1;
    mode = 0;
    #1000;
    freq_l=24'd66666;
    freq_h=24'd100000;
    conf = 0;
    #10000000;
    $stop;
end


endmodule