#include <stdio.h>
#include <math.h>
int Lucky(char word[],int len)  //计数，每个字母出现的最大次数 
{
    int i = 0;
    int j = 0;
    int min = 100;
    int max = 0;
    for(i=0;i<len;i++)
    {
        int count = 0;
        for(j=0;j<len;j++)
        {
            if(word[i]==word[j])
            {
                count ++;
            }
        }
        if(count>max)
        {
            max = count;
        }
        if(count<min)
        {
            min = count;
        }
    }
    return (max-min);
}
int Prime(int x)  //判断素数
{
    int i = 0;
    int flag = 1;
    if(x<2)  //0和1不是素数
    {
        flag = 0;
    }
    if(i==2)  //2是素数，但后面计算是有可能被误判
    {
        flag = 1;
    }
    else
    {
        for(i=2;i<=sqrt(x);i++)
        {
            if(x%i==0)
            {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}

int main() 
{
    char word[100] = {0}; //此处的100必须要写 否则计算结果将错误
    scanf("%s",word);
    int len = strlen(word);

    int ret =Lucky(word,len);
    int flag = Prime(ret);

    
    if(flag == 1 )
    {
        printf("Lucky Word\n%d\n",ret);
    }
    else
    {
        printf("No Answer\n0\n");
    }
    
    return 0;
}
