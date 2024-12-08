#include<stdio.h>
#include<string.h>
int main()
{
	int i, j, k = 0;
	char s[1000];
	gets(s);
	int length = strlen(s);
	for (i = 0; i < length; i++)
	{
		if ((s[i] >= 65 && s[i] <= 90) && (s[i] != 'A' &&  s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U'))
			k++;
	}
	printf("%d", k);
	return 0;	
} 
