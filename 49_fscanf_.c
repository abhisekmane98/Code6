#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("49_file.txt","r");
	
	int a,b,c;
	
	fscanf(fp,"%*c%*c%d,%*c%*c%d,%*c%*c%d",&a,&b,&c);
	printf("%d,%d,%d",a,b,c);
	fclose(fp);
}
