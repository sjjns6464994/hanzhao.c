#include<stdio.h>
#include<math.h>
int func1(int a);
int func2(int b);
double func3(int c);//特别注意这里的返回类型 
int main()
{
	int a, b, c;
	double sum = 0.0;
	scanf("%d %d %d", &a, &b, &c);
	sum += func1(a) +func2(b) + func3(c);
	printf("%lf\n", func3(c));
	printf("%0.2lf", sum);
}
int func1(int a)
{
	int i, sum = 0;
	for(i = 1; i <= a; i++)
		sum += i;
	return sum; 
}
int func2(int b)
{
	int i, sum = 0;
	for (i = 1; i < b; i++)
		sum += pow(i, 2);
	return sum;
}
double func3(int c)//注意返回类型 
{
	int i;
	double sum = 0.0;
	for(i = 1; i <= c; i ++)
		sum += 1.0 / i;
	return sum;
}
