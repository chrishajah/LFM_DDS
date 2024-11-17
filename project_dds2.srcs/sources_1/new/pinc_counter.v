/*
这是一个用于控制DDS24位pinc频率端口的计数器


例化代码

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

*/
module pinc_counter(
    input clk,                  // 时钟信号
    input rst_n,                // 复位信号，低电平有效
    input en,                   // 使能信号
    input conf,                 // 配置模式
    input mode,                 // mode = 0 锯齿  =1 三角
    input [23:0] conf_start,    // 计数起始值
    input [23:0] conf_end,      // 计数终止值
    output reg [23:0] c_out     // 计数输出
);

    reg [23:0] count_start;     // 内部寄存器保存计数起始值
    reg [23:0] count_end;       // 内部寄存器保存计数终止值
    reg [23:0] out_buf;         // 输出buffer
    reg modeflag;               //modeflag用于输出三角波时判断信号增长方向
    always @(posedge clk) begin
        if(conf) begin
            count_start <= conf_start;
            count_end <= conf_end;
            out_buf <= conf_start;
        end
        if(en) begin
            if(!mode) begin      //mode0:sawooth mode
                if(out_buf <= count_end) begin
                    out_buf = out_buf + 24'd1;
                end else begin
                    out_buf = count_start;
                end
            end
            else begin          //mode1:triangle mode
                if(out_buf == count_end) begin
                    modeflag=0;//反向
                end
                if(out_buf == count_start) begin
                    modeflag=1;//正向
                end
                if(modeflag) begin
                    out_buf = out_buf + 24'd1;
                end else begin
                    out_buf = out_buf - 24'd1;
                end
            end
            c_out <= out_buf;
        end
         
    end
    
endmodule
