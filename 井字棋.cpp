#include<stdio.h>
int main(){
    char m[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%c ",&m[i][j]);
        }
    }
    if(m[0][0]==m[1][1]&&m[0][0]==m[2][2]){
        if(m[0][0]=='K') goto K;
        else if(m[0][0]=='B') goto B;
    }
    if(m[0][2]==m[1][1]&&m[0][2]==m[2][0]){
        if(m[0][2]=='K')goto K;
        else if(m[0][2]=='B')goto B;
    }
    for(int i=0;i<3;i++){
        if(m[i][0]==m[i][1]&&m[i][0]==m[i][2]){
            if(m[i][0]=='K')goto K;
            else if(m[i][0]=='B')goto B;
        }
        if(m[0][i]==m[1][i]&&m[0][i]==m[2][i]){
            if(m[0][i]=='K')goto K;
            else if(m[0][i]=='B')goto B;
        }
    }
    printf("No winner!\n");
    return 0;
    K:
    printf("KiKi wins!\n");
    return 0;
    B:
    printf("BoBo wins!\n");
    return 0;
}