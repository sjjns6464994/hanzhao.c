#include "test.h"
#include "game.h"

void menu()
{
    printf("***************************\n");
    printf("********  1.play  *********\n");
    printf("********  0.exit  *********\n");
    printf("***************************\n");
}

void game()
{
    //存储数组 - 二维数组
    char board[ROW][COL];
    //初始化棋盘
    InitBoard(board, ROW, COL);
    //打印一下棋盘 - 本质是打印数组的内容
    DisplayBoard(board, ROW, COL);
    //玩家走
    //电脑走

    char ret = 0;//接受游戏状态
    while(1)
    {
        //玩家下棋
        PlayerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        //判断玩家输赢
        ret = IsWin(board, ROW, COL);
        if (ret != 'C')
            break;
        //电脑下棋
        ComputerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
         //判断电脑输赢
        ret = IsWin(board, ROW, COL);
        if (ret != 'C')
            break;
    }
    if (ret == '*')
    {
        printf("玩家赢了\n");
    }
    else if(ret == '#')
    {
        printf("电脑赢了\n");
    }
    else
    {
        printf("平局\n");
    }
    DisplayBoard(board, ROW, COL);
}

int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));

    do
    {
        menu();
        printf("请选择>");
        scanf("%d", &input);
        switch(input)
        {
            case 1:
                game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                break;
        }
    }while (input);
    system("pause");
    return 0;
}