#include <stdio.h>
int main()
{
    int x;
    while (scanf("%d", &x) != EOF)
    {
        for (int i = 1; i <= x+1; i++)
        {
            int j;
            for (j = 0; j < x - i+1; j++)
            {
                printf(" ");
            }
            for (j = 0; j < i; j++)
            {
                printf("* ");
            }
            printf("\n");


        }
        for (int i = 1; i < x+1; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf(" ");
            }
            for (int j = 0; j < x - i+1; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
}