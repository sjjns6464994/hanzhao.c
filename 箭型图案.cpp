#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    while (scanf("%d", &a) != EOF) 
    { 
        int i = 0;
        int j = 0;
        for(i= 1; i <= a + 1; i++)
        {
            for (j = 0; j < 2 * (a + 1 - i); j++)
            {
                printf(" ");
            }
            for(j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        for(i =1 ; i < a + 1; i++)
        {
            
            for(j = 0; j < 2 * i; j++)
            {
                printf(" ");
            }
            for (j = 0; j < a + 1 - i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    system("pause");
    return 0;
}