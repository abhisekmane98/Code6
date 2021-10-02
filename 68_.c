#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i=1,j;
	char s[21]; //0-20
	char s2[26];//0-21 string length 20 + '\0'
	
	FILE *fp;
	fp=fopen("68_yk_solved_ex.txt","w");
	if(fp==NULL)
	{
		printf("file can't open");
		exit(1);
	}
	puts("Enter some text");
	while(strlen( gets(s))> 0) 
	{
		printf("Length of string %d\n",strlen(s));
		
		for(j=18;j<=20;j++)
		{
			printf("%d. %c,%d\n",j,s[j],s[j]);
	 	}
	 	
		fputs(s,fp); 
		fputs("\n",fp);
	}
	fclose(fp);
	fp=fopen("68_yk_solved_ex.txt","r");
	if(fp==NULL)
	{
		printf("file can't open");
		exit(2);
	}
	
	while( fgets(s2,26,fp)!=NULL)  // acess only 21 chars and put 0-20 and put '\0' at 21th
	{
		for(j=18;j<=21;j++)
		{
			printf("%d. %c,%d\n",j,s2[j],s2[j]);
	 	}
		printf("%d. %s",i,s2);
		i++;
	}	
	fclose(fp);
}
