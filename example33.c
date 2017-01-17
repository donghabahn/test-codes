#include <stdio.h>

int main(){
    int a=2345;
    int a1,a2,a3,a4;

    a4=a/1000;
    a3=(a%1000)/100;
    a2=(a%100)/10;
    a1=a%10;

    printf("1000자리 = %d, 100자리 = %d, 10자리 = %d, 1자리 = %d",a4,a3,a2,a1);

}