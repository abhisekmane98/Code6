#include<stdio.h>
#include<stdlib.h>
int main()
{
	int k;
	char s[40];
	FILE *fp;
	fp=fopen("53_file.txt","r");
	if(fp==NULL)
	{
		puts("file can't be opened");
		exit(1);
	}
	k=fscanf(fp,"%[^EOF]",s);
	printf("%s,%d",s,k);
	fclose(fp);
}
