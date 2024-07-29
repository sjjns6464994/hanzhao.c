#include <stdio.h>
int main ()
{
    int a, b, i, j;
    scanf("%d %d", &a, &b);
    int arr1[100][100];
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    for (i = 0; i < b; i++)
    {
        for (j = 0; j < a; j++)
        {
            printf("%d ", arr1[j][i]);
        }
        printf("\n");
    }
}