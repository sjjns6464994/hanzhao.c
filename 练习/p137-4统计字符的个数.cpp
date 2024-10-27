#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	int e = 0, b = 0, c = 0, d = 0, i, j, k;
//	gets(a);
//	getchar();与下面等价 
	fgets(a, sizeof(a), stdin);
//	printf("%d", sizeof(a));//输出100
	a[strcspn(a, "\n")] = '\0';
	k = strlen(a);
	for(i = 0; i < k; i++)
	{
//		if (a[i] >= 'A' && a[i] <= 'z')//A和小写之间还有别的字符 
		if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
			e++;
		else if(a[i] == ' ')
			b++;
		else if(a[i] >= '0' && a[i] <= '9')
			c++;
		else
			d++;
	}
	printf("英文字母的个数%d 空格的个数%d 数字的个数%d 其他字符的个数%d", e,b,c,d);
	return 0; 
} 
