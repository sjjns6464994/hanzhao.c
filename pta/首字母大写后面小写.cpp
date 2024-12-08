#include <stdio.h>
#include <string.h>
#include <ctype.h>
char func1(char a);
char func2(char b);
int main()
{
	int i,j, k, n;
	char a, s[1000];
	char str[1000][1000];
	scanf("%d", &n);
	getchar();
	for (i = 0; i < n; i++)
	{
		fgets(str[i], sizeof(strlen(str[i])), stdin);
		str[i][strcspn(str[i], "\n")] = 0;
	}
	for(i = 0; i < n; i++)
	{
		a = str[i][0];
//		strcpy(s, str[i]);
		if (a >= 'a' && a <= 'z')
		{
			str[i][0] = func1(a);
			if (strlen(str[i]) > 1)
			{
				for (j = 1; j < strlen(str[i]); j++)
				{
					str[i][j] = func2(str[i][j]); 
				}
			}
		}
		
		else if(a >= 'A' && a <= 'Z')
		{
			if (strlen(str[i]) > 1)
			{
				for (j = 1; j < strlen(str[i]); j++)
				{
					str[i][j] = func2(str[i][j]); 
				}
			}
		}
		
		else if(a <= 'a' && a >= 'z' && a <= 'A' && a >= 'Z')
		{
			strlwr(str[i]);
		}
		printf("%s\n", str[i]); 
	} 
	return 0;
}

char func1(char a)//将小写字母换成大写字母 
{
	if (islower(a))
		return a + 32;
	else if(isupper(a))
		return a;
}

char func2(char b)//将大写字母换成小写字母 
{
	if (islower(b))
		return b;
	else if(isupper(b))
		return b + 32;
}
