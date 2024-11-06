#include <stdio.h>
#include <math.h>

int prime(int a);

int main()
{
    int i, j, k, count, b[100];
    for (i = 2; i <= 100; i++)
    {
        int a = i;
        if (prime(i) == 0)
        {
            printf("%d is not prime\n", i);
            k = 0;
            count = 0;
            while (a > 1)
            {
                for (j = 2; j <= a; j++)
                {
                    if (prime(j) == 1 && a % j == 0)
                    {
                        b[k++] = j;
                        a /= j;
                        count++;
                        break;  // 找到一个质因数后重新开始
                    }
                }
            }
            printf("%d=", i);
            for (j = 0; j < count; j++)
            {
                printf("%d", b[j]);
                if (j < count - 1)
                    printf("*");
            }
            printf("\n");
        }
        else
        {
            printf("%d is a prime\n", i);
        }
    }
    return 0;
}

int prime(int a)
{
    int i, flag = 1;
    if (a <= 1)
        flag = 0;
    else if (a == 2 || a == 3)
        flag = 1;
    else
    {
        for (i = 2; i <= sqrt(a); i++)
        {
            if (a % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}
