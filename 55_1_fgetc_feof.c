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
//	a=feof(fp);   // feof return 1 when file end came else returns 0
//	printf("%d",a);
//	getch();
	while(a=feof(fp)==0)  // mistake result of 
	{
		printf("a=%d ",a);
		ch=fgetc(fp);
		printf("%d\n",ch);
	}
	printf("a=%d ",a);
	fclose(fp);
	
}
