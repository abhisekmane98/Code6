#include<stdio.h>
void xgets(char*);
void xputs(char*);
int main()
{
	char ch[20];
	xgets(ch);
	xputs(ch);
}

void xgets(char *ch)
{
	int i;
	char a;
	printf("Enter a string\n");
	for(i=0;i<=19;i++)
	{
		*ch=getche();
		if(*ch=='\r')
			break;
		ch++;
	}
}

void xputs(char *ch)
{
	for(;*ch!='\r';ch++)
	{
		printf("%c",*ch);
	}
	
}
