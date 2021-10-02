#include<stdio.h>
float getfloat();
int main()
{
	float f;
	f=getfloat();
	printf("f=%f",f);
}

float getfloat()
{
	char s[20];
	float k;
	printf("Enter a floating point number");
	scanf("%s",s);
	sscanf(s,"%f",&k);
	return k;
	
}
