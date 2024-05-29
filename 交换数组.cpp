#include <stdio.h>
#include <stdlib.h>
//交换两个等长数组内的数值
int main()
{
    int i = 0;
    int arr1[] = { 1,3,5,7,9};
    int arr2[] = { 2,4,6,8,10};
    int sz = sizeof(arr1) / sizeof(arr1[0]);
    for(i = 0; i < sz; i++)
    {
        int tmp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = tmp;
    }

    printf("arr1: ");
    for (i = 0; i < sz; i++) 
    {
        printf("%d ", arr1[i]);
    }

    printf("\n");

    printf("arr2: ");
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr2[i]);
    }

    printf("\n");
    system("pause");
    return 0;
}