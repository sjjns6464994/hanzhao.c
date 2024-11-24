#include <stdio.h>
#include <string.h>
struct employee
{
	char id[10];
	int age;
};
int main()
{
	int i, j, k, n, index;
	struct employee a[1000], temp;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s %d", a[i].id, &a[i].age);
	}
	for (i = 0; i < n; i++)
	{
		index = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[index].age > a[j].age)
				index = j;
		}
		temp = a[index];
		a[index] = a[i];
		a[i] = temp;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d %s\n", a[i].age, a[i].id);
	}
	return 0;
}
