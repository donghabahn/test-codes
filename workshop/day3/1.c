#include <stdio.h>
#include <math.h>

float area(int r){
    float pi=(float)(acos(-1));
    return r*r*pi;
}


int main(){
    int r;
    
    scanf("%d",&r);
    printf("%.3f",area(r));
    return 0;
}