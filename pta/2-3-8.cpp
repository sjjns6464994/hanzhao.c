#include<stdio.h>
int main()
{
    double sum = 0.0;
    int N;
    scanf("%d", &N);
    int j = 1;
    for (int i = 0;i < N ; i++)
    {
    	sum += 1.0 / j;
		j += 2; 
	}
    
	printf("sum = %lf", sum);
	return 0;
}
