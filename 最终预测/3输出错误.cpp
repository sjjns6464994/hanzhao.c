#include <stdio.h>
#include <string.h>

#define MAX_LINE_LEN 1000

int main() {
    int n;
    FILE *fp1, *fp2;
    char str[MAX_LINE_LEN][MAX_LINE_LEN];

    // ��ȡ���������
    scanf("%d", &n);

    // �����������ļ�
    fp1 = fopen("D:\\codeC\\�ļ�\\infile.txt", "r");
    fp2 = fopen("D:\\codeC\\�ļ�\\outfile.txt", "w");

    if (fp1 == NULL || fp2 == NULL) {
        printf("�ļ���ʧ�ܣ�����");
        return -1;
    }

    // ��ȡ�ļ��е�ÿһ��
    for (int i = 0; i < n; i++) {
        fgets(str[i], sizeof(str[i]), fp1);
        str[i][strcspn(str[i], "\n")] = 0;  // ȥ�����з�
    }

    // ����ÿһ��
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

        // �������һ������
        if (num != 0 || is_negative) {
            if (is_negative) {
                num = -num;
            }
            sum += num;
        }

        // ������
        printf("%d\n", sum);
        fprintf(fp2, "%d\n", sum);
    }

    // �ر��ļ�
    fclose(fp1);
    fclose(fp2);

    return 0;
}
