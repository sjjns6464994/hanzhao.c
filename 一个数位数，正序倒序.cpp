// 输入一个数，（1）输出该数的位数，（2）正序输出（3）倒序输出
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b = 0, c = 0, e, arr[5];
    scanf("%d", &a);
    e = a;
    while (a)
    {
        b = a % 10;
        a = a / 10;
        c++;
    }
    printf("%d", c);
    printf("\n");
    for (int i = 0; i < c; i++)
    {
        b = e % 10;
        e = e / 10;
        arr[i] = b;
    }
    for (int i = c - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < c; i++)
    {
        printf("%d", arr[i]);
    }
    system("pause");
    return 0;
}