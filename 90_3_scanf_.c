#include<stdio.h>
int main()
{
	int a;
	float b;
	scanf("%*[^\n]%d%f",&a,&b);
	printf("%d,%f",a,b);
}
