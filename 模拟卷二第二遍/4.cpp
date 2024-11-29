//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i, j, k, h, l, flag, index, N, count = 0;
//	char sentence[1000][1000];
//	char a[1000];
//	int b[1000];
//	scanf("%d", &N);
//	for (i = 0; i < N; i++)
//	{
//		
//	}
//	k = 0;
//	h = 0;
//	for (l = 0; l < N; l++)
//	{
//		for (i = 0; i < N; i++)
//		{
//			count = 1;
//			for (j = i + 1; j < N; j++)
//			{
//				if (sentence[l][i] == sentence[l][j])
//				{
//					i = j;
//					count++;
//				}
//				else
//				{
//					a[k++] = sentence[l][i];
//					b[h++] = count;
//				}
//			}
//		}
//	}
//	for (i = 0; i < k; i++)
//	{
//		printf("%c %d\n", a[i], b[i]);
//	}
//	return 0;
//}



#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k, N;
    char sentence[1000][1000];
    int max_count, current_count;
    char max_char;

    scanf("%d", &N);
    getchar(); // 读取换行符

    for (i = 0; i < N; i++)
    {
        fgets(sentence[i], 1000, stdin);
        sentence[i][strcspn(sentence[i], "\n")] = 0; // 去掉换行符
    }

    for (k = 0; k < N; k++)
    {
        max_count = 0;
        current_count = 1;
        max_char = sentence[k][0];

        for (i = 1; i <= strlen(sentence[k]); i++)
        {
            if (i < strlen(sentence[k]) && sentence[k][i] == sentence[k][i - 1])
            {
                current_count++;
            }
            else
            {
                if (current_count > max_count)
                {
                    max_count = current_count;
                    max_char = sentence[k][i - 1];
                }
                current_count = 1;
            }
        }

        // 输出结果
        printf("%c %d\n", max_char, max_count);
    }

    return 0;
}
