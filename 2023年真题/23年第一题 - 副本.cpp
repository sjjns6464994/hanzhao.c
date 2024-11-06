#include <stdio.h>
#include <math.h>
int func(int a, int i);
int main()
{
	int a, n, i, j, k, index, sum = 0;
	scanf("%d %d",&a, &n);
	for (i = 1; i <= n; i++)
		sum += func(a, i);
	printf("%d", sum);
}
int func(int a, int b)
{
	int i, j, index = 0;
	for (i = 0; i < b; i++)
	{
		index = index * 10 + a; 
	}
	return index;
}
