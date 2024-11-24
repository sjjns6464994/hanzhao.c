#include<stdio.h>
#include<math.h>
int prime (int a);
int main()
{
	int i, j, k, n, flag, index, max = 0, a = 0, b = 0;
	scanf("%d", &n);
	for (i = 2; i < n; i++)
	{
		if (n % i == 0 && prime(i) == 1)
		{
			k = n / i;
			if (prime(k) == 1)
			{
				a = i;
				b = k;
				break;
			}
		}
	}
	if (a > b)
		max = a;
	else
		max = b;
	printf("%d %d\n", a, b);
	printf("%d\n", max);
	return 0;
}

int prime (int a)
{
	int i, flag = 1;
	if (a <= 1)
		flag = 0;
	else if (a == 2 || a == 3)
		flag = 1;
	else
	{
		for(i = 2; i <= sqrt(a); i++)
		{
			if (a % i == 0)
			{
				flag = 0;
				break;
			}
		 } 
	}
	return flag;
}
