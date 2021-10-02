//checking gets in argument we add adress or variablae name
#include<stdio.h>
void input(char*);
int main()
{
	char a[4];
	a[0]='9';
	input(a);
//	printf("%d",a[0]);
}

void input(char *a)
{
	printf("%c",*a);
}

// conclusion we have to provide adress only

