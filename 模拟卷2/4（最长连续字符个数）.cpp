//(4)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func(char a[1000])
{
    int maxcount = 0;       // ��������ַ����ִ���
    char maxchar = '\0';    // ���ִ��������ַ�
    int length = strlen(a); // �ַ�������

    for (int i = 0; i < length; i++)
    {                         // ���ѭ������ÿ���ַ�
        int currentcount = 0; // ��ǰ�ַ��ظ��Ĵ���
        // �ڲ�ѭ������һ���ַ���ʼ�����������ַ�
        for (int j = i; j < length; j++)
        {
            if (a[j] == a[i])
            {
                currentcount++; // �����ǰ�ַ���֮ǰ���ַ���ͬ�����ӵ�ǰ����
            }
            else
            {
                break; // һ���ַ���ͬ���˳��ڲ�ѭ��
            }
        }

        // ���ڼ���Ƿ�ǰ��������������
        if (currentcount > maxcount)
        {
            maxcount = currentcount; // ����������
            maxchar = a[i];          // ���³��������ַ�
        }

        // �� i ��Ϊ��ǰ�ַ����һ����ͬ�ַ����������Ա����ظ�����
        i += currentcount - 1; // �����Ѵ������ͬ�ַ� ///////////////�ر�ע��//////////��һ
    }

    // ��������ַ������ֵĴ���
    if (maxchar != '\0')
    {
        printf("%c %d\n", maxchar, maxcount);
    }
}

int main()
{
    int N;
    char a[1000][1000];

    scanf("%d", &N); // �����ַ���������
    for (int i = 0; i < N; i++)
    {
        scanf("%s", a[i]); // ����ÿ���ַ���
        func(a[i]);        // ���� func �����ַ���
    }
    system("pause");
    return 0;
}
