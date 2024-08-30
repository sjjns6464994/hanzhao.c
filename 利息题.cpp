

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a = 1000.0;
    int b;
    float r1, r2, r3;
    printf("please input:");
    scanf("%d", &b);
    scanf("%f %f %f", &r1, &r2, &r3);
    switch (b)
    {
    case 1:
        a = a + a * r1;
        printf("%f", a);
        break;
    case 2:
        a = a + a * r2;
        printf("%f", a);
        break;
    case 3:
        a = a + a * r2;
        a = a + a * r2;
        printf("%f", a);
        break;
    }
    system("pause");
    return 0;
}