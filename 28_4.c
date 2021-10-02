#include<stdio.h>
int main()
{
	char s[20]="Abhishek";
	printf("%8s\n",s);
	printf("%10s\n",s);
	printf("%-10s",s);
	getch();
	printf("\n");
	
	printf("%11.4s\n",s);
}
