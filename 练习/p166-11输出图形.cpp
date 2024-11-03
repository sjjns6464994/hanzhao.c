#include <stdio.h>
int main ()
{
	int i, j, k;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("  ");//这里是两个空格 
		}
		for (k = 0; k < 5; k++)
		{
			printf("* ");	
		}
		printf("\n");
	}
	return 0;
}
