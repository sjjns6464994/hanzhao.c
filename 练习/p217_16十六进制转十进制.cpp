#include <stdio.h>
//#include <
int main()
{
	int a, b[100], k = 0, i, j, index;
	printf("请输入一个16进制数：\n");
	scanf("%d", &a);
	while(a)
	{
		index = a % 16;
		a /= 16;
		b[k++] = index;
	}
	for (i = k - 1; i >= 0; i --)
	{
		printf("%d", b[i]);
	}
	return 0;
}
