// 题目：求一个字符串中最长的连续出现的字符，输出该字符及其出现次数，字符串中无空白字符(空格、回车和 tab)如果这样的字符不止-个，则输出第一个。
// 最长连续出现的字符串
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct zifu
{
    int sum;
    char zifu;
};
int main()
{
    int i, j, k, length, max = 0, sum = 1;
    char s[100], c;
    struct zifu a[1000];
    gets(s);
    length = strlen(s);
    for (i = 0; i < length; i++)
    {
        sum = 1;
        for (j = i + 1; j < length; j++)
        {
            if (s[i] == s[j])
                sum++;
            else
            {
                break;
            }
        }
        a[i].sum = sum;
        a[i].zifu = s[i];
    }
    for (i = 0; i < length; i++)
    {
        if (a[i].sum > max)
        {
            max = a[i].sum;
        }
    }
    for (i = 0; i < length; i++)
    {
        if (a[i].sum == max)
        {
            printf("%c %d\n", a[i].zifu, a[i].sum);
            break;
        }
    }
    printf("\n");
    system("pause");
    return 0;
}