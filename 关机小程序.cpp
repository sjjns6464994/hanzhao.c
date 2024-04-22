#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
#include <string.h>

int main()
{
    //关机
    //C语言提供了一个函数：system() - 执行系统命令的
    char input[20] = { 0 };//存放输入的信息
    system("shutdown -s -t 60");
again:
    printf("请注意你的电脑在1分钟后关机,如果输入:取消,就取消关机\n");
    scanf("%s",input);
    if (strcmp(input,"取消") == 0)//两个字符串比较不能使用==，用该使用strcmp
    {
        system("shutdow -a");
    }
    else
    {
        goto again;
    }
    system("pause");
    return 0;
}