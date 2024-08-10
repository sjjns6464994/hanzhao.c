#include <stdio.h>
#include <string.h>
int main() {
    char arr[100];
    scanf("%s", arr);
    int sz = strlen(arr);
    int i, b = 0, c = 0;
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == 'A')
        {
            b++;
        }
        else if (arr[i] == 'B')
        {
            c++;
        }
    }
    if (b > c)
        printf("A");
    else if (b < c)
        printf("B");
    else
        printf("E");
    return 0;
}