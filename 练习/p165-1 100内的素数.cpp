#include<stdio.h>
#include<math.h>
int func(int a);
int main()
{
	int a, b, i, flag = 0;
	for (i = 0; i <= 100; i++)
	{
		flag = func(i);
		if (flag == 1)
			printf("%d ", i);
	}
	return 0;
}
int func(int a)
{
	if (a <= 1)
		return 0;
	else if (a == 2 || a == 3)
		return 1;
	else
	{
		for(int i = 2; i < sqrt(a); i++)
		{
			if (a % i == 0)
				return 0;
		}
		return 1;///注意这里的return 1要写在外面。 
	}	
}
 
