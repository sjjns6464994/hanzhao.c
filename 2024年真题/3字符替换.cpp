#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i, j, k = 0, h, index, flag, max = 0;
	char s1[1000], s2[1000], str, b[1000];
	int a[26] = {0};
	
	FILE *fp1, *fp2;
	fp1 = fopen ("D:\\codeC\\文件\\infile.txt", "r");
	fp2 = fopen ("D:\\codeC\\文件\\outfile.txt", "w");
	fgets(s1, sizeof(s1), fp1);
	s1[strcspn(s1, "\n")] = 0;
	s1[strcspn(s1, "\n")] = '\0';
	strcpy(s2, s1);
	strlwr(s1);
	int length = strlen(s1);
	
	for (i = 0; i < length; i++)//统计字符个数 
	{
		if (s1[i] >= 'a' && s1[i] <= 'z')
		{
			h = s1[i] - 'a';
			a[h]++;	
		}
	}
	
	for (i = 0; i < 26; i++)//找最大个数的字母 
	{
		if (a[i] > max)
			max = a[i];
	}
	
	for(i = 0; i < 26; i++)
	{
		if (a[i] == max)
			b[k++] = 'a' + i;	
	}
	
	for (i = 0; i < k; i++)
		printf("%c ", b[i]);
		 
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < k; j++)
		{
			if (s1[i] == b[j])
			{
				str = b[j];
				break;
			}
		}
		break;
	}
	
	for (i = 0; i < length; i++)
	{
		if (s2[i] == str || s2[i] == str - 32)
			s2[i] = '*';
	}
	puts(s2); 
	fprintf(fp2, "%s", s2);
	fclose(fp1);
	fclose(fp2);
	return 0;
}











