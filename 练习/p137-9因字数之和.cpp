#include <math.h>
#include <stdio.h>

int main()
{
    int i, j, sum, k;
    int factors[100]; // ���ڴ洢����
    for (i = 1; i <= 1000; i++) // ��1��1000�ж�ÿ����
    {
        sum = 0;
        k = 0; // �������ӵļ���
        
        // ������
        for (j = 1; j <= i / 2; j++) // ֻ���鵽i��һ��
        {
            if (i % j == 0) // ���j������
            {
                factors[k++] = j; // �洢����
                sum += j; // �ۼ����Ӻ�
            }
        }
        
        // ����Ƿ�������
        if (sum == i)
        {
            printf("%d its factors are ", i);
            for (int m = 0; m < k; m++) // �������
            {
                if (m > 0) // ���˵�һ�������⣬ǰ����Ӷ���
                {
                    printf(", ");
                }
                printf("%d", factors[m]);
            }
            printf("\n");
        }
    }

    return 0;
}
