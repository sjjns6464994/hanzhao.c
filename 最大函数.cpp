#include <stdio.h>
int max3(int x, int y, int z)
{
    int max = x;
    if (max <= y)
        max = y;
    if (max <= z)
        max = z;
    return max;
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    double m = 0.0;
    m = max3(a + b, b, c) * 1.0 / (max3(a, b + c, c) + max3(a, b, b + c));
    printf("%.2f", m);
    return 0;
}