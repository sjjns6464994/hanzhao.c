#include <stdio.h>//完全不会
#include<math.h> 
double square_root(double a) {
    double x = a; // 初始估计值设为 a
    double y;
    const double epsilon = 1e-10; // 精度要求

    do {
        y = 0.5 * (x + a / x); // 使用迭代公式计算新的估计值
        if (fabs(y - x) < epsilon) {
            break; // 如果两次估计值的差小于精度要求，终止循环
        }
        x = y; // 更新估计值
    } while (1);

    return y;
}

int main() {
    double a;

    // 从用户输入获取 a 的值
    printf("请输入一个数: ");
    scanf("%lf", &a);

    // 调用函数并输出结果
    printf("平方根: %0.2lf\n", square_root(a));

    return 0;
}
