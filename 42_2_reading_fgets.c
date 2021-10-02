#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s[10];
	FILE *fp;
	fp=fopen("41_file1.txt","r");
	if(fp==NULL)
	{
		printf("File does not exist");
		exit(1);
	}
	else
	{
		while(fgets(s,8,fp)!=NULL)
		{
			printf("%s",s);
			getch(); 
		}
	}
	fclose(fp);
	
}
