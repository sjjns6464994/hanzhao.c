#include<stdio.h>
int main()
{
	int i, j, index, n;
	int c[20];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &c[i]); 
	}
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (c[i] < c[j])
			{
				index = c[i];
				c[i] = c[j];
				c[j] = index;
			}
		}
	}
	for(i = 0; i < n; i++)
	{
		printf("%d ", c[i]);	
	}
	return 0;
} 
