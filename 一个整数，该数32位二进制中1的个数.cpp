#include <stdio.h>

// int Numberof(int n)
// {
//     int count = 0;
//     int i = 0;
//     for( i = 0; i < 32; i++)
//     {
//         if(((n >> i) & 1) == 1)
//         {
//             count++;
//         }
//     }
//     // if((n & 1) == 1)
//     // {

//     // }
//     // while(n)
//     // {
//     //     if(n % 2 == 1)
//     //     {
//     //         count++;
//     //     }
//     //     n /= 2;
//     // }
//     return count;
// }
//判断一个数是不是2的n次方
//2的n次方的数字，其中只有一个1
//0000010000000000
//k&(k-1) == 0
int Numberof(int a)
{
    int count = 0;
    int i = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
int main()
{
    int n = -1;
    int ret = Numberof(n);

    printf("ret = %d\n", ret);
    system("pause");
    return 0;
}