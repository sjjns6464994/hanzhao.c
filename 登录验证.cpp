#include<stdio.h>
int main()
{
    char a[10] = {0};
    char b[10] = { 0 };

    while (scanf("%s %s", &a, &b) != EOF)
    {
        if (strcmp(&a, "admin") == 0)
        {
            if (strcmp(b, "admin") == 0)
            {
                printf("Login Success!");
            }
            else
                printf("Login Fail!");
        }
        else
            printf("Login Fail!");
    }
    return 0;
}
   
