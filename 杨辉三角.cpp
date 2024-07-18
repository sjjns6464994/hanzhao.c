#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    int a[30][30]={0};
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==0||i==j)
            {
                a[i][j]=1;
            }
            if(i>1&&j>0)
            {
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>=j)
            {
                printf("%5d",a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
