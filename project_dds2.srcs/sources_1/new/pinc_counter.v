/*
����һ�����ڿ���DDS24λpincƵ�ʶ˿ڵļ�����


��������

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
    input clk,                  // ʱ���ź�
    input rst_n,                // ��λ�źţ��͵�ƽ��Ч
    input en,                   // ʹ���ź�
    input conf,                 // ����ģʽ
    input mode,                 // mode = 0 ���  =1 ����
    input [23:0] conf_start,    // ������ʼֵ
    input [23:0] conf_end,      // ������ֵֹ
    output reg [23:0] c_out     // �������
);

    reg [23:0] count_start;     // �ڲ��Ĵ������������ʼֵ
    reg [23:0] count_end;       // �ڲ��Ĵ������������ֵֹ
    reg [23:0] out_buf;         // ���buffer
    reg modeflag;               //modeflag����������ǲ�ʱ�ж��ź���������
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
                    modeflag=0;//����
                end
                if(out_buf == count_start) begin
                    modeflag=1;//����
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
