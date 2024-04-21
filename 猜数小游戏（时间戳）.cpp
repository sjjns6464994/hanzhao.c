#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
#include <string.h>


void menu()
{
    printf("**********************\n");
    printf("******  1.play *******\n");
    printf("******  0.exit *******\n");
    printf("**********************\n");
}
#include <stdlib.h>
#include <time.h>
void game()
{
    //猜数字游戏的实现
    //1.生成随机数
    //2.猜数字
    //srand函数要在rand函数前声明，但是又不能跟随循环进行否则生成的数不够随机因此放在主函数中
    int ret = rand()%100 + 1;//%100的余数是1-99 在加1 为1-100
    //printf("%d\n",d);

    int guess = 0;
    while(1)
    {
        printf("请猜数字：>");
        scanf("%d", &guess);
        if (guess < ret)
        {
            printf("猜小了\n");
        }
        else if(guess > ret)
        {
            printf("猜大了\n");
        }
        else
        {
            printf("猜对了\n");
            break;
        }
    }
}

int main()
{
    int input;
    srand((unsigned int)time(NULL));//设置一个随机的起点,传时间戳because 时间一直在变
    do
    {
        menu();//打印菜单
        printf("请选择：>");
        scanf("%d", &input);
        switch(input)
        {
        case 1:
            game();
            printf("猜数字");
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误,重新选择\n");
            break;
        }

    }while(input);//0的时候为假退出，其余的数为真继续运行
    system("pause");
    return 0;
}