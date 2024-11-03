//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char s1[1000], s2[1000];
//    int i;
//
//    // 读取用户输入
//    fgets(s1, 1000, stdin);
//    fgets(s2, 1000, stdin);
//
//    // 去除换行符
//    s1[strcspn(s1, "\n")] = '\0';
//    s2[strcspn(s2, "\n")] = '\0';
//
//    // 复制 s2 到 s1，从 s1 的起始位置开始
//    for (i = 0; s2[i] != '\0'; i++) {
//        s1[i] = s2[i];
//    }
//    // 确保在 s1 的末尾添加 '\0'
//    s1[i] = '\0';
//
//    // 输出结果
//    printf("Copied string: %s\n", s1);
//
//    return 0;


#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];

    // 读取用户输入
    fgets(s1, 1000, stdin);
    fgets(s2, 1000, stdin);

    // 去除换行符
    s2[strcspn(s2, "\n")] = '\0';

    // 使用 strcpy 复制 s2 到 s1
    strcpy(s1, s2);

    // 输出结果
    printf("Copied string: %s\n", s1);

    return 0;
}
