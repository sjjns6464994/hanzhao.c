#include <stdio.h>
int main()
{
	int m, n, a, b, i, j, index;
	scanf("%d %d", &m, &n);
	if(m < n)//��֤m�������нϴ���� 
	{
		index = m;
		m = n;
		n = index;
	}
	for(i = n; i > 0; i--)
	{
		if((m % i == 0) && (n % i == 0))
		{
			a = i;//aΪ���Լ�� 
			break;
		}
	}
	for(i = m; ; i++)
	{
		if ((i % m == 0) && (i % n == 0))
		{
			b = i;
			break;	
		}	
	}	
	printf("���Լ��Ϊ%d ��С������Ϊ%d��", a, b); 
	return 0; 
}
//�Ľ����� 
//// շת����������Լ��
//int gcd(int a, int b) {
//    while (b != 0) {
//        int temp = b;
//        b = a % b;
//        a = temp;
//    }
//    return a;
//}
//
//// ͨ�����Լ��������С������
//int lcm(int a, int b) {
//    return (a * b) / gcd(a, b);
//}
