#include <stdio.h>

int main(){
	int a=4;
	int b;
	int c;

	b=(++a+1)*a++;
	printf("%d\n",b);
	printf("%d\n",a);
	c=a++ + ++a;
	printf("%d\n",c);
	return 0;
}