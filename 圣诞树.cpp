#include <stdio.h>
//三角形第一层
void subBranchRow1(){
    printf("  *   ");
}
//三角形第二层
void subBranchRow2(){
    printf(" * *  ");
}
//三角形第三层
void subBranchRow3(){
    printf("* * * ");
}
//空白
void subBranchBlank(){
    printf("   ");
}
void branch(int num){
    // i 循环，搭建树
    for (int i = 1; i <= num; i++){
        int subBranckBlankNum = num -i; //求“每层的三角形”的空白量
            // j 循环（1 - 3）， 搭建“每层的三角形”
            for (int j = 1; j <= 3; j++){
                // k 循环，留出“每层的三角形”的空白
                for (int k = 1; k <= subBranckBlankNum; k++){
                    subBranchBlank();
                }
                // p 循环， 搭建“每层的三角形”的“每一层”
                for (int p = 1; p <= i; p++){
                    switch (j){
                    case 1: {
                        subBranchRow1();
                        break;
                    }
                    case 2: {
                        subBranchRow2();
                        break;
                    }
                    case 3: {
                        subBranchRow3();
                        break;
                    }
                    }
                }               
                printf("\n");
            }
        }
    }
//树主干
void root(int num){
    for (int i = 1; i <= num; i++){
        for (int j = 1; j <= (3 * num - 1); j++){
            printf(" ");
        }
        printf("*\n");
    }
}

int main() {
    int num;
    scanf("%d", &num);
    branch(num);
    root(num);

    return 0;
}