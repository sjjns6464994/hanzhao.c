#include <stdio.h>
#include <stdlib.h>
int main() {
    int a , b;
    scanf("%d %d", &a, &b);
    int arr [100];
    int count = 0;
    for(int i = 0; i < a; i++)
    {
        arr[i] = 1 + i;
        // printf("%d\n", arr[i]);
        while(arr[i])
        {
            if (arr[i] % 10 == b)
            {
                count++;
                arr[i] /= 10;
            }
            else
            {
                arr[i] /= 10;
            }
        }
    }
    printf("%d", count);
    system("pause");
    return 0;
}