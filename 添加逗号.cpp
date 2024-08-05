#include <stdio.h>

int main() {
    char arr[11]={0};
    int i=0;
    while((arr[i]=getchar())!='\n')
        i++;
    arr[i]=0;
    int len = strlen(arr);
    for(int i = 0;i<len;i++){
        printf("%c",arr[i]);
        if((i%3==((len%3==0)?2:len%3-1))&&(i!=len-1))
            printf(",");
    }
    return 0;
}