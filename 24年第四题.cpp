#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int func(int x) // 判断质数函数
{
    int sign; // sign = 0是质数.
    if (x > 0)
    {
        if (x == 1)
            sign = 1;
        else if (x == 2)
            sign = 0;
        else
        {
            for (int i = 2; i <= sqrt(x); i++)
            {
                if (x % i == 0)
                    sign = 1;
                else
                    sign = 0;
            }
        }
    }
    return sign;
}
int main()
{
    int a, b = 0; // a输入,b检查是否可以得出符合条件的数，有b = 1;无b = 0;
    scanf("%d", &a);
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (func(i) == 0) // 判断i是否为质数
        {
            if (a % i == 0)
            {
                int e = a / i;    // 如果a除i整除找另一个数
                if (func(e) == 0) // 检查另一个数是否为质数
                {
                    printf("%d %d\n", i, e);
                    if (i > e)
                        printf("%d\n", a);
                    else
                        printf("%d\n", e);
                    b = 1;
                }
            }
        }
    }
    if (b == 0)
        printf("该数不能被两个素数相乘得到");
    system("pause");
    return 0;
}