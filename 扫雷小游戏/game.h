//游戏函数的声明
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
#include <string.h>
#include <time.h>

//define 定义一般是大写
#define EASY_COUNT 10
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//初始化数组
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//打印棋盘
void DisPlayBoard(char board[ROWS][COLS], int rows, int cols);

//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col);

//排查雷
void FineMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);