#include <stdio.h>
#include <string.h>

int main()
{
	int i, j, k, l, index;
	char s[100];
	gets(s);
	l = strlen(s);
	printf("*******�õ���ת����ַ�********\n");
	for (i = l; i > 0; i--)
	{
		printf("%c", s[i]);
	}
	return 0;
}
 
