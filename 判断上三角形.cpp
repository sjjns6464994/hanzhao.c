#include <stdio.h>

int main() {
    int a = 0;
    scanf("%d", &a);
    int arr[100][100];
    int i, j;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int flag = 0;
    for (i = 1; i < a; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[i][j] != 0)
            {
                flag = 1;
            } 
        }
    }
    if (flag == 1)
    {
        printf("NO");
    }
    else {
        printf("YES");
    }
    return 0;
}