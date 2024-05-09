//游戏的实现
//''单引号只能包含一个字符，赋给字符串常量应该用双引号“”
#include "game.h" 

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            board[i][j] = set; 
        }
    }
}

void DisPlayBoard(char board[ROWS][COLS], int row, int col)
{
    int i = 0;
    int j = 0;
    printf("-----------扫雷游戏-----------\n\n");
    //打印列号
    for(int i = 0; i <= col; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    for (i = 1; i <= row; i++)
    {
        printf("%d ", i);
        for(j = 1; j <= col; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    printf("-----------扫雷游戏-----------\n\n");
}

//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col)
{
    //布置十个雷
    int count = EASY_COUNT;
    while(count != 0)
    {
        //生成随机的下标
        int x = rand() % row + 1;
        int y = rand() % col + 1;
        if(mine[x][y] == '0')
        {
            mine[x][y] = '1';
            count--;
        }

    }
}

//static
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数
//static这里可以使用表示这个get_mine_count函数只能在这个game.c里看到，
//这里的这个函数仅仅是为了支撑FindMine函数的使用，所以不用在前面声明
static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{   
    return mine[x - 1][y]+
           mine[x - 1][y - 1]+
           mine[x][y - 1]+
           mine[x + 1][y - 1]+
           mine[x + 1][y]+
           mine[x + 1][y + 1]+
           mine[x][y + 1]+
           mine[x -1][y + 1] - 8 * '0';
}

//排查雷
void FineMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
    //1.输入排查的坐标
    //2.检查坐标处是不是雷
      //（1）是雷 -很遗憾炸死了 -游戏结束
      //（2）不是雷 -统计坐标周围有几个雷 - 存储排查雷的信息到show数组游戏继续
    int x = 0;
    int y = 0;
    int win = 0;
    while(win < row * col - EASY_COUNT)
    {
        printf("请输入排查的坐标:>");
        scanf("%d %d", &x, &y);//x(1-9);y(1-9)

        //判断坐标的合法性
        if(x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if (mine[x][y] == '1')
            {
                printf("很遗憾，你被炸死了！");
                DisPlayBoard(mine, row, col);
                break;
            }
            else
            {
                //不是雷情况下，统计x,y坐标处周围有几个雷
                int count = get_mine_count(mine, x, y);
                show[x][y] = count + '0'; //数字0 和 字符 '0'的差值是48
                DisPlayBoard(show,row,col);//显示排查的信息
                win++;
            }
        }
        else
        {
            printf("坐标不合法，请重新输入:");
        }
        if (win == row * col - EASY_COUNT)
        {
            printf("恭喜你排雷成功！");
            DisPlayBoard(mine, row, col);
        }
    }
}