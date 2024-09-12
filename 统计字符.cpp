#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int b = 0, c = 0, d = 0, e = 0;
    char arr[100];
    gets(arr);
    int a = strlen(arr);
    for (int i = 0; i < a; i++)
    {
        if ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z'))
        {
            b++;
        }
        else if (arr[i] == ' ')
        {
            c++;
        }
        else if (arr[i] >= '0' && arr[i] <= '9')
        {
            d++;
        }
        else
            e++;
    }
    printf("arr中字母的个数%d个,空格的个数%d个,数字的个数%d个,其他字符%d个", b, c, d, e);
    system("pause");
    return 0;
}
