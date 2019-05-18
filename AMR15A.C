#include <stdio.h>
int main(void) {
int size,n[100000],i,r,even,odd;
scanf("%d",&size);
for(i=0;i<size;i++)
{
    scanf("%d",&n[i]);
    
}
even=0;
odd=0;
for(i=0;i<size;i++){
    
    if(n[i]%2==0){
        even++;
    }
    else{
        odd++;
    }
    
}
	if(even>odd){
        printf("READY FOR BATTLE");
    }
    else{
        printf("NOT READY");
    }
	
	return 0;
}

