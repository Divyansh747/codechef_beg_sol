#include <stdio.h>

int main(void) {
	
int T,i,r;
int N,rev;
scanf("%d",&T);
for(i=0;i<T;i++){
    scanf("%d",&N);
    rev=0;
    while(N>0){
        r=N%10;
        rev=rev*10+r;
        N=N/10;
    }
    printf("%d\n",rev);
    }

	return 0;
}

