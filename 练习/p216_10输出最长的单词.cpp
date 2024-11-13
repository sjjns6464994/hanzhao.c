#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int i, j, k, l, h, index = 0,count = 0;
	char s[1000];
	int a[1000];
	char *word[100];
	gets(s);
	char *token = strtok(s, " ");
	while (token != NULL)
	{
		word[count++] = token;
		token = strtok(NULL," ");  //¼ÌÐø·Ö¸î×Ö·û 
	}
	for (i = 0; i < count; i++)
	{
		if (strlen(word[i]) > strlen(word[index]))
			index = i;
	}
	printf("%s", word[index]);
	return 0;
}
