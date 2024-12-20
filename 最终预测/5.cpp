#include <math.h>
#include <stdio.h>
#include <stdlib.h>
struct cow
{
    double min, max, mid;
    int flag;
};

struct fangshai
{
    double SPF;
    int cover;
};

int main()
{
    int i, j, C, L, count = 0;
    scanf("%d %d", &C, &L);
    struct cow a[1000], temp1;
    struct fangshai b[1000], temp2;

    // 读取牛的数据
    for (i = 0; i < C; i++)
    {
        scanf("%lf %lf", &a[i].min, &a[i].max);
        a[i].flag = 0;
        a[i].mid = (a[i].min + a[i].max) / 2.0; // 修正mid的计算
    }


    
    // 读取防晒霜的数据
    for (i = 0; i < L; i++)
    {
        scanf("%lf %d", &b[i].SPF, &b[i].cover);
    }


    // for (i = 0; i < C; i++)
    // {
    //     printf("%lf\n", a[i].mid);
    // }
    
    for (i = 0; i < L; i++)
    {
        int index = i;
        for (j = i + 1; j < L; j++)
        {
            if (b[index].SPF > b[j].SPF)
            {
                index = j;
            }
        }
        temp2 = b[index];
        b[index] = b[i];
        b[i] = temp2;
    }

    // 对牛按mid值排序
    for (i = 0; i < C; i++)
    {
        int index = i;
        for (j = i + 1; j < C; j++)
        {
            if (a[index].mid > a[j].mid)
            {
                index = j;
            }
            else if ((a[index].mid == a[j].mid) && (fabs(a[index].min - b[0].SPF) > fabs(a[j].min - b[0].SPF)))
            {
                index = j;
            }
        }
        temp1 = a[index];
        a[index] = a[i];
        a[i] = temp1;
    }

    // for (i = 0; i < C; i++)
    // {
    //     printf("%lf %lf\n", a[i].min, a[i].max);
    // }
    printf("\n***************************\n");
    for (i = 0; i < C; i++)
    {
        printf("%lf %lf\n", a[i].min, a[i].max);
    }
    
    for (i = 0; i < L; i++)
    {
        printf("%lf %d\n", b[i].SPF, b[i].cover);
    }
    printf("\n***************************\n");
    // 匹配防晒霜
    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            if (a[j].flag == 0 && b[i].cover > 0 && b[i].SPF >= a[j].min && b[i].SPF <= a[j].max)
            {
                a[j].flag = 1;
                b[i].cover--;
                count++;
                break; // 找到匹配的牛后，跳出内循环
            }
        }
    }

    printf("%d\n", count);
    system("pause");
    return 0;
}

