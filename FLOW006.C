#include <stdio.h>

int main(void) {
	// your code goes here
	int N,T,i,r,sum;
	scanf("%d",&T);
for(i=0;i<T;i++)
{
scanf("%d",&N);
sum=0;
while(N>0){
 r=N%10;
 sum=sum+r;
 N=N/10;
}
printf("%d \n",sum);
    
}
	return 0;
}

