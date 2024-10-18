#include <stdio.h>

// ����ʮ�������� x �ĸ�λ����֮��
int f(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10; // ���ϵ�ǰλ
        x /= 10;       // ���� 10�����Ƶ���һλ
    }
    return sum;
}

// �������� x �Ķ����Ʊ�ʾ�� 1 �ĸ���
int g(int x) {
    int sum = 0;
    while (x > 0) {
        sum += (x % 2); // �������λ
        x /= 2;         // ����һλ
    }
    return sum;
}

int main() {
    int n, count = 0; // count ���ڼ�¼�������ĸ���
    scanf("%d", &n); // ���� n

    // ���� 1 �� n ��ÿ����
    for (int i = 1; i <= n; i++) {
        if (f(i) == g(i)) { // �ж��Ƿ�Ϊ������
            count++; // ����������������һ
        }
    }

    printf("%d\n", count); // ���������������
    return 0;
}
