#include <stdio.h>
struct cow
{
	double min, max;
	int flag;	
};
struct sunblock
{
	double spf;
	int cover;
};
int main()
{
	int i, j, k, index, count = 0, c, l;
	struct cow a[1000], temp1;
	struct sunblock b[1000], temp2;
	scanf("%d %d", &c, &l);
	for (i = 0; i < c; i++)
	{
		scanf("%lf %lf", &a[i].min, &a[i].max);
		a[i].flag = 0;
	}
	for (i = 0; i < l; i++)
	{
		scanf("%lf %d", &b[i].spf, &b[i].cover); 
	}
	
	for (i = 0; i < c; i++)//牛的min.spf按从小到大进行排序 
	{
		index = i;
		for (j = i + 1; j < c; j++)
		{
			if (a[index].min > a[j].min)
			{
				index = j;
			}
		}
		temp1 = a[index];
		a[index] = a[i];
		a[i] = temp1;
	}
	for (i = 0; i < l; i++)//将防晒的spf按从小到大进行排序 
	{
		index = i;
		for (j = i + 1; j < l; j++)
		{
			if (b[index].spf > b[j].spf)
			{
				index = j;
			}
		}
		temp2 = b[index];
		b[index] = b[i];
		b[i] = temp2;
	}
	//贪心算法
	for (i = 0; i < c; i++)
	{
		for(j = 0; j < l; j++)
		{
//			index = b[j].cover;
			if ((b[j].spf >= a[i].min) && (b[j].spf <= a[i].max) && (b[j].cover > 0))
			{
				a[i].flag = 1;
				b[j].cover--;
				break;
			}
		} 
	} 
	for (i = 0; i < c; i++)
	{
		if (a[i].flag == 1)
			count++;
	}
	printf("%d", count);
	return 0;
}
