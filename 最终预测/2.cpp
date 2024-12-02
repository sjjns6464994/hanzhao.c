#include<stdio.h>
#include<string.h>
struct friends
{
	char name[10], birthday[100], sex[10], phone[100], mobile[100];
};

int main()
{
	int i, j, k, N, flag, index;
	char str[100];
	struct friends a[1000], temp;
	FILE *fp1, *fp2;
	fp1 = fopen("D:\\codeC\\文件\\infile.txt", "r");
	fp2 = fopen("D:\\codeC\\文件\\outfile.txt", "w");
	if (fp1 == NULL || fp2 == NULL)
	{
		printf("文件打开失败！！");
		return -1;
	}
	fscanf(fp1, "%d", &N);
	for (i = 0; i < N; i++)
	{
		fscanf(fp1, "%s %s %s %s %s", a[i].name, a[i].birthday, a[i].sex, a[i].phone, a[i].mobile);	
	} 
	fscanf(fp1, "%s", str);
	
	for (i = 0; i < N; i++)
	{
		index = i;
		for (j = i + 1; j < N; j++)
		{
			if (strcmp(a[index].name, a[j].name) > 0)
				index = j;
		}
		temp = a[index];
		a[index] = a[i];
		a[i] = temp;
	}
	for (i = 0; i < N; i++)
	{
		if (strcmp(str, a[i].name) == 0)
			flag = i;	
	}
	for (i = 0; i < N; i++)
	{
		fprintf(fp2, "%s %s %s %s %s\n", a[i].name, a[i].birthday, a[i].sex, a[i].phone, a[i].mobile);
	}
	fprintf(fp2, "%d\n", flag + 1); 
	fclose(fp1);
	fclose(fp2);
	return 0;
}










