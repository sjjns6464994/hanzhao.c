#include<stdio.h>

#define MAX 365
int main()
{
	int i, j, k, n, count = 0; 
	int a [100][100];
	int b[MAX] = {0};
	scanf("%d", &n); 
	for (i = 0; i < n; i++)//�������� 
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < n; i++)//����л��������,�����һ���ֱ���˳��� 
	{
		for (j = 0; j < 2; j++)
		{
			for (k = a[i][0]; k < a[i][1]; k++)
			{
				b[k] = 1;
				count++;
				break;
			}
			break;
		}
	}
	printf("%d\n", count);
	return 0;
} 
