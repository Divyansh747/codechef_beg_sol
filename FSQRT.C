#include <stdio.h>
#include <math.h>
int main(void) {
	int T,n,i,z;
	scanf("%d",&T);
	for(i=0;i<T;i++){
	    scanf("%d",&n);
	    z=sqrt(n);
	    printf("%d\n",z);
	}
	return 0;
}

