#include <stdio.h>

struct peo {
    double m;
    int flag;
};

int main() {
    int i, j, count = 0, n;
    double w;
    struct peo a[1000], temp;

    // �����ľ�۵����������������
    scanf("%d %lf", &n, &w);
    for (i = 0; i < n; i++) {
        scanf("%lf", &a[i].m); // ֻ��������
        a[i].flag = 1; // ��ʼ��flagΪ1����ʾδ���
    }

    // ���ش�С��������
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i].m > a[j].m) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // ̰�����
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        if (a[left].m + a[right].m <= w) {
            // ������˺����ص��˿���ͬ��һ����ľ��
            a[left].flag = 0;
            a[right].flag = 0;
            left++;
            right--;
        } else {
            // ���ص��˶��Գ�һ����ľ��
            a[right].flag = 0;
            right--;
        }
        count++;
    }

    // �������Ķ�ľ������
    printf("����Ķ�ľ������Ϊ: %d\n", count);

    return 0;
}
