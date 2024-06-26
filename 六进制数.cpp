#include <stdio.h>
void func(int n)
{
    int m = 0;
    if(n == 0)
        return; 
    else
    {
        m = n % 6;
        func(n / 6);
        printf("%d", m);
    }
}

int main() {
    int num = 0;
    scanf("%d", &num);
    func(num);
    return 0;
}