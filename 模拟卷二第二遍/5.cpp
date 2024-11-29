#include<stdio.h>
struct score
{
	double ai, bi;	 
};

int main()
{
	int i, j, k, n, h, l, flag, index;
	double r, avg, sum = 0.0, time = 0.0;
	struct score a[1000], temp;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%lf %lf", &a[i].ai, &a[i].bi);
	} 
	scanf("%lf %lf", &r, &avg);
	
	for (i = 0; i < n; i++)
	{
		index = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[index].bi >a[j].bi)
				index = j;
		}
		temp = a[index];
		a[index] = a[i];
		a[i] = temp;
	}
	
	sum = n * avg;
	for (i = 0; i < n; i++)
	{
		sum -= a[i].ai;
	}
	for (i = 0; i < n; i++)
	{
		if (sum >= (r - a[i].ai))
		{
			time += (r - a[i].ai) * a[i].bi;
			sum -= r - a[i].ai;
		}
		else
		{
			index = i;
			break;
		}
	}
	time += sum * a[index].bi;
	printf("%.0lf", time);
	return 0;
}
