#include<stdio.h>
int main()
{
	int a[] = {15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};//定义数组为a[] = {1, 2}; 
	int low, high, mid, target, flag = 0;
	int length = sizeof(a) / sizeof(a[0]);
	scanf("%d", &target);
	low = 0;
	high = length - 1;
	while (low <= high)
	{
		mid =low + (high - low) / 2;//这里注意是low +  
		if (a[mid] == target)
		{
			flag = 1;
			printf("目标值 %d 在数组中的位置是 %d\n", target, mid + 1);//这里mid + 1; 
			break;
		}
		else if (target < a[mid])//这里如果数组是降序是 < 号，数组升序是 > 号； 
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	if (flag == 0)
		printf("无此数\n"); 
	return 0;
} 
