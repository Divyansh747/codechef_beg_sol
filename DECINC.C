#include<stdio.h>
int main()
{
	int N;

	scanf("%d",&N);

	if(N%4==0)
	{
		N++;
		printf("%d",N);
	}

	else
	{
		N--;
		printf("%d",N);
	}

	return 0;
}
