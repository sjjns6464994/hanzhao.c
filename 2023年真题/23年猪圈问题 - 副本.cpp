#include<stdio.h>
int main()
{
	int n, i, j, k, totle, flag = 0;
	int a[100], b[100];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &a[i], &b[i]); 
	}
	for(k = 0; ; k++)
	{
		flag = 1;
		for(i = 0; i < n; i++)
		{
			if ((k < a[i]) || (k % a[i] != b[i]))//记得判断瞟见加括号，否则输出结果不正确 
			{
				flag = 0;
			}
		}
		if (flag == 1)
		{
			printf("%d", k);
			break;
		}
	}
	return 0;
} 
