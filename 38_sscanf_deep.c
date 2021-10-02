#include<stdio.h>
int main()
{
	char s[40]="Abhishek is a braxve and humble guy",s1[20],s2[20];
	sscanf(s,"%s %*[^ ]%s",s1,s2);
	printf("%s,%s",s1,s2);
	
}
