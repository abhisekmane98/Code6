#include<stdio.h>
int main()
{
	char ch[10],*ch2;
	printf("Enter a string\n");
	ch2=gets(ch);
	printf("char= %c,value at char= %d\n",*ch2,*ch2);
	printf("%s",ch2);
	if(ch2==NULL)   // i am checking adress
		printf("yes NULL is assigned in ch2");
	getch();
}
