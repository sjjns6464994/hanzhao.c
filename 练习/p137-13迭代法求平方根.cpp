#include <stdio.h>//��ȫ����
#include<math.h> 
double square_root(double a) {
    double x = a; // ��ʼ����ֵ��Ϊ a
    double y;
    const double epsilon = 1e-10; // ����Ҫ��

    do {
        y = 0.5 * (x + a / x); // ʹ�õ�����ʽ�����µĹ���ֵ
        if (fabs(y - x) < epsilon) {
            break; // ������ι���ֵ�Ĳ�С�ھ���Ҫ����ֹѭ��
        }
        x = y; // ���¹���ֵ
    } while (1);

    return y;
}

int main() {
    double a;

    // ���û������ȡ a ��ֵ
    printf("������һ����: ");
    scanf("%lf", &a);

    // ���ú�����������
    printf("ƽ����: %0.2lf\n", square_root(a));

    return 0;
}
