

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sign = 1;
    float sum = 0.0, a = 0.0;
    for (float i = 1.0; i <= 100.0; i++)
    {
        a = 1.0 / i;
        sum += a * sign;
        sign = -sign;
    }
    printf("%.2f", sum);
    system("pause");
    return 0;
}
