#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n, a, b; // a最大公约数， b最小公倍数。
    int max, min;
    scanf("%d %d", &m, &n);
    if (m > n)
    {
        max = m;
        min = n;
    }
    else
    {
        max = n;
        min = m;
    }
    for (int i = 1; i <= min; i++)
    {
        if (max % i == 0 && min % i == 0)
            a = i;
    }
    printf("%d \n", a);
    for (int i = m * n; i >= max; i--)
    {
        if (i % m == 0 && i % n == 0)
            b = i;
    }
    printf("%d ", b);
    system("pause");
    return 0;
}