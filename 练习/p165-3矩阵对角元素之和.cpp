#include <stdio.h>
int main()
{
	int i, j, sum;
	int a[100][100]; 
	for (i = 1; i <= 3; i++)
	{
		for(j = 1; j <= 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 1; i <= 3; i++)
	{
		for(j = 1; j <= 3; j++)
		{
			if (i == j)
			 sum += a[i][j];
		}
	}
	printf("%d", sum);
	return 0;
} 
