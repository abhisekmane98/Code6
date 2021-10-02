#include<stdio.h>
int main()
{
//	int a;
//	float b;
//	char ch1,ch2;
	char s1[20]="Emperor bonapart",s2[20],s3[20];
//	printf("Enter a integr, floating point, character constant\n");

	sscanf(s1,"%s%s",s2,s3);
	
	printf("%s %s",s2,s3);
}
