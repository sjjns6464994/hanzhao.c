#include<stdio.h>
struct peo
{
	double m;
	int flag;
};
int main()
{
	int i, j, k, count = 0, n, index;
	double w;
	struct peo a[1000], temp;
	scanf("%d %lf", &n, &w);
	for (i = 0; i < n; i++)
	{
		scanf("%lf %d", &a[i].m);
		a[i].flag = 1;
	}
	for (i = 0; i < n; i++)//体重从大到小排序 
	{
		index = i;
		for (j = i + 1; j < n; i++)
		{
			if (a[index].m < a[j].m)
			{
				index = j;
			}
		}
		temp = a[index];
		a[index] = a[i];
		a[i] = temp;
	}
	for (i = 0; i < n; i++)//检查是否有人超重 
	{
		if (a[i].m > w)
		{
			printf("队伍中有人超重！！\n");
			return -1; 
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j= n - 1; j > i; j--)
		{
			if (a[i].flag != 0 && a[j].flag != 0)
			{
				if ((a[i].m + a[j].m) < w)
				{
					count++;
					a[i].flag = 0;
					a[j].flag = 0;
					break;
				}
			}
		}	
	}
		
	for (i = 0; i < n; i++)
	{
		if (a[i].flag != 0)
			count++;
	}
	printf("\n%d\n", count);
	return 0;
}
