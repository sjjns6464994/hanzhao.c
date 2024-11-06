#include <stdio.h>
#include <string.h>
int main()
{
	int i, j, k, h, t, index;
	char s[1000], s1[1000], str[1000][1000], temp;
	FILE *fp;
	fp = fopen("D:\\codeC\\文件\\outfile.txt", "w");
	printf("请输入一个字符串：");
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
	printf("\n第（2）（3）问分解后的n个字符串经排序后为：\n");
	//这里不能使用strcmp函数因为当有相同的字母时，并不是按照子带你排序的顺序进行的而是按着在s中的位置排序的。
	for (i = 0; i < length; i++)
	{
		index = i;
		for (j = i + 1; j < length; j++)//这里的交换方法重点记忆 
		{
			if (s1[j] < s1[index])
				index = j;
		}
		temp = s1[index];//这里的交换是在外面 
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
				str[j][0] = '\0';//这里一定要记住输出过的字符清零
				break; 
			}
		}
	}
	printf("***********第四问**********\n");
	fputs(s1, fp);
	puts(s1); 
	printf("***********第五问**********\n");
	for (i = 0; i < length; i++)
	{
		if (s[length - 1] == s1[i])//这里注意是length-1 
			printf("s的末尾字符在s1的第%d个位置\n", i + 1); //这里的输出注意是i+1 
	} 
	fclose(fp);
	return 0;
}
