#include<stdio.h>
#include<string.h>
void read (char*,char*);
int main()
{
	char s[20],p[40];
	puts("Enter a string");
	gets(s);
	gets(p);
	

	printf("%d,%d\n",sizeof(s),strlen(s));
	printf("%d,%d\n",sizeof(p),strlen(p));
	read(s,p);

}
void read (char *s,char *p)
{
	printf("%d,%d\n",sizeof(s),strlen(s));
	printf("%d,%d\n",sizeof(p),strlen(p));
}
