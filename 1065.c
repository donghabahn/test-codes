#include <stdio.h>
int main(){
    int i,j,k,n;
    int num[3];
    int count=0;

    for(i=0;i<=n;i++){
        if()
    }
}
public static int hisAlgo(int n){
		int i, k, han=0, a[] = new int[3];
		for (i = 1; i <= n; i++) {
			if (0 < i && i < 100) han = i;
			else if (i == 1000) break;
			else {
				k = 0; int t = i;
				while (t > 0) {
					a[k] = t % 10;
					t /= 10; k++;
				}
				if (a[0] - a[1] == a[1] - a[2]) han++;
			}
		}
		return han;
	}