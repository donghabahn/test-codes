#include <stdio.h>

void star(int n);

int main(){
    int n=3;
    char output[3072][3072]={' ',};
    //scanf("%d",&n);
    star(n);
    return 0;
}

void star(int n){
    if(n<=2&&n%3==0){
        star(n-1);
        printf("  *  \n");}
    else if(n%3==1){
        star(n-1);
        printf(" * * \n");}
    else if(n%3==2){
        star(n-1);
        printf("*****\n");}
    else if(n>=3){star(n-1);
}