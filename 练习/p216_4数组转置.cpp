#include <stdio.h>

int main()
{
	int i, j, k, index;
	int s[100][100], s1[100][100], str[1000] = {0};
	int h, l;
	scanf("%d %d", &h, &l);
	if (h <= 0 || l <= 0)
		return -1;
	k = 0;
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < l; j++)
		{
			scanf("%d", &s[i][j]);
			str[k++] = s[i][j];	
		}	
	}
//	for (i = 0; i < 9; i++)
//		printf("\n%d \n", str[i]);
	k = 0;
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < l; j++)
		{
			s1[j][i] = str[k++];
//			k++;
 		}
	}
	printf("\n�õ�ת�þ���Ϊ\n"); 
	for (i = 0; i < l; i++)//������Ҫ����l �� h   //////3 * 4��Ҫ���4 * 3 
	{
		for (j = 0; j < h; j++)
		{
			printf("%d ", s1[i][j]);
 		}
 		printf("\n");
	}
	return 0;
}
