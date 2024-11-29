#include<stdio.h>
int main()
{
	int i, j, k, n, index, count = 0;
	char a;
	scanf("%d", &n);
	index = n;
	for (i = 0; i < n; i++)
	{
		for (j = index; j > 0; j--)
		{
			a = 'A' + count;
			count++;
			printf("%c ", a);
		}	
		index--;
		printf("\n");
	}	
	return 0;
} 
