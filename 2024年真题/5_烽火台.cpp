#include<stdio.h>

struct fenghuo
{
	int value;
	int flag;
};

int main()
{
	int i, j, k, h, l, index, m, n, min = 0;
	struct fenghuo a[1000], temp;
	int b[1000] = {0};
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i].value);
	}
	
	h = 0;//数组初始化 
	b[h] = 0;
	
	for (i = 0; i < m; i++)
	{
		b[h] += a[i].value;
		for(j = 0; j < n; j++)
			a[j].flag = 0;
		a[i].flag = 1;
		for (l = i + 1; l <= n - m; l++)
		{
			index = l;
			for (j = l, k = 0; k < m; j++, k++)
			{
				if (a[index].value > a[j].value && a[j].flag == 0)
					index = j;
			}
			if (a[index].flag == 0)
			{
				b[h] += a[index].value;
				a[index].flag = 1;
				l = index;
			}
		}
		h++;
		b[h] = 0;
	}
	min = b[0];
	for (i = 0; i < m; i++)
	{
		if (b[i] < min)
			min = b[i];
	}
	printf("%d", min);
	return 0;
}
