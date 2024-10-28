#include <stdio.h>
int main()
{
	int a = 1;
	for (int i = 9; i >= 1; i--)//注意这里的是--，桃子的个数不一定是奇数。 
		a = (a + 1) * 2;
	printf("%d", a);
	return 0; 
}  
