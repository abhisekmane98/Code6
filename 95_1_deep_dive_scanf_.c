#include<stdio.h>
int main()
{
	char s[20];
	int a;
	float b;
	scanf("%[^\n,>[?]%*c%d%f",s,&a,&b);
	printf("%s,%d,%f",s,a,b);
}
