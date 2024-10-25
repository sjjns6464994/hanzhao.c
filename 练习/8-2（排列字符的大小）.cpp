#include<stdio.h>
#include<string.h>
int main()
{
	int i, j, index, n;
	char s[3][100], temp[100];
	scanf("%d", &n);
	getchar();// 
	for (i = 0; i < n; i++)
		gets(s[i]);
	for(i = 0; i < n; i++)
	{
		index = i;
		for(j = i + 1; j < n; j++)
			if(strcmp(s[j], s[index]) < 0)
				index = j;
		strcpy(temp, s[i]);
		strcpy(s[i], s[index]);
		strcmp(s[index], temp);
	}
	for(i = 0; i < n; i++)
		puts(s[i]);
	return 0;
}
