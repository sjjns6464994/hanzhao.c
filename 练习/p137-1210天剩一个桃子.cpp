#include <stdio.h>
int main()
{
	int a = 1;
	for (int i = 9; i >= 1; i--)//ע���������--�����ӵĸ�����һ���������� 
		a = (a + 1) * 2;
	printf("%d", a);
	return 0; 
}  
