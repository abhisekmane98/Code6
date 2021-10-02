#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s[10];  // basic problem data in file is of struct type and we acessing through string
	FILE *fp;
	fp=fopen("47_file4.dat","rb");
	if(fp==NULL)
	{
		printf("File can't open");
		exit(1);
	}
	while(fread(s,10,1,fp)!=0)
	{
	/*	printf("0=%c ",s[0]);
		printf("1=%c ",s[1]);
		printf("2=%c ",s[2]);
		
		printf("7=%c ",s[7]);
		printf("8=%c ",s[8]);
		printf("9=%c ",s[9]);*/
		
		printf("%s\n\n",s);
		
	}
	getch();
	fclose(fp);
}
