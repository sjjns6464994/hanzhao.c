#include <stdio.h>
int main()
{
	double sum = 0.0;
	int k,i = 2, j = 1;
	for(k = 0; k < 20; k++)
	{
		int index = i;
		sum += 1.0 * i / j;
		i += j;//ע�������˳������ 
		j = index;
	}
	printf("%0.2lf",sum);
	return 0;
}

