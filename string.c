#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int len1,len2,len3,len4;
    printf("enter a string: \n");
    gets(str);

    len1=strlen(str);
    len2=sizeof(str)/sizeof(str[0]);
    len3=strlen(str)-1;
    len4=sizeof(str)/sizeof(str[0])-1;

    printf("%d %d %d %d\n", len1,len2,len3, len4);
    return 0;

}