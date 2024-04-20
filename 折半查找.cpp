#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// int mutiply (int num1 ,int num2)
// {
//     return num1 * num2 ; 
// }


// int main()
// {   int factorial = 1;
//     int i = 0;
//     int n , a , sum;
//     int j =i+1;
//     printf ("请输入一个整数");
//     scanf ("%d", &n);

//     for ( i = 0; i < n; i++, j++)
//         {
//             a = factorial;
//             factorial = mutiply(a , j);
//             sum += factorial;//a = a + b
//         }
//     printf("阶乘值的和%d是\n", sum);
//     system ("pause");
//     return 0;
// }

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 7;
    int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数;sizeof(arr)表示计算整个数组大小，sizeof(arr[0])代表计算一个元素的大小

    int left = 0;
    int right = sz - 1;//下标
    
    while (left <= right)
    {
        int mid = (left + right) / 2;//此处只能在while循环内写，写在外面mid只计算一次。
        if (arr[mid] < k)
        {
            left = mid +1;
        }
        else if (arr[mid] > k)
        {
            right = mid -1;
        }
        else
        {
            printf("找到它的下标了%d\n", mid);
            break;
        } 
    }
    if (left > right)
    {
        printf ("该数组中没有这个数");
    }

    system ("pause");
    return 0;
}