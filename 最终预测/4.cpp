#include <stdio.h>
int max (int a);
int min (int a);
int main()
{
	int i, j, flag = 495, n, count = 0, num = 1, a, b;
	scanf("%d", &n);
	while (n != flag)
	{
		a = max(n);
		b = min(n);
		num = a - b;
		n = num; 
		count++;
		printf("%d:%d-%d=%d\n", count, a, b, num);	
	}
	return 0; 
}

int max(int a)
{
	int i, j, k = 0, count = 0, index, temp, num;
	int s[100] = {0};
	while (a > 0)
	{
		s[k++] = a % 10;
		count++;
		a /= 10; 
	}
	for (i = 0; i < count; i++)
	{
		index = i;
		for (j = i + 1; j < count; j++)
		{
			if (s[index] < s[j])
				index = j;
		}
		temp = s[index];
		s[index] = s[i];
		s[i] = temp;
	}
	num = 100 * s[0] + 10 * s[1] + s[2];
	return num;
}

int min(int a)
{
	int i, j, k = 0, count = 0, index, temp, num;
	int s[100] = {0};
	while (a > 0)
	{
		s[k++] = a % 10;
		count++;
		a /= 10; 
	}
	for (i = 0; i < count; i++)
	{
		index = i;
		for (j = i + 1; j < count; j++)
		{
			if (s[index] > s[j])
				index = j;
		}
		temp = s[index];
		s[index] = s[i];
		s[i] = temp;
	}
	num = 100 * s[0] + 10 * s[1] + s[2];
	return num;
}
