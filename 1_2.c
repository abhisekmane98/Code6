#include<stdio.h>
struct book
{
	int id;
	char name[20];
	float prize;
};
int main()
{
	struct book b1,b2;
	printf("Enter book id,name,prize\n");
	scanf("%d",&b1.id);
	fflush(stdin);
	gets(b1.name);
	scanf("%f",&b1.prize);
	
	printf("b1\nid:%d, name:%s, prize:%.2f",b1.id, b1.name, b1.prize);
	
}
