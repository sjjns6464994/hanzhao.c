#include <stdio.h>
struct tang
{
	int value, weight, flag;
	double average;
};

int main()
{
	double sum = 0.0;
	int i, j, k, n, index, flag, w, sign;
	struct tang a[1000], temp;
	scanf("%d %d", &n, &w);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &a[i].value, &a[i].weight);
		a[i].flag = 1;
		a[i].average = a[i].value / a[i].weight;
	}
	
	for (i = 0; i < n; i++)
	{
		index = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[index].average < a[j].average)
				index = j;
		}
		temp = a[index];
		a[index] = a[i];
		a[i] = temp;
	}
	
	for(i = 0; i < n; i++)
	{
		if (a[i].flag == 1 && w >= a[i].weight)
		{
			a[i].flag = 0;
			w -= a[i].weight;	
		}
		else
		{
			break;
		}
	} 	
	
	for (i = 0; i < n; i++)
	{
		if (a[i].flag == 0)
			sum += a[i].value;
		else
		{
			sum += ((double)w / a[i].weight) * a[i].value;
			break;
		}
	}
	printf("%0.1f", sum);
	return 0;
}



















