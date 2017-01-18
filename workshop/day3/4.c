#include <stdio.h>

int sum(int num){
    int a1,a2,a3;
    a1=num/100;
    a2=num/10%10;
    a3=num%10;
    return a1+a2+a3;
}

int main(){
    int a1,a2,a3;
    
    scanf("%d %d %d",&a1, &a2,&a3);
    printf("%d",sum(a1,a2,a3));
    return 0;
}