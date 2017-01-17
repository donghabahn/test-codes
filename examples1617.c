#include <stdio.h>

int main(){
    double width=5,height=3;
    double area;
    double math=4.0,eng=3.67,physics=4.00,avg,sum;
    area=width*height/2.0;
    printf("AREA: %.1f\n",area);

    sum=math+eng+physics;
    avg=sum/3.0;
    printf("SUM: %.2f, AVERAGE: %.2f\n",sum,avg);
    return 0;
}