#include<stdio.h>
int main()
{
//	int a;
//	float b;
//	char ch1,ch2;
	char s1[20]="Emperor 20",s2[20];
	int s3;
//	printf("Enter a integr, floating point, character constant\n");

	sscanf(s1,"%s%d",s2,&s3);
	
	printf("%s %d",s2,s3);
}
