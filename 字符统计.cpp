#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char arr[100];
    int b[100] = {0}; // 初始化 b 数组

    // 读取字符串
    scanf("%s", arr);

    int x = strlen(arr); // 字符串长度
    int maxn = 0, minn = 100; // 设定初始值：maxn 从 0 开始，minn 从一个大的值开始

    // 计算每个字符出现的次数
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (arr[i] == arr[j])
            {
                b[i]++; // 统计每个字符的出现次数
            }
        }
    }

    // 查找最大和最小出现次数
    for (int i = 0; i < x; i++)
    {
        if (b[i] > maxn)
        {
            maxn = b[i];
        }
        if (b[i] < minn)
        {
            minn = b[i];
        }
    }

    int sum = maxn - minn; // 计算最大值和最小值之差
    int flag = 0;

    // 检查 sum 是否为质数
    if (sum < 2) // 小于 2 的数不是质数
    {
        flag = 1;
    }
    else
    {
        for (int i = 2; i <= sqrt(sum); i++)
        {
            if (sum % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }

    // 输出结果
    if (flag == 1)
    {
        printf("No Answer\n");
        printf("%d\n", 0);
    }
    if (flag == 0)
    {
        printf("Lucky Word\n");
        printf("%d\n", sum);
    }
}