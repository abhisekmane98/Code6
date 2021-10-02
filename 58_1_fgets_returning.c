#include<stdio.h>
int main()
{
	int i=0;
	char s[10],*ch;
	FILE *fp;
	
	fp=fopen("57_file","r");// .txt is missing
	printf("%d ",&s[0]);
	printf("a");
	fgets(s,10,fp);
	printf("a");
	printf("%s",s);
	printf("b");
	for(i;i<=9;i++)
	{
		printf("%d,%c\n",ch+i,*(ch+i) );
		printf("a");
	}

}
