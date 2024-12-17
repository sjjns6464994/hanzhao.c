#include <stdio.h>
struct cow
{
    double A, B;
    int c, flag, num;
};
int main()
{
    int i, j, k, index, flag, count = 0, n;
    double b[1000];
    struct cow a[1000], temp;
    scanf("%d", &n);

    if (n <= 0)
        return -1;

    for (i = 0; i < n; i++)
    {
        scanf("%lf %lf", &a[i].A, &a[i].B);
        a[i].flag = 1;
        a[i].num = i + 1;
    }

    for (i = 0; i < n; i++)
    {
        index = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[index].A > a[j].A)
                index = j;
        }
        temp = a[index];
        a[index] = a[i];
        a[i] = temp;
    }
    b[0] = a[0].B;
    count = 1;
    a[0].c = 1;

    for (i = 1; i < n; i++)
    {
        int assigned = 0;
        for (j = 0; j < count; j++)
        {
            if (a[i].A > b[j])
            {
                a[i].c = j + 1;
                b[j] = a[i].B;
                assigned = 1;
                break;
            }
        }
        if (!assigned)
        {
            count++;
            b[count - 1] = a[i].B;
            a[i].c = count;
        }
    }

        printf("%d\n", count);

    for (i = 0; i < n; i++)
    {
        index = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[index].num > a[i].num)
                index = j;
        }
        temp = a[index];
        a[index] = a[i];
        a[i] = temp;
    }

    for (i = 0; i < n; i++)
        printf("%d\n", a[i].c);

    return 0;
}

/*
外部循环：

for (i = 1; i < n; i++)：遍历所有的牛。i 从 1 开始，因为第 0 头牛已经在初始化时被处理过了。
初始化 assigned 变量：

int assigned = 0;：assigned 用于标记当前牛是否已经被分配了一个畜栏。初始值为 0，表示尚未分配。
内部循环：

for (j = 0; j < count; j++)：遍历所有已有的畜栏。count 是当前已有的畜栏数量。
检查是否可以分配到现有畜栏：

if (a[i].A > b[j])：检查当前牛的开始时间 a[i].A 是否大于畜栏 j 的结束时间 b[j]。如果是，表示当前牛可以在畜栏 j 中开始，而不会与其他牛发生时间冲突。
分配畜栏并更新结束时间：

a[i].c = j + 1;：将当前牛分配到畜栏 j + 1（因为数组索引从 0 开始，而畜栏编号通常从 1 开始）。
b[j] = a[i].B;：更新畜栏 j 的结束时间为当前牛的结束时间 a[i].B。
assigned = 1;：标记当前牛已经被分配。
break;：退出内部循环，因为当前牛已经找到了合适的畜栏。
如果没有找到合适的畜栏：

if (!assigned)：如果当前牛没有被分配到任何现有的畜栏（即 assigned 仍然是 0），则需要创建一个新的畜栏。
count++;：增加畜栏的数量。
b[count - 1] = a[i].B;：将当前牛的结束时间 a[i].B 放入新的畜栏中。
a[i].c = count;：将当前牛分配到新的畜栏
*/
