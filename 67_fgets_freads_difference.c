#include<stdio.h>
#include<stdlib.h>
int main()
{
	int k,i=1,j;
	char b[11]; //for acessing 10 characters at a time
	FILE *fp;
	fp=fopen("57_file.txt","r");
	if(fp==NULL)
	{
		printf("Can't opepn file");
		exit(1);
	}
	for(i=0;i<=4;i++)
	{
		k=fread(&b,10,1,fp);
		printf("%d. k=%d string %s\n",i,k,b);
		
		if(b[5]=='\0' && b[5]==NULL)
			printf("yes there is NULL");
		
		printf("%c,%d",b[5],b[5]);
		printf("\n\n");
	}
		
}
