#include <stdio.h>
int main()
{
	int arr[5] = {8, 6, 5, 4, 1};
	for (int i = 0; i < 5; i++)
	{
		for(int j = i + 1; j < 5; j++)
		{
			int index = arr[i];
			if (arr[i] > arr[j])
			{
				arr[i] = arr[j];
				arr[j] = index;
			}
		}
	}
	for(int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
