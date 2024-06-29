//国王将金币作为工资，发放给忠诚的骑士。第一天，骑士收到一枚金币；之后两天（第二天和第三天），每天收到两枚金币；之后三天（第四、五、六天），每天收到三枚金币；之后四天（第七、八、九、十天），每天收到四枚金币……；这种工资发放模式会一直这样延续下去：当连续N天每天收到N枚金币后，骑士会在之后的连续N+1天里，每天收到N+1枚金币。
//请计算在前K天里，骑士一共获得了多少金币。

#include <stdio.h>
int main() {
    int k = 0;
    int sum = 0;
    int count = 0;
    while(scanf("%d", &k) != EOF)
    {
        for(int i = 1; i <= k; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                sum += i;
                count++;//day
                if(count == k)
                    break;
            }
            if(count == k)
                break;
        }
        printf("%d", sum);
    }
    return 0;
}