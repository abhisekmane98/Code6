#include<stdio.h>
int main()
{
	int i=0;
	int ch;
	FILE *fp;
	fp=fopen("54_file.txt",""); 
	
	while(i!=5)
	{
		printf("Enter a number ");
		fflush(stdin);
		scanf("%d",&ch);
		fputc(ch,fp);
		i++;
	}
	getch();
	fclose(fp);
	
}
