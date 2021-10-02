#include<stdio.h>
int getint();

int main()
{
	int a;
	a=getint();
	printf("You Enterd %d",a);
	return 0;
}

int getint()
{
	char p[20];
	int n;
	printf("Enter a numeric string");
	scanf("%s",p);
	sscanf(p,"%d",&n);
	return n;
}
