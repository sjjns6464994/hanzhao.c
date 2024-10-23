#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 函数：生成字符串的所有循环移位
void generateRotations(char *str, char rotations[30][30])
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            rotations[i][j] = str[(i + j) % len];
        }
        rotations[i][len] = '\0';
    }
}

// 函数：检查一个字符串是否是另一个字符串的子串
int isSubstring(char *str1, char *str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    if (len1 > len2)
        return 0;
    
    for (int i = 0; i <= len2 - len1; i++)
    {
        if (strncmp(&str2[i], str1, len1) == 0)
            return 1;
    }
    
    return 0;
}

int main()
{
    char s1[30], s2[30];
    FILE *fp1, *fp2, *fpOut;
    
    // 打开文件
    fp1 = fopen("D:\\codeC\\文件\\infile1.txt", "r");
    fp2 = fopen("D:\\codeC\\文件\\infile2.txt", "r");
    
    // 检查文件是否成功打开
    if (fp1 == NULL || fp2 == NULL)
    {
        perror("无法打开文件");
        return 1;
    }
    
    // 读取文件内容
    fgets(s1, sizeof(s1), fp1);
    fgets(s2, sizeof(s2), fp2);
    
    // 去掉换行符
    s1[strcspn(s1, "\n")] = 0;
    s2[strcspn(s2, "\n")] = 0;
    
    // 关闭文件
    fclose(fp1);
    fclose(fp2);
    
    // 生成 s2 的所有循环移位
    char rotations[30][30];
    generateRotations(s2, rotations);
    
    // 检查 s1 是否是任意一个循环移位后的子串
    int found = 0;
    for (int i = 0; i < strlen(s2); i++)
    {
        if (isSubstring(s1, rotations[i]))
        {
            found = 1;
            break;
        }
    }
    
    // 输出结果
    if (found)
    {
        printf("True\n");
        
        // 写入 outfile.txt
        fpOut = fopen("D:\\codeC\\文件\\outfile.txt", "w");
        if (fpOut == NULL)
        {
            perror("无法打开输出文件");
            return 1;
        }
        fprintf(fpOut, "%s", s1);
        fclose(fpOut);
    }
    else
    {
        printf("False\n");
    }
    
    system("pause");
    return 0;
}
