#include<stdio.h>
int main()
{
	int i;
	char ch;
	FILE *fp;
	fp=fopen("120_para_1.txt","r");
	
	for(i=0;i<=100;i++)
	{
		printf("%ld,",ftell(fp));
		ch=fgetc(fp);
		printf("%c\n",ch );	
	}
		
}
