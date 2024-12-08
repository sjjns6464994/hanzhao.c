#include<stdio.h>
#include<string.h>
int main()
{
	int i, j, k;
	char s[1000];
	gets(s);
	int length = strlen(s);
	for (i = length - 1; i >= 0; i--)
		printf("%c", s[i]);
	return 0;	
} 
