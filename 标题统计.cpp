#include <stdio.h>
#include <string.h>
int main() {
    char str [100];
    int count = 0;
    while (scanf("%s", str)!= EOF)
    {
        for (int i = 0; i < strlen(str); i++)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}