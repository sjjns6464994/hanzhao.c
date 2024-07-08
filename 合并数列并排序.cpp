#include <stdio.h>
int main()
{
    int a,b,c[100],temp;
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i=1;i<=a+b;i++){
        scanf("%d",&c[i]);
    }
    for (int i = 1; i <= a+b; i++)
	{
		for (int j = 1; j <= a+b - i; j++)
		{
			if (c[j] > c[j + 1])
			{
				temp = c[j];
				c[j] = c[j + 1];
				c[j + 1] = temp;
			}
		}
	}
    for(int i=1;i<a+b+1;i++){
        printf("%d ",c[i]);
    }
    return 0;
}