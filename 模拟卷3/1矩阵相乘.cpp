// £¨1)¾ØÕóÏà³Ë
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n, p, i, j, k, sum = 0;
    scanf("%d %d %d", &m, &n, &p);
    int arr1[10][10], arr2[10][10], arr3[10][10];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            sum = 0;
            for (k = 0; k < n; k++)
            {
                sum += arr1[i][k] + arr2[k][j];
            }
            arr3[i][j] = sum;
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
