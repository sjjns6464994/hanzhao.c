#include <stdio.h>
#include <string.h>
int main()
{
	int i, j, k, h, t, index;
	char s[1000], s1[1000], str[1000][1000], temp;
	FILE *fp;
	fp = fopen("D:\\codeC\\�ļ�\\outfile.txt", "w");
	printf("������һ���ַ�����");
	gets(s);
	strcpy(s1, s);
	int length = strlen(s);
	for (i = 0, h = 0; i < length; i++, h++)
	{
		k = i;
		t = 0;
		for (j = k; j < length; j++, t++)
		{
			str[h][t] = s[j];
		}
		for (j = 0; j < k; j++, t++)
		{
			str[h][t] = s[j];
		}
		str[h][t] = '\0';
	}
	for (i = 0; i < length; i++)
		puts(str[i]);
	printf("\n�ڣ�2����3���ʷֽ���n���ַ����������Ϊ��\n");
	//���ﲻ��ʹ��strcmp������Ϊ������ͬ����ĸʱ�������ǰ����Ӵ��������˳����еĶ��ǰ�����s�е�λ������ġ�
	for (i = 0; i < length; i++)
	{
		index = i;
		for (j = i + 1; j < length; j++)//����Ľ��������ص���� 
		{
			if (s1[j] < s1[index])
				index = j;
		}
		temp = s1[index];//����Ľ����������� 
		s1[index] = s1[i];
		s1[i] = temp;
	}
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length; j++)
		{
			if (str[j][0] != '\0' && str[j][0] == s1[i])
			{
				puts(str[j]);
				str[j][0] = '\0';//����һ��Ҫ��ס��������ַ�����
				break; 
			}
		}
	}
	printf("***********������**********\n");
	fputs(s1, fp);
	puts(s1); 
	printf("***********������**********\n");
	for (i = 0; i < length; i++)
	{
		if (s[length - 1] == s1[i])//����ע����length-1 
			printf("s��ĩβ�ַ���s1�ĵ�%d��λ��\n", i + 1); //��������ע����i+1 
	} 
	fclose(fp);
	return 0;
}
