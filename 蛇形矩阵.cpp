#include<stdio.h>
int main() {
    int i, j, n, k = 1;
    int a[100][100] = {0};
    scanf("%d", &n);
    //输出上三角
    for (i = 0; i < n; i++) { //行
        for (j = 0; j <= i; j++) { //列
            if (i % 2 == 0) //偶数行
                a[i - j][j] =
                    k; // a[0][0]=1;然后执行k++=2，a[2][0]=4,a[1][1]=5,i在不断减小，j在不断变大
            else
                a[j][i - j] = k; // a[0][1]=2，k++=3,a[1][0]=3，反过来
            k++;   //k从第一次运行的时候就不断+1
        }
    }
    //下三角
    for (i = n; i < 2 * n - 1; i++) {
        for (j = 1; j < 2 * n - i; j++) {
            if (i % 2 == 0)
                a[n - j][j + i - n] = k;
            else
                a[j + i - n][n - j] = k;
            k++;
        }
    }
    for (i = 0; i < n; i++) {  //打印
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}