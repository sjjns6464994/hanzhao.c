#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct students
{
    char name[10], id[10];
    double subject1, subject2, subject3;
};
int main()
{
    int N, i, b, sign;
    double avg;
    char newname[10];
    struct students a[100];
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%s %s %lf %lf %lf", a[i].name, a[i].id, &a[i].subject1, &a[i].subject2, &a[i].subject3);
    }
    printf("请输入查找学生的姓名\n");
    scanf("%s", newname);
    for (i = 0; i < N; i++)
    {
        if (strcmp(newname, a[i].name) == 0)
        {
            b = i;
            sign = 1;
        }
    }
    if (sign)
    {
        for (i = 0; i < b; i++)
        {
            avg = (a[i].subject1 + a[i].subject2 + a[i].subject3) / 3.0;
            printf("%s %s %lf\n", a[i].name, a[i].id, avg);
        }
        for (i = b + 1; i < N; i++)
        {
            avg = (a[i].subject1 + a[i].subject2 + a[i].subject3) / 3.0;
            printf("%s %s %lf\n", a[i].name, a[i].id, avg);
        }
    }
    else
    {
        for (i = 0; i < N; i++)
        {
            avg = (a[i].subject1 + a[i].subject2 + a[i].subject3) / 3.0;
            printf("%s %s %lf\n", a[i].name, a[i].id, avg);
        }
    }
    system("pause");
    return 0;
}