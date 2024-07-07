#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d\n", &n);
    int i = 0;
    int j = 0;
    int temp = 0;
    int a[100];
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if ( a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
    return 0;
}