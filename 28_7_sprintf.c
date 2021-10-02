#include<stdio.h>
int main()
{
	int a=2,i;
	float b=7;
	char ch1='x',ch2='y';
	char s[20];
	printf("Enter a integr, floating point, character constant\n");

	sprintf(s,"%d,%f,%c,%c",a,b,ch1,ch2);
	
	for(i=0;i<=14;i++)
	{
		printf("%c",s[i]);
	}
	printf("\n%s",s);
}
