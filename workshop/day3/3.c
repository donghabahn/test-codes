#include <stdio.h>

void scores(int s1, int s2, int s3){
    int sum=s1+s2+s3;
    float avg=sum/3.0;
    printf("%f",avg);
}

int main(){
    int s1,s2,s3;
    
    scanf("%d %d %d",&s1, &s2,&s3);
    scores(s1,s2,s3);
    return 0;
}