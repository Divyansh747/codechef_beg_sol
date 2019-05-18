#include<stdio.h>
int main()
{ //0
int TC,i,N,n,K,j,Z=0,sum=0,cost[1000],T[1000],D[1000],P[1000];
scanf("%d",&TC);
for(n=0;n<TC;n++)
//while(TC>0)
{ //1
scanf("%d %d",&N,&K);

for(i=0;i<N;i++)
{ //2
scanf("%d %d",&T[i],&D[i]);
} //2

for(j=0;j<N;j++)
{ //3
if(T[j]<=K && K!=0)
{  K=K-T[j]; //4
  P[j]=0;
} //4

else if(T[j]>K)
{ // 5
  P[j]=((T[j]-K)*D[j]);
  K=0;
} //5

} //3

for(i=0;i<N;i++)
{ //6
  sum=sum+P[i];
} //6

cost[Z]=sum;
sum=0;
Z++;

} // 1

for(i=0;i<TC;i++)
{ //7
printf("%d\n", cost[i]);
} //7

return 0;
} //0
