#include<stdio.h>
#include<string.H>
int main()
{
	char a[100], b[100];
	gets(a);
	int i, j, k;
	k = strlen(a);
	for(i = 0; i < k; i++)
	{
		b[i] = a[i] + 4;
	}
	b[k] = '\0';
	for(i = 0; i < k; i++)
	{
		putchar(b[i]);
		putchar(' '); 
	}
	putchar('\n');
	for(i = 0; i < k; i++)
	{
		printf("%c ", b[i]);
	}
	return 0;
} 
