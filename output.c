#include <stdio.h>
int main(){
    char temp1[20], temp2[20], temp3[20], temp4[20], temp5[20];
    char product[20];
    char processor[20];
    int hdd;
    char odd;
    float inch;

    scanf("%s : %s\n",temp1,product);
    scanf("%s : %s\n",temp2,processor);
    scanf("%s : %d\n",temp3,&hdd);
    scanf("%s : %c\n",temp4,&odd);
    scanf("%s : %f\n",temp5,&inch);

    printf("%-20s\t %-20s\t %20s\t %20s\t %20s\n",temp1,temp2,temp3,temp4,temp5);
    printf("%-20s\t %-20s\t %20d\t %20c\t %20.1f\n",product,processor,hdd,odd,inch);

    return 0;
}