//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char s1[1000], s2[1000];
//    int i;
//
//    // ��ȡ�û�����
//    fgets(s1, 1000, stdin);
//    fgets(s2, 1000, stdin);
//
//    // ȥ�����з�
//    s1[strcspn(s1, "\n")] = '\0';
//    s2[strcspn(s2, "\n")] = '\0';
//
//    // ���� s2 �� s1���� s1 ����ʼλ�ÿ�ʼ
//    for (i = 0; s2[i] != '\0'; i++) {
//        s1[i] = s2[i];
//    }
//    // ȷ���� s1 ��ĩβ��� '\0'
//    s1[i] = '\0';
//
//    // ������
//    printf("Copied string: %s\n", s1);
//
//    return 0;


#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];

    // ��ȡ�û�����
    fgets(s1, 1000, stdin);
    fgets(s2, 1000, stdin);

    // ȥ�����з�
    s2[strcspn(s2, "\n")] = '\0';

    // ʹ�� strcpy ���� s2 �� s1
    strcpy(s1, s2);

    // ������
    printf("Copied string: %s\n", s1);

    return 0;
}
