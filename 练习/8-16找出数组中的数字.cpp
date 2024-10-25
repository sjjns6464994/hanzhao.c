#include<stdio.h>
#include<string.h>
int main()
{
	int i, j, k, index, num = 0, flag = 0;
	int a[10];
	char s[1000], str[100];
	gets(s);
	for(i = 0, k = 0; i < strlen(s); i++)
	{
		if(s[i] >= '0' && s[i] <= '9')
		{
			num = 0;
			for(j = i; (s[j] >= '0' && s[j] <= '9')&& (s[j] != '\n'); j++)
			{
				num = num * 10 + s[j] - '0';
			}
			a[k] = num;
			k++;
			i = j - 1;//¹Ø¼üÒ»²½ 
		}
	}
	for(i = 0; i < k; i++)
		printf("%d ", a[i]);
} 
