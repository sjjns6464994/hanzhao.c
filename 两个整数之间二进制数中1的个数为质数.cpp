#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int func1(int x) // 判断质数函数
{
    int i, flag = 0;
    if (x <= 1)
        flag = 0;
    else if (x <= 3)
        flag = 1;
    else
    {
        for (i = 2; i < sqrt(x); i++)
        {
            if (x % i == 0)
            {
                flag = 0;
                break;
            }
            else
                flag = 1;
        }
    }
    return flag;
}


int func2(int x) // 转换二进制数并计算1的个数
{
    int i, sum = 0;
    for (i = 31; i >= 0; i--)
    {
        if ((x >> i) & 1)
            sum++;
    }
    return sum;
}
int main()
{
    int left, right, i, j = 0, index;
    printf("输入left right的值(先输入小的值后输入大的值)\n");
    scanf("%d %d", &left, &right);
    if (left > right)
    {
        printf("错误：left 值大于 right 值\n");
        return 1;
    }
    for (i = left; i <= right; i++)
    {
        index = func2(i);
        if (func1(index))
            j++;
    }
    printf("%d\n", j);
    return 0; // 移除系统调用
}
