#include <stdio.h>

// �ݹ麯��������ת��Ϊ�ַ���
void int_to_str(int n) {
    // ������������nֻ��һλ����ֱ�Ӵ�ӡ��Ӧ���ַ�
    if (n < 10) {
        putchar(n + '0');
    } else {
        // �ݹ�������ȴ���ʣ�µĲ��֣��ټ��ϵ�ǰ�����һλ
        int_to_str(n / 10);  // �ݹ鴦��ʣ�µĲ���
        putchar((n % 10) + '0');  // ����ǰ�����һλ
    }
}

int main() {
    int num;
    scanf("%d", &num); 
    int_to_str(num);  // ���: "483"
    return 0;
}
