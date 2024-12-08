#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	int i, j, k, count = 0;
	fgets(s, sizeof(s), stdin);
	s[strcspn(s, "\n")] = 0;
	char *word[100];
	char *token = strtok(s, " ");
	while (token != NULL && count < 1000)
	{
		word[count++] = token;
		token = strtok(NULL, " ");
	}
	for (i = count - 1; i >= 0; i--)
	{
		printf("%s ", word[i]);
	}
	return 0;
}



