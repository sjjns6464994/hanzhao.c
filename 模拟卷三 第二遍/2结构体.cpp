#include <stdio.h>
#include <string.h>

struct friends
{
	char name[10], birthday[100], phone[20];
};

int main()
{
	int i, j, k, l, index, n;
	struct friends a[1000], temp;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s %s %s", a[i].name, a[i].birthday, a[i].phone);
	}
	for (i = 0; i < n; i++)
	{
		index = i;
		for (j = i + 1; j< n; j++)
		{
			if (strcmp(a[index].birthday,a[j].birthday) > 0)
				index = j;
		}
		temp = a[index];
		a[index] = a[i];
		a[i] = temp;
	}
	
	for (i = 0; i < n; i++)
	{
		printf("%s %s %s\n", a[i].name, a[i].birthday, a[i].phone);
	} 
	return 0;
}
