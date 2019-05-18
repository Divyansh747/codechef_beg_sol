#include <stdio.h>

int main(void) {
	
int T,i,r,z;
long long int N;
scanf("%d",&T);
for(i=0;i<T;i++){
    scanf("%lld",&N);
    z=0;
    while(N>0){
        r=N%10;
        if(r==4){
            z++;
        }
        N=N/10;
    }
    printf("%lld\n",z);
    }

	return 0;
}

