#include <stdio.h>
int main()
{
	int m, n, p, i, j, index, k, h, l = 0;
	int d[1000];
	int a[100][100], b[100][100], c[100][100];//数组过大会导致溢出 
	scanf("%d %d %d", &m, &n, &p);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	}
	
	for (k = 0; k < n; k++)
	{
		for (h = 0; h < p; h++)
			scanf("%d", &b[k][h]);
	}
	
	for(i = 0; i < m; i++)
	{
		for (j = 0; j < p; j++)
		{
			index = 0;//有一步清零 
			for (k = 0; k < n; k++)
			{
				index += a[i][k] * b[k][j];
			}
			d[l++] = index;
		}
	} 

		
	l = 0; 
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < p; j++)
		{
			c[i][j] = d[l++];//l++ 
		}
	}
	printf("\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < p; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
