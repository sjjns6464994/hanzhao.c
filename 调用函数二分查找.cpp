#include <stdio.h>
int binary_seach(int a[], int k, int s)
{
    int left = 0;
    int right = s - 1;
  
    while(left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] > k)
        {
            right = mid - 1;
        } 
        else if(a[mid] < k)
        {
            left = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
        
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int target = 7;
    //找到返回找到位置的下标
    //找不到返回-1
    int sz = sizeof(arr) / sizeof(arr[0]);
    int ret = binary_seach(arr, target, sz);
    if (-1 == ret)
    {
        printf("没找到目标值");
    }
    else
    {
        printf("找到了：%d\n", ret);
    }

    system("pause");
    return 0;

}