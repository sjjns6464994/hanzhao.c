#include<stdio.h>
int main()
{
	int a[] = {15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};//��������Ϊa[] = {1, 2}; 
	int low, high, mid, target, flag = 0;
	int length = sizeof(a) / sizeof(a[0]);
	scanf("%d", &target);
	low = 0;
	high = length - 1;
	while (low <= high)
	{
		mid =low + (high - low) / 2;//����ע����low +  
		if (a[mid] == target)
		{
			flag = 1;
			printf("Ŀ��ֵ %d �������е�λ���� %d\n", target, mid + 1);//����mid + 1; 
			break;
		}
		else if (target < a[mid])//������������ǽ����� < �ţ����������� > �ţ� 
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	if (flag == 0)
		printf("�޴���\n"); 
	return 0;
} 
