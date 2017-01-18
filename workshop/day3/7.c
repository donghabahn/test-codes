#include <stdio.h>

int Price_Calc(int price, int dc){
    int result;
    result=price*(100-dc);
    result=(result/1000)*10;
    return result;
}

int main(){
    int price,dc;
    scanf("%d %d",&price, &dc);
    printf("%d",Price_Calc(price,dc));
    return 0;
}