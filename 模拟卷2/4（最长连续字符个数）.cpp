//(4)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func(char a[1000])
{
    int maxcount = 0;       // 最大连续字符出现次数
    char maxchar = '\0';    // 出现次数最多的字符
    int length = strlen(a); // 字符串长度

    for (int i = 0; i < length; i++)
    {                         // 外层循环遍历每个字符
        int currentcount = 0; // 当前字符重复的次数
        // 内层循环从下一个字符开始，计算连续字符
        for (int j = i; j < length; j++)
        {
            if (a[j] == a[i])
            {
                currentcount++; // 如果当前字符与之前的字符相同，增加当前计数
            }
            else
            {
                break; // 一旦字符不同，退出内层循环
            }
        }

        // 现在检查是否当前计数大于最大计数
        if (currentcount > maxcount)
        {
            maxcount = currentcount; // 更新最大计数
            maxchar = a[i];          // 更新出现最多的字符
        }

        // 将 i 设为当前字符最后一个相同字符的索引，以避免重复计数
        i += currentcount - 1; // 跳过已处理的相同字符 ///////////////特别注意//////////减一
    }

    // 输出最多的字符及出现的次数
    if (maxchar != '\0')
    {
        printf("%c %d\n", maxchar, maxcount);
    }
}

int main()
{
    int N;
    char a[1000][1000];

    scanf("%d", &N); // 输入字符串的数量
    for (int i = 0; i < N; i++)
    {
        scanf("%s", a[i]); // 输入每个字符串
        func(a[i]);        // 调用 func 处理字符串
    }
    system("pause");
    return 0;
}
