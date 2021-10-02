#include<stdio.h>
int main()
{
	int i=0;
	char ch;
	FILE *fp;
	fp=fopen("41_file1.txt","w"); // for append just replace w by a 
	
	while(i!=14)
	{
		printf("Enter a character ");
		fflush(stdin);
		scanf("%c",&ch);
		fputc(ch,fp);
		i++;
	}
	getch();
	fclose(fp);
	
}
