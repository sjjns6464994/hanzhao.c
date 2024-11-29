#include <stdio.h>
int func1(int a);
int func2(int b);

int main()
{
	int i, j, n, count = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (func1(i) == func2(i))
			count++;
	}
	printf("%d", count);
	return 0;
}

int func1(int a)
{
	int i, j, sum = 0, index;
	while(a>0)
	{
		index = a % 10;
		sum += index;
		a /= 10;
	}
	return sum;
}

int func2(int b)
{
	int i, j, index, sum = 0;
	while(b > 0)
	{
		index = b % 2;
		sum += index;
		b /= 2;
	}
	return sum;
}
