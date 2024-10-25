#include<stdio.h>
#include<string.h>
void fun(int n, int m, int *a);
int main()
{
	int i, j, n, a[100], m;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	fun(n,m,a);
	return 0;
}
void fun(int n, int m, int *a)
{
	int i, j, k, h;
	int temp[100] = {0};
	for (i = 0; i < m; i++)
		temp[i] = a[n-m+i];
	for (i = 0; i < n - m; i++)
		temp[m + i] = a[i];
	for(i = 0; i < n; i++)
		printf("%d", temp[i]);
}
