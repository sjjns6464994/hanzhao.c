#include <stdio.h>
#include <math.h>
int main()
{
	int i, j, k = 0, a, b, c, n, d, index, flag = 1;
	int num[100];
	scanf("%d", &n);
	if (n < 100 && n >= 1000)
		return -1;
	a = n * pow(10, 6);
	b = 2 * n * pow(10, 3);
	c = 3 * n;
	d = a + b + c;
	while (d > 0)
	{
		num[k++] = d % 10;
		d /= 10;
	}
	for (i = 0; i < k; i++)
	{
		for (j = i + 1; j < k; j++)
		{
			if (num[i] == num[j])
			{
				flag = 0;
				break;
			}
		}
	}
	if(flag == 1)
		printf("ture");
	else
		printf("False");
	return 0; 
} 
