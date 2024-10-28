#include <math.h>
#include <stdio.h>

int main()
{
    int i, j, sum, k;
    int factors[100]; // 用于存储因子
    for (i = 1; i <= 1000; i++) // 从1到1000判断每个数
    {
        sum = 0;
        k = 0; // 重置因子的计数
        
        // 找因子
        for (j = 1; j <= i / 2; j++) // 只需检查到i的一半
        {
            if (i % j == 0) // 如果j是因子
            {
                factors[k++] = j; // 存储因子
                sum += j; // 累加因子和
            }
        }
        
        // 检查是否是完数
        if (sum == i)
        {
            printf("%d its factors are ", i);
            for (int m = 0; m < k; m++) // 输出因子
            {
                if (m > 0) // 除了第一个因子外，前面需加逗号
                {
                    printf(", ");
                }
                printf("%d", factors[m]);
            }
            printf("\n");
        }
    }

    return 0;
}
