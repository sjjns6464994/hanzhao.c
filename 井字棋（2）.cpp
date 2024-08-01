#include<stdio.h>
int main()
{
    char arr[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf(" %c",&arr[i][j]);
        }
    }
    for(int i = 0; i < 3; i++)
    {
        if(arr[i][0]==arr[i][1]&&arr[i][0]==arr[i][2])
        {
            if(arr[i][0]=='K')
            {
                printf("KiKi wins!");
                return 0;
            }
            else if(arr[i][0]=='B')
            {
                printf("BoBo wins!");
                return 0;
            }
        }
    }
    for(int j = 0; j < 3; j++)
    {
        if(arr[0][j]==arr[1][j]&&arr[0][j]==arr[2][j])
        {
            if(arr[0][j]=='K')
            {
                printf("KiKi wins!");
                return 0;
            }
            else if(arr[0][j]=='B')
            {
                printf("BoBo wins!");
                return 0;
            }
        }
    }
    if(arr[0][0]==arr[1][1]&&arr[0][0]==arr[2][2])
    {
        if(arr[0][0]=='K')
            {
                printf("KiKi wins!");
                return 0;
            }
            else if(arr[0][0]=='B')
            {
                printf("BoBo wins!");
                return 0;
            }
    }
     if(arr[0][2]==arr[1][1]&&arr[0][2]==arr[2][0])
    {
        if(arr[0][2]=='K')
            {
                printf("KiKi wins!");
                return 0;
            }
            else if(arr[0][2]=='B')
            {
                printf("BoBo wins!");
                return 0;
            }
    }
    printf("No winner!");
    
}