#include<stdio.h>
int main()
{
	int i;
	double h = 0.0,j = 100.0;
	for(i = 0; i < 10; i++)
	{
		h = 1.0 * j / 2;
		j = h;
	}
	printf("%0.2lf", h);
} 
