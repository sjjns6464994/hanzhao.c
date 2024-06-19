#include <stdio.h>
#include <math.h>

// 计算一个数的位数
int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

// 计算一个数的各位数的立方和
int sumOfDigitsCubed(int number) {
    int sum = 0;
    int digits = countDigits(number);
    int temp = number;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return sum;
}

// 判断一个数是否是水仙花数
int isNarcissistic(int number) {
    return number == sumOfDigitsCubed(number);
}

int main() {
    int m, n;
    while (scanf("%d %d", &m, &n) == 2) {
        int found = 0;
        for (int i = m; i <= n; i++) {
            if (isNarcissistic(i)) {
                if (found) {
                    printf(" ");
                }
                printf("%d", i);
                found = 1;
            }
        }
        if (!found) {
            printf("no");
        }
        printf("\n");
    }
    return 0;
}