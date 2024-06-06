#include <stdio.h>
long function1( long max, long min)
{
    while(min != 0)
    {
        long long i = 0;
        i = max % min;
        max = min;
        min = i;
    }
    return max;
}
long  function2(long max, long min)
{
    return max * min / function1(max, min);
}
int main()
{
    long a, b;
    scanf("%ld %ld", &a, &b);
    long max, min;
    if(a >= b)
    {
        max = a;
        min = b;
    }
    else
    {
        min = a;
        max = b;
    }
    long result1 = function1(max, min);
    long result2 = function2(max, min);
    long sum = result1 + result2;
    printf("%ld", sum);   
}