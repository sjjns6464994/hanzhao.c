#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,h,index,flag,n,t;
	char s[100][1000],str[100000];
	gets(str);
	for(i=0,h=0;i<strlen(str);i++)
	{
		for(j=i;j<strlen(str);j++)
		{
			for(t=i,k=0;t<=j;t++)//��i��˵㣬jΪ�Ҷ˵㣬��[i,j]Ϊ���䣬�γ�һ���Ӵ� 
			{
				s[h][k]=str[t];
				k++;
			}
			s[h][k]='\0';
			h++;
		}
	}
	for(i=0;i<h;i++)
	   puts(s[i]); 
	return 0;
} 
