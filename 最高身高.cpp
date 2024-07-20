#include<stdio.h>
int main()
{
    int n, m, i, j, x, y, arr[10][10];
    x = 0;
    y = 0;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[x][y] < arr[i][j])
            {
                x = i;
                y = j;
            }
        }
    }
    printf("%d %d", x + 1, y + 1);
    
    return 0;
}