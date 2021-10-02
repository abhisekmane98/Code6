#include<stdio.h>
int main()
{
	FILE *fp;
	int  ch;
	fp=fopen("54_file.txt","r");
	
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
			break;
		printf("%d\n",ch);
	}
	fclose(fp);
	
}
