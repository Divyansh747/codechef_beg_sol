#include <stdio.h>
int main(void) {

int T,i,fact,n;
scanf("%d",&T);
for(i=0;i<T;i++)
{
    scanf("%d",&n);
    fact=1;
    while(n>0){
        fact=fact*n;
        n--;
    }
    printf("%d\n",fact);
}
	return 0;
}

