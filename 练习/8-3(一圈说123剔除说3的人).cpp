#include<stdio.h>
int main()
{
	int n,i,j,k,count = 0;
	int  a[20], b[20];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		a[i] = i + 1;
	}
	for(i = 0, j = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			count++;
			if(count == 3)
			{
				b[j] = a[i];
				j++;
				a[i] = -1;
				count = 0;
			}
		}
		if(i == n - 1)
			i = -1;
		if(j == n-1)
			break;
	}
	printf("%d", b[n - 1]);
	return 0;
} 
