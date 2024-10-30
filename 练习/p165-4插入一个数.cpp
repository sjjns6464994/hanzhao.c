#include <stdio.h>
int main()
{
	int a, b, i, j , k;
	int c[100] = {0};
	for (i = 0; i < 5; i++)
		scanf("%d", &c[i]);
	scanf("%d", &a);
	for (i = 0; i < 5; i++)
	{
		for(j = i + 1; j < 5; j++)
		{
			if (c[i] > c[j])
			{
				int index = c[i];
				c[i] = c[j];
				c[j] = index;
			}
		}
	}
	c[5] = a;//错误原因赋值写反了 ,且不应该是c[6]
	for (i = 0; i < 6; i++)
	{
		for (j = i + 1; j <6; j++)
		{
			if (c[i] > c[j])
			{
				int index = c[i];
				c[i] = c[j];
				c[j] = index;
			}
		}
	}
	for (i = 0; i < 6; i++)
	{
		printf("%d ", c[i]);
	}
	return 0;
}
