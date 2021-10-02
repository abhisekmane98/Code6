#include<stdio.h>
int main()
{
	float a=32.20;
	printf("1. %f\n",a);
	printf("2. %2f\n",a);    // ignore
	printf("3. %4.2f\n",a); // ignore  // if %4.1 don't ignore
	printf("4. %5.2f\n",a);
	printf("5. %1.3f\n",a); // ignore
	printf("6. %6.3f\n",a);
	printf("7. %8.3f\n",a);
	printf("8. %-8.3f",a);
	getch();
}
