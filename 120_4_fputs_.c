#include<stdio.h>
int main()
{
	FILE *fp;
	char s[60]="brad pitt is great hero h__ead\nr";
	fp=fopen("120_para_4.txt","w");
	fputs(s,fp);
	printf("%d",ftell(fp) );
	fclose(fp);
}
