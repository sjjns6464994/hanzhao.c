#include <stdio.h>

int main() {
    int a, b;
    int arr[100];
    while (scanf("%d", &a) != EOF) 
    {
        int i = 0;
        int c = 0;
        for (i = 0; i < a; i++)
        {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &b);
        for (i = 0; i < a; i++)
        {
            if (b == arr[i])
            {
                continue;
            }    
            printf("%d ", arr[i]);
        }
    }
    return 0;
}