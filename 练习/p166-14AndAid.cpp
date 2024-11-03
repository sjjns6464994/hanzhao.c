#include <stdio.h>
#include <string.h>

int main() 
{
    char s1[1000], s2[1000];
    int i = 0, diff = 0;

    // 读取用户输入
    fgets(s1, 1000, stdin);
    fgets(s2, 1000, stdin);

    // 去除换行符
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    // 逐个字符比较字符串
    while (s1[i] != '\0' && s2[i] != '\0') 
	{
        diff = s1[i] - s2[i];
        if (diff != 0) {
            // 输出相应字符的 ASCII 码差值并退出循环
            printf("%d\n", diff);
            return 0;
        }
        i++;
    }

    // 如果所有比较的字符都相同，则根据字符串长度比较结果输出0
    if (s1[i] == '\0' && s2[i] == '\0') {
        printf("0\n");
    } else if (s1[i] == '\0') {
        // s1 比 s2 短
        printf("-1\n");
    } else {
        // s2 比 s1 短
        printf("1\n");
    }

    return 0;
}
