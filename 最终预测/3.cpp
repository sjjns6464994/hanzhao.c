#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i, h = 0, j, k, n, sum, flag, index, num, sign;
    char s[1000][1000], str[1000];
    FILE *fp1, *fp2;
    fp1 = fopen("D:\\codeC\\�ļ�\\infile.txt", "r");
    fp2 = fopen("D:\\codeC\\�ļ�\\outfile", "w");
    scanf("%d", &n);
    for (h = 0; h < n; h++)
    {
        fgets(s[h], 1000, fp1); // s[h]��һ��������������ά�����ĳһ��
        // fscanf(fp1,"%s",s[h]);
        for (i = 0, index = -1; i < strlen(s[h]); i++)
        {
            if (s[h][i] >= '0' && s[h][i] <= '9')
            {
                index = i;
                break;
            }
        }
        if (index == -1)
            continue; // ��ȡ�������ַ�����û�����֣�ʲô�����������������ѭ��
        sum = 0;
        for (i = 0; i < strlen(s[h]); i++)
        {
            if (s[h][i] >= '0' && s[h][i] <= '9')
            {
                sign = 1;                                                                                                     // sign�������ţ�1��+�ţ�-1������
                if ((i == 1 && s[h][0] == '-') || (i >= 2 && s[h][i - 1] == '-' && (s[h][i - 2] > '9' || s[h][i - 2] < '0'))) // Ҫ�Ѹ��ŵ�����������뵽
                    sign = -1;
                for (j = i, num = 0; j < strlen(s[h]) && (s[h][j] >= '0' && s[h][j] <= '9'); j++)
                    num = num * 10 + s[h][j] - '0'; // �γ�����
                sum = sum + num * sign;
                i = j - 1; // i�±�ͬ��
            }
        }
        fprintf(fp2, "%d\n", sum);
        printf("%d\n", sum);
        // h++;/*���h++�����⣬ֱ��ʱ��û�з��֣�ȥ���ͺ���*/
    }
    fclose(fp1);
    fclose(fp2);
    system("pause");
    return 0;
}

