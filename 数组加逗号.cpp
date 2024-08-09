#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() 
{
    char arr[20] = {0};
    scanf("%s",arr);
    int sz = strlen(arr);
    int i = 0;
    for(i = 1;i <= sz;i++)
    {
        printf("%c",arr[i-1]);
        if((sz - i) %3 == 0 &&i !=sz )
            printf(",");
    }
    system("pause");
    return 0;
}