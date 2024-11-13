#include <stdio.h>

// 递归函数将整数转换为字符串
void int_to_str(int n) {
    // 基本情况：如果n只有一位数，直接打印对应的字符
    if (n < 10) {
        putchar(n + '0');
    } else {
        // 递归情况：先处理剩下的部分，再加上当前的最后一位
        int_to_str(n / 10);  // 递归处理剩下的部分
        putchar((n % 10) + '0');  // 处理当前的最后一位
    }
}

int main() {
    int num;
    scanf("%d", &num); 
    int_to_str(num);  // 输出: "483"
    return 0;
}
