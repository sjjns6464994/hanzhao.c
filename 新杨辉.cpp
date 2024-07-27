#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,x = 1;
    int a = 1;
    for (i = n; i > 0; i--)
    {
        x = 1 + i * 2;
        for (j = 0; j < x; j++)
        {
            printf(" ");
            x = 0;
        }
        x = i + i * 2 + ((a - 1) + 3 * a);
        a++;
        for (j = 0; j < x; j++)
        {
            printf(" ");
            x = 0;
        }
        printf("1\n");
    }
    
    system("pause");
    return 0;
}