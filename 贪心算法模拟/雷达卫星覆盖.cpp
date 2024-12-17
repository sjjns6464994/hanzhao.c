#include <math.h>
#include <stdio.h>
#include <stdlib.h>
// ����ṹ��dao����ʾС������Ϣ
struct dao
{
    int x;    // С����x����
    int y;    // С����y����
    double l; // С�����Ƿ�Χ����߽�
    double r; // С�����Ƿ�Χ���ұ߽�
};

int main()
{
    int i, j, k, h, n, d, index, flag, count;
    struct dao a[1010], item, temp; // ����С���������ʱ����
    double dis;                     // ��ʱ���������ڼ������
    h = 0;                          // �����������ڼ�¼��ǰ���������ı��

    while (1)
    {
        h++;                    // ÿ����һ���µĲ�����������������1
        scanf("%d %d", &n, &d); // ��ȡС���������״︲�ǰ뾶
        if (n == 0 && d == 0)   // �������Ϊ0 0�����������
            break;

        count = 0; // ��ʼ���״�����

        // ��ȡÿ��С�������꣬�������串�Ƿ�Χ
        for (i = 0; i < n; i++)
        {
            scanf("%d %d", &a[i].x, &a[i].y);
            // ����С�����Ƿ�Χ�����ұ߽�
            dis = sqrt(pow(d, 2) - pow(a[i].y, 2)); // ���㸲�Ƿ�Χ�İ뾶
            a[i].l = a[i].x - dis;                  // ��߽�
            a[i].r = a[i].x + dis;                  // �ұ߽�
        }

        // ������߽��С��������С������
        for (i = 0; i < n; i++)
        {
            index = i;
            for (j = i + 1; j < n; j++)
            {
                if (a[j].l < a[index].l)
                    index = j;
            }
            temp = a[i];
            a[i] = a[index];
            a[index] = temp;
        }
        for (i = 0; i < n; i++)
        {
            flag = 1;
            if (fabs(a[i].y) > d)
            {
                flag = 0;
                printf("%d\n", -1); // ����޷���������С�������-1
            }
            break;
        }
        // ̰���㷨������������Ҫ���״�����
        if (flag == 1)
        {
            item = a[0]; // �ӵ�һ��С����ʼ
            count++;     // ������Ҫһ���״�
            for (i = 1; i < n; i++)
            {
                if (a[i].l <= item.r)
                {                        // �����ǰС���ڵ�ǰ�״︲�Ƿ�Χ��
                    if (a[i].r < item.r) // �����ǰС�����ұ߽�С�ڵ�ǰ�״���ұ߽�
                        item.r = a[i].r; // �����״���ұ߽�
                }
                else if (a[i].l > item.r)
                {                // �����ǰС�����ڵ�ǰ�״︲�Ƿ�Χ��
                    count++;     // ��Ҫ����һ���״�
                    item = a[i]; // ���µ�ǰ�״��λ��
                }
            }
            // ������
            printf("case%d: %d \n", h, count); // �����ǰ���������Ľ��
        }
    }
    system("pause");
    return 0;
}
