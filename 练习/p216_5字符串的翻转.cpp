#include <stdio.h>
#include <string.h>

int main()
{
	int i, j, k, l, index;
	char s[100];
	gets(s);
	l = strlen(s);
	printf("*******得到翻转后的字符********\n");
	for (i = l; i > 0; i--)
	{
		printf("%c", s[i]);
	}
	return 0;
}
 
