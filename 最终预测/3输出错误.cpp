#include <stdio.h>
#include <string.h>

#define MAX_LINE_LEN 1000

int main() {
    int n;
    FILE *fp1, *fp2;
    char str[MAX_LINE_LEN][MAX_LINE_LEN];

    // 读取输入的行数
    scanf("%d", &n);

    // 打开输入和输出文件
    fp1 = fopen("D:\\codeC\\文件\\infile.txt", "r");
    fp2 = fopen("D:\\codeC\\文件\\outfile.txt", "w");

    if (fp1 == NULL || fp2 == NULL) {
        printf("文件打开失败！！！");
        return -1;
    }

    // 读取文件中的每一行
    for (int i = 0; i < n; i++) {
        fgets(str[i], sizeof(str[i]), fp1);
        str[i][strcspn(str[i], "\n")] = 0;  // 去掉换行符
    }

    // 处理每一行
    for (int i = 0; i < n; i++) {
        int sum = 0;
        int num = 0;
        int is_negative = 0;

        for (int j = 0; j < strlen(str[i]); j++) {
            if (str[i][j] >= '0' && str[i][j] <= '9') {
                num = num * 10 + (str[i][j] - '0');
            } else if (str[i][j] == '-') {
                if (num != 0) {
                    if (is_negative) {
                        num = -num;
                        is_negative = 0;
                    }
                    sum += num;
                    num = 0;
                }
                is_negative = 1;
            } else {
                if (num != 0 || is_negative) {
                    if (is_negative) {
                        num = -num;
                        is_negative = 0;
                    }
                    sum += num;
                    num = 0;
                }
            }
        }

        // 处理最后一个数字
        if (num != 0 || is_negative) {
            if (is_negative) {
                num = -num;
            }
            sum += num;
        }

        // 输出结果
        printf("%d\n", sum);
        fprintf(fp2, "%d\n", sum);
    }

    // 关闭文件
    fclose(fp1);
    fclose(fp2);

    return 0;
}
