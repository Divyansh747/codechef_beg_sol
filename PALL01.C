#include <stdio.h>

int main(void) {
int T,n,rev,pal,temp,i,r;
scanf("%d",&T);
for(i=0;i<T;i++)
{
    scanf("%d",&n);
    temp=n;
    rev=0;
        while(n>0){
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        if (temp==rev){
            printf("wins\n");
        }
        else{
            printf("losses\n");
        }
}
	return 0;
}

