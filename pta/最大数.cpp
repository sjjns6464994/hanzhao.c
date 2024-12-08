#include <stdio.h>
#include <string.h>
int main()
{
	int i, j, k, n, num[100], index;
	char str[1000][1000] = {0}, s1[1000] = {0}, s2[1000] = {0}, s3[1000] = {0}, temp[1000], a[1000], b[1000];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
		sprintf(str[i], "%d", num[i]);
	}
	for (i = 0; i < n; i++)
	{
		index = i;
		for (j = i + 1; j < n; j++)
		{
			if (strcmp(str[index], str[j]) < 0)
			{
				index = j;
			}
		}
		strcpy(temp, str[index]);
        strcpy(str[index], str[i]);
        strcpy(str[i], temp);
	}
	
	for (i = 0; i < n; i++)
	{
		printf("%s ", str[i]);
	}
	printf("\n");
	
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if ((str[i][0]==str[j][0]) && strlen(str[i]) != strlen(str[j]))
			{
				strcpy(a, str[i]);
				strcpy(b, str[j]);
//				printf("%s %s\n", str[i], str[j]);
				if (strcmp(strcat(a, b),strcat(b, a)) < 0)
				{
					strcpy(temp, str[j]);
		        	strcpy(str[j], str[i]);
		        	strcpy(str[i], temp);
				}
			}
		}
	}
	
//	for (i = 0; i < n; i++)
//	{
//		printf("%s ", str[i]);
//	}
//	printf("\n");
//	
	for (i = 0; i < n; i++)
	{
		strcat(s1, str[i]); 
	}
	printf("%s", s1);
	return 0;
} 























