#include<stdio.h>
int main()
{
	int a,b,c;
	FILE *fp;
	fp=fopen("49_file.txt","w");
	printf("Enter 3 numbers");
	scanf("%d,%d,%d",&a,&b,&c);
	
	fprintf(fp,"a=%d,b=%d,c=%d",a,b,c);
	fclose(fp);
}
