#include <stdio.h>

int main() {
    int a, b, i, j;
    scanf("%d %d", &a, &b);
    int arr1[100];
    for (i = 0; i <= a * b; i++)
    {
        scanf("%d", &arr1[i]);
    }
    int arr2[100][100];
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            arr2[i][j] = arr1[i * b + j];
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