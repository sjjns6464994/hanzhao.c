#include <stdio.h>
#include <string.h>

int main() 
{
    char s1[1000], s2[1000];
    int i = 0, diff = 0;

    // ��ȡ�û�����
    fgets(s1, 1000, stdin);
    fgets(s2, 1000, stdin);

    // ȥ�����з�
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    // ����ַ��Ƚ��ַ���
    while (s1[i] != '\0' && s2[i] != '\0') 
	{
        diff = s1[i] - s2[i];
        if (diff != 0) {
            // �����Ӧ�ַ��� ASCII ���ֵ���˳�ѭ��
            printf("%d\n", diff);
            return 0;
        }
        i++;
    }

    // ������бȽϵ��ַ�����ͬ��������ַ������ȱȽϽ�����0
    if (s1[i] == '\0' && s2[i] == '\0') {
        printf("0\n");
    } else if (s1[i] == '\0') {
        // s1 �� s2 ��
        printf("-1\n");
    } else {
        // s2 �� s1 ��
        printf("1\n");
    }

    return 0;
}
