#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int b, i, j, n, index;
    char s[100], arr[100], arr2[100], s1[100], temp, arr3[100][100];
    int arr1[100]; // 记录常数
    printf("请输入字符>");
    scanf("%s", s);
    n = strlen(s);

    for (i = 0; i < n; i++)
    {
        arr[i] = s[i];
    }
    for (j = n; j < 2 * n; j++)
    {
        arr[j] = arr[j - n];
    }
    printf("输出arr2:");
    for (i = 0; i < 2 * n; i++)
    {
        arr2[i] = arr[i];
        printf("%c", arr2[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%c", arr[i + j]);
        }
        printf("\n");
    }
    printf("******第(2)(3)问*****\n");
    // 选择排序
    for (i = 0; i < n; i++)
    {
        index = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        // 交换
        if (index != i) // 只有在需要交换的时候才交换
        {
            temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }
    // 输出排序结果
    // for (i = 0; i < n; i++)
    // {
    //     printf("%c", arr[i]);
    // }
    // printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i] == s[j])
            {
                arr1[i] = j;
                s[j] = '0'; // 防止重复
                break;
            }
        }
        // printf("%d", arr1[i]);
    }
    // printf("\n");
    for (i = 0; i < n; i++)
    {
        b = arr1[i];
        for (j = b; j < b + n; j++)
        {
            arr3[i][j] = arr2[j];
            printf("%c", arr3[i][j]);
        }
        printf("\n");
    }
    printf("******第(4)问*****\n");
    for (i = 0; i < n; i++)
    {
        b = arr1[i];
        if (b < n)
            s1[i] = arr3[i][b];
        else
            s1[i] = ' '; // 如果索引越界，填充空格
        printf("%c", s1[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}