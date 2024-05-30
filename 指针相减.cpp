#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//交换两个等长数组内的数值
//指针相减
int my_strlen(char* str)
{
    char* start =str;
    while (*str != '\0')
    {
        str++;
    }
    return str - start;
}

//指针和指针相减的指针是两个指针指向同一块空间
int main()
{
    // strlen(); -求字符串长度#include <string.h>
    
    int len = my_strlen("abc");//传的是a的地址
    printf("%d\n", len);

    system("pause");
    return 0;
}
