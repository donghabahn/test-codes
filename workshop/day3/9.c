#include <stdio.h>
#include <math.h>

int main(){
   printf("1KB => %.0lfByte\n",pow(2,10));
   printf("1MB => %.0lfByte\n",pow(2,20));
   printf("1GB => %.0lfByte\n",pow(2,30));
   printf("1TB => %.0lfByte\n",pow(2,40));
   return 0;
}