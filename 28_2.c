#include<stdio.h>
int main()
{
	float a=32.20;
	printf("%f\n",a);
	printf("%2f\n",a);
	printf("%4.2f\n",a);
	printf("%5.2f\n",a);
	printf("%1.3f\n",a);
	printf("%6.3f\n",a);
	printf("%8.3f\n",a);
	printf("%-8.3f",a);
	getch();
}
