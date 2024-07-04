#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int h = 0;
    int row = 0;
    int count = 0;
    int n = 0;
    int temp = 0;
    scanf("%d", &h);
    int num = 3 * pow(2, h - 1);
    char tree[2 * num];
    for (row = 0; row < num; row++) {
        memset(tree, ' ', num + row - 1);
        switch (row % 3) {
            case 0:
                temp = 1;
                break;
            case 1:
                temp = 3;
                break;
            case 2:
                temp = 5;
                break;
        }
        count = 0;
start:
        if (count < row / 3 + 1) {
            for (n = 2; n <= num / 3; n <<= 1) {
                if (count % n >= row / 3 % (2 * n) - n + 1 && row / 3 % (2 * n) >= n &&
                        row / 3 % (2 * n) <= 3 * n / 2 - 1) {
                    count++;
                    goto start;
                }
            }
            memmove(count * 6 + tree + num - row - 1, "* * *", temp);
            count++;
            goto start;
        }
        tree[num + row] = 0;
        printf("%s\n", tree);
    }

    for (row = 0; row < h; row++) {
        memset(tree, ' ', (num - 1));
        memset(tree + num - 1, '*', 1);
        tree[num] = 0;
        printf("%s\n", tree);
    }
    return 0;
}