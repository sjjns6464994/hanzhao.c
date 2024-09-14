// 【ACM 训练题)相加之和,则称这个数为 Smith数。如4937775=3X5x5x65837,而3+5+5+6+5+8+3+7=42,4+9+3+7+7+7+5=42,
// 所以4937775是Smith数。求给定一个正整数N,求大于 N的最小 Smith 数。
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int func1(int x) // 判断素数
{
    int sign = 0;
    int a = sqrt(x);
    if (x == 0 || x == 1)
        sign = 0;
    else if (x == 2 || x == 3)
        sign = 1;
    else if (x > 2)
    {
        for (int i = 2; i <= a; i++)
        {
            if (x % i == 0)
                sign = 0;
            else
                sign = 1;
        }
    }
    else
        sign = 0;
    return sign;
}
int func2(int a) // case的位数和
{
    int b = 0, sum = 0;
    while (a)
    {
        b = a % 10;
        sum += b;
        a = a / 10;
    }
    return sum;
}
int func3(int a) // 判断是否为simle数
{
    int i, b, c = 0, sum, sign;
    sum = func2(a);
    while (a)
    {
        for (i = 2; i <= a; i++)
        {
            sign = func1(i);
            if (sign == 1)
            {
                b = a % i;
                if (b == 0)
                {
                    b = a / i;
                    a = b;
                    if (b == 1)
                        a = 0;
                    c += func2(i);
                    break;
                }
            }
        }
    }
    if (c == sum)
    {
        sign = 1;
    }
    else
    {
        sign = 0;
    }
    return sign;
}
int main()
{
    int a;
    while (scanf("%d", &a) && a != 0)
    {
        int j = a + 1;

        // 寻找大于a的最小 Smith 数
        while (!func3(j))
        {
            j++;
        }

        // 输出结果
        printf("%d\n", j);
    }
    system("pause");
    return 0;
}