#include<stdio.h>
int main()
{
	int a, b[10], num = 0, i, j, k, count = 0;
	scanf("%d", &a);
	k = a;//����ı���a��ֵ 
	while(a > 0)
	{
		num += a % 10;
		a /= 10;
		count++;	
	}
	printf("������%dλ��", count);
	printf("\n");
	for (i = 0; i < count; i++)
	{
		b[i] = k % 10;
		k /= 10;	
	}
	printf("\n");
	printf("ÿһλ����Ϊ��"); 
	for (i = count- 1; i >= 0; i--)//����������count - 1��i= 0�� 
	{
		printf("%d ", b[i]);
	}
	printf("\n");
	printf("��������Ϊ��\n"); 
	for (i = 0; i < count; i++)
	{
		printf("%d", b[i]);
	}
	return 0;
}
