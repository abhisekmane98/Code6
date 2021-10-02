#include<stdio.h>

struct book
{
	int id;
	char name[20];
	float price;
}b1;

int main()
{
	struct book b2={18,"Fight club",820};
	struct book b3;
	b1.id=17;
	b1.name[20]="Mrutunjay";
	b1.price=450.20;
	
	printf("Enter a id,name and price of 3rd book\n");
//	scanf("%d%[^\n]s%f",b3.id,b3.name,b3.price);  this not work as we enter after entering id and thar receive by next so terminate
	scanf("%d",&b3.id);
	fflush(stdin);
	gets(b3.name);
	scanf("%f",&b3.price);
	
	FILE *fp;
	fp=fopen("47_file4.dat","wb");
	
	fwrite(&b1,28,1,fp);
	fwrite(&b2,28,1,fp);
	fwrite(&b3,28,1,fp);
	
	getch();
	fclose(fp);
	
}
