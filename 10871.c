#include <stdio.h>
#include <stdlib.h>

void empty(int x, int y, int n);
void star(int x, int y, int n);
char** ptr;
int main() {
    int i,n,j;
    FILE * out;
    out=fopen("sienpinski.txt","w");
	scanf("%d", &n);
    ptr = (char**)malloc(n*sizeof(char*));
    for(i=0; i<n; i++) {
        ptr[i] = (char*)malloc(n+2*(i+1)*sizeof(char));
    }

    for(i=0; i<n; i++) {
        j=0;
        for(; j<n-i-1; j++) {
            ptr[i][j] = ' ';
        } for(; j<n+i; j++) {
            ptr[i][j] = '*';
        }
		for(; j<2*n-1; j++) {
			ptr[i][j] = ' ';}
        ptr[i][j]='\0';
    }

    star(0,n-1,n);
    for(i=0; i<n; i++) {
        fprintf(out, "%s\n", ptr[i]);
    }
    fclose(out);
    return 0;
}

void empty(int x, int y, int n) {
    int i,j,k;
	k = 2*n-1;
    for(i=0; i<n; i++) {
        for(j=0; j<k; j++) {
			ptr[x+i][y+i+j] = ' ';
        }
        k-=2;
    }
}
void star(int x, int y, int n) {
    int m;
	if(n==1) {return;}
    m = n/2;
    star(x, y, m);
    star(x+m, y-m, m);
    star(x+m, y+m, m);
    empty(x+m, y-m+1, m);
}