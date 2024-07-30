#include <stdio.h>

int main() {
    int a, b, c, e, f, i, j;
    char g;
    scanf("%d %d %d", &a, &b, &c);
    int arr1[100][100], arr2[100][100], arr3[100][100];
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &arr1[i][j]);
            arr2[i][j] = arr1[i][j];
            arr3[i][j] = arr1[i][j];
        }
    }
    for (i = 0; i < c; i++)
    {
        getchar();
        scanf("%c %d %d", &g, &e, &f);
        if (g == 'r')
        {
            for (j = 0; j < b; j++)
            {
                arr2[e][j] = arr1[e - 1][j];
                arr2[e - 1][j] = arr3[e][j];
            }
        }
        else if (g == 'c')
        {
            for (i = 0; i < a; i++)
            {   
                arr2[i][e] = arr1[i][e - 1];
                arr2[i][e - 1] = arr3[i][e];
            }
        }
    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}