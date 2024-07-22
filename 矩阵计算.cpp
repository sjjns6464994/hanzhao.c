#include <stdio.h>

int main() {
    int a, b;
    int i, j;
    int sum = 0;
    int arr[100][100];
    scanf("%d %d", &a, &b);
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] > 0)
            {
                sum += arr[i][j];
            }
        }
    }
    printf("%d", sum);
    return 0;
}