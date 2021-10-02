#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	FILE *fp;
	char ch;
	fp=fopen("41_file1.txt","r");
	if(fp==NULL)
	{
		printf("File does not exist");
		exit(1);
	}
	
	while(feof(fp)==0)
	{
		a=feof(fp);
		printf("a=%d ",a);
		ch=fgetc(fp);
		printf("%c\n",ch);
		
	}
	a=feof(fp);
	printf("a=%d ",a);
	fclose(fp);
	
}
