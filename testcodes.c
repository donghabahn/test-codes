#include <stdio.h>
int main(){
	char a,b;
	while (1){
		scanf("%c %c\n",&a,&b);
		if(a<=57&&a>=49){
			printf("%d\n",a-48+b-48);
			
		}
		else {
			break;
		}
	}
return 0;
}