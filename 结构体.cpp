#include <math.h>
#include <stdio.h>
#include <stdlib.h>
struct clerk
{
    char id[20];
    int age;
};
int main()
{
    struct clerk a[100];
    int n, temp1 = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s", &a[i].age, a[i].id);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j].age < a[i].age)
            {
                temp1 = a[j].age;
                a[j].age = a[i].age;
                a[i].age = temp1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d %s\n", a[i].age, a[i].id);
    }
    system("pause");
    return 0;
}
