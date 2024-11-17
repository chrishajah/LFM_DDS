`timescale 1ns / 1ps


module tb_counter();
    
    
reg             clk_sys;
parameter       CYCLE = 5;
always# (CYCLE) clk_sys=~clk_sys;
reg             rst_n,en,conf,mode;
reg[23:0]       conf_start,conf_end;
wire[23:0]      cout;

pinc_counter tb_cnt(
    .clk(clk_sys),
    .rst_n(rst_n),
    .conf_start(conf_start),
    .conf_end(conf_end),
    .c_out(cout),
    .conf(conf),
    .en(en),
    .mode(mode)
);


initial begin


    en=0;
    clk_sys=0;
    
    rst_n=1;
    conf = 1;
    #1000;
    conf_start=24'd10000;
    conf_end=24'd30000;
    #1000;
    conf = 0;
    en=1;
    mode = 1;
    #1000000;
    mode = 0;
    #1000000;
    conf = 1;
    #1000;
    conf_start=24'd2000;
    conf_end=24'd3000;
    #1000;
    conf = 0;
    mode = 1;  
    #1000000;
    
    $stop;
end

endmodule

