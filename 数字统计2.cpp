#include <stdio.h>

int count_2(int i)
{
    int count = 0;
    while (i)
    {
        if (i % 10 == 2)
            count++;
        i /= 10;
    }
    return count;
}

int main()
{
    int l = 0;
    int r = 0;
    scanf("%d %d", &l, &r);

    int sum2 = 0;

    int i = 0;
    for (i = l; i <= r; i++)
    {
        sum2 = sum2 + count_2(i);
    }

    printf("%d", sum2);
    return 0;
}