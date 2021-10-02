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
	struct book b1; //={12,"letusc",300};
	input(&b1);	
}

void input(struct book *b)
{
	printf("Enter book details");
	scanf("%d%s%d",&((*b).id), b->name, &(b->price) );
	printf("%d,%s,%d",(*b).id,b->name,b->price);
}
