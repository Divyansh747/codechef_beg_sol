#include <stdio.h>

int main(void) {
	
	int N,r,c=0;
	
	scanf("%d",&N);
	while(N>0)
	{
	    c++;
	    r=N%10;
	    N=N/10;
	}
	
	if(c==0){
	    printf("0");
	}
	else if (c==1){
	    printf("1");
	}
	else if(c==2){
	    printf("2");
	}
	else if(c==3){
	    printf("3");
	}
	else{
	    printf("More than 3 digits");
	}
	
	return 0;
}

