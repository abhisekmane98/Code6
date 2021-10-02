#include<stdio.h>
struct book
{
	int id;
	char name[20];
	int price;
};

void input (struct book*);

int main()
{
	struct book b1[4]; //={12,"letusc",300};
	printf("%d,%d,%d\n",b1,&b1[0],&(b1[0].id));
	input(b1);	
	
}

void input(struct book *b)
{
	printf("%d",b);
	getch();
	printf("Enter book details");
	scanf("%d%s%d",b[0].id, b[0].name, b[0].price);
	printf("%d,%s,%d",(*b).id,b->name,b->price);
}
