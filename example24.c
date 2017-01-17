#include <stdio.h>

void main(void){
    char name[20];
    char address[100];

    printf("당신의 이름은?\n");
    scanf("%s",name);
    fflush(stdin);
	printf("주소는?\n");
    gets(address);
	printf("NAME: %s\n",name);
	printf("ADDRESS: %s\n",address);
}