#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_WORD_LENGTH 50

int main()
{
    char sentence[256];
    char *words[MAX_WORDS];
    char s1[100], s2[100], s[256] = ""; // 初始化 s
    int count = 0;
    FILE *fp1, *fp2;

    // 打开文件以读取内容
    fp1 = fopen("D:\\codeC\\文件\\infile.txt", "r");
    if (fp1 == NULL)
    {
        perror("无法打开输入文件");
        return 1;
    }

    fgets(sentence, sizeof(sentence), fp1);

    // 去掉换行符
    sentence[strcspn(sentence, "\n")] = 0;

    // 使用 strtok 进行分割
    char *token = strtok(sentence, " ");
    while (token != NULL && count < MAX_WORDS)
    {
        words[count] = token; // 保存子串的指针
        count++;
        token = strtok(NULL, " ");
    }

    fclose(fp1); // 关闭文件

    printf("请输入查找的字母: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = 0; // 去掉换行符

    printf("请输入需要替换的字母: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = 0; // 去掉换行符

    // 输出分割后的结果
    printf("分割后的单词:\n");
    for (int i = 0; i < count; i++)
    {
        if (strcmp(s1, words[i]) == 0)
        {
            words[i] = s2; // 注意：这可能会导致问题
        }
        printf("%s ", words[i]);
    }
    printf("\n");

    // 连接单词到 s 中
    for (int i = 0; i < count; i++)
    {
        strcat(s, words[i]); // 连接单词
        if (i < count - 1)
        {
            strcat(s, " "); // 在单词之间添加空格
        }
    }

    // 以写模式打开文件来保存结果
    fp2 = fopen("D:\\codeC\\文件\\outfile.txt", "w");
    if (fp2 == NULL)
    {
        perror("无法打开输出文件");
        return 1;
    }

    fprintf(fp2, "%s\n", s);
    fclose(fp2); // 关闭输出文件

    system("pause");
    return 0;
}