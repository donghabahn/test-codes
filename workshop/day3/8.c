#include <stdio.h>
#include <math.h>
int Random_Calc(void){
    int random;
    random=rand()*9+1
    return random;
}

int main(){
    printf("%d\n",Random_Calc());
    printf("%d\n",Random_Calc());
    printf("%d\n",Random_Calc());
    return 0;
}