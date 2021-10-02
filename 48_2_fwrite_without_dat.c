#include<stdio.h>
struct date
{
	int d,m,y;
}d1;
int main()
{
	FILE *fp;
	printf("Enter date in dd/mm/yy format\n");
	scanf("%d%*c%d%*c%d",&d1.d,&d1.m,&d1.y);
	
	fp=fopen("48_file.txt","w");
	fwrite(&d1,12,1,fp);
	fclose(fp);
}
