#include<stdio.h>
void xgets(char*);
void xputs(char*);
int main()
{
	char str[20];
	xgets(str);
	xputs(str);

}

void xgets(char *str)
{	
	scanf("%[^\n]s", str);
}

void xputs(char *str)
{
	printf("%s\n", str);
}
