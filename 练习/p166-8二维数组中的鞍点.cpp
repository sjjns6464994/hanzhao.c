#include<stdio.h>
int func_h (int a[3][3], int row);
int func_l (int a[3][3], int col);
int main ()
{
	int i, j, k, flag = 0;
	int a[3][3];//特别注意这里数组的大小一定正好，不能大也不能小； 
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		int max_h = func_h(a, i);
		for (j = 0; j < 3; j++)
		{
			if (a[i][j] == max_h)
			{
				int min_l = func_l(a, j);
				if (max_h == min_l)
				{
					flag = 1;
					printf("鞍点值%d, 位置（%d, %d）\n", max_h, i, j);
				}
			}
		}
	}
	if(flag == 0)
		printf("该矩阵没有鞍点");
	return 0;
}
int func_h(int a[3][3], int row)
{
	int i, j, k,max_h = a[row][0];
	for (j = 0; j < 3; j++)
	{
		if (a[row][j] > max_h)
			max_h = a[row][j];
	}
	return max_h;
}
int func_l (int a[3][3], int col)
{
	int i, j, k, min_l = a[0][col];
	for (i = 0; i < 3; i++)
	{
		if(a[i][col] < min_l)
			min_l = a[i][col];
	}
	return min_l;
}

