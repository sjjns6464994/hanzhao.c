#include <stdio.h>
#include <string.h>

struct user
{
	char name[10], sex[10], phone[20], address[100];
};

int main()
{
	int i, j, k, N, index;
	struct user a[1000], temp;//这里注意temp定义在上面属于单一结构体。 
	scanf("%d", &N);
	if (N > 50 && N <= 0)
		printf("请重新输入\n");
	for (i = 0; i < N; i++)
	{
		scanf("%s %s %s %s", a[i].name, a[i].sex, a[i].phone, a[i].address);
	}
	for (i = 0; i < N; i++)
	{
		index = i;
		for (j = i + 1; j < N; j++)
		{
			if (strcmp(a[index].name, a[j].name) > 0)
				index = j;
		}
		temp = a[i];
		a[i] = a[index];
		a[index] = temp;
	}
	for (i = 0; i < N; i++)
	{
		printf("%s %s %s %s\n", a[i].name, a[i].sex, a[i].phone, a[i].address); 
	}
	return 0;
}
