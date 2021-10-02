#include<stdio.h>
#include<string.h>
int main()
{
	char s[20]="bonapart",*ch,*ch2="kristen";
//	ch=strupr(s);
//	printf("%s",ch);
	printf("%s\n",strupr(s)); 
	printf("%s",strupr(ch2));  // this gives error as ch2 pointing to constant string so you can't update it
	
}
