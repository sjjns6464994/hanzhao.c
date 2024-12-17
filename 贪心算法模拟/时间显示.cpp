#include <stdio.h>

int main() 
{
    int hh, mm, ss, n;
    scanf("%d:%d:%d", &hh, &mm, &ss);
    scanf("%d", &n);

    // 将当前时间转换为总秒数
    int total_seconds = hh * 3600 + mm * 60 + ss + n;	

    // 计算新的时间
    int new_hh = (total_seconds / 3600) % 24;  // 取余24以确保不超出24小时
    int new_mm = (total_seconds % 3600) / 60;
    int new_ss = total_seconds % 60;

    // 输出结果时间
    printf("%02d:%02d:%02d\n", new_hh, new_mm, new_ss);

    return 0;
}
