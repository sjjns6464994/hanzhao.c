//从1开始按从小到大的顺序输出所有回文数

#include <stdio.h>

int main() {
    int n = 0;
    
    while(scanf("%d", &n) != EOF)
    {
        for(int i = 1; i <= n; i++)
        {
            int sum = 0;//sum一定要放在for循环里面以确保每次判断结束后，sum清零。
            int num = 0;
            num = i;
            while(num)
            {
                
                sum = sum * 10 + num % 10;
                num /= 10;
            }
            if(sum == i)
            {
                printf("%d\n", sum);
            }
        }
    }
    return 0;
}