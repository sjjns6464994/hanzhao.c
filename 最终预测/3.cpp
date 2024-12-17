#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i, h = 0, j, k, n, sum, flag, index, num, sign;
    char s[1000][1000], str[1000];
    FILE *fp1, *fp2;
    fp1 = fopen("D:\\codeC\\文件\\infile.txt", "r");
    fp2 = fopen("D:\\codeC\\文件\\outfile", "w");
    scanf("%d", &n);
    for (h = 0; h < n; h++)
    {
        fgets(s[h], 1000, fp1); // s[h]是一个数组名，及二维数组的某一行
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
            continue; // 读取的这行字符串里没有数字，什么都不输出，跳过本次循环
        sum = 0;
        for (i = 0; i < strlen(s[h]); i++)
        {
            if (s[h][i] >= '0' && s[h][i] <= '9')
            {
                sign = 1;                                                                                                     // sign是正负号，1即+号，-1即负号
                if ((i == 1 && s[h][0] == '-') || (i >= 2 && s[h][i - 1] == '-' && (s[h][i - 2] > '9' || s[h][i - 2] < '0'))) // 要把负号的所有情况都想到
                    sign = -1;
                for (j = i, num = 0; j < strlen(s[h]) && (s[h][j] >= '0' && s[h][j] <= '9'); j++)
                    num = num * 10 + s[h][j] - '0'; // 形成数字
                sum = sum + num * sign;
                i = j - 1; // i下标同步
            }
        }
        fprintf(fp2, "%d\n", sum);
        printf("%d\n", sum);
        // h++;/*这个h++有问题，直播时候没有发现，去掉就好了*/
    }
    fclose(fp1);
    fclose(fp2);
    system("pause");
    return 0;
}

