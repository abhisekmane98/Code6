#include<stdio.h>
int main()
{
	int a=20,k,k2;
	float b=32.50;
	char ch='a',s1[]="i love to fuck the girls slowly by teasing",s2[100];
	
	k=sprintf(s2,"%d,%f,%c,%s",a,b,ch,s1);
	printf("%d\n",k);
	
	k2=printf("%s",s2);
	printf("\n");
	printf("%d",k2);
}
