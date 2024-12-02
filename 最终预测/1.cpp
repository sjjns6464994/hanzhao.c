#include <stdio.h>
#define MAX_SIZE 1000
#include <math.h>
int main ()
{
	int i, j , k, index, n, min = 1000;
	int a[MAX_SIZE] = {0};
	scanf("%d", &n);
	if (n > MAX_SIZE)
	{
		return -1;
	}
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			index = abs(a[i]- a[j]);
			if (index < min)
			{
				min = index;
			}
		}
		
	}
	int found = 0; 
	for (i = 0; i <n; i++)
	{
		for (j = i + 1; j <n; j++)
		{
			if (abs(a[i] - a[j]) == min && a[i] <= a[j])
			{
				printf("(%d,%d)", a[i], a[j]);
				found = 1;
			}
			else if(abs(a[i] - a[j]) == min && a[i] >= a[j])
			{
				printf("(%d,%d)", a[j], a[i]);
				found = 1;
			}
		}
	}
	if (found == 0)
	{
		printf("\n没有找到合适的数.\n"); 
	}
	return 0;
}
