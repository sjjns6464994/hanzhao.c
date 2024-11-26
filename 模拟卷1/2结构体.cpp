#include<stdio.h>
#include<string.h>
struct student
{
	char name[20], num[20];
	int sit1, sit2;
};

struct find
{
	char name[20];
};

int main()
{
	int i, j, k, N, M, index;
	struct student a[1000];
	struct find b[1000];
	scanf("%d", &N); 
	for (i = 0; i < N; i++)
	{
		scanf("%s %s %d %d", a[i].name, a[i].num, &a[i].sit1, &a[i].sit2);
	}
	scanf("%d", &M);
	for (i = 0; i < M; i++)
	{
		scanf("%s", b[i].name);
	}
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (strcmp(b[i].name, a[j].name ) == 0)
			{
				printf("%s %d\n", a[j].num, a[j].sit2);	
				break;
			}
		}		
	}
	return 0;
}




 
