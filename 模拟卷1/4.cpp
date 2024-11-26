#include <stdio.h>
#include<string.h>
int main()
{
	int i, j, k, flag = 0, index, h;
	char s[1000];
	FILE *fp;
	fp = fopen("D:\\codeC\\нд╪Ч\\infile.txt", "r");
	fgets(s, sizeof(s), fp);
	s[strcspn(s, "\n")] = '\0';
	int length = strlen(s);
	for (i = 0, k = 1; i < length; i++)
	{
		if (length % k == 0)
		{
			for (j = 0; j < length / k; j++)
			{
				if (s[j] == s[j % k])
					flag = 1;
				else
				{
					flag = 0;
					k++;
					break;
				}
					
			}
		}
		else
		{
			if ( k < (length / k))
			{
				i = 0;
				k++;
			}
		}
	}
	if (flag == 1)
		printf("True");
	else
		printf("False");
	fclose(fp);
	return 0;
}
