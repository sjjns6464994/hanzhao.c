//扫雷游戏的测试
#include "game.h"

void menu()
{
    printf("*************************\n");
    printf("********* 1.play ********\n");
    printf("********* 0.exit ********\n");
    printf("*************************\n");
}

void game()
{
    char mine[ROWS][COLS] = {0};//存放布置好的雷的信息
    char show[ROWS][COLS] = {0};//存放排查出的雷的信息，不是9*9的原因严格按照上下坐标一致的原则
    //初始化棋盘
    InitBoard(mine, ROWS, COLS, '0');//0
    InitBoard(show, ROWS, COLS, '*');//*

    //打印棋盘
    
    DisPlayBoard(show, ROW, COL);

    //布置雷
    SetMine(mine, ROW, COL);
    // DisPlayBoard(mine, ROW, COL);
    //排查雷
    FineMine(mine, show, ROW, COL);//mine数组排查信息放到show数组中去
}

int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请选择:>");
        scanf("%d", &input);//scanf后不能跟\n
        switch(input)
        {
            case 1:
                game();//扫雷游戏
                break;
            case 0:
                break;
            default:
                break;
        }
    }while(input);
    system("pause");
    return 0;
}

//可以优化
//1.如果这个坐标没有雷并且周围也没有雷，可以实现展开一片 - 递归
//2.标记雷的功能