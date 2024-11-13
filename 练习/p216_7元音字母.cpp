#include<stdio.h>
#include<string.h>
int main()
{
	int i, j, k, index;
	char s[1000], s1[1000] = "";
	gets(s);
	int length = strlen(s);
	k = 0;
	for (i = 0; i < length; i++)
	{
		if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' ||s[i] == 'A' ||s[i] == 'E' ||s[i] == 'I' ||s[i] == 'O' ||s[i] == 'U')
			s1[k++] = s[i];
	}
	puts(s1);
	return 0;
} 
