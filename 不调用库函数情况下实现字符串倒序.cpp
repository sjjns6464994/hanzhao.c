#include <stdio.h>
//字符串逆序递归实现
int my_strlen(char* str)
{
    int count = 0;
    while (*str != '\0')//while是个循环动作，if不是所以这里不能用if
    {
        count++;
        str++;
    }
    return count;
}
void reverse_string(char* str)
{
    int left = 0;
    int right = my_strlen(str) - 1;//下标
    while(left < right)
    {
        char tmp = str[left];
        str[left] = str[right];
        str[right] = tmp;
        left++;
        right--;
    }
}
int main()
{
    char arr[] = "abcdef";
    reverse_string(arr);
    printf("%s\n", arr);
    system("pause");
    return 0;
}
