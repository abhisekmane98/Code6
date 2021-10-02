#include<stdio.h>
#include<string.h>
int main()
{
	char s[40]="bhisheka is a great boy",ch='a',*r;
	r=strchr(s,ch);
	printf("%d\n%d\n%d\n",s,&s[7],r);
	printf("%s\n%s",s,r);
	
}
