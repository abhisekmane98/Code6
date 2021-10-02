#include<stdio.h>

int main()
{
	float a=43.20;
	double b=74.20;
	long double k=3244355.30;
	
	printf("%d,%d,%d\n",sizeof(float),sizeof(double),sizeof(long double));
	
	printf("%.2f,%.2lf,%Lf",a,b,k); // long double is not woeking as it is more than 80 bits so it not supported by mingw
}
