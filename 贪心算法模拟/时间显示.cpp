#include <stdio.h>

int main() 
{
    int hh, mm, ss, n;
    scanf("%d:%d:%d", &hh, &mm, &ss);
    scanf("%d", &n);

    // ����ǰʱ��ת��Ϊ������
    int total_seconds = hh * 3600 + mm * 60 + ss + n;	

    // �����µ�ʱ��
    int new_hh = (total_seconds / 3600) % 24;  // ȡ��24��ȷ��������24Сʱ
    int new_mm = (total_seconds % 3600) / 60;
    int new_ss = total_seconds % 60;

    // ������ʱ��
    printf("%02d:%02d:%02d\n", new_hh, new_mm, new_ss);

    return 0;
}
