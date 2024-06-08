#include <stdio.h>
#include <assert.h>//assert头文件

char* my_strcpy(char* dest, const char* src)//函数有返回值
{
    // while(*src != '\0') 
    // {                    
        // *dest++= *src++;
        // dest++;
        // src++;
    // }
    // *dest = *stc
    assert(src != NULL);//断言--检查是否符合条件，如果符合条件则会正常输出，如不不符合则抛出一个异常或终止程序的执行
    assert(dest != NULL);
    char* ret = dest;
    while(*dest++ = *src++) //while(*dest++ = *src++) '\0'的ASCII为0
    {
        ;//hello拷贝
    }
    return ret;
}

int main()
{
    char arr1[20] ="xxxxxxxxxxx";
    char arr2[] = "hello";
    
    // strcpy(arr1, arr2);
    printf("%s\n", my_strcpy(arr1, arr2););//链式访问
    system("pause");
    return 0;
}
