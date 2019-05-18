#include <stdio.h>

int main(void) {
	// your code goes here
	int N1,N2,sum,diff;
	scanf("%d %d",&N1,&N2);
	if (N1>N2)
	{
	    diff=N1-N2;
	    printf("%d",diff);
	}
	else{
	    sum=N1+N2;
	    printf("%d",sum);
	}
	return 0;
}
