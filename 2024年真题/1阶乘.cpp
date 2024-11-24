#include <stdio.h>
int func(int a); 
int main()
{
	double num = 0.0;
	int N, i, j;
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		num += func(i);
	}	
	printf("%.0lf", num);
	return 0;
} 

int func (int a)
{
	int b = 1;
	int i;
	for (i = 1; i <= a; i++)
	{
		b *= i;
	}
	return b;	
}
