#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int func1(int x) // �ж���������
{
    int i, flag = 0;
    if (x <= 1)
        flag = 0;
    else if (x <= 3)
        flag = 1;
    else
    {
        for (i = 2; i < sqrt(x); i++)
        {
            if (x % i == 0)
            {
                flag = 0;
                break;
            }
            else
                flag = 1;
        }
    }
    return flag;
}


int func2(int x) // ת����������������1�ĸ���
{
    int i, sum = 0;
    for (i = 31; i >= 0; i--)
    {
        if ((x >> i) & 1)
            sum++;
    }
    return sum;
}
int main()
{
    int left, right, i, j = 0, index;
    printf("����left right��ֵ(������С��ֵ��������ֵ)\n");
    scanf("%d %d", &left, &right);
    if (left > right)
    {
        printf("����left ֵ���� right ֵ\n");
        return 1;
    }
    for (i = left; i <= right; i++)
    {
        index = func2(i);
        if (func1(index))
            j++;
    }
    printf("%d\n", j);
    return 0; // �Ƴ�ϵͳ����
}
