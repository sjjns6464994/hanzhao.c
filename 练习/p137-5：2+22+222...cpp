#include <stdio.h>
#include <math.h>

int func(int a, int b);

int main()
{
    int sum = 0, a, n;
    scanf("%d %d", &a, &n);
    
    if (a >= 10 || a <= -10) {  // ����������Ч��
        printf("�������ֵ������Χ�������� -9 �� 9 ֮���������\n");
        return 1;
    }
    
    for (int i = 1; i <= n; i++) {
        sum += func(a, i);
    }
    
    printf("%d\n", sum);  // ������������
    return 0;
}

int func(int a, int b)
{
    int c = 0;
    for (int i = 0; i < b; i++) {
        c += a * pow(10, i);  // ���������� a + aa + aaa ������
    }
    return c;
}
