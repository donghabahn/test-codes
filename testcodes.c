#include <stdio.h>


int main(){
	int total=18;
	int i;
	int minimum;
	int x0,y0;
	int x,y;
	int sum[3000]={0,};
	scanf("%d",&total);
	
	for(i=1667;i>0;i--){
		if(total==3*i&&((total-3*i)%5==0)){
			x0=i;
			y0=(total-3*i)/5;
		}
	}
	x=x0;
	y=y0;
	sum[0]=x+y;
	i=1;
	while(x>0){
		x=x-5*i;
		y=y+3*i;
		sum[i]=x+y;
		i++;
	}
	minimum=50001;
	for(i=0;i<3000;i++){
		if(minimum>sum[i]){
			minimum=sum[i];
		}
	}

	if (minimum>5000){
		printf("%d",-1);
	}
	else {
		printf("%d", minimum);
	}


return 0;
}