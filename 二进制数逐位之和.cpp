#include <stdio.h>

int main() {
    long int n;
    scanf("%ld", &n);

    int result = 0;
    int count = 0;

    while (n > 0) 
    {
        int digit = n % 10; // 取出当前位的数字
        int newDigit = digit % 2 == 0 ? 0 : 1; // 将奇数变为1，偶数变为0
        result += newDigit * pow(10, count); // 更新结果
        count++;
        n /= 10; // 去掉最低位
    }

    printf("%d\n", result);

    return 0;
}