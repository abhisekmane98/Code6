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
		if(*ch==10)
			break;
		ch++;
	}
	printf("kill");
	getch();
}

void xputs(char *ch)
{
	int i;
	for(i=0;i<=19;i++)
	{
		printf("%c",*ch);
		ch++;
	}
	
}
