#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    while (scanf("%d", &x) != EOF)
    {
        int i = 0;
        int j = 0;
        int a = x + 1;
        for (i = 0; i < x + 1; i++)
        {
            for(j = a - i; j > 0; j--)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (i = 1; i < a; i++)
        {
            for (j = 2; j <= i+2; j++)
            {
                printf("* ");
            }
            printf("\n");
        }    
    }
    system("pause");
    return 0;
}