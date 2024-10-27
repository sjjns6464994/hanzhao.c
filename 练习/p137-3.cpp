#include <stdio.h>
int main()
{
	int m, n, a, b, i, j, index;
	scanf("%d %d", &m, &n);
	if(m < n)//保证m是两数中较大的数 
	{
		index = m;
		m = n;
		n = index;
	}
	for(i = n; i > 0; i--)
	{
		if((m % i == 0) && (n % i == 0))
		{
			a = i;//a为最大公约数 
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
	printf("最大公约数为%d 最小公倍数为%d：", a, b); 
	return 0; 
}
//改进代码 
//// 辗转相除法求最大公约数
//int gcd(int a, int b) {
//    while (b != 0) {
//        int temp = b;
//        b = a % b;
//        a = temp;
//    }
//    return a;
//}
//
//// 通过最大公约数计算最小公倍数
//int lcm(int a, int b) {
//    return (a * b) / gcd(a, b);
//}
