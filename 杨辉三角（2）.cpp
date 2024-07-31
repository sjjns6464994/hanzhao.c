#include <stdio.h>

int main() {
    int a, i, j;
    scanf("%d", &a);
    int arr[100][100];
    for (i = 0; i < a; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == j)
            {
                arr[i][j] = 1;
            }
            else 
            {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}