#include <stdio.h>

int main() {
    int arr[100];
    int a = 0;
    while (scanf("%d", &a) != EOF) 
    {
        
        for(int i = 0; i < a; i++)
        {
            scanf("%d", &arr[i]);
        }
        int max = arr[0];
        int min = arr[0];
        int num = 0;
        for(int i = 0; i < a; i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
            }
            if (min > arr[i])
            {
                min = arr[i];
            }
            num = max - min;
        }
            
        
        printf("%d", num);
    }
    return 0;
}