#include<stdio.h>
int main()
{
	int i, j, index, temp; 
	int a[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	for (i = 0; i < 10; i++)
	{
		index = i;
		for (j = i+1; j < 10; j++)
		{
			if(a[index] > a[j])
				index = j;
		}
		temp = a[index];
		a[index] = a[i];
		a[i] = temp;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	
} 
