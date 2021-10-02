#include<stdio.h>
int main()
{
	int i;
	char s[43]=("brad pitt is great hero h__ead\nremarkable");
	FILE *fp;
	fp=fopen("120_para_2.txt","w");
	
	for(i=0;i<=45;i++)
	{
		printf("i=%d, %ld,%c\n",i,ftell(fp),s[i]);
		fputc(s[i],fp);
	}
	fclose(fp);
}
