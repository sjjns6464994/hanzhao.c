#include <stdio.h>

int main() {
    int a, b, c;
    char d;
    scanf("%d-%d-%d-%c", &a, &b, &c, &d);
    int k1 = a;
    int k2 = (b % 10) * 4 + ((b / 10) % 10) * 3 + (b / 100) * 2;
    int k3 = (c % 10) * 9 + ((c / 10) % 10) * 8 + ((c / 100) % 10) * 7 + ((c / 1000) % 10) * 6 + (c / 10000) * 5;
    int k = (k1 + k2 + k3) % 11;
    int m = d ;
    int m1 = m - 48;
    if(k == m1 || (k == 10 && d == 'X'))
        printf("Right");
    else
     {
        if(k == 10)
        {
            char z = 'X';
            printf("%d-%d-%d-%c",a,b,c,z);
        }
        else 
        {
            printf("%d-%d-%d-%d",a,b,c,k);
        }
     }
    return 0;
}


















