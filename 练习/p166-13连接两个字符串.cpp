#include <stdio.h>
#include <string.h>
int main()
{
	int i, j, k;
	char a[1000], b[1000];
	fgets(a, 1000, stdin);
	fgets(b, 1000, stdin);
	a[strcspn(a, "\n")] = '\0';
	b[strcspn(b, "\n")] = '\0';
	//法一： 
//	strcat(a, b);
//	for (i = 0; a[i] != '\0'; i++)
//		printf("%c", a[i]);
	//法二
	char c[1000] = {0};//这里一定要给c初始化 
	c[strcspn(c, "\n")] = '\0';
	strcat(c, a);
	strcat(c, b); 
	for (i = 0; c[i] != '\0'; i++)
		printf("%c", c[i]);
	//法三 
//	int length_a = strlen(a);
//	int length_b = strlen(b);
//	k = length_a +length_b;
//	for (i = length_a, j = 0; j < length_b; i++, j++)
//	{
//		a[i] = b[j];
//	}
//	for (i = 0; i < k; i++)
//	{
//		printf("%c", a[i]);
//	}
	return 0;
}
