#include <stdio.h>
struct cow
{
    double A, B;
    int c, flag, num;
};
int main()
{
    int i, j, k, index, flag, count = 0, n;
    double b[1000];
    struct cow a[1000], temp;
    scanf("%d", &n);

    if (n <= 0)
        return -1;

    for (i = 0; i < n; i++)
    {
        scanf("%lf %lf", &a[i].A, &a[i].B);
        a[i].flag = 1;
        a[i].num = i + 1;
    }

    for (i = 0; i < n; i++)
    {
        index = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[index].A > a[j].A)
                index = j;
        }
        temp = a[index];
        a[index] = a[i];
        a[i] = temp;
    }
    b[0] = a[0].B;
    count = 1;
    a[0].c = 1;

    for (i = 1; i < n; i++)
    {
        int assigned = 0;
        for (j = 0; j < count; j++)
        {
            if (a[i].A > b[j])
            {
                a[i].c = j + 1;
                b[j] = a[i].B;
                assigned = 1;
                break;
            }
        }
        if (!assigned)
        {
            count++;
            b[count - 1] = a[i].B;
            a[i].c = count;
        }
    }

        printf("%d\n", count);

    for (i = 0; i < n; i++)
    {
        index = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[index].num > a[i].num)
                index = j;
        }
        temp = a[index];
        a[index] = a[i];
        a[i] = temp;
    }

    for (i = 0; i < n; i++)
        printf("%d\n", a[i].c);

    return 0;
}

/*
�ⲿѭ����

for (i = 1; i < n; i++)���������е�ţ��i �� 1 ��ʼ����Ϊ�� 0 ͷţ�Ѿ��ڳ�ʼ��ʱ��������ˡ�
��ʼ�� assigned ������

int assigned = 0;��assigned ���ڱ�ǵ�ǰţ�Ƿ��Ѿ���������һ����������ʼֵΪ 0����ʾ��δ���䡣
�ڲ�ѭ����

for (j = 0; j < count; j++)�������������е�������count �ǵ�ǰ���е�����������
����Ƿ���Է��䵽����������

if (a[i].A > b[j])����鵱ǰţ�Ŀ�ʼʱ�� a[i].A �Ƿ�������� j �Ľ���ʱ�� b[j]������ǣ���ʾ��ǰţ���������� j �п�ʼ��������������ţ����ʱ���ͻ��
�������������½���ʱ�䣺

a[i].c = j + 1;������ǰţ���䵽���� j + 1����Ϊ���������� 0 ��ʼ�����������ͨ���� 1 ��ʼ����
b[j] = a[i].B;���������� j �Ľ���ʱ��Ϊ��ǰţ�Ľ���ʱ�� a[i].B��
assigned = 1;����ǵ�ǰţ�Ѿ������䡣
break;���˳��ڲ�ѭ������Ϊ��ǰţ�Ѿ��ҵ��˺��ʵ�������
���û���ҵ����ʵ�������

if (!assigned)�������ǰţû�б����䵽�κ����е��������� assigned ��Ȼ�� 0��������Ҫ����һ���µ�������
count++;������������������
b[count - 1] = a[i].B;������ǰţ�Ľ���ʱ�� a[i].B �����µ������С�
a[i].c = count;������ǰţ���䵽�µ�����
*/
