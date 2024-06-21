#include <stdio.h>

int main()
{
    //指针数组；
    //数组 - 数组中存放的是指针（地址）
    // int a = 10;
    // int b = 20;
    // int c = 30;

    // int* arr[3] = {&a, &b, &c};

    // int i = 0;
    // for(i = 0; i < 3; i++)
    // {
    //     printf("%d ", *(arr[i]));
    // }
    
    int a[5] = { 1, 2, 3, 4 , 5};
    int b[] = { 2, 3, 4, 5, 6 };
    int c[] = { 3, 4, 5, 6, 7 };

    int* arr[3] = {a, b, c};
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        int j = 0;
        for (j = 0; j < 5; j++)
        {
            // printf("%d ", *arr([i] + j));
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}