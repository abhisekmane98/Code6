#include<stdio.h>
int main()
{
	int k;
	char s[30]; // to store 25 elements
	FILE *fp;
	fp=fopen("53_file.txt","r");
	k=fscanf(fp,"%[^EOF]s",s);
	printf("k=%d and %s",k,s);
}
