#include <stdio.h>
#include <math.h>

int func(int a, int b);

int main()
{
    int sum = 0, a, n;
    scanf("%d %d", &a, &n);
    
    if (a >= 10 || a <= -10) {  // 检查输入的有效性
        printf("输入的数值超出范围，请输入 -9 到 9 之间的整数。\n");
        return 1;
    }
    
    for (int i = 1; i <= n; i++) {
        sum += func(a, i);
    }
    
    printf("%d\n", sum);  // 输出结果并换行
    return 0;
}

int func(int a, int b)
{
    int c = 0;
    for (int i = 0; i < b; i++) {
        c += a * pow(10, i);  // 生成类似于 a + aa + aaa 的数字
    }
    return c;
}
