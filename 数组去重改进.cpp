#include <stdio.h>
int main()
{
    int a = 0;
    int i = 0;
    int j = 0;
    int g = 0;
    int arr1[100];
    int arr2[100];
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        int flag = 0;
        scanf("%d", &arr1[i]);
        for(j = 0; j < i; j++)
        {
            if (arr2[j] == arr1[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            {
                arr2[g] = arr1[i];
                g++;
            }
    }
    for (i = 0; i < g; i++)
    {
        printf("%d ", arr2[i]);
    }

}