#include <stdio.h>

struct peo {
    double m;
    int flag;
};

int main() {
    int i, j, count = 0, n;
    double w;
    struct peo a[1000], temp;

    // 输入独木舟的最大载重量和人数
    scanf("%d %lf", &n, &w);
    for (i = 0; i < n; i++) {
        scanf("%lf", &a[i].m); // 只输入重量
        a[i].flag = 1; // 初始化flag为1，表示未配对
    }

    // 体重从小到大排序
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i].m > a[j].m) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // 贪心配对
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        if (a[left].m + a[right].m <= w) {
            // 最轻的人和最重的人可以同乘一条独木舟
            a[left].flag = 0;
            a[right].flag = 0;
            left++;
            right--;
        } else {
            // 最重的人独自乘一条独木舟
            a[right].flag = 0;
            right--;
        }
        count++;
    }

    // 输出所需的独木舟数量
    printf("所需的独木舟数量为: %d\n", count);

    return 0;
}
