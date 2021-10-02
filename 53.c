#include<stdio.h>
typedef struct book
{
	int id;
	char name[20];
	float price;
}BOOK;
int main()
{
	typedef int LENGTH;
	LENGTH a,b;
	a=3;
	b=4;
	printf("a+b=%d\n",a+b);

	BOOK b1;
	b1.id=3;
	b1.name[20]="let us c";
	b1.price=220.20;
	
	printf("%d,%s,%f",b1.id,b1.name,b1.price);
	
}
