#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    while (scanf("%d", &a) != EOF) 
    { 

        int i = 0;
        int j = 0;
        for(i = 0; i < a; i++)
        {
            if (i == 0 || i == a - 1)
            {
                for(j = 0; j < a; j++)
                {
                    printf("* ");
                }
                printf("\n");
            }
            else 
            {
                
                printf("* ");
                for(int b = 1; b < a-1; b++)
                    {
                        printf("  ");
                    }
                printf("* ");
                printf("\n");
                
            }
            
        }
    }
    system("pause");
    return 0;
}