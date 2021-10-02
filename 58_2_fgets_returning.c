#include<stdio.h>
int main()
{
	int i=0;
	char s[10],*ch;
	FILE *fp;
	
	fp=fopen("57_file.txt","r");
	printf("%d ",&s[0]);
	
	ch=fgets(s,10,fp); // fgets retrive 10-1=9
	printf("%s\n",s);
	for(i;i<=8;i++)
	{
		printf("%d. %d,%c\n",i,ch+i,*(ch+i) );
	}

}
