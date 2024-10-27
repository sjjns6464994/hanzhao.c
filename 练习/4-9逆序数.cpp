#include<stdio.h>
int main()
{
	int a, b[10], num = 0, i, j, k, count = 0;
	scanf("%d", &a);
	k = a;//这里的保存a的值 
	while(a > 0)
	{
		num += a % 10;
		a /= 10;
		count++;	
	}
	printf("该数是%d位数", count);
	printf("\n");
	for (i = 0; i < count; i++)
	{
		b[i] = k % 10;
		k /= 10;	
	}
	printf("\n");
	printf("每一位的数为："); 
	for (i = count- 1; i >= 0; i--)//这里的输出从count - 1到i= 0； 
	{
		printf("%d ", b[i]);
	}
	printf("\n");
	printf("逆序数数为：\n"); 
	for (i = 0; i < count; i++)
	{
		printf("%d", b[i]);
	}
	return 0;
}
