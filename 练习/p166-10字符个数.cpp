#include <stdio.h>

#define MAX_LINES 3
#define MAX_CHAR 81

int main() {
    char text[MAX_LINES][MAX_CHAR]; // 3行文字，每行最多80个字符
    int uppercase[MAX_LINES] = {0}; // 每行的大写字母个数
    int lowercase[MAX_LINES] = {0}; // 每行的小写字母个数
    int digits[MAX_LINES] = {0}; // 每行的数字个数
    int spaces[MAX_LINES] = {0}; // 每行的空格个数
    int others[MAX_LINES] = {0}; // 每行的其他字符个数

    FILE *file = fopen("D:\\codeC\\文件\\infile.txt", "r"); // 打开文件
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // 读取文件中的3行
    for (int i = 0; i < MAX_LINES; i++) {
        if (fgets(text[i], MAX_CHAR, file) == NULL) {
            break; // 读取结束或文件结束
        }
    }
    fclose(file); // 关闭文件

    // 统计每行的字符类型
    for (int i = 0; i < MAX_LINES; i++) {
        for (int j = 0; text[i][j] != '\0'; j++) {
            if (text[i][j] >= 'A' && text[i][j] <= 'Z') {
                uppercase[i]++;
            } else if (text[i][j] >= 'a' && text[i][j] <= 'z') {
                lowercase[i]++;
            } else if (text[i][j] >= '0' && text[i][j] <= '9') {
                digits[i]++;
            } else if (text[i][j] == ' ') {
                spaces[i]++;
            } else {
                others[i]++;
            }
        }
    }

    // 输出结果
    for (int i = 0; i < MAX_LINES; i++) {
        printf("第%d行：\n", i + 1);
        printf("大写字母: %d\n", uppercase[i]);
        printf("小写字母: %d\n", lowercase[i]);
        printf("数字: %d\n", digits[i]);
        printf("空格: %d\n", spaces[i]);
        printf("其他字符: %d\n", others[i]);
    }

    return 0;
}
