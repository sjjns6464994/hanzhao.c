#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int ret = 1;
    int sum = 0;
    int j = 0;

    for (j = 1; j <= n; j++)
    {
        ret = 1；
        for (i = 1; i <= j; i++)
        {
            ret *= i;
        }
        sum += ret;
    }
    printf("%d\n", sum);
    system("pause");
    return 0;
}
