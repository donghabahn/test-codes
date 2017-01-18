#include <stdio.h>

int main(){
    float num[3]
    int hit;
    float max=0;
    float sum=0;
    scanf("%f %f %f", &num[1], &num[2], &num[3]);
    for (i=0;i<3;i++){
        if(max<num[i]){
            max=num[i];
            hit=i;
        }
    }

    for(i=0;i<3;i++){
        if(i!=hit){
            num[i]=num[i]/max*100;
            sum+=sum+num[i]
        }
    }
    sum+=num[hit];
    printf(".2f",sum/3);

    return 0;
}