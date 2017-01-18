#include <stdio.h>

int main(){
   int count, num = 0;
   int i;
   char input[101];
   char temp;
   scanf("%d",&count);
   gets(input);
   for (i = 0; i < count; i++){
	    char temp = input[i];
	    num += temp-'0';
	}
	printf("%d",num);
	return 0;
}