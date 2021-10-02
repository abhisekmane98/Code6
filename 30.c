#include<stdio.h>
int main()
{
	char p[]="The sixth sick sheikh's sixth ship is sick";
	int i=0;
	while(p[i]!='\0')
	{
		puts(&p[i]);
		i++;
	}
	
}
