#include<stdio.h>
int main()
{
	int i;
	char s[45];
	FILE *fp;
	fp=fopen("120_para_3.txt","r");
	while(fgets(s,sizeof(s),fp)!=NULL)
	{
		printf("%s,%d\n",s,ftell(fp) );
		
	}
	printf("%s,%d\n",s,ftell(fp) );
	
}
