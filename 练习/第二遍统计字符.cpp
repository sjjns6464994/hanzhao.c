#include <stdio.h>
#include <string.h>
//错误原因没有string.h, 没有统计前置 
int main() {
    int i, j;
    char lines[3][80];
    int a, b, c, d, e;

    // 输入3行文字
    for (i = 0; i < 3; i++) {
        fgets(lines[i], 80, stdin);
        lines[i][strcspn(lines[i], "\n")] = '\0';  // 去除行末的换行符
    }

    // 逐行统计字符
    for (i = 0; i < 3; i++) {
        a = 0; b = 0; c = 0; d = 0; e = 0;  // 每行统计前重置计数器
        for (j = 0; lines[i][j] != '\0'; j++) {
            if (lines[i][j] >= 'A' && lines[i][j] <= 'Z')
                a++;
            else if (lines[i][j] >= 'a' && lines[i][j] <= 'z')
                b++;
            else if (lines[i][j] >= '0' && lines[i][j] <= '9')
                c++;
            else if (lines[i][j] == ' ')
                d++;
            else
                e++;
        }
        printf("第%d行中大写字母%d个，小写字母%d个，数字个数%d个，空格个数%d个，其他字符的个数%d个\n", i + 1, a, b, c, d, e);
    }

    return 0;
}
