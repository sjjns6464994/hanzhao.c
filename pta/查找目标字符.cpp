#include <stdio.h>
#include <string.h>
int main()
{
	int i, j, k, flag = 0;
	char a;
	scanf("%c", &a);
	getchar();
	char s[1000];
	gets(s);
	int length = strlen(s); 
	for (i = 0; i < length; i++)
	{
		if (a == s[i])
		{
			printf("index = %d", i+1);
			break;
		}
	}
	if (flag == 0)
		printf("Not Found");
	return 0;
}
