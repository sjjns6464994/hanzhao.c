#include <stdio.h>
#include <string.h>
//����ԭ��û��string.h, û��ͳ��ǰ�� 
int main() {
    int i, j;
    char lines[3][80];
    int a, b, c, d, e;

    // ����3������
    for (i = 0; i < 3; i++) {
        fgets(lines[i], 80, stdin);
        lines[i][strcspn(lines[i], "\n")] = '\0';  // ȥ����ĩ�Ļ��з�
    }

    // ����ͳ���ַ�
    for (i = 0; i < 3; i++) {
        a = 0; b = 0; c = 0; d = 0; e = 0;  // ÿ��ͳ��ǰ���ü�����
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
        printf("��%d���д�д��ĸ%d����Сд��ĸ%d�������ָ���%d�����ո����%d���������ַ��ĸ���%d��\n", i + 1, a, b, c, d, e);
    }

    return 0;
}
