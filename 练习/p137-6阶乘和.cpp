#include<stdio.h>
int func(int a);
int main()
{
	int n, i, j, k, sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		sum += func(i);
	printf("%d", sum);
}
int func(int a) 
{
	int i, sum = 1;
	for (i = 1; i <= a; i++)
		sum *= i;
	return sum; 
}

