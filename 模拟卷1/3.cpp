#include<stdio.h>
#include<math.h>
int prime(int a)
{
	int i, j, flag = 1;
	if (a <= 1)
		flag = 0;
	else if (a == 2 || a == 3)
		flag = 1;
	else
	{
		for (i = 2; i <= sqrt(a); i++)
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

int main()
{
	int i, j, k = 0, N, index, flag, count = 0;
	int a[1000] = {0};
	scanf("%d", &N);
	index = N;
	while (index > 0)
	{
		for ( i = 2; i <= N; i++)
		{
			if ((N % i == 0 ) && (prime(i) == 1))
			{
				a[k++] = i;
				count++;
				index /= i;
				break;
			}
		}
	}
	printf("%d =", N);
	for (i = 0; i < k; i++)
	{
		printf("%d", a[i]);
		if (i < k - 1)
			printf("*"); 
	}
	printf("\n%d\n", count);	
	return 0;
}






