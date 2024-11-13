#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
	int i, j;
	char s[100][100];
	char str[10000];
	for (i = 0; i < 3; i++)
		gets(s[i]);
	for (i = 0; i < 3; i++)
	{
		if (i > 0)
			strcat(str, "*");//比较重要
		strcat(str,s[i]);
	}
	puts(str); 
	return 0;
}
