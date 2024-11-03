#include <stdio.h>

#define MAX_LINES 3
#define MAX_CHAR 81

int main() {
    char text[MAX_LINES][MAX_CHAR]; // 3�����֣�ÿ�����80���ַ�
    int uppercase[MAX_LINES] = {0}; // ÿ�еĴ�д��ĸ����
    int lowercase[MAX_LINES] = {0}; // ÿ�е�Сд��ĸ����
    int digits[MAX_LINES] = {0}; // ÿ�е����ָ���
    int spaces[MAX_LINES] = {0}; // ÿ�еĿո����
    int others[MAX_LINES] = {0}; // ÿ�е������ַ�����

    FILE *file = fopen("D:\\codeC\\�ļ�\\infile.txt", "r"); // ���ļ�
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // ��ȡ�ļ��е�3��
    for (int i = 0; i < MAX_LINES; i++) {
        if (fgets(text[i], MAX_CHAR, file) == NULL) {
            break; // ��ȡ�������ļ�����
        }
    }
    fclose(file); // �ر��ļ�

    // ͳ��ÿ�е��ַ�����
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

    // ������
    for (int i = 0; i < MAX_LINES; i++) {
        printf("��%d�У�\n", i + 1);
        printf("��д��ĸ: %d\n", uppercase[i]);
        printf("Сд��ĸ: %d\n", lowercase[i]);
        printf("����: %d\n", digits[i]);
        printf("�ո�: %d\n", spaces[i]);
        printf("�����ַ�: %d\n", others[i]);
    }

    return 0;
}
