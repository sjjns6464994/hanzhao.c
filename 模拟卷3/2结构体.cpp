// （2)结构体
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct peo
{
    char name[10], birthday[10], phonenumber[100];
};
int main()
{
    int i, j, n;
    scanf("%d", &n);
    struct peo friends[100], temp;
    for (i = 0; i < n; i++)
    {
        scanf("%s %s %s", friends[i].name, friends[i].birthday, friends[i].phonenumber);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(friends[i].birthday, friends[j].birthday) > 0)
            {
                // 使用临时变量 temp 交换结构体
                temp = friends[i];
                friends[i] = friends[j];
                friends[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%s %s %s\n", friends[i].name, friends[i].birthday, friends[i].phonenumber);
    }
    system("pause");
    return 0;
}
