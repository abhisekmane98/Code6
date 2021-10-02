#include<stdio.h>
#include <stdlib.h>
// int atoi(const char *string)
int main()
{
	int x1,x2,x3;
	char s1[]="122",s2[]="Hello",s3[]="99Hello";
	
	x1=atol(s1);
	x2=atol(s2);
	x3=atol(s3);
	
	printf("%d,%d,%d",x1,x2,x3);
   
}
