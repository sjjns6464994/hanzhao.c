#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, n;
    scanf("%d %d", &a, &n);
    int sum = 0;
    int current = 0;

    for (int i = 0; i < n; i++)
    {
        current = current * 10 + a; // 构造当前的数字
        sum += current;             // 将当前数字加到总和中
    }

    printf("%d\n", sum);
    system("pause");
    return 0;
}