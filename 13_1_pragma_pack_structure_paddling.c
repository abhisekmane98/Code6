#include<stdio.h>
#pragma pack(2)
struct emp
{
	int a;
	char ch;
	char s[20];
	float t;
}e1,e2;
#pragma pack()
int main()
{
	struct emp e;
	
//	printf("%u,%u,%u,%u\n",&e.a,&e.ch,&e.s,&e.t);
//	printf("%d\n",sizeof(e.s));
	printf("%d",sizeof(e));
}
