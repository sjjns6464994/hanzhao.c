#include <stdio.h>
int main()
{
	int i, j, k;
	int a = 1990;
	int b[100];
//	int length = sizeof(a) / sizeof(a[0])   这里length = 1001 
//	printf("%d", length); 
	int l = 0;
	while(a)
	{
		k = a % 10;
		a /= 10;
		b[l++] = k;
	}
	printf("%d\n", l);
	for (i = l - 1; i >= 0; i--)//这里的循环条件需要注意 
	{
		printf("%d ", b[i]);
	}
	return 0;
}
