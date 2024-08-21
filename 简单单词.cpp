#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100];
    while (scanf("%s", arr) != EOF)
    {
        if (arr[0] >= 65 && arr[0] <= 96)
        {
            printf("%c", arr[0]);
        }
        else
        {
            printf("%c", arr[0] - 32);
        }
    }
    return 0;
}