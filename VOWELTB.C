#include<stdio.h>
int main()
{
	char C;
	scanf("%c",&C);
	if(C=='a'||C=='e'||C=='i'||C=='o'||C=='u'||C=='A'||C=='E'||C=='I'||C=='O'||C=='U')
	{
	printf("Vowel");
	}
	else
	{
	printf("Consonant");
	return 0;
	}
}
