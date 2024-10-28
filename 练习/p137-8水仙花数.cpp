#include<stdio.h>
#include<math.h>
int main()
{
	int i, a;
	for (i = 100; i < 200; i++)
	{
		int b , sum = 0;
		a = i;//这里要注意用a计数不改变i的值 
		while (a)
		{
			b = a % 10;
			a /= 10;
			sum += pow(b, 3);	
		}	
		if (i == sum)
			printf("%d ", i);
	}
	return 0;
} 
