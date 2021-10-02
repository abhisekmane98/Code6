#include<stdio.h>
int main()
{
	char ch1='a',ch2;
	FILE *fp;
	fp=fopen("57_file.txt","w");
	ch2=fputc(ch1,fp);
	printf("%c",ch2);
}
