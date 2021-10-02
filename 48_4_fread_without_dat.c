#include<stdio.h>
#include<stdlib.h>
struct date
{
	int d,m,y;
}d1;
int main()
{
	int a;
	FILE *fp;
	fp=fopen("48_file.txt","r");
	if(fp==NULL)
	{
		printf("file can't be open");
		exit(1);
	}
	while( fread(&d1,12,1,fp)!=0 )
	{
		
		printf("%d/%d/%d\n",d1.d,d1.m,d1.y);	
	} 
	fclose(fp);
}
