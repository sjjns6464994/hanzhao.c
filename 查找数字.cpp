#include <stdio.h>

int main() {
    int a, b;
    int i = 0;
    int flag = 0;
    int arr[100];
    while (scanf("%d", &a) != EOF) 
    { 
        for (i = 0; i < a; i++)
        {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &b);
        for (i = 0; i < a; i++)
        {
            if (b == arr[i])
            {
                flag += 1;
            }
        }
        printf("%d", flag);
    }
    return 0;
}