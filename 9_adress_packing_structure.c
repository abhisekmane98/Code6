#include<stdio.h>

struct emp
{
	int a;
	char ch;
	char s[20];
	float t;
}e1,e2;

int main()
{
	struct emp e;
//	e={20,'b',"raju",3.6};
//  e1={21,'a',"ravi",4.5};
	printf("%u,%u,%u,%u\n",&e.a,&e.ch,e.s,&e.t);

	printf("%d\n",sizeof(e.s));

//	printf("%d,%c,%s,%.2f",e1.a,e1.ch,e1.s,e1.t);	
	
}
