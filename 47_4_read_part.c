#include<stdio.h>
#include<stdlib.h>
struct book
{
	int id;
	char name[20];
	float price;
}b1;
int main()
{
	int a;
	FILE *fp;
	fp=fopen("47_file4.dat","rb");
	
	if(fp==NULL)
	{
		printf("File can't open");
		exit(1);
	}
	while( fread(&b1,28,1,fp)!=0)
	{
		printf("%d,%s,%f\n\n",b1.id,b1.name,b1.price);
		
	}
	getch();
	fclose(fp);
}
