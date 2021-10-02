#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	int a;
	int ch;
	fp=fopen("54_file.txt","r");
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
		printf("%d\n",ch);
	}
	a=feof(fp);
	printf("a=%d ",a);
	fclose(fp);
	
}
