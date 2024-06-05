#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//复制字符
void my_strcpy(char* dest, char* src)
{
    // while(*src != '\0') 
    // {                    
        // *dest++= *src++;
        // dest++;
        // src++;
    // }
    // *dest = *stc

    while(*dest++ = *src++) //while(*dest++ = *src++) '\0'的ASCII为0
    {
        ;
    }
}
int main()
{
    char arr1[20] ="xxxxxxxxxxx";
    char arr2[] = "hello";
    my_strcpy(arr1, arr2);
    strcpy(arr1, arr2);
    printf("%s\n", arr1);
    system("pause");
    return 0;
}