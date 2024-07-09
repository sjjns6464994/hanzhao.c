#include <stdio.h>
int main ()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int temp = 0;
    int arr[100000];
    for (int i = 0; i < a + b; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < a + b; i++)
    {
        for(int j = i; j < a + b; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = a + b - 1; i >= 0; i--)
        printf("%d ", arr[i]);
    return 0;
}