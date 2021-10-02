#include<stdio.h>
#include<stdlib.h>
int main()
{
	int k,i=1;
	char b[8];
	FILE *fp;
	fp=fopen("57_file.txt","r");
	if(fp==NULL)
	{
		printf("Can't opepn file");
		exit(1);
	}
	while( fread(&b,4,1,fp)!=0 )
	{
		printf("%d. %s\n",i,b);
		i++;	
	}
		
}
