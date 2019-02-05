#include <stdio.h>

int main(void) {
	
	int T,r,A,B,i;
	
	scanf("%d",&T);

for(i=0;i<T;i++){
    scanf("%d %d",&A,&B);
    
    r=A%B;
    printf("%d \n",r);
    
    
}

	return 0;
}

