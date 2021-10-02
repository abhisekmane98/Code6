#include<stdio.h>
struct book input(struct book);
void display(struct book);

struct book
{
	int id;
	char name[20];
	float prize;
};

int main()
{
	struct book b1;
	b1=input(b1);	
	display(b1);
}

struct book input(struct book b)
{
	char dh;
	printf("Enter book id,name,prize\n");
	scanf("%d",&b.id);
	while((dh=getchar()!='\n'))
	;
	gets(b.name);
	scanf("%f",&b.prize);
	return b;
}

void display(struct book b)
{
	printf("id:%d, name:%s, prize:%.2f",b.id,b.name,b.prize);
}



