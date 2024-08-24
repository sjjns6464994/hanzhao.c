#include <stdio.h>
int function(int x, int y)
{
    int sum = 0;
    for (int i = x; i <= y; i++)
    {
        int k = i;
        int h = 0;
        while (k != 0)
        {
            h += k % 10;
            k = k / 10;
        }
        if (h % 5 == 0)
        {
            sum++;
        }
    }
    return sum;
}
int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        printf("%d\n", function(a, b));
    }
    return 0;
}