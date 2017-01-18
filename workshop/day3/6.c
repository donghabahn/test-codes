#include <stdio.h>

double Height_Sqr(double height){
    return height*height;
}

double Fat_Calc(double height,double weight){
    return weight/Height_Sqr(height);
}

int main(){
    int h,w;
    scanf("%lf %lf",&h, &w);
    printf("%lf",Fat_Calc(h,w));
    return 0;
}