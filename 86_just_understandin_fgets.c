#include<stdio.h>
#include<string.h>
int main()
{
	char s[60];
	FILE *fp;
	fp=fopen("86_data.txt","r");
	printf("%d\n\n",ftell(fp));

	while(fgets(s,60,fp)!=NULL)
	{
		
		printf("%s,%d,%ld\n",s,strlen(s),ftell(fp));
	}
	fclose(fp);
	
}
