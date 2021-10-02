#include<stdio.h>
struct book
{
	char name;
	char author[20];
	int prize;

}b1,b2;
int main()
{
	struct book b1={0};
	printf("%c,%s,%d",b1.name,b1.author,b1.prize);
}
