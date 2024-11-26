#include<stdio.h>
double func(int a);
int main()
{
	int i, j, m, n;
	double num = 0.0;
	scanf("%d %d", &m, &n);
	if (m > n)
		return -1;
	num = func(n) / (func(m) * func(n - m));
	printf("result = %.0lf", num);
	return 0;	
}

double func(int a)
{
	int i, j;
	double num = 1.0;
	for (i = 1; i <= a; i++)
	{
		num *= i;
	}
	return num;
}
