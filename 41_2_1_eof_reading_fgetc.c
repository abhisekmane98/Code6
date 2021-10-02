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
	
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
			break;
		printf("%c",ch);
		
	}
	fclose(fp);
	
}
