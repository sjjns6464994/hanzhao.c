//£¨1£©
#include<stdio.h>
int main()
{
	int n, i, j, k = 65;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = n; j > i; j--)
		{
			printf("%c ", k);
			k++;
		}
		printf("\n");
	}
	return 0;
}
 
