#include<stdio.h>
#pragma pack()
struct emp
{
	int a;
	char ch;
	int b;
	char s[20];
	float t;
}e1,e2;
#pragma pack()
int main()
{
	struct emp e;
	
	printf("%u,%u,%u,%u,%u\n",&e.a,&e.ch,&e.b,&e.s,&e.t);
	printf("%d\n",sizeof(e.s));
}
