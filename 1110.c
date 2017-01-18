#include <stdio.h>

int main(){
    int num, a,b,count=0;
    scanf("%d",&num);
    int temp=0;
    while(num!=temp){
        a=num/10;
        b=num%10;
        temp=10*b+a+b;
        count++;
    }
    printf("%d",count);


}