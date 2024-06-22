#include <stdio.h>
#include <math.h>

int main() {
    int a;
    int sum=0;
    scanf("%d",&a);
    int b[a],c[a];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
        c[i] = b[i];
    }
    int max = b[0];
    for(int i=1;i<a;i++){
        if ((c[i-1]+b[i]) > b[i]){
            c[i] = c[i-1] + b[i];
        }else{
            c[i] = b[i];
        }
    }
    for(int i=0;i<a;i++){
        if (c[i] > max)
            max = c[i];
    }
    printf("%d",max);
    return 0;
}