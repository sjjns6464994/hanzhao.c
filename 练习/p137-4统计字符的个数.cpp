#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	int e = 0, b = 0, c = 0, d = 0, i, j, k;
//	gets(a);
//	getchar();������ȼ� 
	fgets(a, sizeof(a), stdin);
//	printf("%d", sizeof(a));//���100
	a[strcspn(a, "\n")] = '\0';
	k = strlen(a);
	for(i = 0; i < k; i++)
	{
//		if (a[i] >= 'A' && a[i] <= 'z')//A��Сд֮�仹�б���ַ� 
		if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
			e++;
		else if(a[i] == ' ')
			b++;
		else if(a[i] >= '0' && a[i] <= '9')
			c++;
		else
			d++;
	}
	printf("Ӣ����ĸ�ĸ���%d �ո�ĸ���%d ���ֵĸ���%d �����ַ��ĸ���%d", e,b,c,d);
	return 0; 
} 
