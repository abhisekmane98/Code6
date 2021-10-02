#include<stdio.h>
int main()
{
	int a,b,k;
	FILE *fp;
	fp=fopen("53_file.txt","w");
	printf("Enter value of a and b");
	scanf("%d%d",&a,&b);
	k=fprintf(fp,"sum of %d and %d is %d\nking",a,b,a+b);
	printf("k=%d",k);
}
