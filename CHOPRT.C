#include <stdio.h>

int main(void) {
int T,A,B,i;
scanf("%d",&T);
for(i=0;i<T;i++)
{
    scanf("%d%d",&A,&B);
    if(A<B){
        printf("<\n");
    }
    else if(A>B){
        printf(">\n");
    }
    else{
        printf("=\n");
    }
}
	return 0;
}

