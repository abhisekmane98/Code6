#include<stdio.h>
int main()
{
	char s[40];
	FILE *fp;
	fp=fopen("41_file.txt","w");
	printf("Enter a string\n");
	scanf("%[^\n]s",s); // gets(s);
	fputs(s,fp);
	fclose(fp);
}
