#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS_

int main(){
    double width=5,height=3;
    double area;
    double math=80,eng=60,physics=90,avg,sum;
    area=width*height/2;
    printf("AREA: %.1f\n",area);


    sum=math+eng+physics;
    avg=sum/3;
    printf("SUM: %.2f, AVERAGE: %.2f\n",sum,avg);
    return 0;
}