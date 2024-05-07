#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
#include <string.h>

void bubble_sort(int arr[], int sz)//形参arr本质是指针
{

    int i = 0;
    for (i = 0; i < sz - 1; i++)
    {
        //一趟冒泡排序的过程
        int j = 0;
        int flag = 1;
        for (j = 0; j < sz-1-i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr [j + 1] = tmp; 
                flag = 0;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {1,8,5,6,4,8,3,2,7,5,8,9};
    //排序为升序 - 冒泡排序
    int sz = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, sz);//数组在传参的时候，传递的是数组首元素的地址
    system("pause");
    return 0;
    
}