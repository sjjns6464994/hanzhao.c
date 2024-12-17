#include <math.h>
#include <stdio.h>
#include <stdlib.h>
// 定义结构体dao，表示小岛的信息
struct dao
{
    int x;    // 小岛的x坐标
    int y;    // 小岛的y坐标
    double l; // 小岛覆盖范围的左边界
    double r; // 小岛覆盖范围的右边界
};

int main()
{
    int i, j, k, h, n, d, index, flag, count;
    struct dao a[1010], item, temp; // 定义小岛数组和临时变量
    double dis;                     // 临时变量，用于计算距离
    h = 0;                          // 计数器，用于记录当前测试用例的编号

    while (1)
    {
        h++;                    // 每进入一个新的测试用例，计数器加1
        scanf("%d %d", &n, &d); // 读取小岛数量和雷达覆盖半径
        if (n == 0 && d == 0)   // 如果输入为0 0，则结束程序
            break;

        count = 0; // 初始化雷达数量

        // 读取每个小岛的坐标，并计算其覆盖范围
        for (i = 0; i < n; i++)
        {
            scanf("%d %d", &a[i].x, &a[i].y);
            // 计算小岛覆盖范围的左右边界
            dis = sqrt(pow(d, 2) - pow(a[i].y, 2)); // 计算覆盖范围的半径
            a[i].l = a[i].x - dis;                  // 左边界
            a[i].r = a[i].x + dis;                  // 右边界
        }

        // 按照左边界从小到大排序小岛数组
        for (i = 0; i < n; i++)
        {
            index = i;
            for (j = i + 1; j < n; j++)
            {
                if (a[j].l < a[index].l)
                    index = j;
            }
            temp = a[i];
            a[i] = a[index];
            a[index] = temp;
        }
        for (i = 0; i < n; i++)
        {
            flag = 1;
            if (fabs(a[i].y) > d)
            {
                flag = 0;
                printf("%d\n", -1); // 如果无法覆盖所有小岛，输出-1
            }
            break;
        }
        // 贪心算法：计算最少需要的雷达数量
        if (flag == 1)
        {
            item = a[0]; // 从第一个小岛开始
            count++;     // 至少需要一个雷达
            for (i = 1; i < n; i++)
            {
                if (a[i].l <= item.r)
                {                        // 如果当前小岛在当前雷达覆盖范围内
                    if (a[i].r < item.r) // 如果当前小岛的右边界小于当前雷达的右边界
                        item.r = a[i].r; // 更新雷达的右边界
                }
                else if (a[i].l > item.r)
                {                // 如果当前小岛不在当前雷达覆盖范围内
                    count++;     // 需要增加一个雷达
                    item = a[i]; // 更新当前雷达的位置
                }
            }
            // 输出结果
            printf("case%d: %d \n", h, count); // 输出当前测试用例的结果
        }
    }
    system("pause");
    return 0;
}
