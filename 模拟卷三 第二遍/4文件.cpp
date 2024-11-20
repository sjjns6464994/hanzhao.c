#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k, t, index, h, flag = 0;
    char s1[32], s2[32], str[32][32];
    FILE *fp1, *fp2, *fp3;

    // 打开文件
    fp1 = fopen("D:\\codeC\\文件\\infile1.txt", "r");
    fp2 = fopen("D:\\codeC\\文件\\infile2.txt", "r");
    fp3 = fopen("D:\\codeC\\文件\\outfile.txt", "w");

    // 检查文件是否成功打开
    if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        printf("打开文件失败！！！\n");
        return -1;
    }

    // 读取字符串
    fgets(s1, sizeof(s1), fp1);
    fgets(s2, sizeof(s2), fp2);

    // 去除换行符
    s1[strcspn(s1, "\n")] = 0;
    s2[strcspn(s2, "\n")] = 0;

    int length = strlen(s2);//记住  牛逼 
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length; j++)
        {
            str[i][j] = s2[(i + j) % length];
        }
        str[i][length] = '\0';
    }
//	for (i = 0, h = 0; h < length; i++, h++)
//    {
//        k = i;
//        for (j = k, t = 0; j < length; j++, t++)
//            str[h][t] = s2[j];
//        for (j = 0; j < k; j++, t++)
//            str[h][t] = s2[j];
//        str[h][t] = '\0';
//    }
     //检查生成的循环移位字符串
     for (i = 0; i < length; i++)
     {
         printf("%s\n", str[i]);
     }

    int length2 = strlen(s1);
    for (i = 0; i < length; i++)
    {
        if (strstr(str[i], s1) != NULL)  // 使用 strstr 函数检查子串
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("True\n");
        fprintf(fp3, "%s\n", s1);
    }
    else
    {
        printf("False\n");
    }

    // 关闭文件
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}
