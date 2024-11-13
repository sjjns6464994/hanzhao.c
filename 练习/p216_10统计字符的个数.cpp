#include<stdio.h>
#include<string.h>
int main()
{
	int i, j, k, a = 0, b = 0, c = 0, d = 0;
	char s[1000];
	gets(s);
	int length = strlen(s);
	for (i = 0; i < length; i++)	
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
			a++;
		else if (s[i] >= '0' && s[i] <= '9')
			b++;
		else if (s[i] ==' ')
			c++;
		else
			d++;
	}
	printf("%d %d %d %d", a, b, c, d);
} 
