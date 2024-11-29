#include<stdio.h>
#include<string.h>
struct clerk
{
	char name[10];
	double base, wave, expend, wage;
};

int main()
{
	int i, j, N, index;
	struct clerk a[1000], temp;
	FILE *fp;
	fp = fopen("D:\\codeC\\нд╪Ч\\outfile.txt", "w");
	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		scanf("%s %lf %lf %lf", a[i].name, &a[i].base, &a[i].wave, &a[i].expend);
		a[i].wage = a[i].base + a[i].wave - a[i].expend;
	}
	
	for (i = 0; i < N; i++)
	{
		index = i;
		for (j = i + 1; j < N; j++)
		{
			if (strcmp(a[index].name, a[j].name) < 0)
				index = j;
		}
		temp = a[index];
		a[index] = a[i];
		a[i] = temp;
	}
	for (i = 0; i < N; i++)
	{
		fprintf(fp, "%s %0.1lf\n", a[i].name, a[i].wage);
	}
	fclose(fp);
	return 0;
}
