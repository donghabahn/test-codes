#include <stdio.h>

int count(int a1,int a2,int a3){
    int count=0;
    int num[3]={a1,a2,a3};
    for (i=0;i<3;i++){
        if (num[i]%2==1){
            count++;
        }
    }
    return count;
}

int main(){
    int a1,a2,a3;
    scanf("%d %d %d",&a1, &a2,&a3);
    printf("%d",count(a1,a2,a3));
    return 0;
}