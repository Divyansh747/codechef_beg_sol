#include <stdio.h>

int main(void) {
int T,A,B,C,i,Z;
scanf("%d",&T);
for(i=0;i<T;i++)
{
    scanf("%d %d %d",&A,&B,&C);
    Z=A+B+C;
    if(Z==180){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
	return 0;
}

