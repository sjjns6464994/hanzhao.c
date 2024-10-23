// ги3)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n, a, b, i, j, k, flag = 1;
    long int sum = 0;
    int num[10];
    scanf("%d", &n);
    a = 2 * n;
    b = 3 * n;
    sum = n + a * 1000 + b * 1000000;
    for (i = 0; i < 9; i++)
    {
        k = sum % 10;
        sum /= 10;
        num[i] = k;
    }
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 9; j++)
        {
            if (num[i] == num[j] || num[i] == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
        printf("true");
    else
        printf("false");
    system("pause");
    return 0;
}
