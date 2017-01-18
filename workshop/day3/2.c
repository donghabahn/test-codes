#include <stdio.h>


int age(int end, int start){
    return (end-start+1);
}

int main(){
    int start,end;
    
    scanf("%d %d",&start, &end);
    printf("%d",age(end,start));
    return 0;
}