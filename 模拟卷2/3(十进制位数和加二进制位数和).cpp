#include <stdio.h>

// 计算十进制数字 x 的各位数字之和
int f(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10; // 加上当前位
        x /= 10;       // 除以 10，右移到下一位
    }
    return sum;
}

// 计算整数 x 的二进制表示中 1 的个数
int g(int x) {
    int sum = 0;
    while (x > 0) {
        sum += (x % 2); // 加上最低位
        x /= 2;         // 右移一位
    }
    return sum;
}

int main() {
    int n, count = 0; // count 用于记录幸运数的个数
    scanf("%d", &n); // 输入 n

    // 遍历 1 到 n 的每个数
    for (int i = 1; i <= n; i++) {
        if (f(i) == g(i)) { // 判断是否为幸运数
            count++; // 是幸运数，计数加一
        }
    }

    printf("%d\n", count); // 输出幸运数的总数
    return 0;
}
