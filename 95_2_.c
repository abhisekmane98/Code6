#include<stdio.h>
int main()
{
	char s[20];
	int a;
	float b;
	scanf("%*[^\n,>[?]%*c%d%f",&a,&b);
	printf("%d,%f",a,b);
}
