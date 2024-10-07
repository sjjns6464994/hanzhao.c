#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i, j, k, sum = 0, flag = 0;
    char str[1000];
    FILE *fp1;
    fp1 = fopen("D:\\codeC\\文件\\infile.txt", "r");
    if (fp1 == NULL)
    {
        printf("打开文件失败\n");
        return 1;
    }
    fgets(str, sizeof(str), fp1);
    str[strcspn(str, "\n")] = 0;
    sum = strlen(str);
    int max = sum / 2;
    for (i = 1; i <= max; i++)
    {
        if (sum % i == 0)
        {
            flag = 1;
            for (j = 0; j < sum; j++)
            {
                if (str[j] != str[j % i])
                {
                    flag = 0;
                    break;
                }
                else
                    flag = 1;
            }
        }
    }
    if (flag == 1)
        printf("True\n");
    else
        printf("Flase\n");
    fclose(fp1);
    system("pause");
    return 0;
}